/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0194f040; name: FUN_0194f040
 */


void FUN_0194f040(long param_1,ulong *param_2,uint param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
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
            if (plVar8[2] == uVar4) goto LAB_0194f160;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_0194f160;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_0194f1f8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x460));
  return;
LAB_0194f160:
  lVar9 = plVar8[3];
  FUN_0194f298(lVar9,param_3 & 1);
  if ((*(int *)(lVar9 + 0x20) < 1) && (*(int *)(param_1 + 0x38) < 1)) {
    plVar8 = *(long **)(param_1 + 0xb0);
    while( true ) {
      if ((plVar8 == *(long **)(param_1 + 0xb8)) || (lVar9 = *plVar8, 0 < *(int *)(lVar9 + 0x20)))
      goto LAB_0194f1f8;
      if ((*(char *)(lVar9 + 0x24) != '\0') && (*(char *)(lVar9 + 0x25) == '\0')) break;
      plVar8 = plVar8 + 1;
    }
    FUN_029a5d18(&local_50,param_1 + 0x188,lVar9);
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      if (*(int *)(lVar9 + 8) <= *(int *)(lVar3 + 8)) goto LAB_0194f1f8;
      if (((*(char *)(lVar3 + 0x25) == '\0') || (*(int *)(lVar3 + 0x28) != 3)) ||
         (*(long *)(lVar3 + 0x58) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = *(int *)(*(long *)(lVar3 + 0x58) + 0x4c) == 0;
      }
      FUN_0159bf78(&local_70,param_1 + 0x188,lVar3,lVar9,0,bVar2);
      local_50 = local_70;
      uStack_48 = uStack_68;
      local_40 = local_60;
      local_38 = local_58;
      FUN_0159d18c(*(undefined8 *)(param_1 + 0x30),&local_50);
    }
    uVar5 = FUN_015eb3a0(lVar9,&local_50);
    if ((uVar5 & 1) == 0) {
      lVar9 = 0;
    }
    *(long *)(param_1 + 0x30) = lVar9;
  }
  goto LAB_0194f1f8;
}


