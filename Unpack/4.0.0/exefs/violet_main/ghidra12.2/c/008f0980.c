/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0980; name: FUN_008f0980
 */


void FUN_008f0980(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)PTR_DAT_047d2780)(*(undefined8 *)(param_1 + 8));
  *param_2 = uVar1;
  param_2[1] = 0;
  return;
}


