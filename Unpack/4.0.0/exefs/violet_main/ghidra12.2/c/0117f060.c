/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117f060; name: FUN_0117f060
 */


void FUN_0117f060(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  (**(code **)PTR_DAT_047e1d48)(param_1,param_2[0x12]);
  (**(code **)PTR_DAT_047e1d50)(param_1,param_2[8]);
  (**(code **)PTR_DAT_047e1d18)(param_1,param_2[0xc]);
  (**(code **)PTR_DAT_047e1d58)(param_1,param_2[0x11]);
  (**(code **)PTR_DAT_047e1d60)(param_1,*(undefined8 *)(param_2 + 6));
  (**(code **)PTR_DAT_047e1d68)(param_1,param_2[0xd],param_2[0xe],param_2[0xf],param_2[0x10]);
  iVar2 = param_2[10];
  if (iVar2 == 2) {
    iVar2 = 5;
    if (param_2[0xb] == 0) {
      iVar2 = 1;
    }
  }
  else {
    switch(iVar2) {
    case 0:
      break;
    case 1:
      iVar2 = 3;
      break;
    default:
      iVar2 = 1;
      break;
    case 3:
      iVar2 = 4;
      if (param_2[0xb] != 0) {
        iVar2 = 6;
      }
      break;
    case 4:
      iVar2 = 2;
      break;
    case 5:
      iVar2 = 8;
      break;
    case 6:
      iVar2 = 9;
      break;
    case 7:
      iVar2 = 7;
      break;
    case 8:
      iVar2 = 10;
    }
  }
  (**(code **)PTR_DAT_047e1d10)(param_1,iVar2);
  if (param_2[10] != 2) {
    switch(param_2[10]) {
    case 0:
      uVar1 = *param_2;
      UNRECOVERED_JUMPTABLE = *(code **)PTR_DAT_047e1d80;
      goto LAB_0117f280;
    case 1:
    case 5:
    case 6:
    case 7:
                    /* WARNING: Could not recover jumptable at 0x0117f268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)PTR_DAT_047e1d70)(param_1,*param_2,param_2[2]);
      return;
    default:
switchD_0117f2d0_default:
      return;
    case 3:
      goto switchD_0117f194_caseD_3;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x0117f23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)PTR_DAT_047e1d78)(param_1,*param_2,param_2[2],param_2[4]);
      return;
    }
  }
  (**(code **)PTR_DAT_047e1d70)(param_1,*param_2,param_2[2]);
  switch(param_2[0xb]) {
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)PTR_DAT_047e1d88;
    uVar1 = 2;
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)PTR_DAT_047e1d88;
    uVar1 = 4;
    break;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)PTR_DAT_047e1d88;
    uVar1 = 8;
    break;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)PTR_DAT_047e1d88;
    uVar1 = 0x10;
    break;
  default:
    goto switchD_0117f2d0_default;
  }
LAB_0117f280:
                    /* WARNING: Could not recover jumptable at 0x0117f288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
switchD_0117f194_caseD_3:
  (**(code **)PTR_DAT_047e1d78)(param_1,*param_2,param_2[2],param_2[4]);
  switch(param_2[0xb]);
}


