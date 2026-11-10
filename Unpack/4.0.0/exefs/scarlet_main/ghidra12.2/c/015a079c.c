/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a079c; name: FUN_015a079c
 */


bool FUN_015a079c(uint param_1)

{
  uint uVar1;
  
  if (((((param_1 & 0xff) - 0x1e < 5) || (uVar1 = param_1 & 0xfe, uVar1 == 0x2a)) || (uVar1 == 0x2c)
      ) || ((param_1 & 0xff) - 0x2f < 3)) {
    return true;
  }
  return uVar1 == 0x32;
}


