/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e5564; name: FUN_008e5564
 */


undefined8
FUN_008e5564(long param_1,long *param_2,int param_3,int param_4,int param_5,undefined8 param_6,
            undefined8 param_7,uint param_8)

{
  long lVar1;
  MutexType *pMVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x98) + (long)param_4 * 8);
  if (lVar7 == 0) {
    return 0;
  }
  if (*(char *)(lVar7 + 9) == '\0') {
    return 0;
  }
  if (param_3 < *(int *)(lVar7 + 0x4c)) {
    piVar9 = *(int **)(*(long *)(lVar7 + 0x60) + (long)param_3 * 8);
    if (piVar9 == (int *)0x0) {
      iVar11 = 0;
      if (*(long *)(lVar7 + 0x58) != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0x58) + (long)param_3 * 0x38);
        goto LAB_008e55c4;
      }
    }
    else {
LAB_008e55c4:
      iVar11 = *piVar9;
    }
    if (iVar11 <= *(int *)(param_1 + 0x80)) {
LAB_008e55fc:
      iVar4 = *(int *)(param_1 + 0x6c);
      lVar7 = *(long *)(param_1 + 0xa0);
      iVar11 = iVar4;
      if (iVar4 < 2) {
        iVar11 = 1;
      }
      iVar8 = *(int *)(param_1 + 0x74);
      do {
        iVar3 = 0;
        if (iVar8 + 1 < iVar4) {
          iVar3 = iVar8 + 1;
        }
        *(int *)(param_1 + 0x74) = iVar3;
        if (*(char *)(lVar7 + (long)iVar3 * 0x270 + 0xc) == '\0') {
          lVar13 = (long)iVar3;
          lVar12 = lVar7 + lVar13 * 0x270;
          *param_2 = lVar12;
          iVar11 = *(int *)(param_1 + 0x7c);
          *(int *)(param_1 + 0x7c) = iVar11 + 1;
          *(int *)(param_2 + 1) = iVar11;
          uVar6 = FUN_008c9d68(lVar12,param_3,iVar11,param_4,param_5);
          if ((uVar6 & 1) == 0) {
            FUN_008ca534(lVar12);
            return 0;
          }
          if ((param_8 & 1) == 0) {
            plVar10 = (long *)(param_1 + (long)param_5 * 8 + 0xb0);
            if (*plVar10 == 0) {
              *plVar10 = lVar12;
              *(undefined8 *)(lVar7 + lVar13 * 0x270 + 0x1d8) = 0;
            }
            else {
              lVar1 = param_1 + (long)param_5 * 8;
              *(long *)(*(long *)(lVar1 + 0x2b0) + 0x1d0) = lVar12;
              *(undefined8 *)(lVar7 + lVar13 * 0x270 + 0x1d8) = *(undefined8 *)(lVar1 + 0x2b0);
            }
            *(undefined8 *)(lVar7 + lVar13 * 0x270 + 0x1d0) = 0;
            *(long *)(param_1 + (long)param_5 * 8 + 0x2b0) = lVar12;
            return 1;
          }
          pMVar2 = (MutexType *)(param_1 + 0x16e0);
          nn::os::LockMutex(pMVar2);
          nn::os::LockMutex(pMVar2);
          lVar1 = param_1 + (long)param_5 * 8;
          if (*(long *)(lVar1 + 0x4b0) == 0) {
            *(long *)(lVar1 + 0x4b0) = lVar12;
            *(undefined8 *)(lVar7 + lVar13 * 0x270 + 0x1d8) = 0;
          }
          else {
            lVar1 = param_1 + (long)param_5 * 8;
            *(long *)(*(long *)(lVar1 + 0x6b0) + 0x1d0) = lVar12;
            *(undefined8 *)(lVar7 + lVar13 * 0x270 + 0x1d8) = *(undefined8 *)(lVar1 + 0x6b0);
          }
          lVar7 = lVar7 + lVar13 * 0x270;
          *(undefined8 *)(lVar7 + 0x1d0) = 0;
          *(long *)(param_1 + (long)param_5 * 8 + 0x6b0) = lVar12;
          nn::os::UnlockMutex(pMVar2);
          nn::os::UnlockMutex(pMVar2);
          *(undefined1 *)(lVar7 + 0xf) = 1;
          return 1;
        }
        iVar11 = iVar11 + -1;
        iVar8 = iVar3;
      } while (iVar11 != 0);
      pcVar5 = "There is no available EmitterSet instance.\n";
      goto LAB_008e5640;
    }
  }
  else if (*(uint *)(param_1 + 0x80) < 0x80000000) goto LAB_008e55fc;
  *param_2 = 0;
  pcVar5 = "There is no available Emitter instance.\n";
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
LAB_008e5640:
  FUN_008d43e0(pcVar5);
  return 0;
}


