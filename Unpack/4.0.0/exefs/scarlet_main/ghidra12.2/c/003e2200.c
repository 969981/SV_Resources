/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e2200; name: FUN_003e2200
 */


undefined8
FUN_003e2200(long param_1,long *param_2,undefined8 param_3,uint *param_4,undefined4 param_5,
            undefined8 param_6,undefined4 param_7)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_50 [4];
  char local_4c [4];
  char *local_48;
  char *local_38;
  
  if (param_1 == 0) {
    return 0;
  }
  local_48 = (char *)*param_2;
  if ((*param_4 >> 4 & 1) == 0) {
    uVar3 = FUN_003e2d60(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar3;
  }
  uVar3 = FUN_003e2b30(&local_38,0,0,local_4c,local_50,&local_48,param_3,param_4[2],*param_4 & 0xc0,
                       (char)param_5,param_6);
  pcVar1 = local_48;
  if ((int)uVar3 == -1) {
    return uVar3;
  }
  if ((int)uVar3 == 0) {
    uVar3 = 0x3a;
    uVar4 = 0x1e4;
  }
  else if (local_50[0] == '\0') {
    uVar4 = 0x1ea;
    uVar3 = 0x78;
  }
  else {
    iVar2 = FUN_003e2d60(param_1,&local_48,local_38,param_4,0,param_6,param_7);
    if (iVar2 == 0) {
      uVar3 = 0x3a;
      uVar4 = 0x1f0;
    }
    else {
      local_38 = pcVar1 + ((long)local_38 - (long)local_48);
      if (local_4c[0] == '\0') {
        if (local_38 == (char *)0x0) goto LAB_003e23bc;
        uVar3 = 0x77;
        uVar4 = 0x201;
      }
      else {
        if (((1 < (long)local_38) && (*local_48 == '\0')) && (local_48[1] == '\0')) {
          local_48 = local_48 + 2;
LAB_003e23bc:
          *param_2 = (long)local_48;
          return 1;
        }
        uVar3 = 0x89;
        uVar4 = 0x1f8;
      }
    }
  }
  FUN_004806c0(0xd,0x84,uVar3,"external/openssl/crypto/asn1/tasn_dec.c",uVar4);
  return 0;
}


