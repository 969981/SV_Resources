/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00504348; name: FUN_00504348
 */


void FUN_00504348(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)((long)param_1 + 0xc);
LAB_005043c8:
    FUN_00532334(param_1,iVar4 + 1);
LAB_005043d4:
    piVar3 = (int *)param_1[2];
    iVar1 = *piVar3;
  }
  else {
    iVar4 = (int)param_1[1];
    if (iVar4 == *(int *)((long)param_1 + 0xc)) goto LAB_005043c8;
    iVar1 = *piVar3;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      pbVar5 = *(byte **)(piVar3 + (long)iVar4 * 2 + 2);
      if (pbVar5 != (byte *)0x0 && *param_1 == 0) {
        if ((*pbVar5 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar5 + 0x10));
        }
        FUN_0049e790(PTR_LAB_047cba48,pbVar5);
        piVar3 = (int *)param_1[2];
      }
      goto LAB_005043e4;
    }
    if (iVar4 < iVar1) {
      *(undefined8 *)(piVar3 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar3 + (long)iVar4 * 2 + 2);
      goto LAB_005043d4;
    }
  }
  *piVar3 = iVar1 + 1;
LAB_005043e4:
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  *(undefined8 *)(piVar3 + (long)(int)lVar2 * 2 + 2) = param_2;
  return;
}


