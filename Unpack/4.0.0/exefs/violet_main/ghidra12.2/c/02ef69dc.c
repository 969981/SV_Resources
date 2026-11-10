/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef69dc; name: FUN_02ef69dc
 */


undefined1  [16] FUN_02ef69dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x128)
          )();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_1;
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


