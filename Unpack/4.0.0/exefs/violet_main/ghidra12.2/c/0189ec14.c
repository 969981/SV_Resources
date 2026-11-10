/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0189ec14; name: FUN_0189ec14
 */


void FUN_0189ec14(long param_1,long param_2)

{
  bool bVar1;
  int *piVar2;
  ushort *puVar3;
  
  if ((ulong)((*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 4) * -0x5555555555555555) <=
      (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar2 = *(int **)(*(long *)(param_1 + 0xb8) + (ulong)*(uint *)(param_2 + 4) * 0x30);
  puVar3 = (ushort *)((long)piVar2 - (long)*piVar2);
  if (((*puVar3 < 9) || ((ulong)puVar3[4] == 0)) ||
     (*(char *)((long)piVar2 + (ulong)puVar3[4]) == '\0')) {
    return;
  }
  if ((ulong)puVar3[3] == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)((long)piVar2 + (ulong)puVar3[3]) != '\0';
  }
  FUN_0189ecac(param_1,param_2,bVar1);
  return;
}


