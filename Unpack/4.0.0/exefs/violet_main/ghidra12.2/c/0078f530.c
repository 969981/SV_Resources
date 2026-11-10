/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078f530; name: FUN_0078f530
 */


undefined8 FUN_0078f530(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00796534(param_2,param_1 + 0x54);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_018ff39c(param_1 + 0x54,param_2);
  return 1;
}


