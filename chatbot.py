from google import genai 
ai = genai.Client(api_key="your_key")
while True:
    q = input("Question: ")
    if q=="bye":
        break
    ans = ai.models.generate_content(model="gemini-3.6-flash", contents=q)
    print("Answer: ", ans.text)