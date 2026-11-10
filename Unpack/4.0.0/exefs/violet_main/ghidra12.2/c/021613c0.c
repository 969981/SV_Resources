/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021613c0; name: FUN_021613c0
 */


void FUN_021613c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x2af) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x82) == '\0') {
    return;
  }
  if ((~*(uint *)(param_1 + 0xd0) & 0xf) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x2b4)) {
  case 0:
    if (*(char *)(param_1 + 0x2ad) == '\0') goto switchD_02161418_default;
    iVar1 = *(int *)(param_1 + 0x2a4);
    if (*(char *)(param_1 + 0x2ac) == '\0') {
      if (iVar1 < 1) goto switchD_02161418_default;
      FUN_01733b00((float)(iVar1 + -1),*(undefined8 *)(param_1 + 600),
                   *(undefined4 *)(param_1 + 0x2a0));
      uVar3 = 1;
    }
    else {
      if (*(int *)(param_1 + 0x2a8) <= iVar1) goto switchD_02161418_default;
      FUN_01733b00((float)(iVar1 + 1),*(undefined8 *)(param_1 + 600),
                   *(undefined4 *)(param_1 + 0x2a0));
      uVar3 = 2;
    }
    break;
  case 1:
    uVar2 = FUN_0216154c(*(undefined8 *)(param_1 + 600));
    if ((uVar2 & 1) != 0) goto switchD_02161418_default;
    if ((*(char *)(param_1 + 0x2ae) != '\0') && (*(char *)(param_1 + 0x2ac) == '\0')) {
      FUN_017a3f30(-*(float *)(param_1 + 0x290),-*(float *)(param_1 + 0x294),
                   -*(float *)(param_1 + 0x298),*(undefined8 *)(param_1 + 600),
                   *(undefined4 *)(param_1 + 0x29c));
      uVar3 = 3;
      break;
    }
    goto LAB_02161510;
  case 2:
    uVar2 = FUN_0216154c(*(undefined8 *)(param_1 + 600));
    if ((uVar2 & 1) != 0) goto switchD_02161418_default;
    if ((*(char *)(param_1 + 0x2ae) == '\0') || (*(char *)(param_1 + 0x2ac) == '\0'))
    goto LAB_02161510;
    FUN_017a3f30(*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x294),
                 *(undefined4 *)(param_1 + 0x298),*(undefined8 *)(param_1 + 600),
                 *(undefined4 *)(param_1 + 0x29c));
    uVar3 = 4;
    break;
  case 3:
    if ((*(char *)(param_1 + 0x2ae) != '\0') && (*(char *)(param_1 + 0x2ac) == '\0'))
    goto switchD_02161418_default;
    goto LAB_02161504;
  case 4:
    if ((*(char *)(param_1 + 0x2ae) != '\0') && (*(char *)(param_1 + 0x2ac) != '\0'))
    goto switchD_02161418_default;
LAB_02161504:
    FUN_017a3ee8(0x3f800000,*(undefined8 *)(param_1 + 600));
LAB_02161510:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
  default:
    goto switchD_02161418_default;
  }
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
switchD_02161418_default:
  FUN_01733568(*(undefined8 *)(param_1 + 600));
  *(undefined1 *)(param_1 + 0x2ad) = 0;
  return;
}


