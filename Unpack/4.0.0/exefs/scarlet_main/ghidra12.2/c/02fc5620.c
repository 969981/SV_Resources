/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc5620; name: FUN_02fc5620
 */


void FUN_02fc5620(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint *puVar5;
  bool bVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ushort uVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  
  lVar9 = *(long *)(param_1 + 0xe0);
  puVar16 = *(uint **)(param_1 + 0x138);
  uVar18 = (undefined2)*(undefined4 *)(param_1 + 0x140);
  uVar15 = *(uint *)(param_1 + 0x144);
  lVar17 = *(long *)(param_1 + 0x298);
  iVar3 = *(int *)(*(long *)(param_1 + 0x128) + 8);
  if (lVar9 == 0) goto LAB_02fc57e4;
  if (*(char *)(param_1 + 0xfb) == '\0') {
    FUN_02f24e3c(param_1 + 0x80,lVar17,param_1);
    goto LAB_02fc57e4;
  }
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  uVar19 = **(undefined8 **)(param_1 + 200);
  *(undefined4 *)(lVar9 + 8) = 0x7777;
  plVar7 = *(long **)(param_1 + 200);
  iVar14 = *(int *)((long)plVar7 + 0x1c);
  iVar2 = iVar14 + *(int *)(*plVar7 + 8) + *(int *)(param_1 + 0xdc);
  if (iVar2 != 0) {
    puVar10 = (uint *)*puVar1;
    if (puVar10 == (uint *)plVar7[2]) {
      uVar12 = *(ushort *)(param_1 + 0xda);
LAB_02fc577c:
      sVar13 = (short)iVar14;
    }
    else {
      uVar12 = *(ushort *)(param_1 + 0xda);
      puVar11 = puVar10;
      puVar5 = (uint *)plVar7[2];
      if ((uint)uVar12 == (*puVar10 & 0xffff)) {
        puVar11 = *(uint **)(puVar10 + 2);
        *(undefined4 *)(param_1 + 0xd8) = 0;
        uVar12 = 0;
        puVar5 = (uint *)plVar7[2];
      }
      puVar10 = puVar5;
      if (puVar11 == puVar10) {
        iVar14 = *(int *)((long)plVar7 + 0x1c);
        goto LAB_02fc577c;
      }
      sVar13 = (short)*puVar11;
      puVar10 = puVar11;
    }
    *(ushort *)(param_1 + 0xda) = sVar13 - uVar12;
    *puVar1 = puVar10;
  }
  *(int *)(param_1 + 0xdc) = iVar2;
  FUN_031c34c8();
  FUN_031c35ac(*(undefined8 *)(param_1 + 200),uVar19,puVar1);
  plVar7 = *(long **)(param_1 + 200);
  lVar9 = plVar7[3];
  iVar2 = *(int *)((long)plVar7 + 0x1c);
  iVar14 = *(int *)(*plVar7 + 8);
  *(long *)(param_1 + 0xd0) = plVar7[2];
  *(short *)(param_1 + 0xd8) = (short)lVar9;
  *(short *)(param_1 + 0xda) = (short)iVar2;
  *(int *)(param_1 + 0xdc) = -(iVar2 + iVar14);
  *(long *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_02fc57e4:
  plVar7 = *(long **)(param_1 + 0xb8);
  bVar6 = true;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x85) = 1;
  *(long **)(param_1 + 200) = plVar7;
  if ((*(byte *)(param_1 + 0x88) >> 1 & 1) == 0) {
    bVar6 = (*(byte *)((long)param_4 + 10) & 0x90) != 0;
  }
  *(bool *)(param_1 + 0xf8) = bVar6;
  bVar4 = *(byte *)((long)param_4 + 10);
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(byte *)(param_1 + 0xf9) = bVar4 >> 4 & 1;
  lVar9 = plVar7[3];
  iVar2 = *(int *)((long)plVar7 + 0x1c);
  iVar14 = *(int *)(*plVar7 + 8);
  *(long *)(param_1 + 0xd0) = plVar7[2];
  *(short *)(param_1 + 0xd8) = (short)lVar9;
  *(short *)(param_1 + 0xda) = (short)iVar2;
  *(int *)(param_1 + 0xdc) = -(iVar2 + iVar14);
  if ((int)plVar7[3] < 0xe91) {
    lVar9 = plVar7[2] + (long)(int)plVar7[3] + 0x20;
  }
  else {
    lVar9 = FUN_031c36f4();
    plVar7 = *(long **)(param_1 + 200);
  }
  *(long *)(param_1 + 0xe0) = lVar9;
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 0x10;
  *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 4) = param_4[1];
  **(undefined4 **)(param_1 + 0xe0) = *param_4;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xe0) + 0xe) = 0;
  *(undefined2 *)(*(long *)(param_1 + 0xe0) + 0xc) = *(undefined2 *)((long)param_4 + 10);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  uVar8 = *(uint *)(param_1 + 0x80);
  if (uVar8 != param_4[1]) {
    if (*(char *)(param_1 + 0x84) == '\0') {
      uVar8 = param_4[1];
    }
    else {
      plVar7 = *(long **)(*(long *)(lVar17 + 8) + 0x658);
      (**(code **)(*plVar7 + 0x60))
                (plVar7,0,*(long *)(lVar17 + 0x500) + ((ulong)uVar8 & 0xffffff) * 0x20,param_2,
                 param_3);
      *(undefined1 *)(param_1 + 0x84) = 0;
      uVar8 = param_4[1];
    }
  }
  *(uint *)(param_1 + 0x80) = uVar8;
  *(undefined4 *)(param_1 + 0xf4) = 2;
  plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x298) + 0x40) +
                      (ulong)*(byte *)(param_4 + 2) * 8 + 0x13b8);
  (**(code **)(*plVar7 + 0x28))
            (plVar7,*(long *)(param_1 + 0x298),param_1,param_2,param_3,param_4,param_5,
             param_1 + 0x128,0,0,param_1 + 0x80,*(undefined8 *)(param_1 + 0x290),&DAT_0486b4c0);
  uVar8 = *(uint *)(param_1 + 0x144);
  iVar3 = (*(int *)(*(long *)(param_1 + 0x128) + 8) - (iVar3 + uVar15)) + uVar8;
  if (iVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x138);
    if (puVar10 != puVar16) {
      if ((uVar15 & 0xffff) == (*puVar16 & 0xffff)) {
        puVar16 = *(uint **)(puVar16 + 2);
        uVar18 = 0;
        uVar15 = 0;
      }
      if (puVar16 == puVar10) {
        puVar16 = puVar10;
      }
      else {
        uVar8 = *puVar16;
      }
    }
    uVar15 = uVar8 - uVar15;
  }
  *(uint **)(param_4 + 8) = puVar16;
  *(undefined2 *)(param_4 + 10) = uVar18;
  *(short *)((long)param_4 + 0x2a) = (short)uVar15;
  param_4[0xb] = iVar3;
  return;
}


