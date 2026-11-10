/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e4da8c; name: FUN_02e4da8c
 */


void FUN_02e4da8c(float param_1,undefined1 param_2 [16],long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float local_4;
  
  local_4 = param_1;
  pfVar2 = (float *)(param_3 + 4);
  pfVar1 = &local_4;
  if (param_1 <= *pfVar2) {
    pfVar1 = pfVar2;
  }
  *pfVar2 = *pfVar1;
  *(ulong *)(param_3 + 0x18) =
       CONCAT44(param_2._12_4_ * param_1 + (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20),
                param_2._8_4_ * param_1 + (float)*(undefined8 *)(param_3 + 0x18));
  *(ulong *)(param_3 + 0x10) =
       CONCAT44(param_2._4_4_ * param_1 + (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20),
                param_2._0_4_ * param_1 + (float)*(undefined8 *)(param_3 + 0x10));
  return;
}


