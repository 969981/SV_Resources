/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011ccd80; name: FUN_011ccd80
 */


bool FUN_011ccd80(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x138);
  if (uVar1 != 1) {
    if (uVar1 != 0) goto LAB_011ccda8;
    *(undefined4 *)(param_1 + 0x138) = 1;
  }
  FUN_011ccdd0(param_1);
  uVar1 = *(uint *)(param_1 + 0x138);
LAB_011ccda8:
  return (uVar1 & 0xfffffffe) == 2;
}


