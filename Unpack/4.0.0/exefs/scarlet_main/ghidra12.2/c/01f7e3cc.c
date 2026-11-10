/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7e3cc; name: FUN_01f7e3cc
 */


byte FUN_01f7e3cc(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  float extraout_s0;
  float fVar5;
  float extraout_var;
  float fVar7;
  float extraout_var_00;
  float fVar8;
  float extraout_var_01;
  float fVar9;
  undefined1 auVar6 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  char local_30;
  
  if (*(char *)(param_1 + 0x13e) == '\0') {
    if (*(char *)(param_1 + 0x1e0) != '\0') {
      FUN_014775bc(param_1);
      fVar5 = extraout_s0 - *(float *)(param_1 + 0x180);
      fVar7 = extraout_var - *(float *)(param_1 + 0x184);
      fVar8 = extraout_var_00 - *(float *)(param_1 + 0x188);
      fVar9 = extraout_var_01 - *(float *)(param_1 + 0x18c);
      fVar5 = fVar5 * fVar5;
      fVar7 = fVar7 * fVar7;
      fVar8 = fVar8 * fVar8;
      fVar9 = fVar9 * fVar9;
      auVar6._0_4_ = fVar5 + fVar7;
      auVar6._4_4_ = fVar8 + fVar9;
      auVar6._8_4_ = fVar5 + fVar7;
      auVar6._12_4_ = fVar8 + fVar9;
      auVar6 = NEON_ext(auVar6,auVar6,4,1);
      bVar2 = auVar6._0_4_ + auVar6._4_4_ <=
              *(float *)(param_1 + 0x1e4) * *(float *)(param_1 + 0x1e4);
      goto LAB_01f7e4b0;
    }
    if (*(long *)(param_1 + 0x1c8) == 0) {
      lVar3 = 0;
      if (*(long *)(param_1 + 0xe8) != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
      }
      uVar1 = FUN_00ea7754(lVar3 + 0x108,&local_40);
      FUN_00d2fb58((long *)(param_1 + 0x1c8),uVar1);
      if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_01f7e3e4;
    }
    FUN_01477400(&local_40);
    bVar2 = 0;
    if (local_30 != '\0') {
      local_40 = local_40 - *(float *)(param_1 + 0x180);
      fStack_3c = fStack_3c - *(float *)(param_1 + 0x184);
      fStack_38 = fStack_38 - *(float *)(param_1 + 0x188);
      fVar5 = 0.0 - *(float *)(param_1 + 0x18c);
      local_40 = local_40 * local_40;
      fStack_3c = fStack_3c * fStack_3c;
      fStack_38 = fStack_38 * fStack_38;
      fVar5 = fVar5 * fVar5;
      auVar4._0_4_ = local_40 + fStack_3c;
      auVar4._4_4_ = fStack_38 + fVar5;
      auVar4._8_4_ = local_40 + fStack_3c;
      auVar4._12_4_ = fStack_38 + fVar5;
      auVar6 = NEON_ext(auVar4,auVar4,4,1);
      bVar2 = -(auVar6._0_4_ + auVar6._4_4_ <= fStack_34 * fStack_34);
    }
  }
  else {
LAB_01f7e3e4:
    bVar2 = 0;
  }
LAB_01f7e4b0:
  return bVar2 & 1;
}


