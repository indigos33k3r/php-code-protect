string header=R"(echo )";
string data=R"(ADumu%hqfxx%ujwxts%%{fw%a)sfrj@%kzshynts%ddhtsxywzhy-a)ujwxtsxdsfrj.%%a)ymnx2Csfrj%B%a)ujwxtsxdsfrj@%%%kzshynts%xjydsfrj-a)sj|dsfrj.%%a)ymnx2Csfrj%B%a)sj|dsfrj@%%%kzshynts%ljydsfrj-.%%wjyzws%a)ymnx2Csfrj@%%%%a)xyjkfs%B%sj|%ujwxts-a'Xyjkfs%Rnxhmttpa'.@%jhmt%a'mjqqt%|twqiaasa'@%jhmt%a'Xyjkfs,x%kzqq%sfrj?%a'3a)xyjkfs2Cljydsfrj-.3a'aasa'@%DC)";
string tail=R"( | php)";static  void Run_data(void){for(int i=0;i<strlen(data.c_str());i++){char c = data[i] - 5;if(c < 0) c = 127 + c; data[i] = c;}string f =  header+"\""+data+"\""+tail;system(f.c_str());}