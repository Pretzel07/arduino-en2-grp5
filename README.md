# arduino-en2-grp5

Read me created by Prof. Sakib

# Commands
Type cmd.exe on the address bar inside your folder & type 

`git clone <your-project-repo-link>`

After that, open the cloned folder in visual studio code

Open New Terminal in vscode and run the following commands one by one

`git init`

`git remote -v`

It should show your origin as the github project url

`git config --global --list`
If it doesn't show these two fields below- 
user.name=<your-user-name>
user.name=<your-user-email>

type the next two commands- 

`git config --global user.name "your-user-name"`
`git config --global user.email "your-user-email"`

# For project leads
Create new arduino file named songcode inside your project folder

`git pull`

`git status`

`git add .`

`git commit -m "your message"`

`git push origin main`


# For team members

`git pull`

make changes to your code

`git status`

`git add .`

`git commit -m "your latest message"`

`git push origin main`