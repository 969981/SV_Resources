/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cf3d44; name: FUN_01cf3d44
 */


void FUN_01cf3d44(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x24) = 3;
  memset(param_1 + 0x30,0,0x41);
  FUN_01f65400(param_1);
  return;
}


