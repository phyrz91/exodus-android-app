package org.eu.exodus_privacy.exodusprivacy.objects

object Keys {
    init {
        System.loadLibrary("native-lib")
    }

    external fun apiKey(): String
}
