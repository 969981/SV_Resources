/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00134700; name: FUN_00134700
 */


undefined8 FUN_00134700(long param_1,undefined4 *param_2)

{
  int iVar1;
  long local_40;
  undefined1 local_38;
  long local_30;
  byte local_28;
  
  if (param_2[4] != param_2[5]) {
    return 0;
  }
  switch(*param_2) {
  case 1:
    local_38 = 0;
    local_30 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    local_28 = 0x45;
    goto LAB_001347b0;
  case 2:
    local_28 = 0x11;
    break;
  case 3:
    local_28 = 1;
    break;
  case 4:
    iVar1 = param_2[2];
    if (0xff < iVar1) {
      return 0;
    }
    goto LAB_00134800;
  case 5:
    local_30 = *(long *)(param_2 + 2);
    local_28 = 0x13;
    break;
  case 6:
    local_40 = *(long *)(param_2 + 2);
    local_28 = 2;
    local_38 = 3;
    local_30 = local_40;
LAB_001347b0:
    iVar1 = FUN_00137f00(param_1,&local_30,&local_40);
    goto joined_r0x001347fc;
  case 7:
    local_30 = *(long *)(param_2 + 2);
    local_28 = *(byte *)(local_30 + 8) | 0x40;
    break;
  default:
    goto switchD_00134744_default;
  }
  iVar1 = FUN_00137f00(param_1,&local_30,&local_30);
joined_r0x001347fc:
  if (iVar1 < 0x100) {
LAB_00134800:
    param_2[2] = iVar1;
    *param_2 = 4;
    return 1;
  }
switchD_00134744_default:
  return 0;
}


