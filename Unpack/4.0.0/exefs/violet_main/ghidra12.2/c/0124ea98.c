/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124ea98; name: FUN_0124ea98
 */


void FUN_0124ea98(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + (param_2 & 0xff) * 8);
  *(undefined8 *)(param_1 + (param_2 & 0xff) * 8) = *(undefined8 *)(param_1 + (param_3 & 0xff) * 8);
  *(undefined8 *)(param_1 + (param_3 & 0xff) * 8) = uVar1;
  return;
}


