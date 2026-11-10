/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026d5260; name: FUN_026d5260
 */


undefined8 FUN_026d5260(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_026d5298();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_026d53b0(param_1);
  return uVar2;
}


