/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a1de0; name: FUN_007a1de0
 */


void FUN_007a1de0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined4 local_78;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f));
  nn::os::LockMutex((MutexType *)(param_1 + 0x4a));
  uVar2 = (**(code **)(*param_1 + 0x178))(param_1);
  puVar1 = PTR_DAT_047d0a08;
  lVar6 = 0x270;
  if ((uVar2 & 1) == 0) {
    lVar6 = 0x118;
  }
  plVar5 = *(long **)((long)param_1 + lVar6);
  if (*(short *)((long)param_1 + 0x114e) != 0) {
    uVar2 = 0;
    uVar8 = 0xffffffff;
    do {
      uVar3 = FUN_00796784(*(long *)(param_1[0x11] + uVar2 * 8) + 0x10);
      if ((uVar3 & 1) == 0) {
LAB_007a1e80:
        uVar3 = uVar8;
      }
      else {
        if (*(short *)((long)param_1 + 0x114e) != 0) {
          uVar7 = 0;
          do {
            uVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar7);
            if ((uVar3 & 1) != 0) {
              FUN_00796584(&local_80);
              (**(code **)(*plVar5 + 0x48))(plVar5,uVar7,&local_80);
              uVar3 = FUN_00796784(&local_80);
              if (((uVar3 & 1) != 0) &&
                 (uVar3 = FUN_007967e8(*(long *)(param_1[0x11] + uVar2 * 8) + 0x10,&local_80),
                 (uVar3 & 1) != 0)) goto LAB_007a1e80;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)((long)param_1 + 0x114e));
        }
        uVar4 = FUN_007967e8(param_1 + 0x13,*(long *)(param_1[0x11] + uVar2 * 8) + 0x10);
        uVar3 = uVar2 & 0xffffffff;
        if ((uVar4 & 1) == 0) {
          FUN_007965ac(auStack_a0,*(long *)(param_1[0x11] + uVar2 * 8) + 0x10);
          lVar6 = *(long *)puVar1;
          if ((lVar6 != 0) && ((char)param_1[0x22a] != '\0')) {
            FUN_007cdbbc(lVar6,auStack_a0);
            FUN_007cd7e4(lVar6,auStack_a0,0xffffffff);
          }
          lVar6 = *(long *)(param_1[0x11] + uVar2 * 8);
          *(undefined2 *)(lVar6 + 8) = 0xff00;
          *(undefined1 *)(lVar6 + 10) = 0;
          FUN_007965fc(lVar6 + 0x10);
          goto LAB_007a1e80;
        }
      }
      uVar2 = uVar2 + 1;
      uVar8 = uVar3;
    } while (uVar2 < *(ushort *)((long)param_1 + 0x114e));
    if ((-1 < (int)uVar3) &&
       (uVar2 = FUN_00796784(*(long *)(param_1[0x11] + uVar3 * 8) + 0x10), (uVar2 & 1) != 0)) {
      FUN_007965ac(auStack_c0,*(long *)(param_1[0x11] + uVar3 * 8) + 0x10);
      lVar6 = *(long *)puVar1;
      if ((lVar6 != 0) && ((char)param_1[0x22a] != '\0')) {
        FUN_007cdbbc(lVar6,auStack_c0);
        FUN_007cd7e4(lVar6,auStack_c0,0xffffffff);
      }
      lVar6 = *(long *)(param_1[0x11] + uVar3 * 8);
      *(undefined2 *)(lVar6 + 8) = 0xff00;
      *(undefined1 *)(lVar6 + 10) = 0;
      FUN_007965fc(lVar6 + 0x10);
    }
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  local_78 = 0;
  local_80 = 0x40;
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_80);
  *(undefined1 *)((long)param_1 + 0x24d) = 0;
  *(undefined1 *)((long)param_1 + 0x24b) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4a));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f));
  return;
}


