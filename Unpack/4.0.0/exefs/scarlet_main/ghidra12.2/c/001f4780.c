/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4780; name: FUN_001f4780
 */


void FUN_001f4780(long *param_1,undefined1 param_2,long param_3,long param_4)

{
  *(undefined1 *)((long)param_1 + 0xc) = 4;
  param_1[2] = param_4;
  param_1[3] = param_3;
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = param_4 * 6;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  return;
}


