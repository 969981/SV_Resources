/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03097fd4; name: FUN_03097fd4
 */


undefined8 FUN_03097fd4(long param_1,int *param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x27;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  piVar2 = (int *)(*(long *)(param_1 + 0x18) + (long)*param_2 * 0x10);
  lVar7 = *(long *)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x38);
  puVar4 = (undefined8 *)(lVar8 + (long)*(int *)(lVar7 + (long)*piVar2 * 0x14) * 0x10);
  uStack_78 = puVar4[1];
  local_80 = *puVar4;
  uVar1 = *piVar2 + 1;
  if ((int)uVar1 < *piVar2 + (int)(short)piVar2[2] + -1) {
    fVar14 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
    lVar9 = (long)(int)uVar1;
    lVar10 = ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) + (long)(int)uVar1)
             * 4;
    fVar13 = ABS(fVar14 + -0.5);
    fVar14 = ABS(fVar14 + -0.5);
    bVar5 = false;
    while( true ) {
      lVar9 = lVar9 + 1;
      puVar4 = (undefined8 *)(lVar8 + (long)*(int *)(lVar7 + lVar10) * 0x10);
      uStack_88 = puVar4[1];
      local_90 = *puVar4;
      puVar4 = (undefined8 *)(lVar8 + (long)((int *)(lVar7 + lVar10))[1] * 0x10);
      uStack_98 = puVar4[1];
      local_a0 = *puVar4;
      local_a8 = CONCAT44(fVar14 + 0.5,fVar13 + 0.5);
      iVar6 = FUN_0086eb50(param_3,&local_80,&local_90,&local_a0,0,&local_a8,auStack_c0);
      uVar11 = unaff_x27;
      if (iVar6 != 0) {
        fVar12 = ABS((float)local_a8 + -0.5);
        bVar3 = fVar12 < fVar13;
        uVar11 = local_a8;
        if (!bVar3) {
          uVar11 = unaff_x27;
        }
        fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar12) & -(uint)bVar3);
        fVar14 = (float)((uint)fVar14 ^
                        ((uint)fVar14 ^ (uint)ABS((float)((ulong)local_a8 >> 0x20) + -0.5)) &
                        -(uint)bVar3);
        bVar5 = (bool)(bVar3 | bVar5);
      }
      if ((int)(short)piVar2[2] + *piVar2 + -1 <= lVar9) break;
      lVar7 = *(long *)(param_1 + 0x28);
      lVar10 = lVar10 + 0x14;
      lVar8 = *(long *)(param_1 + 0x38);
      unaff_x27 = uVar11;
    }
    if (bVar5) {
      *param_4 = uVar11;
      return 1;
    }
  }
  return 0;
}


