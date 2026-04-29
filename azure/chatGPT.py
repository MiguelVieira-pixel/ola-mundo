from openai import OpenAI
import os

client = OpenAI(api_key=os.getenv("OPENAI_API_KEY"))

while True:
    pergunta = input("Você: ")

    if pergunta.lower() in ["sair", "exit"]:
        break

    response = client.chat.completions.create(
        model="gpt-4o-mini",
        messages=[
            {"role": "system", "content": "Responda de forma clara e objetiva."},
            {"role": "user", "content": pergunta}
        ],
        max_tokens=200
    )

    print("IA:", response.choices[0].message.content)