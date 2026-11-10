/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e0220; name: FUN_003e0220
 */


long FUN_003e0220(undefined4 param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_38;
  
  local_38 = *param_3;
  if (((param_2 == (long *)0x0) || (lVar7 = *param_2, lVar7 == 0)) &&
     (lVar7 = FUN_0043def0(), lVar7 == 0)) {
    FUN_004806c0(0xd,0x9a,6,"external/openssl/crypto/asn1/d2i_pr.c",0x1d);
    return 0;
  }
  iVar1 = FUN_0043dd30(lVar7,param_1);
  if (iVar1 == 0) {
    uVar4 = 0xa3;
    uVar5 = 0x29;
  }
  else {
    lVar6 = *(long *)(lVar7 + 0x10);
    if (*(code **)(lVar6 + 0xb8) != (code *)0x0) {
      iVar1 = (**(code **)(lVar6 + 0xb8))(lVar7,&local_38,param_4 & 0xffffffff);
      lVar6 = lVar7;
      if (iVar1 != 0) goto LAB_003e0290;
      lVar6 = *(long *)(lVar7 + 0x10);
    }
    if (*(long *)(lVar6 + 0x40) != 0) {
      lVar3 = FUN_003e04d0(0,&local_38,param_4);
      if (lVar3 != 0) {
        lVar6 = FUN_0043be00();
        FUN_003e04e0(lVar3);
        if (lVar6 != 0) {
          FUN_0043e1f0(lVar7);
          iVar1 = FUN_0043e280(param_1);
          iVar2 = FUN_0043e2a0(lVar6);
          lVar7 = lVar6;
          if (iVar1 == iVar2) {
LAB_003e0290:
            *param_3 = local_38;
            if (param_2 == (long *)0x0) {
              return lVar6;
            }
            *param_2 = lVar6;
            return lVar6;
          }
        }
      }
      goto LAB_003e0360;
    }
    uVar4 = 0xd;
    uVar5 = 0x3e;
  }
  FUN_004806c0(0xd,0x9a,uVar4,"external/openssl/crypto/asn1/d2i_pr.c",uVar5);
LAB_003e0360:
  if ((param_2 == (long *)0x0) || (*param_2 != lVar7)) {
    FUN_0043e1f0(lVar7);
  }
  return 0;
}


