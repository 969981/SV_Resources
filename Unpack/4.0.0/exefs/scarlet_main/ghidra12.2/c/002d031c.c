/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d031c; name: FUN_002d031c
 */


void FUN_002d031c(uint *param_1,undefined1 param_2,undefined1 param_3,ushort param_4,int param_5)

{
  *param_1 = *param_1 & 8 | param_5 << 4 | 2;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 5) = param_3;
  *(ushort *)((long)param_1 + 6) = param_4 & 1;
  return;
}


