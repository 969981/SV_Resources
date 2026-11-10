/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f80a8; name: FUN_004f80a8
 */


void FUN_004f80a8(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)((long)param_1 + 0xc);
LAB_004f8120:
    FUN_00532334(param_1,iVar4 + 1);
LAB_004f812c:
    piVar3 = (int *)param_1[2];
    iVar1 = *piVar3;
  }
  else {
    iVar4 = (int)param_1[1];
    if (iVar4 == *(int *)((long)param_1 + 0xc)) goto LAB_004f8120;
    iVar1 = *piVar3;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      puVar5 = *(undefined8 **)(piVar3 + (long)iVar4 * 2 + 2);
      if (puVar5 != (undefined8 *)0x0 && *param_1 == 0) {
        (**(code **)*puVar5)(puVar5);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
        piVar3 = (int *)param_1[2];
      }
      goto LAB_004f813c;
    }
    if (iVar4 < iVar1) {
      *(undefined8 *)(piVar3 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar3 + (long)iVar4 * 2 + 2);
      goto LAB_004f812c;
    }
  }
  *piVar3 = iVar1 + 1;
LAB_004f813c:
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  *(undefined8 *)(piVar3 + (long)(int)lVar2 * 2 + 2) = param_2;
  return;
}


