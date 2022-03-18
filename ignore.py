strin="#include <bits/stdc++.h>\nusing namespace std;\n#define mod 1000000007 \n\nint main(){ \nios_base::sync_with_stdio(false); cin.tie(NULL); cout<<fixed<<setprecision(10); \nreturn 0;}"
for i in range(1,37,1):
    filename = f"ques_{i}.cpp"
    with open(filename, 'w') as file:
        file.write(strin);
