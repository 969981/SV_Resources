/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005dedec; name: FUN_005dedec
 */


void FUN_005dedec(long param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)(param_1 + 0x1c);
LAB_005dee40:
    FUN_00532334((long *)(param_1 + 0x10),iVar4 + 1);
    piVar3 = *(int **)(param_1 + 0x20);
    iVar4 = *piVar3;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar4 = *piVar3;
    if (iVar1 < iVar4) {
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      puVar5 = *(undefined8 **)(piVar3 + (long)iVar1 * 2 + 2);
      goto LAB_005deec0;
    }
    if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_005dee40;
  }
  *piVar3 = iVar4 + 1;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar5 != (undefined8 *)0x0) goto LAB_005deea0;
  }
  else {
    if (*(long *)(lVar6 + 0x70) != 0) {
      FUN_00520d08(lVar6,0,0x18);
    }
    puVar5 = (undefined8 *)FUN_00520544(lVar6,0x18,PTR_LAB_047cba90);
LAB_005deea0:
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar4 + 1;
  *(undefined8 **)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8 + 8) = puVar5;
LAB_005deec0:
  sVar2 = strlen(param_2);
  FUN_0026c6b8(puVar5,param_2,sVar2);
  return;
}


