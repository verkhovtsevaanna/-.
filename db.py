import sqlite3

conn = sqlite3.connect('students.db')
c = conn.cursor()

while True:
    c.execute("""CREATE TABLE IF NOT EXISTS students (
                id INTEGER PRIMARY KEY,
                first_name TEXT,
                last_name TEXT,
                final_grade INTEGER
                )""")


    print('\nБаза учеников в формате id | имя | фамилия | оценка ')
    print('show - показать базу')
    print('add - добавить ученика в базу')
    print('remove - убрать ученика из базы')
    print('grade - изменить ученику оценку за экзамен\n')


    query = input()
    if query != 'add' and query != 'remove' and query != 'grade' and query != 'show':
        print('\nОпции не существует\n')
    else:
        if query == 'show':
            c.execute("SELECT * FROM students")
            print(c.fetchall())
        if query == 'add':
            print('\nВведите имя, фамилию и оценку ученика через пробел\n')
            subject = [i for i in input().split( )]
            subject[2] = int(subject[2])
            if len(subject) != 3:
                print('\nНеправильные аругменты\n')
            else:
                c.execute('INSERT INTO students (first_name, last_name, final_grade) VALUES (?, ?, ?)', (subject[0], subject[1], subject[2]))
                conn.commit()
                print('\nИзменения сохранены\n')
        if query == 'remove':
            print('\nВведите id ученика, которого необходимо убрать из базы\n')
            subject = int(input())
            c.execute('DELETE FROM students WHERE id=?', (subject, ))
            conn.commit()
            print('Изменения сохранены')
        if query == 'grade':
            print('\nВведите id ученика, которому нужно изменить оценку\n')
            subject = int(input())
            print('\nВведите оценку\n')
            grade = int(input())
            c.execute('''UPDATE students 
                        SET final_grade=?
                        Where id=?''', (grade, subject, ))
            conn.commit()
            print('\nИзменения сохранены\n')








