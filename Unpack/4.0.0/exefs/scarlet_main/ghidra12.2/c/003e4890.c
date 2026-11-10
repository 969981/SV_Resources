/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e4890; name: FUN_003e4890
 */


void FUN_003e4890(long *param_1,char *param_2,int param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if (param_2 == (char *)0x0) {
    iVar1 = *(int *)*param_1;
    param_1 = (long *)((int *)*param_1 + 2);
    lVar2 = *param_1;
joined_r0x003e48c0:
    if (lVar2 == 0) {
      return;
    }
    switch(iVar1) {
    case 1:
      if (param_2 == (char *)0x0) {
        *(int *)param_1 = -1;
        return;
      }
LAB_003e496c:
      *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
      return;
    case 5:
      break;
    case 6:
      FUN_003dffa0(*param_1);
      break;
    case -4:
      FUN_003e4890(param_1,0,0);
      FUN_00452f80(*param_1,"external/openssl/crypto/asn1/tasn_fre.c",200);
      break;
    default:
      goto switchD_003e48e4_caseD_fffffffd;
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 0x20);
    if (param_3 == 0) {
      if (lVar2 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
        goto joined_r0x003e4918;
      }
    }
    else if (lVar2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x20);
joined_r0x003e4918:
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e4924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1);
        return;
      }
    }
    if (*param_2 != '\x05') {
      iVar1 = *(int *)(param_2 + 8);
      if (iVar1 == 1) goto LAB_003e496c;
      lVar2 = *param_1;
      goto joined_r0x003e48c0;
    }
    if (*param_1 == 0) {
      return;
    }
switchD_003e48e4_caseD_fffffffd:
    FUN_003df3e0(*param_1,param_3);
  }
  *param_1 = 0;
  return;
}


