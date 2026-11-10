/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017c9e00; name: FUN_017c9e00
 */


void FUN_017c9e00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  plVar8 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x30,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    uVar1 = *param_2;
    uVar13 = param_3[1];
    uVar10 = *param_3;
    puVar6[1] = param_2[1];
    *puVar6 = uVar1;
    puVar6[3] = uVar13;
    puVar6[2] = uVar10;
    fVar9 = (float)uVar10;
    fVar11 = (float)((ulong)uVar10 >> 0x20);
    fVar12 = (float)uVar13;
    fVar14 = (float)((ulong)uVar13 >> 0x20);
    auVar16._0_4_ = fVar9 * fVar9 + fVar11 * fVar11;
    auVar16._4_4_ = fVar12 * fVar12 + fVar14 * fVar14;
    auVar16._8_4_ = fVar9 * fVar9 + fVar11 * fVar11;
    auVar16._12_4_ = fVar12 * fVar12 + fVar14 * fVar14;
    auVar16 = NEON_ext(auVar16,auVar16,4,1);
    fVar15 = SQRT(auVar16._0_4_ + auVar16._4_4_);
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (fVar15 < 1.1920929e-07) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar15)) {
        bVar2 = fVar15 < -1.1920929e-07;
        bVar3 = fVar15 == -1.1920929e-07;
        bVar4 = false;
      }
    }
    *(float *)(puVar6 + 4) = fVar15;
    if (bVar3 || bVar2 != bVar4) {
      puVar6[3] = CONCAT44(fVar14 / fVar15,fVar12 / fVar15);
      puVar6[2] = CONCAT44(fVar11 / fVar15,fVar9 / fVar15);
    }
    *param_1 = puVar6;
    param_1[1] = plVar8;
    param_1[2] = 0x30;
    param_1[3] = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


