/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cf66c; name: FUN_001cf66c
 */


undefined8
FUN_001cf66c(long *param_1,long param_2,uint param_3,int param_4,int *param_5,undefined1 *param_6)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort uVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  undefined1 auStack_d0 [80];
  ulong local_80;
  int local_74 [5];
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((char)param_1[0x3c] != '\0') {
    return 8;
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    do {
      uVar4 = FUN_001cf53c(plVar13,local_74);
      lVar7 = 0;
      do {
        if ((uVar4 >> (ulong)((uint)lVar7 & 0x1f) & 1) == 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = local_74[lVar7];
          uVar15 = uVar15 + 1;
        }
        if (((uVar4 >> (ulong)((uint)lVar7 & 0x1f)) >> 0x10 & 1) != 0) {
          iVar5 = local_74[lVar7];
          uVar15 = uVar15 + 1;
        }
      } while ((iVar5 != -1) && (lVar7 = lVar7 + 1, lVar7 != 5));
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  FUN_001cf980(param_1,&local_80);
  iVar5 = (int)local_80;
  if ((long)param_4 <= (long)local_80 || 0x7fffffffffffffff < local_80) {
    iVar5 = param_4;
  }
  if (uVar15 + param_3 < 0xb) {
    bVar3 = false;
    puVar6 = auStack_d0;
  }
  else {
    puVar6 = (undefined1 *)FUN_001ec2f8((ulong)(uVar15 + param_3) << 3);
    if (puVar6 == (undefined1 *)0x0) {
      return 3;
    }
    bVar3 = true;
  }
  if ((uVar15 == 0) || (plVar13 = (long *)param_1[1], plVar13 == (long *)0x0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    do {
      uVar4 = FUN_001cf53c(plVar13,local_74);
      lVar7 = 0;
      do {
        if ((uVar4 >> (ulong)((uint)lVar7 & 0x1f) & 1) == 0) {
          iVar9 = -1;
        }
        else {
          iVar9 = local_74[lVar7];
          lVar1 = uVar14 * 8;
          uVar14 = (ulong)((int)uVar14 + 1);
          *(undefined2 *)((long)(puVar6 + lVar1) + 4) = 1;
          *(int *)(puVar6 + lVar1) = iVar9;
          iVar9 = local_74[lVar7];
        }
        if (((uVar4 >> (ulong)((uint)lVar7 & 0x1f)) >> 0x10 & 1) != 0) {
          iVar9 = local_74[lVar7];
          lVar1 = uVar14 * 8;
          uVar14 = (ulong)((int)uVar14 + 1);
          *(undefined2 *)((long)(puVar6 + lVar1) + 4) = 4;
          *(int *)(puVar6 + lVar1) = iVar9;
          iVar9 = local_74[lVar7];
        }
      } while ((iVar9 != -1) && (lVar7 = lVar7 + 1, lVar7 != 5));
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if (param_3 == 0) {
    uVar4 = (uint)uVar14;
  }
  else {
    uVar8 = (ulong)param_3;
    puVar10 = (ushort *)(param_2 + 4);
    do {
      *(undefined4 *)(puVar6 + uVar14 * 8) = *(undefined4 *)(puVar10 + -2);
      puVar11 = (ushort *)(puVar6 + uVar14 * 8 + 4);
      *puVar11 = 0;
      uVar12 = *puVar10 & 1;
      *puVar11 = uVar12;
      uVar2 = *puVar10;
      if ((uVar2 >> 1 & 1) != 0) {
        uVar12 = uVar12 | 2;
        *puVar11 = uVar12;
        uVar2 = *puVar10;
      }
      if ((uVar2 >> 2 & 1) != 0) {
        *puVar11 = uVar12 | 4;
      }
      uVar4 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar4;
      puVar10 = puVar10 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if ((uVar4 == 0) || (iVar5 = FUN_001db658(puVar6,uVar14,iVar5), iVar5 < 1)) {
    iVar5 = 0;
  }
  else if (param_3 != 0) {
    uVar14 = (ulong)param_3;
    puVar10 = (ushort *)(param_2 + 6);
    uVar4 = uVar15;
    do {
      uVar8 = (ulong)uVar4;
      uVar4 = uVar4 + 1;
      uVar14 = uVar14 - 1;
      *puVar10 = *(ushort *)(puVar6 + uVar8 * 8 + 6) & 7;
      puVar10 = puVar10 + 4;
    } while (uVar14 != 0);
  }
  if (bVar3) {
    FUN_001ec308(puVar6);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar5;
  }
  if ((param_2 != 0 || uVar15 != 0) && (param_6 != (undefined1 *)0x0)) {
    *param_6 = 1;
  }
  return 0;
}


