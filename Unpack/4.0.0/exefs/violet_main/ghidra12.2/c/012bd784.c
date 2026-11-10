/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bd784; name: FUN_012bd784
 */


void FUN_012bd784(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 8);
  lVar1 = (**(code **)(*param_1 + 0x30))();
  param_1[0x49] = lVar1;
  FUN_012bddbc(uVar2);
  FUN_012bde84(uVar2);
  FUN_012bd8f8(uVar2);
  return;
}


