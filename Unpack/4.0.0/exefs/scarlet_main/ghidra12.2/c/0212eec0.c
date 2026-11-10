/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212eec0; name: FUN_0212eec0
 */


ulong FUN_0212eec0(undefined8 param_1)

{
  bool bVar1;
  double dVar2;
  ulong uVar3;
  
  uVar3 = FUN_0212ef30();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    dVar2 = (double)FUN_00c41790(param_1,0xffffffff,0);
    uVar3 = (ulong)(uint)(float)dVar2 << 0x20;
  }
  FUN_00c5db00(param_1,0);
  return uVar3 | !bVar1;
}


