/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01947ca4; name: FUN_01947ca4
 */


void FUN_01947ca4(long *param_1,long param_2)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  
  fVar1 = *(float *)(param_2 + 0x280) - (float)*(undefined8 *)(param_2 + 0x270);
  fVar3 = *(float *)(param_2 + 0x284) - (float)((ulong)*(undefined8 *)(param_2 + 0x270) >> 0x20);
  fVar4 = *(float *)(param_2 + 0x288) - (float)*(undefined8 *)(param_2 + 0x278);
  fVar1 = fVar1 * fVar1;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  auVar2._0_4_ = fVar1 + fVar3;
  auVar2._4_4_ = fVar4 + 0.0;
  auVar2._8_4_ = fVar1 + fVar3;
  auVar2._12_4_ = fVar4 + 0.0;
  auVar2 = NEON_ext(auVar2,auVar2,4,1);
  *(ulong *)(param_2 + 0x2d0) = *(ulong *)(param_2 + 0x2d0) & 0xffffffffffffffef | 3;
  *(float *)(param_2 + 0x300) = SQRT(auVar2._0_4_ + auVar2._4_4_);
  *param_1 = param_2 + 0x130;
                    /* WARNING: Could not recover jumptable at 0x01947cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x130) + 0x10))(param_2 + 0x130);
  return;
}


