/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02147030; name: FUN_02147030
 */


void FUN_02147030(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar1 = (uint *)*param_2;
  while (puVar1 != (uint *)*param_3) {
    uVar3 = (ulong)*puVar1;
    if ((*(ushort *)((long)puVar1 + (uVar3 - (long)*(int *)((long)puVar1 + uVar3))) < 5) ||
       (uVar5 = (ulong)*(ushort *)
                        ((long)puVar1 + (uVar3 - (long)*(int *)((long)puVar1 + uVar3)) + 4),
       uVar5 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((long)puVar1 + uVar5 + uVar3);
    }
    piVar6 = (int *)*param_4;
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 7) ||
       (uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar3 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((long)piVar6 + uVar3);
    }
    if (iVar2 == iVar4) break;
    puVar1 = puVar1 + 1;
    *param_2 = (long)puVar1;
  }
  *param_1 = puVar1;
  return;
}


