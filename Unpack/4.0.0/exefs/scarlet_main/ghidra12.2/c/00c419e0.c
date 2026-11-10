/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c419e0; name: FUN_00c419e0
 */


void FUN_00c419e0(long param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0x11;
  if (param_2 == 0) {
    uVar1 = 1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 8) = uVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


