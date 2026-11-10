/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e01f30; name: FUN_01e01f30
 */


void FUN_01e01f30(undefined8 *param_1,undefined1 param_2 [16])

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
  float fVar10;
  
  if (((DAT_04837608 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04837608), iVar2 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar5 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(long *)(lVar5 + 0x260);
  lVar5 = *(long *)(lVar5 + 0x268);
  if (lVar4 != lVar5) {
    fVar10 = 3.4028235e+38;
    do {
      fVar6 = *(float *)(lVar4 + 0x10) - param_2._0_4_;
      fVar8 = *(float *)(lVar4 + 0x14) - param_2._4_4_;
      fVar9 = *(float *)(lVar4 + 0x18) - param_2._8_4_;
      fVar6 = fVar6 * fVar6;
      fVar8 = fVar8 * fVar8;
      fVar9 = fVar9 * fVar9;
      auVar7._0_4_ = fVar6 + fVar8;
      auVar7._4_4_ = fVar9 + 0.0;
      auVar7._8_4_ = fVar6 + fVar8;
      auVar7._12_4_ = fVar9 + 0.0;
      auVar7 = NEON_ext(auVar7,auVar7,4,1);
      fVar6 = auVar7._0_4_ + auVar7._4_4_;
      if (fVar6 < fVar10) {
        FUN_00d0a71c(param_1,lVar4);
        uVar1 = *(undefined4 *)(lVar4 + 0x20);
        param_1[3] = *(undefined8 *)(lVar4 + 0x18);
        uVar3 = *(undefined8 *)(lVar4 + 0x10);
        *(undefined4 *)(param_1 + 4) = uVar1;
        param_1[2] = uVar3;
        fVar10 = fVar6;
      }
      lVar4 = lVar4 + 0x30;
    } while (lVar5 != lVar4);
  }
  return;
}


