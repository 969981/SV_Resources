/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005bb264; name: FUN_005bb264
 */


void FUN_005bb264(long param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  
  piVar3 = *(int **)(param_1 + 0x38);
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)(param_1 + 0x34);
LAB_005bb2b8:
    FUN_00532334((long *)(param_1 + 0x28),iVar4 + 1);
    piVar3 = *(int **)(param_1 + 0x38);
    iVar4 = *piVar3;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    iVar4 = *piVar3;
    if (iVar1 < iVar4) {
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      puVar5 = *(undefined8 **)(piVar3 + (long)iVar1 * 2 + 2);
      goto LAB_005bb338;
    }
    if (iVar4 == *(int *)(param_1 + 0x34)) goto LAB_005bb2b8;
  }
  *piVar3 = iVar4 + 1;
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar5 != (undefined8 *)0x0) goto LAB_005bb318;
  }
  else {
    if (*(long *)(lVar6 + 0x70) != 0) {
      FUN_00520d08(lVar6,0,0x18);
    }
    puVar5 = (undefined8 *)FUN_00520544(lVar6,0x18,PTR_LAB_047cba90);
LAB_005bb318:
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
  }
  iVar4 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar4 + 1;
  *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)iVar4 * 8 + 8) = puVar5;
LAB_005bb338:
  sVar2 = strlen(param_2);
  FUN_0026c6b8(puVar5,param_2,sVar2);
  return;
}


