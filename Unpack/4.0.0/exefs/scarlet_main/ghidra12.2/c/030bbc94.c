/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030bbc94; name: FUN_030bbc94
 */


void FUN_030bbc94(long param_1,ulong param_2,ulong param_3,int param_4,ushort param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint local_60 [2];
  int *local_58;
  undefined8 uStack_50;
  int local_48 [2];
  uint local_28 [2];
  
  uVar15 = param_2 >> 0x16 & 0x3ff;
  lVar8 = *(long *)(*(long *)(param_1 + 0x38) + uVar15 * 0x100 + 0x10);
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if (*(char *)(lVar8 + 0x30) == '\x01') {
    lVar8 = *(long *)(lVar8 + 0x20);
  }
  else {
    lVar8 = FUN_00e0e904();
  }
  local_60[0] = (uint)param_2 & 0x3fffff;
  if ((*(int *)(lVar8 + 0x78) != 0) &&
     (iVar12 = *(int *)(*(long *)(lVar8 + 0x70) + (ulong)local_60[0] * 4), iVar12 != -1)) {
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x80) + (long)iVar12 * 8);
    iVar12 = (int)((ulong)uVar10 >> 0x20);
    if (0 < iVar12) {
      iVar9 = (int)uVar10;
      lVar11 = (long)iVar9;
      iVar5 = *(int *)(lVar8 + 0x30);
      lVar13 = (long)iVar5;
      lVar14 = lVar11 << 3;
      do {
        lVar1 = 0x28;
        if (lVar13 <= lVar11) {
          lVar1 = 0x90;
        }
        lVar2 = 0;
        if (lVar13 <= lVar11) {
          lVar2 = lVar13;
        }
        lVar1 = *(long *)(lVar8 + lVar1) + lVar2 * -8 + lVar14;
        uVar4 = *(ushort *)(lVar1 + 2);
        uVar3 = *(uint *)(lVar1 + 4);
        uVar6 = 0xffffffff;
        if (uVar3 != 0xffffffff) {
          uVar6 = uVar3 & 0x3fffff | *(int *)(lVar8 + 0x60) << 0x16;
        }
        if ((uVar4 & 0x40) == 0) {
          uVar3 = uVar6;
        }
        if (uVar3 == (uint)param_3) {
          local_48[0] = (int)lVar11;
          if (local_48[0] < iVar5) {
            return;
          }
          if ((uVar4 >> 1 & 1) == 0) {
            return;
          }
          iVar12 = *(int *)(*(long *)(lVar8 + 0xb0) + (long)(local_48[0] - iVar5) * 4) + param_4;
          *(int *)(*(long *)(lVar8 + 0xb0) + (long)(local_48[0] - iVar5) * 4) = iVar12;
          if (iVar12 == 0) {
            local_28[0] = local_60[0];
            FUN_03060610(lVar8,local_28,local_48);
            return;
          }
          if (param_4 < 1) {
            return;
          }
          uVar6 = local_48[0] - *(int *)(lVar8 + 0x30);
          uVar15 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3;
          uVar4 = *(ushort *)(*(long *)(lVar8 + 0x90) + uVar15);
          if ((float)((uint)param_5 << 0x10) <= (float)((uint)uVar4 << 0x10)) {
            uVar4 = param_5;
          }
          *(ushort *)(*(long *)(lVar8 + 0x90) + uVar15) = uVar4;
          return;
        }
        lVar11 = lVar11 + 1;
        lVar14 = lVar14 + 8;
      } while (lVar11 < iVar12 + iVar9);
    }
  }
  local_58 = (int *)0x0;
  uStack_50 = 0;
  puVar7 = (ushort *)FUN_03060294(lVar8,local_60,&uStack_50,&local_58);
  *puVar7 = param_5;
  *(uint *)(puVar7 + 2) = (uint)param_3;
  puVar7[1] = 2;
  *local_58 = param_4;
  if ((uint)uVar15 != ((uint)(param_3 >> 0x16) & 0x3ff)) {
    puVar7[1] = puVar7[1] | 0x40;
  }
  return;
}


