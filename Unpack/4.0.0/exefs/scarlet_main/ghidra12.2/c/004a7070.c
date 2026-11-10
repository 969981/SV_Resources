/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a7070; name: FUN_004a7070
 */


void FUN_004a7070(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)(param_1 + 0x24);
LAB_004a70d0:
    FUN_00532334((long *)(param_1 + 0x18),iVar4 + 1);
    piVar3 = *(int **)(param_1 + 0x28);
    iVar4 = *piVar3;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar4 = *piVar3;
    if (iVar1 < iVar4) {
      *(int *)(param_1 + 0x20) = iVar1 + 1;
      FUN_001fcec0(*(undefined8 *)(piVar3 + (long)iVar1 * 2 + 2),param_2);
      return;
    }
    if (iVar4 == *(int *)(param_1 + 0x24)) goto LAB_004a70d0;
  }
  *piVar3 = iVar4 + 1;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar2 == (undefined8 *)0x0) goto LAB_004a7130;
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
LAB_004a7130:
  iVar4 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar4 + 1;
  *(undefined8 **)(*(long *)(param_1 + 0x28) + (long)iVar4 * 8 + 8) = puVar2;
  FUN_001fcec0(puVar2,param_2);
  return;
}


