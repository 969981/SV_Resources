/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


