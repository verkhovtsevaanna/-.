from flask import Flask, render_template, request
import flask


app = Flask(__name__)
 
@app.route("/", methods=["POST", "GET"])
def index():
    res = ''
    if request.method=="POST" and 'a' in request.form and 'b' in request.form:
        a = int(request.form.get("a"))
        b = int(request.form.get("b"))
        res = gcd(a, b)
    return render_template("index.html", res=res)
 
def gcd(a, b):
    a, b = abs(a), abs(b)
    if a==0:
        return b
    if b==0:
        return a
    else:
        if b>a:
            a,b = b,a
        return gcd(a%b,b)


if __name__ == "__main__":
    app.run(debug=True)