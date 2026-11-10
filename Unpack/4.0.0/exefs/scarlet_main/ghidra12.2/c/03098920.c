/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03098920; name: FUN_03098920
 */


undefined8
FUN_03098920(long param_1,int param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  short *psVar15;
  ulong uVar16;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_68;
  
  if (param_2 < *(int *)(param_1 + 0x20)) {
    lVar11 = *(long *)(param_1 + 0x18);
    iVar8 = param_2;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar8 = *(int *)(*(long *)(param_1 + 0x90) + (long)param_2 * 4);
    }
    if (iVar8 != -1) {
      lVar11 = *(long *)(param_1 + 0xb0);
      param_2 = iVar8;
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0xd0);
    param_2 = param_2 - *(int *)(param_1 + 0x20);
  }
  piVar1 = (int *)(lVar11 + (long)param_2 * 0x10);
  iVar8 = *piVar1;
  iVar7 = *(int *)(param_1 + 0x30);
  lVar9 = *(long *)(param_1 + 0x28);
  if (iVar8 < iVar7) {
    iVar13 = iVar8;
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar13 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar8 * 4);
    }
    lVar12 = lVar9;
    if (iVar13 != -1) {
      lVar12 = *(long *)(param_1 + 0xc0);
      iVar8 = iVar13;
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0xe0);
    iVar8 = iVar8 - iVar7;
  }
  iVar8 = *(int *)(lVar12 + (long)iVar8 * 0x14);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar8 * 0x10);
  if (*(int *)(param_1 + 0x40) <= iVar8) {
    puVar4 = (undefined8 *)
             (*(long *)(param_1 + 0xf0) + (long)(iVar8 - *(int *)(param_1 + 0x40)) * 0x10);
  }
  uStack_78 = puVar4[1];
  local_80 = *puVar4;
  psVar15 = (short *)(lVar11 + (long)param_2 * 0x10 + 8);
  uVar2 = *piVar1 + 1;
  uVar14 = (ulong)uVar2;
  if ((int)uVar2 < *piVar1 + (int)*psVar15 + -1) {
    uVar16 = NEON_fmov(0x3f800000,4);
    bVar3 = false;
    lVar11 = (long)(int)uVar2;
    lVar12 = ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2) + (long)(int)uVar2) * 4;
    while( true ) {
      if (lVar11 < iVar7) {
        iVar8 = (int)uVar14;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar8 = *(int *)(*(long *)(param_1 + 0x70) + lVar11 * 4);
        }
        if (iVar8 == -1) {
          piVar10 = (int *)(lVar9 + lVar11 * 0x14);
        }
        else {
          piVar10 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar8 * 0x14);
        }
      }
      else {
        piVar10 = (int *)(*(long *)(param_1 + 0xe0) + (long)iVar7 * -0x14 + lVar12);
      }
      iVar8 = *piVar10;
      iVar7 = piVar10[1];
      iVar13 = *(int *)(param_1 + 0x40);
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar8 * 0x10);
      if (iVar13 <= iVar8) {
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar8 - iVar13) * 0x10);
      }
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar7 * 0x10);
      if (iVar13 <= iVar7) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar7 - iVar13) * 0x10);
      }
      uStack_88 = puVar4[1];
      uStack_90 = *puVar4;
      uStack_98 = puVar5[1];
      local_a0 = *puVar5;
      local_68 = uVar16;
      iVar7 = FUN_0086e810(param_3,param_4,&local_80,&uStack_90,&local_a0,&local_68,auStack_b0);
      bVar6 = (float)local_68 < (float)uVar16;
      iVar8 = -(uint)bVar6;
      if (iVar7 != 0) {
        bVar3 = (bool)(bVar6 | bVar3);
      }
      uVar16 = uVar16 ^ (uVar16 ^ local_68 ^ (local_68 ^ uVar16) & ~CONCAT44(iVar8,iVar8)) &
                        ~CONCAT44(-(uint)(iVar7 == 0),-(uint)(iVar7 == 0));
      lVar11 = lVar11 + 1;
      if ((int)*psVar15 + *piVar1 + -1 <= lVar11) break;
      lVar9 = *(long *)(param_1 + 0x28);
      lVar12 = lVar12 + 0x14;
      uVar14 = (ulong)((int)uVar14 + 1);
      iVar7 = *(int *)(param_1 + 0x30);
    }
    if (bVar3) {
      *param_5 = uVar16;
      return 1;
    }
  }
  return 0;
}


