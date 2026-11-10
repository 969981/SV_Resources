/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8e3c0; name: FUN_01f8e3c0
 */


undefined1  [16] FUN_01f8e3c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  undefined1 auVar5 [16];
  long local_28;
  
  if (*(long *)(param_1 + 0x158) == 0) {
    local_28 = 0;
  }
  else {
    FUN_01f8d7f0(&local_28);
    if (local_28 != 0) {
      FUN_00ea349c(*(undefined4 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2d4));
      *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(param_1 + 0x218);
      *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_1 + 0x220);
      *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(param_1 + 0x210);
      FUN_00d0a71c(param_1 + 0x7c0,param_1 + 0x230);
      FUN_00c6c994(param_1 + 2000,param_1 + 0x240);
      plVar2 = *(long **)(param_1 + 0x250);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      plVar1 = *(long **)(param_1 + 0x7e0);
      *(long **)(param_1 + 0x7e0) = plVar2;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
      *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(param_1 + 600);
      *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(param_1 + 0x260);
      *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(param_1 + 0x268);
      memcpy((void *)(param_1 + 0x800),(void *)(param_1 + 0x270),0xd4);
      FUN_01f8e518(param_1 + 0x8e0,param_1 + 0x350);
      memcpy((void *)(param_1 + 0xa40),(void *)(param_1 + 0x4b0),0x50);
      FUN_01f8e518(param_1 + 0xa90,param_1 + 0x500);
      *(undefined8 *)(param_1 + 0xbf0) = *(undefined8 *)(param_1 + 0x660);
      *(undefined4 *)(param_1 + 0xbf8) = *(undefined4 *)(param_1 + 0x668);
      memcpy((void *)(param_1 + 0xc00),(void *)(param_1 + 0x670),300);
      fVar3 = *(float *)(param_1 + 0x2e0) * *(float *)(param_1 + 0x2e0);
      fVar6 = *(float *)(param_1 + 0x2e4) * *(float *)(param_1 + 0x2e4);
      fVar7 = *(float *)(param_1 + 0x2e8) * *(float *)(param_1 + 0x2e8);
      fVar8 = *(float *)(param_1 + 0x2ec) * *(float *)(param_1 + 0x2ec);
      auVar5._0_4_ = fVar3 + fVar6;
      auVar5._4_4_ = fVar7 + fVar8;
      auVar5._8_4_ = fVar3 + fVar6;
      auVar5._12_4_ = fVar7 + fVar8;
      auVar5 = NEON_ext(auVar5,auVar5,4,1);
      auVar4._0_4_ = SQRT(auVar5._0_4_ + auVar5._4_4_);
      auVar4._4_4_ = SQRT(auVar5._8_4_ + auVar5._12_4_);
      auVar4._8_4_ = SQRT(auVar5._0_4_ + auVar5._4_4_);
      auVar4._12_4_ = SQRT(auVar5._8_4_ + auVar5._12_4_);
      goto LAB_01f8e3e4;
    }
  }
  auVar4 = ZEXT816(0);
LAB_01f8e3e4:
  FUN_01018a28(&local_28);
  return auVar4;
}


