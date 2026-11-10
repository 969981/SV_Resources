/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ef91c; name: FUN_004ef91c
 */


void FUN_004ef91c(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)((long)param_1 + 0xc);
LAB_004ef994:
    FUN_00532334(param_1,iVar4 + 1);
LAB_004ef9a0:
    piVar3 = (int *)param_1[2];
    iVar1 = *piVar3;
  }
  else {
    iVar4 = (int)param_1[1];
    if (iVar4 == *(int *)((long)param_1 + 0xc)) goto LAB_004ef994;
    iVar1 = *piVar3;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      puVar5 = *(undefined8 **)(piVar3 + (long)iVar4 * 2 + 2);
      if (puVar5 != (undefined8 *)0x0 && *param_1 == 0) {
        (**(code **)*puVar5)(puVar5);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
        piVar3 = (int *)param_1[2];
      }
      goto LAB_004ef9b0;
    }
    if (iVar4 < iVar1) {
      *(undefined8 *)(piVar3 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar3 + (long)iVar4 * 2 + 2);
      goto LAB_004ef9a0;
    }
  }
  *piVar3 = iVar1 + 1;
LAB_004ef9b0:
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  *(undefined8 *)(piVar3 + (long)(int)lVar2 * 2 + 2) = param_2;
  return;
}


