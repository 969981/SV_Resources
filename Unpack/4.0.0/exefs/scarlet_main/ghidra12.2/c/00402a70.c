/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00402a70; name: FUN_00402a70
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_00402a70(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_00402820();
    if (param_1 == (long *)0x0) {
      FUN_004806c0(0x25,0x70,0x41,"external/openssl/crypto/dso/dso_lib.c",0x7f);
      return (long *)0x0;
    }
    bVar1 = false;
    *(undefined4 *)((long)param_1 + 0x14) = param_4;
    lVar3 = param_1[6];
  }
  else {
    bVar1 = true;
    lVar3 = param_1[6];
  }
  if (lVar3 != 0) {
    FUN_004806c0(0x25,0x70,0x6e,"external/openssl/crypto/dso/dso_lib.c",0x8c);
    goto joined_r0x00402bac;
  }
  if (param_2 != 0) {
    iVar2 = FUN_00402be0(param_1,param_2);
    if (iVar2 == 0) {
      FUN_004806c0(0x25,0x70,0x70,"external/openssl/crypto/dso/dso_lib.c",0x95);
      goto joined_r0x00402bac;
    }
    if (param_1[6] != 0) {
      if (*(code **)(*param_1 + 8) == (code *)0x0) {
        FUN_004806c0(0x25,0x70,0x6c,"external/openssl/crypto/dso/dso_lib.c",0x9e);
      }
      else {
        iVar2 = (**(code **)(*param_1 + 8))(param_1);
        if (iVar2 != 0) {
          return param_1;
        }
        FUN_004806c0(0x25,0x70,0x67,"external/openssl/crypto/dso/dso_lib.c",0xa2);
      }
      goto joined_r0x00402bac;
    }
  }
  FUN_004806c0(0x25,0x70,0x6f,"external/openssl/crypto/dso/dso_lib.c",0x9a);
joined_r0x00402bac:
  if (!bVar1) {
    FUN_00402960(param_1);
  }
  return (long *)0x0;
}


