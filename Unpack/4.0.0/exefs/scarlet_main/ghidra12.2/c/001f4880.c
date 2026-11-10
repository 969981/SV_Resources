/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4880; name: FUN_001f4880
 */


void FUN_001f4880(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  param_1[2] = 0;
  return;
}


