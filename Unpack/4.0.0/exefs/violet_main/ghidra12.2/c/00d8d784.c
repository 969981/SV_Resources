/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8d784; name: FUN_00d8d784
 */


void FUN_00d8d784(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e47f74();
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_00e4a780(param_1), (uVar1 & 0xff) == 0)) {
    return;
  }
  FUN_00d8d574(param_1 + (uVar1 >> 0x20) * 0x78 + 0x38,param_2,*param_3);
  return;
}


