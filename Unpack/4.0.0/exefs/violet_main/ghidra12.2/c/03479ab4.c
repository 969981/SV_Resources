/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03479ab4; name: FUN_03479ab4
 */


int FUN_03479ab4(long param_1,int *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    puVar4 = PTR_DAT_047e6f38;
    puVar3 = PTR_DAT_047e2fd0;
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar7 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
LAB_03479b24:
        piVar11 = *(int **)(param_1 + 0x18);
        *param_3 = *(undefined8 *)(piVar11 + 2);
        iVar7 = *piVar11;
        if (iVar7 == 0) goto code_r0x03479b38;
        piVar10 = *(int **)(param_1 + 0xa0);
        if (piVar10 != (int *)0x0) {
          iVar7 = *piVar10;
          *piVar10 = iVar7 + -1;
          if (iVar7 + -1 == 0) {
            uVar6 = piVar10[1];
            if (uVar6 != 0) {
              uVar9 = 0;
              plVar8 = (long *)(piVar10 + 4);
              do {
                if (*plVar8 != 0) {
                  (**(code **)(puVar3 + 0x30))(0);
                  uVar6 = piVar10[1];
                }
                uVar9 = uVar9 + 1;
                plVar8 = plVar8 + 4;
              } while (uVar9 < uVar6);
            }
            (**(code **)(puVar3 + 0x30))(0,piVar10);
          }
          iVar7 = *piVar11;
        }
        *(int *)(param_1 + 0x90) = iVar7;
        *(int *)(param_1 + 0x94) = piVar11[1];
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(piVar11 + 2);
        piVar10 = *(int **)(piVar11 + 4);
        *(int **)(param_1 + 0xa0) = piVar10;
        if (piVar10 != (int *)0x0) {
          *piVar10 = *piVar10 + 1;
        }
        *param_2 = piVar11[1];
        puVar12 = *(undefined4 **)(param_1 + 0x18);
        uVar6 = *(uint *)(param_1 + 0x20);
        puVar2 = puVar12;
        while (puVar2 < puVar12 + (ulong)uVar6 * 6 + -6) {
          piVar11 = *(int **)(puVar2 + 4);
          if ((piVar11 != (int *)0x0) && (iVar7 = *piVar11, *piVar11 = iVar7 + -1, iVar7 + -1 == 0))
          {
            uVar5 = piVar11[1];
            if (uVar5 != 0) {
              uVar9 = 0;
              plVar8 = (long *)(piVar11 + 4);
              do {
                if (*plVar8 != 0) {
                  (**(code **)(puVar3 + 0x30))(0);
                  uVar5 = piVar11[1];
                }
                uVar9 = uVar9 + 1;
                plVar8 = plVar8 + 4;
              } while (uVar9 < uVar5);
            }
            (**(code **)(puVar3 + 0x30))(0,piVar11);
          }
          *puVar2 = puVar2[6];
          puVar2[1] = puVar2[7];
          piVar11 = *(int **)(puVar2 + 10);
          puVar1 = puVar2 + 6;
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar2 + 8);
          *(int **)(puVar2 + 4) = piVar11;
          puVar2 = puVar1;
          if (piVar11 != (int *)0x0) {
            *piVar11 = *piVar11 + 1;
          }
        }
        piVar11 = *(int **)(puVar12 + (ulong)uVar6 * 6 + -2);
        if ((piVar11 != (int *)0x0) && (iVar7 = *piVar11, *piVar11 = iVar7 + -1, iVar7 + -1 == 0)) {
          uVar6 = piVar11[1];
          if (uVar6 != 0) {
            uVar9 = 0;
            plVar8 = (long *)(piVar11 + 4);
            do {
              if (*plVar8 != 0) {
                (**(code **)(puVar3 + 0x30))(0);
                uVar6 = piVar11[1];
              }
              uVar9 = uVar9 + 1;
              plVar8 = plVar8 + 4;
            } while (uVar9 < uVar6);
          }
          (**(code **)(puVar3 + 0x30))(0,piVar11);
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      }
LAB_03479e30:
      iVar7 = *(int *)(param_1 + 0x90);
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 2;
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  return iVar7;
code_r0x03479b38:
  puVar12 = *(undefined4 **)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x20);
  puVar2 = puVar12;
  while (puVar2 < puVar12 + (ulong)uVar6 * 6 + -6) {
    piVar11 = *(int **)(puVar2 + 4);
    if ((piVar11 != (int *)0x0) && (iVar7 = *piVar11, *piVar11 = iVar7 + -1, iVar7 + -1 == 0)) {
      uVar5 = piVar11[1];
      if (uVar5 != 0) {
        uVar9 = 0;
        plVar8 = (long *)(piVar11 + 4);
        do {
          if (*plVar8 != 0) {
            (**(code **)(puVar3 + 0x30))(0);
            uVar5 = piVar11[1];
          }
          uVar9 = uVar9 + 1;
          plVar8 = plVar8 + 4;
        } while (uVar9 < uVar5);
      }
      (**(code **)(puVar3 + 0x30))(0,piVar11);
    }
    *puVar2 = puVar2[6];
    puVar2[1] = puVar2[7];
    piVar11 = *(int **)(puVar2 + 10);
    puVar1 = puVar2 + 6;
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar2 + 8);
    *(int **)(puVar2 + 4) = piVar11;
    puVar2 = puVar1;
    if (piVar11 != (int *)0x0) {
      *piVar11 = *piVar11 + 1;
    }
  }
  piVar11 = *(int **)(puVar12 + (ulong)uVar6 * 6 + -2);
  if ((piVar11 != (int *)0x0) && (iVar7 = *piVar11, *piVar11 = iVar7 + -1, iVar7 + -1 == 0)) {
    uVar6 = piVar11[1];
    if (uVar6 != 0) {
      uVar9 = 0;
      plVar8 = (long *)(piVar11 + 4);
      do {
        if (*plVar8 != 0) {
          (**(code **)(puVar3 + 0x30))(0);
          uVar6 = piVar11[1];
        }
        uVar9 = uVar9 + 1;
        plVar8 = plVar8 + 4;
      } while (uVar9 < uVar6);
    }
    (**(code **)(puVar3 + 0x30))(0,piVar11);
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  FUN_034b3738(*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x6c),0,*param_3);
  if (*(int *)(param_1 + 0x20) == 0) goto LAB_03479e30;
  goto LAB_03479b24;
}


