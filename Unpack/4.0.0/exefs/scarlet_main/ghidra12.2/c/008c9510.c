/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c9510; name: FUN_008c9510
 */


void FUN_008c9510(long param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(*(long *)(param_1 + 0xa0) + 0x808) + 1.0 +
          (float)(int)((ulong)*(uint *)(param_1 + 0xac) *
                       (long)*(int *)(*(long *)(param_1 + 0xa0) + 0x80c) >> 0x20);
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
  *param_2 = fVar1;
  fVar1 = *(float *)(param_1 + 100) * fVar1;
  *param_2 = fVar1;
  *param_2 = *(float *)(*(long *)(param_1 + 0x78) + 0x54) * fVar1;
  if (*(char *)(*(long *)(param_1 + 0xa0) + 0x758) == '\0') {
    return;
  }
  FUN_008c90fc();
  return;
}


