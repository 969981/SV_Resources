/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e01b74; name: FUN_01e01b74
 */


void FUN_01e01b74(undefined8 *param_1,undefined1 param_2 [16])

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  
  if (((DAT_04837608 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04837608), iVar1 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  DAT_04837610 = DAT_048375f8;
  lVar3 = *(long *)(DAT_048375f8 + 0x228);
  while( true ) {
    if (lVar3 == *(long *)(DAT_048375f8 + 0x230)) {
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    fVar4 = *(float *)(lVar3 + 0x10) - param_2._0_4_;
    fVar6 = *(float *)(lVar3 + 0x14) - param_2._4_4_;
    fVar7 = *(float *)(lVar3 + 0x18) - param_2._8_4_;
    fVar4 = fVar4 * fVar4;
    fVar6 = fVar6 * fVar6;
    fVar7 = fVar7 * fVar7;
    auVar5._0_4_ = fVar4 + fVar6;
    auVar5._4_4_ = fVar7 + 0.0;
    auVar5._8_4_ = fVar4 + fVar6;
    auVar5._12_4_ = fVar7 + 0.0;
    auVar5 = NEON_ext(auVar5,auVar5,4,1);
    if (auVar5._0_4_ + auVar5._4_4_ <= *(float *)(lVar3 + 0x20) * *(float *)(lVar3 + 0x20)) break;
    lVar3 = lVar3 + 0x30;
  }
  *(undefined1 *)param_1 = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00d0a71c(param_1 + 2,lVar3);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  param_1[5] = *(undefined8 *)(lVar3 + 0x18);
  param_1[7] = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  param_1[6] = *(undefined8 *)(lVar3 + 0x20);
  param_1[4] = uVar2;
  return;
}


