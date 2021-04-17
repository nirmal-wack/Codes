from flask import Flask

app = Flask(__name__)
@app.route('/')
def hello():
  return"<h1>Hello World hi hello efef</h1>"
  
# @app.route('/index')
# def index():
#   return"<h1>Hello Index</h1>"
#export FLASK_APP=123.py
#flask run

app.run(debug=True)