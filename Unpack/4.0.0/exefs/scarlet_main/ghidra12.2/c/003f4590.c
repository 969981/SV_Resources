/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f4590; name: FUN_003f4590
 */


undefined4 FUN_003f4590(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = FUN_003f4b60(0);
  if (lVar3 == 0) {
    lVar4 = 0;
    uVar2 = 0;
joined_r0x003f4638:
    if (param_1 != 0) goto LAB_003f4658;
  }
  else {
    lVar4 = param_1;
    if ((param_1 != 0) || (lVar4 = FUN_003f4680(), lVar4 != 0)) {
      iVar1 = FUN_003f4be0(lVar3,lVar4,0);
      if (iVar1 < 1) {
        if ((((uint)param_3 >> 4 & 1) == 0) || (uVar5 = FUN_00480c80(), (uVar5 & 0xfff) != 0x72)) {
          uVar2 = 0;
        }
        else {
          FUN_004808e0();
          uVar2 = 1;
        }
      }
      else {
        uVar2 = FUN_003f4180(lVar3,param_2,param_3);
      }
      goto joined_r0x003f4638;
    }
    uVar2 = 0;
  }
  FUN_00452f80(lVar4,"external/openssl/crypto/conf/conf_mod.c",0x8e);
LAB_003f4658:
  FUN_003f4bc0(lVar3);
  if ((param_3 & 2) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


