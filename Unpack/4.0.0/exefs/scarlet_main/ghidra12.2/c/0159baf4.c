/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159baf4; name: FUN_0159baf4
 */


void FUN_0159baf4(long param_1,ulong *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x460));
  uVar7 = *(ulong *)(param_1 + 0x50);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar5;
    }
    else if (uVar5 < uVar7) {
      uVar9 = uVar5;
    }
    else {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar5 / uVar7;
      }
      uVar9 = uVar5 - uVar9 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x48) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar5) {
            if (plVar10[2] == uVar5) goto LAB_0159bc1c;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar5) {
            if (plVar10[2] == uVar5) goto LAB_0159bc1c;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar2 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  goto LAB_0159bcf0;
LAB_0159bc1c:
  lVar12 = plVar10[3];
  if (*(char *)(param_1 + 0x3c) == '\0') {
    plVar10 = *(long **)(param_1 + 0xb0);
    do {
      if (plVar10 == *(long **)(param_1 + 0xb8)) {
        iVar6 = 0;
        goto LAB_0159bc54;
      }
      lVar11 = *plVar10;
      plVar10 = plVar10 + 1;
    } while (*(int *)(lVar11 + 0x20) < 1);
    iVar6 = *(int *)(lVar11 + 8);
LAB_0159bc54:
    if (iVar6 < *(int *)(lVar12 + 8)) {
      lVar11 = *(long *)(param_1 + 0x30);
      bVar3 = false;
      if ((lVar11 != 0) && (lVar11 != lVar12)) {
        if (*(int *)(lVar12 + 8) < *(int *)(lVar11 + 8)) goto LAB_0159bd58;
        bVar3 = true;
      }
      if ((((lVar11 == 0) || (*(char *)(lVar11 + 0x25) == '\0')) || (*(int *)(lVar11 + 0x28) != 3))
         || (*(long *)(lVar11 + 0x58) == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(*(long *)(lVar11 + 0x58) + 0x4c) == 0;
      }
      FUN_0159bf78(auStack_60,param_1 + 0x188,lVar11,lVar12,param_3,bVar4);
      if (bVar3) {
        lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
        plVar10 = (long *)PTR_DAT_047d8b70;
        if (lVar11 != 0) {
          plVar10 = (long *)(lVar11 + 0x30);
        }
        plVar1 = (long *)PTR_DAT_047d8b70;
        if (*(long *)(lVar12 + 0x18) != 0) {
          plVar1 = (long *)(*(long *)(lVar12 + 0x18) + 0x30);
        }
        if (*plVar10 == *plVar1) {
          local_58 = 0;
        }
        FUN_0159d18c(*(long *)(param_1 + 0x30),auStack_60);
      }
      if (*(int *)(param_1 + 0x38) < 1) {
        uVar7 = FUN_0159bdf0(lVar12,auStack_60,param_4 & 1);
        if ((uVar7 & 1) == 0) {
          lVar12 = *(long *)(param_1 + 0x30);
          if (((lVar12 != 0) && (*(char *)(lVar12 + 0x24) != '\0')) &&
             (*(char *)(lVar12 + 0x25) == '\0')) {
            FUN_015eb3a0(lVar12,auStack_60);
          }
          goto LAB_0159bcf0;
        }
      }
      else {
        FUN_0159bdb4(lVar12,param_4 & 1);
      }
      *(long *)(param_1 + 0x30) = lVar12;
      goto LAB_0159bcf0;
    }
  }
LAB_0159bd58:
  FUN_0159bdb4(lVar12,param_4 & 1);
LAB_0159bcf0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x460));
  return;
}


