/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02284f74; name: FUN_02284f74
 */


undefined1  [16] FUN_02284f74(float param_1,float param_2,undefined8 *param_3,long param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = *(float *)(param_4 + 0x24) *
          (*(float *)(param_4 + 0x20) +
          *(float *)((long)param_3 + 0x24) * *(float *)(param_4 + 0x28) * param_2) * param_1;
  auVar2._0_4_ = (float)*param_3 * fVar1;
  auVar2._4_4_ = (float)((ulong)*param_3 >> 0x20) * fVar1;
  auVar2._8_4_ = (float)param_3[1] * fVar1;
  auVar2._12_4_ = (float)((ulong)param_3[1] >> 0x20) * fVar1;
  return auVar2;
}


