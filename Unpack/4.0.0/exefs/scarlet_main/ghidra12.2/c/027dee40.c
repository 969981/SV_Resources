/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dee40; name: FUN_027dee40
 */


void FUN_027dee40(long param_1,long param_2)

{
  FUN_01cfa5b0();
  FUN_01cfa5b0(param_1 + 0x20,param_2 + 0x20);
  FUN_01d01ed8(param_1 + 0x40,param_2 + 0x40);
  FUN_01cfa5b0(param_1 + 0x48,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_01cfa5b0(param_1 + 0x70,param_2 + 0x70);
  return;
}


