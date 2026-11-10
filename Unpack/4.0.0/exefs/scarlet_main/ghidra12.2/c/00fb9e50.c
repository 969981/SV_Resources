/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb9e50; name: FUN_00fb9e50
 */


void FUN_00fb9e50(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_00fb9f24(param_1 + 3);
  FUN_00fb9f24(param_1 + 0xb,param_3);
  if ((((*(long *)(param_2 + 8) != 0) && ((*(byte *)(*(long *)(param_2 + 8) + 0x1e8) & 1) != 0)) &&
      (*(long *)(param_3 + 8) != 0)) && ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) != 0)) {
    puVar2 = (uint *)(**(code **)(**(long **)(param_2 + 8) + 0x70))();
    puVar3 = (uint *)(**(code **)(**(long **)(param_3 + 8) + 0x70))();
    piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) {
      lVar5 = 0;
    }
    else {
      uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
      lVar5 = 0;
      if (uVar4 != 0) {
        puVar3 = (uint *)((long)piVar1 + uVar4);
        lVar5 = (long)puVar3 + (ulong)*puVar3;
      }
    }
    *param_1 = (long)puVar2 + (ulong)*puVar2;
    param_1[1] = lVar5;
    param_1[2] = (long)piVar1;
  }
  return;
}


