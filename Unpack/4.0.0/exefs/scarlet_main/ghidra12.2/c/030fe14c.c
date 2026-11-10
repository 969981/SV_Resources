/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fe14c; name: FUN_030fe14c
 */


void FUN_030fe14c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(*param_2 + 0x18))(param_2,(long)*(int *)(param_1 + 1) << 4);
      puVar1 = PTR_PTR_047d1a50;
      iVar5 = *(int *)(param_1 + 1);
      if (0 < iVar5) {
        puVar6 = (undefined8 *)*param_1;
        puVar3 = puVar6;
        puVar8 = puVar2;
        iVar7 = iVar5;
        do {
          FUN_01339774(puVar3,puVar1);
          *puVar8 = *puVar3;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar3 + 1);
          *(undefined4 *)((long)puVar8 + 0xc) = *(undefined4 *)((long)puVar3 + 0xc);
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + 2;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3 = puVar3 + 2;
        } while (iVar7 != 0);
        puVar4 = (uint *)((long)puVar6 + 0xc);
        do {
          puVar4[-1] = 0;
          if ((-1 < (int)*puVar4) && (*(long *)(puVar4 + -3) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*(long *)(puVar4 + -3),(ulong)*puVar4 << 2)
            ;
          }
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          iVar5 = iVar5 + -1;
          *puVar4 = 0x80000000;
          puVar4 = puVar4 + 4;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar5;
    }
  }
  return;
}


