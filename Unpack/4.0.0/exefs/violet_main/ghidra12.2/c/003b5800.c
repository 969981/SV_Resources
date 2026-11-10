/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b5800; name: FUN_003b5800
 */


undefined8
FUN_003b5800(char *param_1,long param_2,byte *param_3,long param_4,byte *param_5,long param_6)

{
  long lVar1;
  size_t sVar2;
  char *__dest;
  char *pcVar3;
  char *__s;
  
  if (*(long *)(*(long *)(param_2 + 0x660) + 0x380) != 0) {
    sVar2 = strlen(param_1);
    lVar1 = sVar2 + (param_6 + param_4) * 2 + 3;
    __dest = (char *)FUN_00452c30(lVar1,"external/openssl/ssl/ssl_lib.c",0x1513);
    if (__dest == (char *)0x0) {
      FUN_003c3950(param_2,0x50,500,0x41,"external/openssl/ssl/ssl_lib.c",0x1515);
      return 0;
    }
    pcVar3 = strcpy(__dest,param_1);
    __s = pcVar3 + sVar2 + 1;
    pcVar3[sVar2] = ' ';
    for (; param_4 != 0; param_4 = param_4 + -1) {
      sprintf(__s,"%02x",(ulong)*param_3);
      __s = __s + 2;
      param_3 = param_3 + 1;
    }
    pcVar3 = __s + 1;
    *__s = ' ';
    for (; param_6 != 0; param_6 = param_6 + -1) {
      sprintf(pcVar3,"%02x",(ulong)*param_5);
      pcVar3 = pcVar3 + 2;
      param_5 = param_5 + 1;
    }
    *pcVar3 = '\0';
    (**(code **)(*(long *)(param_2 + 0x660) + 0x380))(param_2,__dest);
    FUN_00453260(__dest,lVar1,"external/openssl/ssl/ssl_lib.c",0x152a);
  }
  return 1;
}


