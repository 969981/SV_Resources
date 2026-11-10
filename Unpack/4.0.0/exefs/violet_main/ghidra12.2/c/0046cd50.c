/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046cd50; name: FUN_0046cd50
 */


undefined8 FUN_0046cd50(undefined2 *param_1,int param_2,void *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_2 + -0xb < (int)param_4) {
    FUN_004806c0(4,0x6d,0x6e,"external/openssl/crypto/rsa/rsa_pk1.c",0x7d);
  }
  else {
    iVar1 = (param_2 - param_4) + -3;
    pcVar4 = (char *)(param_1 + 1);
    *param_1 = 0x200;
    iVar2 = FUN_00464f80(pcVar4,iVar1);
    if (0 < iVar2) {
      if (0 < iVar1) {
        iVar2 = 0;
        do {
          while (*pcVar4 == '\0') {
            iVar3 = FUN_00464f80(pcVar4,1);
            if (iVar3 < 1) {
              return 0;
            }
          }
          iVar2 = iVar2 + 1;
          pcVar4 = pcVar4 + 1;
        } while (iVar2 != iVar1);
      }
      *pcVar4 = '\0';
      memcpy(pcVar4 + 1,param_3,(ulong)param_4);
      return 1;
    }
  }
  return 0;
}


