/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015eb0b0; name: FUN_015eb0b0
 */


void FUN_015eb0b0(long param_1,ulong *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x460));
  uVar5 = *(ulong *)(param_1 + 0x50);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar7 = uVar4;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      uVar7 = uVar4 - uVar7 * uVar5;
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x48) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_015eb1d8;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_015eb1d8;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_015eb2f8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x460));
  return;
LAB_015eb1d8:
  lVar9 = plVar8[3];
  if ((*(char *)(param_1 + 0x3c) == '\0') && (lVar9 == *(long *)(param_1 + 0x30))) {
    for (plVar8 = *(long **)(param_1 + 0xb0);
        (plVar8 != *(long **)(param_1 + 0xb8) && (lVar10 = *plVar8, *(int *)(lVar10 + 0x20) < 1));
        plVar8 = plVar8 + 1) {
      if ((*(char *)(lVar10 + 0x24) != '\0') && (*(char *)(lVar10 + 0x25) == '\0'))
      goto LAB_015eb234;
    }
    lVar10 = 0;
LAB_015eb234:
    if (((*(char *)(lVar9 + 0x25) == '\0') || (*(int *)(lVar9 + 0x28) != 3)) ||
       (*(long *)(lVar9 + 0x58) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = *(int *)(*(long *)(lVar9 + 0x58) + 0x4c) == 0;
    }
    FUN_0159bf78(auStack_60,param_1 + 0x188,lVar9,lVar10,param_3,bVar3);
    if (lVar10 == 0) {
      FUN_015eb400(lVar9,auStack_60,param_4 & 1);
      if ((param_4 & 1) != 0) goto LAB_015eb2f8;
    }
    else {
      plVar8 = (long *)PTR_DAT_047d8b70;
      if (*(long *)(lVar9 + 0x18) != 0) {
        plVar8 = (long *)(*(long *)(lVar9 + 0x18) + 0x30);
      }
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (*(long *)(lVar10 + 0x18) != 0) {
        plVar1 = (long *)(*(long *)(lVar10 + 0x18) + 0x30);
      }
      if (*plVar8 == *plVar1) {
        local_58 = 0;
      }
      FUN_015eb400(lVar9,auStack_60,param_4 & 1);
      if ((param_4 & 1) != 0) goto LAB_015eb2f8;
      if (*(int *)(param_1 + 0x38) < 1) {
        uVar5 = FUN_015eb3a0(lVar10,auStack_60);
        if ((uVar5 & 1) == 0) {
          do {
            plVar8 = *(long **)(param_1 + 0xb0);
            while( true ) {
              if ((plVar8 == *(long **)(param_1 + 0xb8)) ||
                 (lVar9 = *plVar8, 0 < *(int *)(lVar9 + 0x20))) goto LAB_015eb2f8;
              if ((*(char *)(lVar9 + 0x24) != '\0') && (*(char *)(lVar9 + 0x25) == '\0')) break;
              plVar8 = plVar8 + 1;
            }
            uVar5 = FUN_015eb3a0(lVar9,auStack_60);
          } while ((uVar5 & 1) == 0);
          *(long *)(param_1 + 0x30) = lVar9;
        }
        else {
          *(long *)(param_1 + 0x30) = lVar10;
        }
        goto LAB_015eb2f8;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    FUN_015eb398(lVar9);
  }
  goto LAB_015eb2f8;
}


