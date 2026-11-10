/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01962ec8; name: FUN_01962ec8
 */


void FUN_01962ec8(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 local_14;
  
  piVar2 = (int *)*param_3;
  puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
  if (*puVar4 < 0xb) {
    iVar3 = 0;
    iVar5 = 0;
    iVar1 = 0;
    if (*puVar4 < 9) goto LAB_01962f14;
  }
  else {
    iVar1 = 0;
    if ((ulong)puVar4[5] != 0) {
      iVar1 = *(int *)((long)piVar2 + (ulong)puVar4[5]);
    }
  }
  iVar3 = iVar1;
  if ((ulong)puVar4[4] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((long)piVar2 + (ulong)puVar4[4]);
  }
LAB_01962f14:
  if (iVar3 - iVar5 != 1) {
    local_14 = param_1;
    FUN_01962f48(param_3,&local_14);
  }
  return;
}


