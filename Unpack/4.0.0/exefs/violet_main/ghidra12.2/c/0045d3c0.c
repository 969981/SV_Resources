/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045d3c0; name: FUN_0045d3c0
 */


ulong FUN_0045d3c0(char *param_1,uint param_2,int param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  
  if (param_4 == (char *)0x0) {
    pcVar4 = (char *)FUN_0045f070();
    pcVar1 = "Enter PEM pass phrase:";
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4;
    }
    iVar2 = FUN_0045f090(param_1,(ulong)(param_3 != 0) << 2,(ulong)param_2,pcVar1,param_3);
    if (iVar2 == 0) {
      sVar3 = strlen(param_1);
    }
    else {
      FUN_004806c0(9,100,0x6d,"external/openssl/crypto/pem/pem_lib.c",0x3b);
      memset(param_1,0,(ulong)param_2);
      sVar3 = 0xffffffff;
    }
  }
  else {
    sVar3 = strlen(param_4);
    if ((int)(uint)sVar3 <= (int)param_2) {
      param_2 = (uint)sVar3;
    }
    sVar3 = (size_t)param_2;
    memcpy(param_1,param_4,(long)(int)param_2);
  }
  return sVar3 & 0xffffffff;
}


