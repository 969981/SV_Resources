/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a838c; name: FUN_004a838c
 */


void FUN_004a838c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  
  piVar3 = *(int **)(param_1 + 0xd0);
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)(param_1 + 0xcc);
LAB_004a83ec:
    FUN_00532334((long *)(param_1 + 0xc0),iVar4 + 1);
    piVar3 = *(int **)(param_1 + 0xd0);
    iVar4 = *piVar3;
  }
  else {
    iVar1 = *(int *)(param_1 + 200);
    iVar4 = *piVar3;
    if (iVar1 < iVar4) {
      *(int *)(param_1 + 200) = iVar1 + 1;
      FUN_001fcec0(*(undefined8 *)(piVar3 + (long)iVar1 * 2 + 2),param_2);
      return;
    }
    if (iVar4 == *(int *)(param_1 + 0xcc)) goto LAB_004a83ec;
  }
  *piVar3 = iVar4 + 1;
  lVar5 = *(long *)(param_1 + 0xc0);
  if (lVar5 == 0) {
    puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar2 == (undefined8 *)0x0) goto LAB_004a844c;
  }
  else {
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_00520d08(lVar5,0,0x18);
    }
    puVar2 = (undefined8 *)FUN_00520544(lVar5,0x18,PTR_LAB_047cba90);
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
LAB_004a844c:
  iVar4 = *(int *)(param_1 + 200);
  *(int *)(param_1 + 200) = iVar4 + 1;
  *(undefined8 **)(*(long *)(param_1 + 0xd0) + (long)iVar4 * 8 + 8) = puVar2;
  FUN_001fcec0(puVar2,param_2);
  return;
}


