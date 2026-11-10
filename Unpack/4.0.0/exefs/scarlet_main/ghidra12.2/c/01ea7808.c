/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea7808; name: FUN_01ea7808
 */


undefined4 FUN_01ea7808(long param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  if ((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3) <= (ulong)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x138) + (ulong)param_2 * 8);
  lVar5 = *(long *)(lVar4 + 0xb8);
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x1e8) & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    puVar3 = (uint *)(**(code **)(**(long **)(lVar4 + 0xb8) + 0x70))();
    piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    uVar2 = *(undefined4 *)((long)puVar3 + (ulong)*puVar3);
  }
  return uVar2;
}


