/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00569ac0; name: FUN_00569ac0
 */


void FUN_00569ac0(long *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    iVar3 = *(int *)((long)param_1 + 0xc);
LAB_00569b30:
    FUN_00532334(param_1,iVar3 + 1);
LAB_00569b3c:
    piVar2 = (int *)param_1[2];
    iVar1 = *piVar2;
  }
  else {
    iVar3 = (int)param_1[1];
    if (iVar3 == *(int *)((long)param_1 + 0xc)) goto LAB_00569b30;
    iVar1 = *piVar2;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      lVar4 = *(long *)(piVar2 + (long)iVar3 * 2 + 2);
      if (lVar4 != 0 && *param_1 == 0) {
        FUN_00580de4(lVar4);
        FUN_0049e790(PTR_LAB_047cba48,lVar4);
        piVar2 = (int *)param_1[2];
      }
      goto LAB_00569b4c;
    }
    if (iVar3 < iVar1) {
      *(undefined8 *)(piVar2 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar2 + (long)iVar3 * 2 + 2);
      goto LAB_00569b3c;
    }
  }
  *piVar2 = iVar1 + 1;
LAB_00569b4c:
  lVar4 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar4 + 1;
  *(undefined8 *)(piVar2 + (long)(int)lVar4 * 2 + 2) = param_2;
  return;
}


