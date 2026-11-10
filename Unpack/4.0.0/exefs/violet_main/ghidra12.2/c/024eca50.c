/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024eca50; name: FUN_024eca50
 */


void FUN_024eca50(undefined8 *param_1,long *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  pfVar7 = (float *)(**(code **)(*param_2 + 0x10))(param_2,0x30,0x10);
  if (pfVar7 == (float *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    fVar13 = *param_3;
    fVar1 = param_3[1];
    fVar2 = param_3[3];
    fVar9 = (float)*param_4 - fVar13;
    fVar10 = (float)((ulong)*param_4 >> 0x20) - fVar1;
    fVar11 = (float)param_4[1] - param_3[2];
    fVar12 = (float)((ulong)param_4[1] >> 0x20) - fVar2;
    pfVar7[2] = param_3[2];
    pfVar7[3] = fVar2;
    *pfVar7 = fVar13;
    pfVar7[1] = fVar1;
    *(ulong *)(pfVar7 + 6) = CONCAT44(fVar12,fVar11);
    *(ulong *)(pfVar7 + 4) = CONCAT44(fVar10,fVar9);
    auVar14._0_4_ = fVar9 * fVar9 + fVar10 * fVar10;
    auVar14._4_4_ = fVar11 * fVar11 + fVar12 * fVar12;
    auVar14._8_4_ = fVar9 * fVar9 + fVar10 * fVar10;
    auVar14._12_4_ = fVar11 * fVar11 + fVar12 * fVar12;
    auVar14 = NEON_ext(auVar14,auVar14,4,1);
    fVar13 = SQRT(auVar14._0_4_ + auVar14._4_4_);
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (fVar13 < 1.1920929e-07) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar13)) {
        bVar3 = fVar13 < -1.1920929e-07;
        bVar4 = fVar13 == -1.1920929e-07;
        bVar5 = false;
      }
    }
    pfVar7[8] = fVar13;
    if (bVar4 || bVar3 != bVar5) {
      *(ulong *)(pfVar7 + 6) = CONCAT44(fVar12 / fVar13,fVar11 / fVar13);
      *(ulong *)(pfVar7 + 4) = CONCAT44(fVar10 / fVar13,fVar9 / fVar13);
    }
    *param_1 = pfVar7;
    param_1[1] = param_2;
    param_1[2] = 0x30;
    param_1[3] = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


