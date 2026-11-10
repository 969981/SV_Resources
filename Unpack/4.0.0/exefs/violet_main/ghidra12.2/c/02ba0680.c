/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ba0680; name: FUN_02ba0680
 */


undefined1  [16] FUN_02ba0680(long param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1._0_4_ = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xb0);
  auVar1._4_4_ = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xb4);
  auVar1._8_4_ = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xb8);
  auVar2._12_4_ = *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xbc);
  auVar2._0_12_ = auVar1;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = auVar1;
  auVar3 = NEON_ext(auVar3,auVar2,0xc,1);
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auVar1;
  auVar4 = NEON_ext(auVar3,auVar4,4,1);
  auVar3 = NEON_ext(auVar3,auVar3,8,1);
  auVar3 = NEON_ext(auVar4,auVar3,0xc,1);
  return auVar3;
}


