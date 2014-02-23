# -*- coding: utf-8 -*-

import os
import sys
import twitter
import yaml
import urllib

class TwitterSearch:
    def __init__(self):
        with open('./config.yml', 'r') as f:
            self._config = yaml.load(f)
             
        self._lang = 'ja'
        self._api = twitter.Api(
            consumer_key = self._config["consumer_key"],
            consumer_secret = self._config["consumer_secret"],
            access_token_key = self._config["access_token_key"],
            access_token_secret = self._config["access_token_secret"]
        )
 
    def search(self, word):
        search_word = urllib.quote(word.encode('utf-8'))    # OK
        result = self._api.GetSearch(term=search_word, lang=self._lang)
        for status in result:
            text = status.text.encode('utf-8').replace('\n', '')
            sys.stdout.write(text)
            sys.stdout.write('\n')
  
if __name__ == '__main__':
    words = u'あいうえおかきくけこさしすせそたちつてとなにぬねのはひふへほまみむめもやゆよらりるれろわをん'
    t = TwitterSearch()
    for ch in words:
        t.search(ch)

