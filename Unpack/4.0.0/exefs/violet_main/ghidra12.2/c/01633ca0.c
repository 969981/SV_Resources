/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01633ca0; name: FUN_01633ca0
 */


uint FUN_01633ca0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 * param_1;
  uVar2 = uVar1 / 100;
  if (0x31 < uVar1 % 100) {
    uVar2 = uVar1 / 100 + 1;
  }
  return uVar2;
}


