/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00862074; name: FUN_00862074
 */


void FUN_00862074(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 local_70 [8];
  
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  lVar8 = param_2[1];
  lVar10 = (long)(int)lVar8 + (long)((int)param_1[1] + 3 >> 2);
  iVar11 = (int)lVar10;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < iVar11) {
    FUN_008625d4(param_2,PTR_PTR_047d1a50,lVar10);
  }
  *(int *)(param_2 + 1) = iVar11;
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar9 = (undefined8 *)(*param_2 + (long)(int)lVar8 * 0x30);
    lVar10 = 0;
    iVar11 = 0;
    do {
      uVar3 = *(undefined8 *)(*param_1 + lVar10);
      local_70[(long)iVar11 * 2 + 1] = ((undefined8 *)(*param_1 + lVar10))[1];
      local_70[(long)iVar11 * 2] = uVar3;
      iVar11 = iVar11 + 1;
      if (iVar11 == 4) {
        auVar12._8_8_ = local_70[1];
        auVar12._0_8_ = local_70[0];
        auVar13._8_8_ = local_70[3];
        auVar13._0_8_ = local_70[2];
        auVar12 = NEON_ext(auVar12,auVar12,8,1);
        auVar14._8_8_ = local_70[5];
        auVar14._0_8_ = local_70[4];
        auVar15._8_8_ = local_70[7];
        auVar15._0_8_ = local_70[6];
        auVar13 = NEON_ext(auVar13,auVar13,8,1);
        auVar14 = NEON_ext(auVar14,auVar14,8,1);
        auVar15 = NEON_ext(auVar15,auVar15,8,1);
        iVar11 = 0;
        puVar9[1] = CONCAT44((int)local_70[6],(int)local_70[4]);
        *puVar9 = CONCAT44((int)local_70[2],(int)local_70[0]);
        puVar9[3] = CONCAT44((int)((ulong)local_70[6] >> 0x20),(int)((ulong)local_70[4] >> 0x20));
        puVar9[2] = CONCAT44((int)((ulong)local_70[2] >> 0x20),(int)((ulong)local_70[0] >> 0x20));
        puVar9[5] = CONCAT44(auVar15._0_4_,auVar14._0_4_);
        puVar9[4] = CONCAT44(auVar13._0_4_,auVar12._0_4_);
        puVar9 = puVar9 + 6;
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulong)uVar2 * 0x10 != lVar10);
    if (iVar11 != 0) {
      if (iVar11 < 4) {
        lVar10 = (long)iVar11;
        do {
          local_70[lVar10 * 2 + 1] = local_70[1];
          local_70[lVar10 * 2] = local_70[0];
          bVar1 = lVar10 < 3;
          lVar10 = lVar10 + 1;
        } while (bVar1);
      }
      auVar4._8_8_ = local_70[1];
      auVar4._0_8_ = local_70[0];
      auVar5._8_8_ = local_70[3];
      auVar5._0_8_ = local_70[2];
      auVar12 = NEON_ext(auVar4,auVar4,8,1);
      auVar6._8_8_ = local_70[5];
      auVar6._0_8_ = local_70[4];
      auVar7._8_8_ = local_70[7];
      auVar7._0_8_ = local_70[6];
      auVar13 = NEON_ext(auVar5,auVar5,8,1);
      auVar15 = NEON_ext(auVar6,auVar6,8,1);
      auVar14 = NEON_ext(auVar7,auVar7,8,1);
      puVar9[1] = CONCAT44((int)local_70[6],(int)local_70[4]);
      *puVar9 = CONCAT44((int)local_70[2],(int)local_70[0]);
      puVar9[3] = CONCAT44((int)((ulong)local_70[6] >> 0x20),(int)((ulong)local_70[4] >> 0x20));
      puVar9[2] = CONCAT44((int)((ulong)local_70[2] >> 0x20),(int)((ulong)local_70[0] >> 0x20));
      puVar9[5] = CONCAT44(auVar14._0_4_,auVar15._0_4_);
      puVar9[4] = CONCAT44(auVar13._0_4_,auVar12._0_4_);
    }
  }
  return;
}


