/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a3b70; name: FUN_017a3b70
 */


undefined8 FUN_017a3b70(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 0xb04) == 0) {
    if (*(int *)(param_1 + 0x8ec) == 1) {
      if (*(int *)(param_1 + 0xb10) == 1) {
        iVar6 = 2;
        goto LAB_017a3d3c;
      }
    }
    else if (*(int *)(param_1 + 0x8ec) == 3) {
      iVar6 = *(int *)(param_1 + 0xb10) + 1;
LAB_017a3d3c:
      *(int *)(param_1 + 0xb10) = iVar6;
    }
    lVar7 = *(long *)(param_1 + 0x880);
    if (*(int *)(lVar7 + 0x1b8) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xb10) == 2) {
      fVar11 = *(float *)(lVar7 + 0x1d4);
      lVar7 = *(long *)(param_1 + 0x930);
      iVar6 = *(int *)(lVar7 + 0x14);
      piVar1 = (int *)(lVar7 + 0x20);
      if (*(int *)(lVar7 + 0x28) != 0) {
        piVar1 = (int *)(lVar7 + 0x24);
      }
      iVar3 = *piVar1;
      iVar4 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
      lVar7 = *(long *)(param_1 + 0x930);
      if (iVar6 + iVar3 * (int)fVar11 < iVar4) {
        *(int *)(lVar7 + 0x10) = (int)*(float *)(*(long *)(param_1 + 0x880) + 0x1d4);
        lVar7 = *(long *)(param_1 + 0x910);
        if (*(char *)(lVar7 + 8) == '\0') goto LAB_017a3e68;
        fVar11 = *(float *)(*(long *)(param_1 + 0x880) + 0x1d4);
      }
      else {
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar7 + 0xc);
        lVar7 = *(long *)(param_1 + 0x910);
        if (*(char *)(lVar7 + 8) == '\0') goto LAB_017a3e68;
        fVar11 = (float)*(int *)(*(long *)(param_1 + 0x930) + 0xc);
      }
      FUN_00f6bf24(lVar7);
      uVar10 = (**(code **)(**(long **)(lVar7 + 0x10) + 0x30))
                         (*(long **)(lVar7 + 0x10),lVar7 + 0x58);
      uVar5 = (undefined4)((ulong)uVar10 >> 0x20);
      uStack_38 = *(undefined8 *)(lVar7 + 0xf8);
      fVar12 = (float)uVar10 + *(float *)(lVar7 + 0xe0) * 0.5;
      fVar9 = (float)(int)fVar11;
      if (*(char *)(lVar7 + 0x104) != '\0') {
        fVar9 = fVar11;
      }
      *(undefined8 *)(lVar7 + 0xf8) = uStack_38;
      *(ulong *)(lVar7 + 0xf0) = CONCAT44(uVar5,fVar12);
      local_40 = CONCAT44(uVar5,fVar12 + *(float *)(lVar7 + 0x100) * fVar9);
      (**(code **)(**(long **)(lVar7 + 0x10) + 0x28))
                (*(long **)(lVar7 + 0x10),lVar7 + 0x38,&local_40);
LAB_017a3e68:
      lVar7 = *(long *)(param_1 + 0x930);
      *(undefined4 *)(param_1 + 0xb10) = 0;
      piVar1 = (int *)(lVar7 + 0x20);
      if (*(int *)(lVar7 + 0x28) != 0) {
        piVar1 = (int *)(lVar7 + 0x24);
      }
      iVar6 = *piVar1;
      iVar3 = 0;
      if (iVar6 != 0) {
        iVar3 = (*(int *)(lVar7 + 0x14) + iVar6 * *(int *)(lVar7 + 0x10)) / iVar6;
      }
      iVar6 = FUN_01733ac4(lVar7,param_1 + 0xb08);
      lVar2 = 0x20;
      if (*(int *)(lVar7 + 0x28) != 0) {
        lVar2 = 0x24;
      }
      iVar4 = 0;
      if (*(int *)(lVar7 + lVar2) != 0) {
        iVar4 = iVar6 / *(int *)(lVar7 + lVar2);
      }
      FUN_01733b00((float)((iVar4 - iVar3) + *(int *)(*(long *)(param_1 + 0x930) + 0x10)),
                   *(undefined8 *)(param_1 + 0x880),*(undefined4 *)(param_1 + 0xa24));
      return 0;
    }
    if ((((*(int *)(param_1 + 0xb08) == *(int *)(param_1 + 0x8f0)) &&
         (*(int *)(param_1 + 0xb0c) == *(int *)(param_1 + 0x8f4))) &&
        (*(float *)(lVar7 + 0x1d4) < *(float *)(lVar7 + 0x1a4))) &&
       (*(float *)(lVar7 + 0x1a0) < *(float *)(lVar7 + 0x1d4))) {
      iVar6 = *(int *)(param_1 + 0xb0c);
      if (*(int *)(*(long *)(param_1 + 0x930) + 0x28) != 0) {
        iVar6 = *(int *)(param_1 + 0xb08);
      }
      fVar11 = (float)iVar6;
      FUN_017a3f30(*(float *)(param_1 + 0xa14) * fVar11,*(float *)(param_1 + 0xa18) * fVar11,
                   *(float *)(param_1 + 0xa1c) * fVar11,lVar7,*(undefined4 *)(param_1 + 0xa20));
    }
    *(undefined4 *)(param_1 + 0xb04) = 1;
  }
  else if (*(int *)(param_1 + 0xb04) != 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x8ec) == 0) {
    if (*(char *)(param_1 + 0x8f8) != '\0') goto LAB_017a3c0c;
  }
  else if (*(int *)(param_1 + 0x8ec) != 3) goto LAB_017a3c0c;
  uVar8 = FUN_017a3ee0(*(undefined8 *)(param_1 + 0x880));
  if ((uVar8 & 1) == 0) {
    FUN_017a3ee8(0x3f800000,*(undefined8 *)(param_1 + 0x880));
  }
LAB_017a3c0c:
  if (*(int *)(*(long *)(param_1 + 0x880) + 0x1b8) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x84) = 1;
  FUN_017a3fa0(param_1);
  fVar11 = *(float *)(*(long *)(param_1 + 0x880) + 0x1d4);
  lVar7 = *(long *)(param_1 + 0x930);
  iVar6 = *(int *)(lVar7 + 0x14);
  piVar1 = (int *)(lVar7 + 0x20);
  if (*(int *)(lVar7 + 0x28) != 0) {
    piVar1 = (int *)(lVar7 + 0x24);
  }
  iVar3 = *piVar1;
  iVar4 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
  lVar7 = *(long *)(param_1 + 0x930);
  if (iVar6 + iVar3 * (int)fVar11 < iVar4) {
    uVar5 = *(undefined4 *)(lVar7 + 0x14);
  }
  else {
    *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar7 + 0xc);
    uVar5 = FUN_017a4180(*(undefined8 *)(param_1 + 0x930));
  }
  FUN_01327c88(param_1,uVar5,(int)*(float *)(*(long *)(param_1 + 0x880) + 0x1d4));
  return 1;
}


