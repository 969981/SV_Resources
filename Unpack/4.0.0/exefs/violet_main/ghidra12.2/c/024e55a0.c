/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024e55a0; name: FUN_024e55a0
 */


void FUN_024e55a0(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x30,0x10);
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
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    uVar1 = *param_3;
    uVar12 = param_4[1];
    uVar9 = *param_4;
    puVar6[1] = param_3[1];
    *puVar6 = uVar1;
    puVar6[3] = uVar12;
    puVar6[2] = uVar9;
    fVar8 = (float)uVar9;
    fVar10 = (float)((ulong)uVar9 >> 0x20);
    fVar11 = (float)uVar12;
    fVar13 = (float)((ulong)uVar12 >> 0x20);
    auVar15._0_4_ = fVar8 * fVar8 + fVar10 * fVar10;
    auVar15._4_4_ = fVar11 * fVar11 + fVar13 * fVar13;
    auVar15._8_4_ = fVar8 * fVar8 + fVar10 * fVar10;
    auVar15._12_4_ = fVar11 * fVar11 + fVar13 * fVar13;
    auVar15 = NEON_ext(auVar15,auVar15,4,1);
    fVar14 = SQRT(auVar15._0_4_ + auVar15._4_4_);
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (fVar14 < 1.1920929e-07) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar14)) {
        bVar2 = fVar14 < -1.1920929e-07;
        bVar3 = fVar14 == -1.1920929e-07;
        bVar4 = false;
      }
    }
    *(float *)(puVar6 + 4) = fVar14;
    if (bVar3 || bVar2 != bVar4) {
      puVar6[3] = CONCAT44(fVar13 / fVar14,fVar11 / fVar14);
      puVar6[2] = CONCAT44(fVar10 / fVar14,fVar8 / fVar14);
    }
    *param_1 = puVar6;
    param_1[1] = param_2;
    param_1[2] = 0x30;
    param_1[3] = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


