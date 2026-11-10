/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e4040; name: FUN_017e4040
 */


undefined4 FUN_017e4040(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x20;
  if ((param_2 & 1) != 0) {
    uVar1 = 0x21;
  }
  return uVar1;
}


