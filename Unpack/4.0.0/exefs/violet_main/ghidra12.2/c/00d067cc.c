/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d067cc; name: FUN_00d067cc
 */


void FUN_00d067cc(long *param_1,uint param_2)

{
  code *pcVar1;
  long *local_28;
  
  if (*param_1 == 0) {
    return;
  }
  if (*(short *)(*param_1 + 0x1a) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x14) == '\0') {
    return;
  }
  FUN_00c90ab8(&local_28,param_1);
  if (local_28 == (long *)0x0) {
    return;
  }
  if (((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) ||
     (*(char *)((long)param_1 + 0x14) == '\0')) {
switchD_00d06858_caseD_0:
    pcVar1 = *(code **)(*local_28 + 0x60);
    goto LAB_00d06888;
  }
  switch((int)param_1[2]) {
  case 0:
    goto switchD_00d06858_caseD_0;
  case 1:
    (**(code **)(*local_28 + 0x88))((float)(param_2 & 1),local_28,(long)param_1 + 0x14);
    goto switchD_00d06858_default;
  case 2:
    pcVar1 = *(code **)(*local_28 + 0xb0);
    break;
  case 3:
    pcVar1 = *(code **)(*local_28 + 0xe0);
    break;
  default:
    goto switchD_00d06858_default;
  }
LAB_00d06888:
  (*pcVar1)(local_28,(long)param_1 + 0x14,param_2 & 1);
switchD_00d06858_default:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  return;
}


