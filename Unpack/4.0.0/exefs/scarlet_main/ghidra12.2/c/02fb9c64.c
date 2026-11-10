/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb9c64; name: FUN_02fb9c64
 */


void FUN_02fb9c64(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte bVar8;
  undefined1 uVar9;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  short sVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  char cVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  
  uVar18 = *(uint *)(param_2 + 1);
  lVar26 = (long)(int)uVar18;
  plVar1 = (long *)(param_1 + 0x30);
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < (int)uVar18) {
    FUN_02fbdc78(plVar1,lVar26);
  }
  iVar17 = *(int *)(param_1 + 0x38);
  if (iVar17 < (int)uVar18) {
    pvVar4 = (void *)(*(long *)(param_1 + 0x30) + (long)iVar17 * 8);
    *(uint *)(param_1 + 0x38) = uVar18;
    memset(pvVar4,0,(*(long *)(param_1 + 0x30) + lVar26 * 8) - (long)pvVar4 & 0xfffffffffffffff8);
  }
  else if ((int)uVar18 < iVar17) {
    *(uint *)(param_1 + 0x38) = uVar18;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((int)uVar18 < 1) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    if (uVar18 == 1) {
      iVar17 = 0;
      uVar15 = 0;
    }
    else {
      iVar17 = 0;
      uVar15 = 0;
      do {
        iVar17 = iVar17 + (uint)*(byte *)(*param_2 + uVar15);
        *(int *)(param_1 + 0x2c) = iVar17;
        lVar16 = *param_2 + uVar15;
        uVar15 = uVar15 + 2;
        iVar17 = iVar17 + (uint)*(byte *)(lVar16 + 1);
        *(int *)(param_1 + 0x2c) = iVar17;
      } while (((ulong)uVar18 & 0xfffffffe) != uVar15);
    }
    if ((uVar18 & 1) != 0) {
      iVar17 = iVar17 + (uint)*(byte *)(*param_2 + uVar15);
      *(int *)(param_1 + 0x2c) = iVar17;
    }
    lVar16 = 0;
    uVar15 = 0;
    iVar20 = 0;
    iVar22 = 0;
    *(int *)(param_1 + 0x28) = iVar17 * iVar17;
    do {
      lVar13 = *param_2;
      puVar5 = (undefined2 *)(*(long *)(param_1 + 0x30) + lVar16);
      uVar9 = *(undefined1 *)(lVar13 + uVar15);
      *puVar5 = (short)iVar20;
      *(undefined1 *)(puVar5 + 3) = uVar9;
      puVar5[1] = (short)*(undefined4 *)(param_1 + 0x2c);
      puVar5[2] = (short)iVar22;
      uVar12 = (uint)*(byte *)(lVar13 + uVar15);
      iVar20 = iVar20 + *(int *)(param_1 + 0x2c) * uVar12;
      uVar15 = uVar15 + 1;
      iVar22 = iVar22 + uVar12;
      lVar16 = lVar16 + 8;
    } while (uVar18 != uVar15);
  }
  uVar12 = *(uint *)(param_3 + 1);
  plVar2 = (long *)(param_1 + 0x40);
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < (int)uVar12) {
    FUN_02fbddf0(plVar2,(long)(int)uVar12);
  }
  iVar17 = *(int *)(param_1 + 0x48);
  if (iVar17 < (int)uVar12) {
    pvVar4 = (void *)(*(long *)(param_1 + 0x40) + (long)iVar17 * 8);
    *(uint *)(param_1 + 0x48) = uVar12;
    memset(pvVar4,0,(*(long *)(param_1 + 0x40) + (long)(int)uVar12 * 8) - (long)pvVar4 &
                    0xfffffffffffffff8);
  }
  else if ((int)uVar12 < iVar17) {
    *(uint *)(param_1 + 0x48) = uVar12;
  }
  plVar3 = (long *)(param_1 + 0x50);
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= (int)uVar18) {
    FUN_02e8bb18(plVar3,PTR_PTR_047d1a50,lVar26 + 1);
  }
  iVar17 = (int)(lVar26 + 1);
  if ((*(int *)(param_1 + 0x58) <= (int)uVar18) || (iVar17 < *(int *)(param_1 + 0x58))) {
    *(int *)(param_1 + 0x58) = iVar17;
  }
  *(undefined2 *)*plVar3 = 0;
  if ((int)uVar12 < 1) {
    uVar18 = 0;
  }
  else {
    uVar15 = 0;
    cVar19 = '\0';
    sVar14 = 0;
    lVar26 = 0;
    do {
      puVar6 = (ushort *)(*param_3 + uVar15 * 4);
      iVar17 = (int)lVar26;
      lVar16 = *plVar1 + (long)iVar17 * 8;
      lVar13 = *plVar2;
      if (iVar17 < (int)(uint)*puVar6) {
        lVar24 = (long)iVar17 << 3;
        lVar21 = (long)iVar17;
        do {
          lVar26 = lVar21 + 1;
          bVar8 = *(byte *)(lVar16 + 6);
          sVar10 = *(short *)(param_1 + 0x2c);
          *(short *)(*(long *)(param_1 + 0x50) + lVar21 * 2 + 2) = (short)uVar15;
          sVar14 = sVar14 + sVar10 * (ushort)bVar8;
          lVar16 = *(long *)(param_1 + 0x30) + lVar24;
          lVar24 = lVar24 + 8;
          lVar16 = lVar16 + 8;
          lVar21 = lVar26;
        } while (lVar26 < (long)(ulong)*puVar6);
        cVar19 = '\0';
        lVar16 = *(long *)(param_1 + 0x30) + lVar24;
      }
      uVar11 = puVar6[1];
      uVar25 = (ulong)uVar11;
      puVar7 = (ushort *)(lVar13 + uVar15 * 8);
      *puVar7 = uVar11;
      puVar7[1] = *puVar6;
      uVar18 = (uint)lVar26;
      puVar7[2] = *(short *)(*plVar1 + (ulong)uVar11 * 8 + 4) + sVar14;
      if (uVar18 == uVar11) {
        *(char *)(lVar16 + 7) = cVar19;
      }
      if ((int)(uint)uVar11 < (int)uVar18) {
        uVar23 = (ulong)*(byte *)(*plVar1 + uVar25 * 8 + 7) +
                 (ulong)*(ushort *)(*plVar3 + uVar25 * 2);
        lVar16 = uVar23 * 8;
        do {
          lVar16 = lVar16 + 8;
          uVar23 = uVar23 + 1;
          if (*(ushort *)(*plVar3 + uVar25 * 2 + 2) <= uVar23) goto LAB_02fb9f88;
        } while (uVar18 != *(ushort *)(*plVar2 + lVar16));
        puVar7[3] = (ushort)uVar23;
        *(short *)(*plVar2 + (uVar23 & 0xffffffff) * 8 + 6) = (short)uVar15;
LAB_02fb9f88:
        cVar19 = cVar19 + '\x01';
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar12);
  }
  *(short *)(*plVar3 + (long)(int)(uVar18 + 1) * 2) = (short)uVar12;
  return;
}


