/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d941c; name: FUN_029d941c
 */


long FUN_029d941c(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((*puVar2 < 9) || ((ulong)puVar2[4] == 0)) ||
      (*puVar2 < 0xb || *(char *)((long)param_1 + (ulong)puVar2[4]) != '\x02')) ||
     ((ulong)puVar2[5] == 0)) {
    return 0;
  }
  puVar1 = (uint *)((long)param_1 + (ulong)puVar2[5]);
  return (long)puVar1 + (ulong)*puVar1;
}


