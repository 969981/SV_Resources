/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a375b0; name: FUN_01a375b0
 */


uint FUN_01a375b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(undefined8 *)(param_1 + 8);
  uVar2 = uVar3 >> 3 & 0x3f;
  if ((uVar3 & 7) != 4) {
    uVar2 = 0;
  }
  uVar1 = uVar3 >> 3 & 0x3f;
  if ((uVar3 & 7) != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}


