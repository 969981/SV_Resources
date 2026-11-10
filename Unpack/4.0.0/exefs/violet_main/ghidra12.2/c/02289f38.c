/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02289f38; name: FUN_02289f38
 */


void FUN_02289f38(long param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e47950();
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_00e4b15c(param_1), (uVar1 & 0xff) == 0)) {
    return;
  }
  FUN_00e489d4(*param_3,param_1 + (uVar1 >> 0x20) * 0x78 + 0x38,param_2);
  return;
}


