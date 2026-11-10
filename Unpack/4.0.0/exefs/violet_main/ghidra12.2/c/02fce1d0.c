/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fce1d0; name: FUN_02fce1d0
 */


void FUN_02fce1d0(long param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                 long param_6,undefined4 *param_7,undefined8 *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  char cVar17;
  uint uVar18;
  uint *puVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  short sVar25;
  long *plVar26;
  uint local_dc;
  undefined2 local_94;
  undefined1 local_92;
  ulong local_90;
  undefined8 *local_88;
  uint *local_80;
  uint local_78;
  uint local_74;
  int local_68;
  
  lVar21 = *(long *)(param_1 + 0x100);
  lVar23 = *(long *)**(undefined8 **)(param_1 + 0x110);
  plVar26 = *(long **)(lVar23 + 8);
  if ((long)param_2 < 0) {
    param_2 = param_2 & 0xffffffff;
    if (-1 < (long)param_3) goto LAB_02fce740;
LAB_02fce224:
    param_3 = param_3 & 0xffffffff;
  }
  else {
    uVar22 = FUN_00dbb6c8(plVar26 + 300,param_2,&local_90);
    param_2 = local_90 & 0xffffffff;
    if ((uVar22 & 1) == 0) {
      param_2 = 0xffffff;
    }
    if ((long)param_3 < 0) goto LAB_02fce224;
LAB_02fce740:
    uVar22 = FUN_00dbb6c8(plVar26 + 300,param_3,&local_90);
    param_3 = local_90 & 0xffffffff;
    if ((uVar22 & 1) == 0) {
      param_3 = 0xffffff;
    }
  }
  param_2 = param_2 & 0xffffff;
  if (param_2 == 0xffffff) {
    cVar17 = -1;
  }
  else {
    cVar17 = *(char *)(plVar26[0x1f] + param_2);
  }
  param_3 = param_3 & 0xffffff;
  if (param_3 == 0xffffff) {
    cVar14 = -1;
  }
  else {
    cVar14 = *(char *)(plVar26[0x1f] + param_3);
  }
  if ((cVar17 == -1) && (cVar14 == -1)) {
    return;
  }
  lVar16 = *(long *)PTR_DAT_047e34d8;
  uVar22 = (ulong)*(ushort *)
                   (lVar16 + (ulong)((uint)(byte)(cVar14 + 1U) * 0x20 + (uint)(byte)(cVar14 + 1U) +
                                    (uint)(byte)(cVar17 + 1)) * 2 + 0x18);
  local_88 = *(undefined8 **)(lVar23 + 0x4e0);
  puVar19 = *(uint **)(*(long *)(lVar21 + 0x110) + (long)*(int *)(lVar21 + 0x118) * 8 + -8);
  local_90 = lVar21 + 0x100;
  local_dc = *puVar19 >> 0x10;
  uVar1 = *puVar19;
  sVar25 = (short)uVar1;
  local_74 = uVar1 & 0xffff;
  iVar2 = *(int *)(lVar21 + 0x108);
  *(uint *)(lVar21 + 0x108) = iVar2 - (uVar1 & 0xffff);
  local_68 = 0;
  if (param_2 == 0xffffff) {
    lVar21 = lVar16 + 0x9c0;
  }
  else {
    lVar21 = plVar26[7] + param_2 * 0xc0;
  }
  if (param_3 == 0xffffff) {
    lVar16 = lVar16 + 0x9c0;
  }
  else {
    lVar16 = plVar26[7] + param_3 * 0xc0;
  }
  local_80 = puVar19;
  local_78 = local_dc;
  uVar6 = (**(code **)(*plVar26 + 0x270))(plVar26,*(undefined4 *)(lVar21 + 0x80));
  uVar7 = (**(code **)(*plVar26 + 0x270))(plVar26,*(undefined4 *)(lVar16 + 0x80));
  lVar8 = (**(code **)(*plVar26 + 0xa0))(plVar26);
  if (param_5 == 0) {
    param_5 = *(long *)(lVar8 + 0x48) + (ulong)*(ushort *)(lVar21 + 0x8a) * 0x50;
    if (param_6 != 0) goto LAB_02fce394;
LAB_02fce3c4:
    param_6 = *(long *)(lVar8 + 0x48) + (ulong)*(ushort *)(lVar16 + 0x8a) * 0x50;
    uVar12 = *(uint *)(lVar21 + 0x54);
LAB_02fce3d8:
    uVar13 = *(uint *)(lVar16 + 0x54);
    if (param_5 == 0) goto LAB_02fce3a8;
LAB_02fce3e0:
    uVar15 = *(uint *)(param_5 + 0x14);
  }
  else {
    if (param_6 == 0) goto LAB_02fce3c4;
LAB_02fce394:
    uVar12 = *(uint *)(lVar21 + 0x54);
    if (lVar16 != 0) goto LAB_02fce3d8;
    uVar13 = 0;
    if (param_5 != 0) goto LAB_02fce3e0;
LAB_02fce3a8:
    uVar15 = 0;
  }
  if (param_6 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(uint *)(param_6 + 0x14);
  }
  lVar9 = (**(code **)(*plVar26 + 0xb0))(plVar26);
  bVar4 = *(byte *)(lVar21 + 0x89);
  lVar10 = (**(code **)(*plVar26 + 0xb0))(plVar26);
  lVar9 = lVar9 + (ulong)bVar4 * 0x50;
  lVar10 = lVar10 + (ulong)*(byte *)(lVar16 + 0x89) * 0x50;
  lVar8 = lVar10;
  if (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38)) {
    lVar8 = lVar9;
  }
  if (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38)) {
    lVar9 = lVar10;
  }
  uVar6 = FUN_02f7f9b8(*param_7,param_7[1],param_7[2],param_4,plVar26 + 0xa6,lVar23,
                       uVar13 | uVar12 | uVar15 | uVar18,
                       *(uint *)(lVar8 + 0x40) & *(uint *)(lVar9 + 0x3c),lVar21,uVar6,param_5,lVar16
                       ,uVar7,param_6,&local_90);
  iVar5 = local_68;
  if (param_8 != (undefined8 *)0x0) {
    *param_8 = uVar6;
  }
  iVar2 = (*(int *)(local_90 + 8) - iVar2) + local_74;
  if (iVar2 != 0) {
    uVar12 = local_74;
    if (puVar19 != local_80) {
      if ((uVar1 & 0xffff) == (*puVar19 & 0xffff)) {
        puVar19 = *(uint **)(puVar19 + 2);
        sVar25 = 0;
        local_dc = 0;
      }
      if (puVar19 == local_80) {
        puVar19 = local_80;
      }
      else {
        uVar12 = *puVar19;
      }
    }
    sVar25 = (short)uVar12 - sVar25;
  }
  if (*(char *)(*(long *)(param_1 + 0x30) + uVar22) == '\0') {
    *(undefined1 *)(param_1 + 0x118) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar22) = 1;
  }
  puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar22 * 8);
  iVar3 = *(int *)((long)puVar24 + 0x1c);
  if (iVar2 != 0) {
    if (*(int *)((long)puVar24 + 0xc) == 0) {
      *puVar24 = puVar19;
      *(short *)((long)puVar24 + 10) = sVar25;
      *(int *)((long)puVar24 + 0xc) = iVar2;
      puVar24[2] = 0;
      *(undefined1 *)(puVar24 + 3) = 0;
      *(short *)(puVar24 + 1) = (short)local_dc;
      *(undefined1 *)((long)puVar24 + 0x1b) = local_92;
      *(undefined2 *)((long)puVar24 + 0x19) = local_94;
      *(int *)((long)puVar24 + 0x1c) = local_68;
    }
    else {
      if ((int)local_78 < 0xf81) {
        puVar11 = (undefined8 *)((long)local_80 + (long)(int)local_78 + 0x20);
      }
      else {
        puVar11 = (undefined8 *)FUN_031c36f4(&local_90);
      }
      *puVar11 = puVar19;
      *(short *)((long)puVar11 + 10) = sVar25;
      *(int *)((long)puVar11 + 0xc) = iVar2;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
      *(short *)(puVar11 + 1) = (short)local_dc;
      *(undefined1 *)((long)puVar11 + 0x1b) = local_92;
      *(undefined2 *)((long)puVar11 + 0x19) = local_94;
      *(int *)((long)puVar11 + 0x1c) = iVar5;
      if (*(int *)((long)puVar24 + 0xc) == 0) {
        uVar6 = puVar11[3];
        puVar24[1] = puVar11[1];
        puVar24[3] = uVar6;
        uVar6 = *puVar11;
        puVar24[2] = puVar11[2];
        *puVar24 = uVar6;
      }
      else {
        puVar11[2] = puVar24[2];
        puVar24[2] = puVar11;
      }
      local_78 = local_78 + 0x20;
      local_74 = local_74 + 1;
      *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar22 * 8) = puVar11;
    }
  }
  puVar24 = local_88;
  *(int *)(*(long *)(*(long *)(param_1 + 0x20) + uVar22 * 8) + 0x1c) = iVar3 + iVar5;
  if (local_74 == 0) {
    piVar20 = (int *)(local_90 + 0x18);
    iVar2 = *piVar20;
    if (1 < iVar2) {
      iVar5 = *(int *)(local_88 + 0xb);
      lVar23 = *(long *)(*(long *)(local_90 + 0x10) + (long)(iVar2 + -2) * 8);
      lVar21 = local_88[1];
      *(undefined8 *)(lVar21 + (long)iVar5 * 8) =
           *(undefined8 *)(*(long *)(local_90 + 0x10) + (long)(iVar2 + -1) * 8);
      *(int *)(local_88 + 0xb) = iVar5 + 1;
      if (*(int *)((long)local_88 + 0x5c) <= iVar5 + 1) {
        (**(code **)(*(long *)*local_88 + 0x28))
                  ((long *)*local_88,lVar21 + (long)(iVar5 + -5) * 8,6);
        *(int *)(puVar24 + 0xb) = iVar5 + -5;
      }
      *(undefined8 *)(lVar23 + 8) = 0;
      local_74 = 0xffffffff;
      goto LAB_02fce6e4;
    }
  }
  piVar20 = (int *)(local_90 + 8);
  local_80[2] = 0;
  local_80[3] = 0;
  *local_80 = *local_80 & 0xffff0000 | local_74 & 0xffff;
  *local_80 = *local_80 & 0xffff | local_78 << 0x10;
LAB_02fce6e4:
  *piVar20 = *piVar20 + local_74;
  return;
}


