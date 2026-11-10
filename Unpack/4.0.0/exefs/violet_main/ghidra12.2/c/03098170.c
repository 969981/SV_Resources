/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03098170; name: FUN_03098170
 */


undefined8 FUN_03098170(long param_1,int param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 unaff_x23;
  undefined8 uVar14;
  ulong uVar15;
  short *psVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  
  if (param_2 < *(int *)(param_1 + 0x20)) {
    lVar11 = *(long *)(param_1 + 0x18);
    iVar7 = param_2;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar7 = *(int *)(*(long *)(param_1 + 0x90) + (long)param_2 * 4);
    }
    if (iVar7 != -1) {
      lVar11 = *(long *)(param_1 + 0xb0);
      param_2 = iVar7;
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0xd0);
    param_2 = param_2 - *(int *)(param_1 + 0x20);
  }
  piVar1 = (int *)(lVar11 + (long)param_2 * 0x10);
  iVar7 = *piVar1;
  iVar10 = *(int *)(param_1 + 0x30);
  lVar8 = *(long *)(param_1 + 0x28);
  if (iVar7 < iVar10) {
    iVar13 = iVar7;
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar13 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar7 * 4);
    }
    lVar12 = lVar8;
    if (iVar13 != -1) {
      lVar12 = *(long *)(param_1 + 0xc0);
      iVar7 = iVar13;
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0xe0);
    iVar7 = iVar7 - iVar10;
  }
  iVar7 = *(int *)(lVar12 + (long)iVar7 * 0x14);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar7 * 0x10);
  if (*(int *)(param_1 + 0x40) <= iVar7) {
    puVar3 = (undefined8 *)
             (*(long *)(param_1 + 0xf0) + (long)(iVar7 - *(int *)(param_1 + 0x40)) * 0x10);
  }
  uStack_88 = puVar3[1];
  local_90 = *puVar3;
  psVar16 = (short *)(lVar11 + (long)param_2 * 0x10 + 8);
  uVar2 = *piVar1 + 1;
  uVar15 = (ulong)uVar2;
  if ((int)uVar2 < *piVar1 + (int)*psVar16 + -1) {
    fVar19 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
    lVar12 = ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2) + (long)(int)uVar2) * 4;
    fVar18 = ABS(fVar19 + -0.5);
    fVar19 = ABS(fVar19 + -0.5);
    bVar6 = false;
    lVar11 = (long)(int)uVar2;
    while( true ) {
      if (lVar11 < iVar10) {
        iVar7 = (int)uVar15;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar7 = *(int *)(*(long *)(param_1 + 0x70) + lVar11 * 4);
        }
        if (iVar7 == -1) {
          piVar9 = (int *)(lVar8 + lVar11 * 0x14);
        }
        else {
          piVar9 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar7 * 0x14);
        }
      }
      else {
        piVar9 = (int *)(*(long *)(param_1 + 0xe0) + (long)iVar10 * -0x14 + lVar12);
      }
      iVar7 = *piVar9;
      iVar10 = piVar9[1];
      iVar13 = *(int *)(param_1 + 0x40);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar7 * 0x10);
      if (iVar13 <= iVar7) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar7 - iVar13) * 0x10);
      }
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar10 * 0x10);
      if (iVar13 <= iVar10) {
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar10 - iVar13) * 0x10);
      }
      uStack_98 = puVar3[1];
      uStack_a0 = *puVar3;
      uStack_a8 = puVar4[1];
      local_b0 = *puVar4;
      local_78 = CONCAT44(fVar19 + 0.5,fVar18 + 0.5);
      iVar7 = FUN_0086eb50(param_3,&local_90,&uStack_a0,&local_b0,0,&local_78,auStack_c0);
      uVar14 = unaff_x23;
      if (iVar7 != 0) {
        fVar17 = ABS((float)local_78 + -0.5);
        bVar5 = fVar17 < fVar18;
        uVar14 = local_78;
        if (!bVar5) {
          uVar14 = unaff_x23;
        }
        fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)fVar17) & -(uint)bVar5);
        fVar19 = (float)((uint)fVar19 ^
                        ((uint)fVar19 ^ (uint)ABS((float)((ulong)local_78 >> 0x20) + -0.5)) &
                        -(uint)bVar5);
        bVar6 = (bool)(bVar5 | bVar6);
      }
      lVar11 = lVar11 + 1;
      if ((int)*psVar16 + *piVar1 + -1 <= lVar11) break;
      lVar8 = *(long *)(param_1 + 0x28);
      lVar12 = lVar12 + 0x14;
      uVar15 = (ulong)((int)uVar15 + 1);
      iVar10 = *(int *)(param_1 + 0x30);
      unaff_x23 = uVar14;
    }
    if (bVar6) {
      *param_4 = uVar14;
      return 1;
    }
  }
  return 0;
}


