/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298fdd8; name: FUN_0298fdd8
 */


void FUN_0298fdd8(long param_1)

{
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_0185d10c(&local_8);
  *(undefined1 *)(param_1 + 0xe6) = 0;
  return;
}


