/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d8a54; name: FUN_029d8a54
 */


int FUN_029d8a54(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long local_70 [3];
  long *local_58;
  
  piVar4 = (int *)0x0;
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x1e8) & 1) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      puVar3 = (uint *)(**(code **)(**(long **)(param_1 + 0x10) + 0x70))();
      piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  if ((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar5 != 0)) {
    puVar3 = (uint *)((long)piVar4 + uVar5);
    uVar1 = *puVar3;
    if (0 < *(int *)((long)puVar3 + (ulong)uVar1)) {
      iVar6 = 0;
      while( true ) {
        FUN_029d8b5c(local_70,param_1,iVar6);
        lVar2 = local_70[0];
        lVar7 = *param_2;
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        if (lVar2 == lVar7) break;
        iVar6 = iVar6 + 1;
        if (*(int *)((long)puVar3 + (ulong)uVar1) <= iVar6) {
          return -1;
        }
      }
      return iVar6;
    }
  }
  return -1;
}


