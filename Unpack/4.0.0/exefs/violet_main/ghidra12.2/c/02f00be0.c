/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f00be0; name: FUN_02f00be0
 */


void FUN_02f00be0(long param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    FUN_02f004bc(param_1,param_1 + 0x90,param_1 + 0xb0,param_1 + 0xb4);
  }
  FUN_00cb04b4(param_1 + 0xb8,param_2,param_3);
  return;
}


