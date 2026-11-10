/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b9810; name: FUN_015b9810
 */


void FUN_015b9810(long *param_1,float *param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  
  plVar6 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  pfVar4 = (float *)(**(code **)(*plVar6 + 0x10))(plVar6,0x20,0x10);
  if (pfVar4 == (float *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    fVar8 = *param_2;
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    fVar11 = param_2[3];
    auVar13._0_4_ = fVar8 * fVar8 + fVar9 * fVar9;
    auVar13._4_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar13._8_4_ = fVar8 * fVar8 + fVar9 * fVar9;
    auVar13._12_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar13 = NEON_ext(auVar13,auVar13,4,1);
    fVar12 = SQRT(auVar13._0_4_ + auVar13._4_4_);
    bVar2 = false;
    if ((-1.1920929e-07 < fVar12) && (bVar2 = false, !NAN(fVar12))) {
      bVar2 = fVar12 < 1.1920929e-07;
    }
    uVar1 = -(uint)bVar2;
    uVar15 = param_3[1];
    uVar14 = *param_3;
    fVar8 = (float)((uint)fVar8 ^ ((uint)fVar8 ^ (uint)(fVar8 / fVar12)) & ~uVar1);
    fVar9 = (float)((uint)fVar9 ^
                   ((uint)fVar9 ^ (uint)(fVar9 / SQRT(auVar13._8_4_ + auVar13._12_4_))) & ~uVar1);
    fVar10 = (float)((uint)fVar10 ^
                    ((uint)fVar10 ^ (uint)(fVar10 / SQRT(auVar13._0_4_ + auVar13._4_4_))) & ~uVar1);
    fVar11 = (float)((uint)fVar11 ^
                    ((uint)fVar11 ^ (uint)(fVar11 / SQRT(auVar13._8_4_ + auVar13._12_4_))) & ~uVar1)
    ;
    pfVar4[2] = fVar10;
    pfVar4[3] = fVar11;
    *pfVar4 = fVar8;
    pfVar4[1] = fVar9;
    fVar8 = (float)uVar14 * fVar8;
    fVar9 = (float)((ulong)uVar14 >> 0x20) * fVar9;
    fVar10 = (float)uVar15 * fVar10;
    fVar11 = (float)((ulong)uVar15 >> 0x20) * fVar11;
    auVar7._0_4_ = fVar8 + fVar9;
    auVar7._4_4_ = fVar10 + fVar11;
    auVar7._8_4_ = fVar8 + fVar9;
    auVar7._12_4_ = fVar10 + fVar11;
    auVar13 = NEON_ext(auVar7,auVar7,4,1);
    pfVar4[4] = -(auVar13._0_4_ + auVar13._4_4_);
    *param_1 = (long)pfVar4;
    param_1[1] = (long)plVar6;
    param_1[2] = 0x20;
    param_1[3] = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


