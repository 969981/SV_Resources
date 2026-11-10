/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e1b30; name: FUN_002e1b30
 */


undefined8
FUN_002e1b30(long param_1,long *param_2,int *param_3,undefined8 *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  uVar6 = param_2[1];
  if (uVar6 == 0) {
    *param_5 = 5;
    uVar9 = *param_4;
    *(undefined8 *)(param_5 + 4) = param_4[1];
    *(undefined8 *)(param_5 + 2) = uVar9;
    return 0;
  }
  pcVar8 = (char *)*param_2;
  if (*pcVar8 == '\\') {
    uVar6 = FUN_002e1510(param_2,param_3,param_5,*(undefined4 *)(param_1 + 0x2c));
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = param_2[1];
  }
  else {
    uVar5 = (undefined4)uVar6;
    if (3 < uVar6) {
      uVar5 = 4;
    }
    iVar2 = FUN_002eaaa0(pcVar8,uVar5);
    if (iVar2 == 0) goto LAB_002e1c20;
    iVar2 = FUN_002ea8f0(param_3,*param_2);
    if (0x10ffff < *param_3) {
      *param_3 = 0xfffd;
      goto LAB_002e1c20;
    }
    if ((iVar2 == 1) && (*param_3 == 0xfffd)) goto LAB_002e1c20;
    uVar6 = param_2[1] - (long)iVar2;
    *param_2 = *param_2 + (long)iVar2;
    param_2[1] = uVar6;
    if (iVar2 < 0) {
      return 0;
    }
  }
  if (((uVar6 < 2) || (*(char *)*param_2 != '-')) || (pcVar4 = (char *)*param_2 + 1, *pcVar4 == ']')
     ) {
    param_3[1] = *param_3;
  }
  else {
    uVar6 = uVar6 - 1;
    *param_2 = (long)pcVar4;
    param_2[1] = uVar6;
    piVar1 = param_3 + 1;
    if (*pcVar4 == '\\') {
      uVar6 = FUN_002e1510(param_2,piVar1,param_5,*(undefined4 *)(param_1 + 0x2c));
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      iVar2 = *piVar1;
    }
    else {
      uVar5 = (undefined4)uVar6;
      if (3 < uVar6) {
        uVar5 = 4;
      }
      iVar2 = FUN_002eaaa0(pcVar4,uVar5);
      if (iVar2 == 0) {
LAB_002e1c20:
        *param_5 = 0xc;
        *(undefined8 *)(param_5 + 2) = 0;
        *(undefined8 *)(param_5 + 4) = 0;
        return 0;
      }
      iVar3 = FUN_002ea8f0(piVar1,*param_2);
      iVar2 = *piVar1;
      if (0x10ffff < iVar2) {
        *piVar1 = 0xfffd;
        goto LAB_002e1c20;
      }
      if ((iVar3 == 1) && (iVar2 == 0xfffd)) goto LAB_002e1c20;
      *param_2 = *param_2 + (long)iVar3;
      param_2[1] = param_2[1] - (long)iVar3;
      if (iVar3 < 0) {
        return 0;
      }
    }
    if (iVar2 < *param_3) {
      *param_5 = 4;
      lVar7 = *param_2;
      *(char **)(param_5 + 2) = pcVar8;
      *(long *)(param_5 + 4) = lVar7 - (long)pcVar8;
      return 0;
    }
  }
  return 1;
}


