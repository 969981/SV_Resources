/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0228b9fc; name: FUN_0228b9fc
 */


void FUN_0228b9fc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e49208();
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_00e4b4ec(param_1), (uVar1 & 0xff) == 0)) {
    return;
  }
  FUN_0228ae40(param_1 + (uVar1 >> 0x20) * 0x78 + 0x38,param_2);
  return;
}


