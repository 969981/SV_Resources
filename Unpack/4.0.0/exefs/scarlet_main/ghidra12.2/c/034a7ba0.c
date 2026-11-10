/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a7ba0; name: FUN_034a7ba0
 */


int FUN_034a7ba0(undefined8 *param_1,long param_2,int param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_047e2fd0;
  plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x48);
  if (plVar4 != (long *)0x0) {
    lVar5 = *(long *)(param_2 + 0x10);
    *(undefined8 *)((long)plVar4 + 0x1c) = 0;
    puVar2 = PTR_DAT_047e71a8;
    *(undefined8 *)((long)plVar4 + 0x2c) = 0;
    *(undefined4 *)(plVar4 + 7) = 0;
    *(undefined8 *)((long)plVar4 + 0x24) = 0;
    plVar4[8] = lVar5;
    *plVar4 = (long)(puVar2 + 0x10);
    if (lVar5 != 0) {
      uVar6 = *(uint *)(lVar5 + 0x80);
      if (uVar6 < 2) {
        *(uint *)(lVar5 + 0x80) = uVar6 + 1;
        if ((uVar6 != 0) && (*(char *)(lVar5 + 0x84) != '\0')) {
          FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0);
        }
      }
      else {
        *(uint *)(lVar5 + 0x80) = uVar6 + 1;
      }
    }
    iVar3 = FUN_0345fa30(param_4,*param_1,plVar4);
    if ((iVar3 == 1) && (iVar3 = FUN_0345fbc8(param_4,param_1[1],plVar4), iVar3 == 1)) {
      FUN_0345fd60(param_4,param_1[2]);
      iVar3 = (**(code **)(*param_4 + 0x38))(param_4,0xf,*(int *)(param_2 + 0x84) + param_3,0,0);
      if (iVar3 != 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
        (**(code **)(puVar1 + 0x30))(0,plVar4);
        return iVar3;
      }
      plVar4[1] = (long)param_4;
      *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(param_2 + 0x34);
      *(undefined8 *)((long)plVar4 + 0x24) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)((long)plVar4 + 0x2c) = *(undefined4 *)(param_2 + 0x30);
      piVar8 = *(int **)(param_2 + 0x20);
      piVar7 = *(int **)((long)plVar4 + 0x1c);
      if ((piVar7 != (int *)0x0) && (iVar3 = *piVar7, *piVar7 = iVar3 + -1, iVar3 + -1 == 0)) {
        uVar6 = piVar7[1];
        if (uVar6 != 0) {
          uVar9 = 0;
          plVar10 = (long *)(piVar7 + 4);
          do {
            if (*plVar10 != 0) {
              (**(code **)(puVar1 + 0x30))(0);
              uVar6 = piVar7[1];
            }
            uVar9 = uVar9 + 1;
            plVar10 = plVar10 + 4;
          } while (uVar9 < uVar6);
        }
        (**(code **)(puVar1 + 0x30))(0,piVar7);
      }
      if (piVar8 != (int *)0x0) {
        *piVar8 = *piVar8 + 1;
      }
      *(int **)((long)plVar4 + 0x1c) = piVar8;
      FUN_03452a08(*(undefined8 *)PTR_DAT_047e2fe8,plVar4,0,0);
      return 1;
    }
    (**(code **)(*plVar4 + 8))(plVar4);
    (**(code **)(puVar1 + 0x30))(0,plVar4);
  }
  return 0x34;
}


