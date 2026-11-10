/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a33d8; name: FUN_007a33d8
 */


void FUN_007a33d8(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x18);
  if (uVar1 + param_3 <= *(uint *)(param_1 + 0x10)) {
    memcpy(param_2,(void *)(*(long *)(param_1 + 8) + (ulong)uVar1),(ulong)param_3);
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
  }
  return;
}


