/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d5d98; name: FUN_018d5d98
 */


void FUN_018d5d98(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar1,uVar2);
  return;
}


