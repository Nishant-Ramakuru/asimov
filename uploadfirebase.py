def main():
    

    from firebase import firebase
    
    
    # your variables are already assigned before this
    firebase = firebase.FirebaseApplication('https://octapod-a5186.firebaseio.com',None)
    
    result = firebase.post('Distance',{'Direction':'1'}) 
    exit()
