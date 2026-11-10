/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a70ea8; name: FUN_01a70ea8
 */


void FUN_01a70ea8(long param_1,long param_2)

{
  undefined4 uVar1;
  int *piVar2;
  ushort *puVar3;
  
  if ((ulong)((*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4) * -0x5555555555555555) <=
      (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar2 = *(int **)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_2 + 4) * 0x30);
  puVar3 = (ushort *)((long)piVar2 - (long)*piVar2);
  if (((*puVar3 < 0xd) || ((ulong)puVar3[6] == 0)) ||
     (*(char *)((long)piVar2 + (ulong)puVar3[6]) == '\0')) {
    return;
  }
  if ((ulong)puVar3[5] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((long)piVar2 + (ulong)puVar3[5]);
  }
  FUN_01a70f38(param_1,param_2,uVar1);
  return;
}


