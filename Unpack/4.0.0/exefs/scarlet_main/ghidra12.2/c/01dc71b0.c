/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc71b0; name: FUN_01dc71b0
 */


undefined1 FUN_01dc71b0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_2 < 6) {
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_3 < 6) {
    uVar2 = param_3;
  }
  return *(undefined1 *)(param_1 + (ulong)uVar1 * 0xc + (ulong)uVar2 * 2 + 0x527);
}


