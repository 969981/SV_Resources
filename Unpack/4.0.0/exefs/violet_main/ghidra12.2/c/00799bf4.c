/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00799bf4; name: FUN_00799bf4
 */


void FUN_00799bf4(long param_1,long *param_2)

{
  undefined1 auStack_20 [16];
  
  *(long **)(param_1 + 0x10) = param_2;
  (**(code **)(*param_2 + 0x108))(auStack_20,param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}


