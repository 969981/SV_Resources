/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00390150; name: FUN_00390150
 */


uint FUN_00390150(undefined8 param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  
  if ((param_2 & 0xff) != 0x14) {
    uVar1 = FUN_00390190(param_1,param_2,param_3);
    return uVar1 & 1;
  }
  uVar1 = (uint)param_1;
  if (0x7ffffffe < uVar1) {
    uVar1 = 0x7fffffff;
  }
  *param_4 = uVar1;
  return 1;
}


