/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277f95c; name: FUN_0277f95c
 */


void FUN_0277f95c(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 8);
  plVar5 = *(long **)(lVar6 + 0x228);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  piVar3 = *(int **)(lVar6 + 0x238);
  if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar4 != 0)) {
    puVar1 = (uint *)((long)piVar3 + uVar4);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar2 = *puVar1;
    lVar6 = *(long *)(param_1 + 0x38);
    FUN_00c41540(lVar6);
    memcpy(*(void **)(lVar6 + 0x88),puVar1 + 1,(ulong)uVar2);
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0277fa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}


