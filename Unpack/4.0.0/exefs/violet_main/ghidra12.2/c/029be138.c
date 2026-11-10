/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029be138; name: FUN_029be138
 */


long FUN_029be138(long param_1)

{
  long lVar1;
  uint *puVar2;
  
  if ((((*(long *)(param_1 + 0x228) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x228) + 0x1e8) & 1) == 0)) ||
      (*(long *)(param_1 + 0x228) == 0)) ||
     ((*(byte *)(*(long *)(param_1 + 0x228) + 0x1e8) & 1) == 0)) {
    lVar1 = 0;
  }
  else {
    puVar2 = (uint *)(**(code **)(**(long **)(param_1 + 0x228) + 0x70))();
    lVar1 = (long)puVar2 + (ulong)*puVar2;
  }
  return lVar1;
}


