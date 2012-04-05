#encoding=utf-8
import sys
import MySQLdb  

reload(sys)    
sys.setdefaultencoding('utf-8')

def getdata():
    db=MySQLdb.connect(host='localhost',user='root',passwd='071666166857',db='wordpress',port=3306,charset='utf8')
    cur=db.cursor()
    sql = 'select * from wp_terms'
    cur.execute(sql)
    allPerson = cur.fetchall()
    cur.close()
    db.close()
    for rec in allPerson:
        print rec[0],rec[1]

if __name__=='__main__':
    getdata()
