/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02289d54; name: FUN_02289d54
 */


void FUN_02289d54(long param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e47330();
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_00e49ce8(param_1), (uVar1 & 0xff) == 0)) {
    return;
  }
  FUN_00d96d94(param_1 + (uVar1 >> 0x20) * 0x78 + 0x38,param_2,*param_3);
  return;
}


