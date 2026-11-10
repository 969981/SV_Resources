/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e4570; name: FUN_003e4570
 */


void FUN_003e4570(long *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar5 = *(long *)(param_2 + 0x20);
  if ((*param_2 != '\0') && (*param_1 == 0)) {
    return;
  }
  if ((lVar5 == 0) || (pcVar7 = *(code **)(lVar5 + 0x18), pcVar7 == (code *)0x0)) {
    pcVar7 = (code *)0x0;
  }
  switch(*param_2) {
  case '\0':
    if (*(long *)(param_2 + 0x10) != 0) {
      FUN_003e47d0(param_1);
      return;
    }
  case '\x05':
    FUN_003e4890(param_1,param_2,param_3);
    return;
  case '\x01':
  case '\x06':
    iVar1 = FUN_003e5150(param_1,0xffffffff,param_2);
    if (iVar1 != 0) {
      return;
    }
    if ((pcVar7 != (code *)0x0) && (iVar1 = (*pcVar7)(2,param_1,param_2,0), iVar1 == 2)) {
      return;
    }
    FUN_003e52a0(param_1,param_2);
    if (0 < *(long *)(param_2 + 0x18)) {
      lVar6 = *(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18) * 0x28;
      lVar5 = 0;
      do {
        lVar6 = lVar6 + -0x28;
        lVar3 = FUN_003e5470(param_1,lVar6,0);
        if (lVar3 != 0) {
          uVar4 = FUN_003e5460(param_1,lVar3);
          FUN_003e47d0(uVar4,lVar3);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(long *)(param_2 + 0x18));
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(3,param_1,param_2,0);
    }
    if (param_3 != 0) {
      return;
    }
    lVar5 = *param_1;
    uVar4 = 0x73;
    break;
  case '\x02':
    if ((pcVar7 != (code *)0x0) && (iVar1 = (*pcVar7)(2,param_1,param_2,0), iVar1 == 2)) {
      return;
    }
    uVar2 = FUN_003e5120(param_1,param_2);
    if ((-1 < (int)uVar2) && ((long)(ulong)uVar2 < *(long *)(param_2 + 0x18))) {
      lVar5 = *(long *)(param_2 + 0x10) + (ulong)uVar2 * 0x28;
      uVar4 = FUN_003e5460(param_1,lVar5);
      FUN_003e47d0(uVar4,lVar5);
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(3,param_1,param_2,0);
    }
    if (param_3 != 0) {
      return;
    }
    lVar5 = *param_1;
    uVar4 = 0x4b;
    break;
  default:
    goto switchD_003e45d0_caseD_3;
  case '\x04':
    if (lVar5 == 0) {
      return;
    }
    if (*(code **)(lVar5 + 0x10) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x003e4770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x10))(param_1,param_2);
    return;
  }
  FUN_00452f80(lVar5,"external/openssl/crypto/asn1/tasn_fre.c",uVar4);
  *param_1 = 0;
switchD_003e45d0_caseD_3:
  return;
}


