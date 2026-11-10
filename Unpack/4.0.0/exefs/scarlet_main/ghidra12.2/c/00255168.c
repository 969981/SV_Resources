/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00255168; name: FUN_00255168
 */


void FUN_00255168(long *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x28))((int)param_1,*(undefined8 *)(param_1[3] + 0x10));
  *(byte *)(param_1 + 0xe) = bVar1 & 1;
  return;
}


