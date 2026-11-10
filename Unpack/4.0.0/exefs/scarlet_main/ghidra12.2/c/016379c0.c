/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016379c0; name: FUN_016379c0
 */


uint FUN_016379c0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 * param_1) >> 0xc;
  if (0x800 < (param_2 * param_1 & 0xfffU)) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


