/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a7ccc; name: FUN_008a7ccc
 */


void FUN_008a7ccc(long param_1,void *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  ushort uVar10;
  undefined2 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  char *pcVar20;
  undefined1 *puVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  
  iVar2 = param_3 + 4;
  iVar4 = *(int *)(*(long *)(param_1 + 0xa8) + 4) + iVar2;
  puVar13 = (undefined8 *)FUN_00896e78(iVar4);
  uVar7 = *(undefined4 *)(*(undefined8 **)(param_1 + 0xa8) + 1);
  *puVar13 = **(undefined8 **)(param_1 + 0xa8);
  *(int *)((long)puVar13 + 4) = iVar4;
  *(undefined4 *)(puVar13 + 1) = uVar7;
  *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(*(long *)(param_1 + 0xa8) + 8);
  lVar19 = *(long *)(param_1 + 0xa8);
  if (*(short *)(lVar19 + 8) == 0) {
    uVar16 = 0xc;
    uVar17 = 0xc;
    lVar23 = lVar19;
  }
  else {
    uVar15 = 0;
    pcVar20 = (char *)(lVar19 + 0x16);
    uVar17 = 0xc;
    uVar16 = 0xc;
    puVar21 = (undefined1 *)((long)puVar13 + 0x17);
    do {
      cVar9 = *pcVar20;
      iVar8 = *(int *)(pcVar20 + -6);
      uVar17 = (ulong)((int)uVar17 + 0xc);
      uVar16 = (ulong)((int)uVar16 + 0xc);
      iVar4 = 0;
      if (cVar9 != '\x03') {
        iVar4 = iVar2;
      }
      uVar11 = *(undefined2 *)(pcVar20 + -2);
      *(int *)(puVar21 + -0xb) = *(int *)(pcVar20 + -10) + iVar2;
      *(int *)(puVar21 + -7) = iVar8 + iVar4;
      *(undefined2 *)(puVar21 + -3) = uVar11;
      puVar21[-1] = cVar9;
      uVar15 = uVar15 + 1;
      *puVar21 = 0;
      lVar23 = *(long *)(param_1 + 0xa8);
      pcVar20 = pcVar20 + 0xc;
      puVar21 = puVar21 + 0xc;
    } while (uVar15 < *(ushort *)(lVar23 + 8));
  }
  puVar5 = (uint *)(lVar23 + uVar17);
  uVar22 = *puVar5;
  puVar6 = (uint *)((long)puVar13 + uVar16);
  *puVar6 = uVar22;
  uVar22 = (uVar22 >> 0x10) + 1;
  *(short *)((long)puVar6 + 2) = (short)uVar22;
  lVar23 = *(long *)(param_1 + 0xa8);
  uVar10 = *(ushort *)(lVar23 + 8);
  uVar25 = (int)uVar17 + 4;
  uVar17 = (ulong)uVar25;
  uVar14 = (int)uVar16 + 4;
  uVar15 = (ulong)uVar14;
  if ((ulong)uVar10 == 1) {
    uVar18 = (uint)*(ushort *)((long)puVar5 + 2);
    uVar12 = *(int *)(lVar23 + 4) + -0x1c + (uint)*(ushort *)((long)puVar5 + 2) * -4;
  }
  else {
    if (uVar10 != 0) {
      pcVar20 = (char *)(lVar23 + 0x22);
      uVar24 = 1;
      do {
        if (*pcVar20 != '\0') goto LAB_008a7e74;
        uVar24 = uVar24 + 1;
        pcVar20 = pcVar20 + 0xc;
      } while (uVar10 != uVar24);
    }
    uVar24 = 1;
LAB_008a7e74:
    uVar18 = (uint)*(ushort *)((long)puVar5 + 2);
    uVar12 = ((int)uVar24 * 0xc - *(int *)(lVar19 + 0x10)) +
             *(int *)(lVar19 + (uVar24 & 0xffffffff) * 0xc + 0x10) + -4 + uVar18 * -4;
  }
  if ((param_4 & 1) == 0) {
    if (uVar18 != 0) {
      uVar22 = 0;
      do {
        piVar1 = (int *)(lVar23 + uVar17);
        uVar17 = uVar17 + 4;
        *(int *)((long)puVar13 + uVar15) = *piVar1 + 4;
        uVar22 = uVar22 + 1;
        uVar15 = uVar15 + 4;
      } while (uVar22 < *(ushort *)((long)puVar5 + 2));
      uVar22 = (uint)*(ushort *)((long)puVar6 + 2);
      uVar14 = (uint)uVar15;
      uVar15 = uVar15 & 0xffffffff;
      uVar25 = (uint)uVar17;
      uVar17 = uVar17 & 0xffffffff;
    }
    *(uint *)((long)puVar13 + uVar15) = uVar12 + (uVar22 & 0xffff) * 4 + 4;
    memcpy((void *)((long)puVar13 + (ulong)(uVar14 + 4)),
           (void *)(*(long *)(param_1 + 0xa8) + uVar17),(ulong)uVar12);
    uVar22 = uVar14 + 4 + uVar12;
    memcpy((void *)((long)puVar13 + (ulong)uVar22),param_2,(long)param_3);
    uVar22 = uVar22 + param_3;
    lVar19 = *(long *)(param_1 + 0xa8);
    uVar10 = *(ushort *)(lVar19 + 8);
  }
  else {
    *(int *)((long)puVar13 + uVar15) = (uVar22 & 0xffff) * 4 + 4;
    uVar22 = (int)uVar16 + 8;
    if (*(short *)((long)puVar5 + 2) != 0) {
      lVar23 = lVar23 + uVar17;
      lVar19 = 0;
      do {
        lVar3 = lVar19 + 1;
        uVar22 = uVar22 + 4;
        ((int *)((long)puVar13 + uVar15))[lVar19 + 1] = iVar2 + *(int *)(lVar23 + lVar19 * 4);
        uVar25 = (int)uVar17 + 4;
        uVar17 = (ulong)uVar25;
        lVar19 = lVar3;
      } while ((uint)lVar3 < (uint)*(ushort *)((long)puVar5 + 2));
    }
    memcpy((void *)((long)puVar13 + (ulong)uVar22),param_2,(long)param_3);
    memcpy((void *)((long)puVar13 + (ulong)(uVar22 + param_3)),
           (void *)(*(long *)(param_1 + 0xa8) + uVar17),(ulong)uVar12);
    uVar22 = uVar22 + param_3 + uVar12;
    lVar19 = *(long *)(param_1 + 0xa8);
    uVar10 = *(ushort *)(lVar19 + 8);
  }
  if (1 < uVar10) {
    memcpy((void *)((long)puVar13 + (ulong)uVar22),(void *)(lVar19 + (ulong)(uVar25 + uVar12)),
           (ulong)(*(int *)(lVar19 + 4) - (uVar25 + uVar12)));
  }
  *(undefined8 **)(param_1 + 0xa8) = puVar13;
  return;
}


