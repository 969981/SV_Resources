/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea7890; name: FUN_01ea7890
 */


undefined1 * FUN_01ea7890(long param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3) <= (ulong)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x138) + (ulong)param_2 * 8);
  lVar4 = *(long *)(lVar3 + 0xb8);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x1e8) & 1) != 0)) {
    puVar2 = (uint *)(**(code **)(**(long **)(lVar3 + 0xb8) + 0x70))();
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 == 0)) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar5);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    }
    if (param_3 < *puVar2) {
      piVar1 = (int *)((long)(puVar2 + (ulong)param_3 + 1) + (ulong)puVar2[(ulong)param_3 + 1]);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 == 0)) {
        lVar3 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar5);
        lVar3 = (long)puVar2 + (ulong)*puVar2;
      }
      return (undefined1 *)(lVar3 + 4);
    }
  }
  return &DAT_03c886bc;
}


