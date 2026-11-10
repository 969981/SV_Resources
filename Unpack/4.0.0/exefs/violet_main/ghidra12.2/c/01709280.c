/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


