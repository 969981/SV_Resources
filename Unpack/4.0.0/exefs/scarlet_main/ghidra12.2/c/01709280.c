/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01709280; name: FUN_01709280
 */


undefined8 FUN_01709280(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = fpcr;
  uVar1 = 0x1000000;
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  fpcr = uVar2 & 0xfffffffffeffffff | uVar1;
  return 0;
}


