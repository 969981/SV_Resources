/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e5fa8; name: FUN_018e5fa8
 */


void FUN_018e5fa8(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x7640));
  piVar1 = *(int **)(param_1 + 0xf0);
  lVar5 = *(long *)(param_1 + 0xf8);
  piVar6 = piVar1;
  if (lVar5 != 0) {
    piVar6 = piVar1 + lVar5 * 6;
  }
  if (piVar6 != piVar1) {
    if (((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) && (piVar1[2] == param_2[2])) {
      plVar7 = *(long **)(param_1 + 8);
      uVar8 = *(undefined8 *)(piVar1 + 4);
      iVar2 = piVar1[3];
      uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar8,iVar2,8);
      }
      else {
        FUN_00c48fe8(plVar7,uVar8,iVar2,8);
      }
      piVar4 = *(int **)(param_1 + 0xf0);
      lVar5 = *(long *)(param_1 + 0xf8);
      piVar6 = piVar1 + 6;
      if (piVar6 != piVar4 + lVar5 * 6) {
        memmove(piVar1,piVar6,(long)(piVar4 + lVar5 * 6) - (long)piVar6);
        piVar4 = *(int **)(param_1 + 0xf0);
        lVar5 = *(long *)(param_1 + 0xf8);
      }
      lVar5 = lVar5 + -1;
      *(long *)(param_1 + 0xf8) = lVar5;
      piVar6 = piVar1;
    }
    else {
      piVar6 = piVar1 + 6;
      piVar4 = piVar1;
    }
    piVar1 = piVar4;
    if (lVar5 != 0) {
      piVar1 = piVar4 + lVar5 * 6;
    }
    if (piVar1 != piVar6) {
      do {
        if (((*piVar6 == *param_2) && (piVar6[1] == param_2[1])) && (piVar6[2] == param_2[2])) {
          plVar7 = *(long **)(param_1 + 8);
          uVar8 = *(undefined8 *)(piVar6 + 4);
          iVar2 = piVar6[3];
          uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,uVar8,iVar2,8);
          }
          else {
            FUN_00c48fe8(plVar7,uVar8,iVar2,8);
          }
          piVar4 = *(int **)(param_1 + 0xf0);
          lVar5 = *(long *)(param_1 + 0xf8);
          piVar1 = piVar6 + 6;
          if (piVar1 != piVar4 + lVar5 * 6) {
            memmove(piVar6,piVar1,(long)(piVar4 + lVar5 * 6) - (long)piVar1);
            piVar4 = *(int **)(param_1 + 0xf0);
            lVar5 = *(long *)(param_1 + 0xf8);
          }
          lVar5 = lVar5 + -1;
          *(long *)(param_1 + 0xf8) = lVar5;
        }
        else {
          piVar6 = piVar6 + 6;
        }
        piVar1 = piVar4;
        if (lVar5 != 0) {
          piVar1 = piVar4 + lVar5 * 6;
        }
      } while (piVar1 != piVar6);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7640));
  return;
}


