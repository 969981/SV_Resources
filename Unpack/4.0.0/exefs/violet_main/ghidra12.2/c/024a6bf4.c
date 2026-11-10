/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a6bf4; name: FUN_024a6bf4
 */


long FUN_024a6bf4(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *(long *)(*param_2 + 8) = lVar1;
  *(long *)param_2[1] = *param_2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  FUN_024a6f80(param_2 + 2);
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_2,0x20,8);
  return lVar1;
}


