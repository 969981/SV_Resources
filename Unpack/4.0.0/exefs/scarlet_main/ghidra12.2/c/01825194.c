/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01825194; name: FUN_01825194
 */


void FUN_01825194(long param_1,long param_2)

{
  uint local_8;
  int iStack_4;
  
  if ((((*(int *)(param_1 + 8) <= *(int *)(param_2 + 0x20)) &&
       (*(int *)(param_1 + 0xc) <= *(int *)(param_2 + 0x24))) &&
      (*(int *)(param_2 + 0x20) <= *(int *)(param_1 + 0x10))) &&
     (*(int *)(param_2 + 0x24) <= *(int *)(param_1 + 0x14))) {
    FUN_02008eb0(&local_8,param_1);
    param_1 = param_1 + (long)iStack_4 * 8;
    *(ulong *)(param_1 + 0x18) =
         *(ulong *)(param_1 + 0x18) & (1L << ((ulong)local_8 & 0x3f) ^ 0xffffffffffffffffU);
  }
  return;
}


