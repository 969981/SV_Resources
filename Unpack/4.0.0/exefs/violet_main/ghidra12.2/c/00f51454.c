/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f51454; name: FUN_00f51454
 */


bool FUN_00f51454(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2 & 0xffff | (param_3 & 0xffff) << 0x10;
  lVar2 = FUN_011b047c(param_1,uVar1,0);
  lVar3 = FUN_011b047c(param_1,uVar1 | 0x100000000,0);
  return lVar2 != 0 && lVar3 != 0;
}


