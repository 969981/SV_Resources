/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00413c40; name: FUN_00413c40
 */


undefined8
FUN_00413c40(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_003eb2b0(param_2);
  if ((iVar1 < 3) || (iVar1 = FUN_003ec640(param_2), iVar1 == 0)) {
    FUN_004806c0(0x10,0xa6,0x67,"external/openssl/crypto/ec/ecp_smpl.c",0x90);
    return 0;
  }
  if (param_5 == 0) {
    param_5 = FUN_003ed1c0();
    lVar4 = param_5;
    if (param_5 == 0) {
      return 0;
    }
  }
  else {
    lVar4 = 0;
  }
  FUN_003ed410(param_5);
  lVar2 = FUN_003ed5c0(param_5);
  if ((lVar2 != 0) && (lVar3 = FUN_003eb8f0(param_1[8],param_2), lVar3 != 0)) {
    FUN_003ec230(param_1[8],0);
    iVar1 = FUN_003f0870(lVar2,param_3,param_2,param_5);
    if (iVar1 != 0) {
      if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
        lVar3 = FUN_003eb8f0(param_1[0xc],lVar2);
        if (lVar3 != 0) goto LAB_00413d4c;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_1[0xc],lVar2,param_5);
        if (iVar1 != 0) {
LAB_00413d4c:
          iVar1 = FUN_003f0870(param_1[0xd],param_4,param_2,param_5);
          if ((iVar1 != 0) &&
             (((*(code **)(*param_1 + 0x128) == (code *)0x0 ||
               (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_1[0xd],param_1[0xd],param_5),
               iVar1 != 0)) && (iVar1 = FUN_003f2e00(lVar2,3), iVar1 != 0)))) {
            iVar1 = FUN_003ebf70(lVar2,param_1[8]);
            *(uint *)(param_1 + 0xe) = (uint)(iVar1 == 0);
            uVar5 = 1;
            goto LAB_00413dbc;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_00413dbc:
  FUN_003ed530(param_5);
  FUN_003ed280(lVar4);
  return uVar5;
}


