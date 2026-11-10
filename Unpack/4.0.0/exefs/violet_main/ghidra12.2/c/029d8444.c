/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d8444; name: FUN_029d8444
 */


undefined4 FUN_029d8444(long *param_1)

{
  ulong uVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  piVar2 = (int *)param_1[0xe];
  if (piVar2 == (int *)0x0) {
    if ((((param_1[7] == 0) || ((*(byte *)(param_1[7] + 0x1e8) & 1) == 0)) || (param_1[7] == 0)) ||
       (((*(byte *)(param_1[7] + 0x1e8) & 1) == 0 ||
        (puVar3 = (uint *)(**(code **)(*(long *)param_1[7] + 0x70))(0), puVar3 == (uint *)0x0)))) {
      return 0;
    }
    piVar2 = (int *)FUN_029d83f8((long)puVar3 + (ulong)*puVar3);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
  }
  uVar4 = 0;
  puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3 + 4);
  piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
  if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar1 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar1 != 0)) {
    uVar4 = *(undefined4 *)((long)piVar2 + uVar1);
  }
  return uVar4;
}


