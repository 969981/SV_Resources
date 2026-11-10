/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0014bc30; name: FUN_0014bc30
 */


undefined8 FUN_0014bc30(undefined8 *param_1,long *param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar4 = (undefined1 *)*param_2;
  *param_2 = (long)(puVar4 + 1);
  uVar1 = *puVar4;
  *param_3 = 0;
  switch(uVar1) {
  case 0x20:
    break;
  case 0x21:
    if (*(byte *)*param_2 - 0x30 < 10) {
      iVar3 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar6 = pbVar5 + 1;
        *param_2 = (long)pbVar6;
        iVar2 = (uint)*pbVar5 + iVar3 * 10;
        iVar3 = iVar2 + -0x30;
        pbVar5 = pbVar6;
      } while (iVar3 < 0xccccccc && *pbVar6 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) {
        iVar3 = FUN_00123a70(*param_1,"integral size (%d) out of limits [1,%d]",iVar3,0x10);
      }
    }
    else {
      iVar3 = 8;
    }
    *(int *)((long)param_1 + 0xc) = iVar3;
    break;
  default:
    FUN_00123a70(*param_1,"invalid format option \'%c\'",uVar1);
    break;
  case 0x3c:
  case 0x3d:
    *(undefined4 *)(param_1 + 1) = 1;
    break;
  case 0x3e:
    *(undefined4 *)(param_1 + 1) = 0;
    break;
  case 0x42:
    *param_3 = 1;
    return 1;
  case 0x48:
    iVar3 = 2;
    goto LAB_0014bebc;
  case 0x49:
    if (*(byte *)*param_2 - 0x30 < 10) {
      iVar3 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar6 = pbVar5 + 1;
        *param_2 = (long)pbVar6;
        iVar2 = (uint)*pbVar5 + iVar3 * 10;
        iVar3 = iVar2 + -0x30;
        pbVar5 = pbVar6;
      } while (iVar3 < 0xccccccc && *pbVar6 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) {
        iVar3 = FUN_00123a70(*param_1,"integral size (%d) out of limits [1,%d]",iVar3,0x10);
      }
    }
    else {
      iVar3 = 4;
    }
    goto LAB_0014bebc;
  case 0x4a:
  case 0x4c:
  case 0x54:
    iVar3 = 8;
LAB_0014bebc:
    *param_3 = iVar3;
    return 1;
  case 0x58:
    return 9;
  case 0x62:
    iVar3 = 1;
    goto LAB_0014bf70;
  case 99:
    if (*(byte *)*param_2 - 0x30 < 10) {
      iVar3 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar6 = pbVar5 + 1;
        *param_2 = (long)pbVar6;
        iVar3 = (uint)*pbVar5 + iVar3 * 10 + -0x30;
        pbVar5 = pbVar6;
      } while (iVar3 < 0xccccccc && *pbVar6 - 0x30 < 10);
      *param_3 = iVar3;
      if (iVar3 != -1) {
        return 5;
      }
    }
    else {
      *param_3 = -1;
    }
    FUN_00123a70(*param_1,"missing size for format option \'c\'");
    return 5;
  case 100:
    *param_3 = 8;
    return 4;
  case 0x66:
    *param_3 = 4;
    return 2;
  case 0x68:
    iVar3 = 2;
    goto LAB_0014bf70;
  case 0x69:
    if (*(byte *)*param_2 - 0x30 < 10) {
      iVar3 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar6 = pbVar5 + 1;
        *param_2 = (long)pbVar6;
        iVar2 = (uint)*pbVar5 + iVar3 * 10;
        iVar3 = iVar2 + -0x30;
        pbVar5 = pbVar6;
      } while (iVar3 < 0xccccccc && *pbVar6 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) {
        iVar3 = FUN_00123a70(*param_1,"integral size (%d) out of limits [1,%d]",iVar3,0x10);
      }
    }
    else {
      iVar3 = 4;
    }
LAB_0014bf70:
    *param_3 = iVar3;
    return 0;
  case 0x6a:
  case 0x6c:
    *param_3 = 8;
    return 0;
  case 0x6e:
    *param_3 = 8;
    return 3;
  case 0x73:
    if (*(byte *)*param_2 - 0x30 < 10) {
      iVar3 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar6 = pbVar5 + 1;
        *param_2 = (long)pbVar6;
        iVar2 = (uint)*pbVar5 + iVar3 * 10;
        iVar3 = iVar2 + -0x30;
        pbVar5 = pbVar6;
      } while (iVar3 < 0xccccccc && *pbVar6 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) {
        iVar3 = FUN_00123a70(*param_1,"integral size (%d) out of limits [1,%d]",iVar3,0x10);
      }
    }
    else {
      iVar3 = 8;
    }
    *param_3 = iVar3;
    return 6;
  case 0x78:
    *param_3 = 1;
    return 8;
  case 0x7a:
    return 7;
  }
  return 10;
}


