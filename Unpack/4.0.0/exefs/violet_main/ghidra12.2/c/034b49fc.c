/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b49fc; name: FUN_034b49fc
 */


void FUN_034b49fc(long param_1,int param_2,long param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  uint uVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  piVar4 = *(int **)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar9 = (ulong)uVar3;
  piVar7 = piVar4;
  if ((uVar3 != 0) && (*piVar4 != param_2)) {
    lVar5 = uVar9 * 0x18;
    piVar8 = piVar4;
    do {
      lVar5 = lVar5 + -0x18;
      if (lVar5 == 0) goto LAB_034b4adc;
      piVar7 = piVar8 + 6;
      piVar1 = piVar8 + 6;
      piVar8 = piVar7;
    } while (*piVar1 != param_2);
  }
  plVar6 = (long *)(piVar7 + 2);
  if (piVar7 == piVar4 + uVar9 * 6) {
LAB_034b4adc:
    piVar7 = piVar4;
    if ((uVar3 != 0) && (*piVar4 != param_2)) {
      lVar5 = uVar9 * 0x18;
      piVar8 = piVar4;
      do {
        lVar5 = lVar5 + -0x18;
        if (lVar5 == 0) goto LAB_034b4b40;
        piVar7 = piVar8 + 6;
        piVar1 = piVar8 + 6;
        piVar8 = piVar7;
      } while (*piVar1 != param_2);
    }
    if (piVar7 == piVar4 + uVar9 * 6) {
LAB_034b4b40:
      uVar10 = *(uint *)(param_1 + 0x1c);
      if (uVar10 <= uVar3) {
        iVar2 = uVar10 + (uVar10 >> 1);
        if (uVar10 == 0) {
          iVar2 = 1;
        }
        uVar10 = iVar2 + uVar10;
        piVar4 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar4,(ulong)uVar10 * 0x18);
        if (piVar4 == (int *)0x0) goto LAB_034b4bb8;
        *(int **)(param_1 + 0x10) = piVar4;
        *(uint *)(param_1 + 0x1c) = uVar10;
      }
      if (uVar10 <= uVar3) goto LAB_034b4bb8;
      uVar3 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar3 + 1;
      if (piVar4 == (int *)0x0) goto LAB_034b4bb8;
      piVar7 = piVar4 + (ulong)uVar3 * 6;
      *piVar7 = param_2;
    }
    plVar6 = (long *)(piVar7 + 2);
    *(undefined8 *)(piVar7 + 4) = *(undefined8 *)param_4;
  }
  else if (*plVar6 == param_3) {
    *(undefined8 *)(piVar7 + 4) = *(undefined8 *)param_4;
  }
  else if (param_4[1] != 2) {
    if (*param_4 < piVar7[4]) {
      piVar7[4] = *param_4;
    }
    if (piVar7[5] != 1) {
      piVar7[5] = param_4[1];
    }
  }
  *plVar6 = param_3;
LAB_034b4bb8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}


