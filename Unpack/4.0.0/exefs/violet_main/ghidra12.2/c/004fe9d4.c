/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fe9d4; name: FUN_004fe9d4
 */


void FUN_004fe9d4(byte *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x18) == iVar1) {
    switch(iVar1) {
    case 1:
    case 3:
      goto switchD_004fea14_caseD_1;
    case 2:
    case 4:
switchD_004fea14_caseD_2:
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      return;
    default:
switchD_004fea14_caseD_5:
      return;
    case 7:
switchD_004fea14_caseD_7:
      *param_1 = *param_2;
      return;
    case 9:
switchD_004fea14_caseD_9:
      FUN_001fcec0(param_1,param_2);
      return;
    }
  }
  if ((*(int *)(param_1 + 0x18) == 9) && ((*param_1 & 1) != 0)) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x18) = iVar1;
  switch(iVar1) {
  case 1:
  case 3:
switchD_004fea14_caseD_1:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 2:
  case 4:
    goto switchD_004fea14_caseD_2;
  default:
    goto switchD_004fea14_caseD_5;
  case 7:
    goto switchD_004fea14_caseD_7;
  case 9:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    goto switchD_004fea14_caseD_9;
  }
}


