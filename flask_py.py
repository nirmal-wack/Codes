from flask import Flask

app = Flask(__name__)
@app.route('/')
def hello():
  return"<h1>Hello </h1>"
  return "<h2>Hello<h2>"
# @app.route('/index')
# def index():
#   return"<h1>Hello Index</h1>"
