/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00255068; name: FUN_00255068
 */


void FUN_00255068(long *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    iVar3 = *(int *)((long)param_1 + 0xc);
LAB_002550d8:
    FUN_00532334(param_1,iVar3 + 1);
LAB_002550e4:
    piVar2 = (int *)param_1[2];
    iVar1 = *piVar2;
  }
  else {
    iVar3 = (int)param_1[1];
    if (iVar3 == *(int *)((long)param_1 + 0xc)) goto LAB_002550d8;
    iVar1 = *piVar2;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      lVar4 = *(long *)(piVar2 + (long)iVar3 * 2 + 2);
      if (lVar4 != 0 && *param_1 == 0) {
        FUN_00267ec4(lVar4);
        FUN_0049e790(PTR_LAB_047cba48,lVar4);
        piVar2 = (int *)param_1[2];
      }
      goto LAB_002550f4;
    }
    if (iVar3 < iVar1) {
      *(undefined8 *)(piVar2 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar2 + (long)iVar3 * 2 + 2);
      goto LAB_002550e4;
    }
  }
  *piVar2 = iVar1 + 1;
LAB_002550f4:
  lVar4 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar4 + 1;
  *(undefined8 *)(piVar2 + (long)(int)lVar4 * 2 + 2) = param_2;
  return;
}


