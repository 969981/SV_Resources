/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008753fc; name: FUN_008753fc
 */


undefined8 FUN_008753fc(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x48))();
  if (iVar1 - DAT_047fc380 == 1) {
    DAT_044ea8dc = DAT_044ea8d8;
  }
  return 1;
}


