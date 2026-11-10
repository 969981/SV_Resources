/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ec3ec; name: FUN_001ec3ec
 */


undefined8 FUN_001ec3ec(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = nnsslInitialize();
  uVar2 = nnResultIsFailure(uVar1);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_001ecc34(uVar1,0x1927b), (uVar2 & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


