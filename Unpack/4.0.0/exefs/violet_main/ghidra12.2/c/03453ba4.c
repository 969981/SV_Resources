/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03453ba4; name: FUN_03453ba4
 */


void FUN_03453ba4(undefined8 param_1,long param_2,long param_3,long param_4,uint param_5)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  
  if ((param_4 != 0) && ((param_5 & 1) == 0)) {
    if (*(long *)(param_4 + 0x28) != 0) {
      FUN_034c4b58();
    }
    param_5 = 1;
  }
  puVar6 = PTR_DAT_047e6f60;
  puVar5 = PTR_DAT_047e6f28;
  if (param_2 == 0) {
    if (*(long *)PTR_DAT_047e6f60 != 0) {
      if (param_4 == 0) {
        uVar9 = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(undefined8 *)(param_4 + 0x78);
      }
      FUN_0344aa8c(*(long *)PTR_DAT_047e6f60,0,uVar9,*(undefined4 *)(param_3 + 0x14));
      return;
    }
  }
  else {
    lVar11 = *(long *)(param_2 + 0x18);
    if (lVar11 != 0) {
      if (param_4 == 0) {
        do {
          if (*(short *)(lVar11 + 0x34) == 0x403) {
            plVar7 = (long *)FUN_0344ec90(*(undefined8 *)puVar5,*(undefined4 *)(lVar11 + 0x30),
                                          *(byte *)(lVar11 + 0x36) >> 6 & 1);
            if (plVar7 != (long *)0x0) {
              lVar8 = *(long *)puVar6;
              if (lVar8 != 0) {
                FUN_0344aa8c(lVar8,(int)plVar7[3],0xffffffffffffffff,*(undefined4 *)(param_3 + 0x14)
                            );
              }
              pcVar10 = *(code **)(*plVar7 + 0x30);
LAB_03453e10:
              (*pcVar10)(plVar7);
            }
          }
          else if (*(short *)(lVar11 + 0x34) == 0x2103) {
            lVar8 = *(long *)puVar5;
            pMVar1 = (MutexType *)(lVar8 + 0xa8);
            uVar2 = *(uint *)(lVar11 + 0x30);
            nn::os::LockMutex(pMVar1);
            uVar3 = *(uint *)(lVar8 + 0xd0);
            if (uVar3 != 0) {
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar2 / uVar3;
              }
              for (plVar7 = *(long **)(*(long *)(lVar8 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                  plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
                if (*(uint *)(plVar7 + 2) == uVar2) {
                  *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar1);
                  FUN_03453ba4(param_1,plVar7,param_3,0,param_5 & 1);
                  pcVar10 = *(code **)(*plVar7 + 0x18);
                  goto LAB_03453e10;
                }
              }
            }
            nn::os::UnlockMutex(pMVar1);
          }
          lVar11 = *(long *)(lVar11 + 0x18);
        } while (lVar11 != 0);
      }
      else {
        do {
          if (*(short *)(lVar11 + 0x34) == 0x2103) {
            lVar8 = *(long *)puVar5;
            pMVar1 = (MutexType *)(lVar8 + 0xa8);
            uVar2 = *(uint *)(lVar11 + 0x30);
            nn::os::LockMutex(pMVar1);
            uVar3 = *(uint *)(lVar8 + 0xd0);
            if (uVar3 != 0) {
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar2 / uVar3;
              }
              for (plVar7 = *(long **)(*(long *)(lVar8 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                  plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
                if (*(uint *)(plVar7 + 2) == uVar2) {
                  *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar1);
                  FUN_03453ba4(param_1,plVar7,param_3,param_4,param_5 & 1);
                  pcVar10 = *(code **)(*plVar7 + 0x18);
                  goto LAB_03453cf4;
                }
              }
            }
            nn::os::UnlockMutex(pMVar1);
          }
          else if ((*(short *)(lVar11 + 0x34) == 0x403) &&
                  (plVar7 = (long *)FUN_0344ec90(*(undefined8 *)puVar5,
                                                 *(undefined4 *)(lVar11 + 0x30),
                                                 *(byte *)(lVar11 + 0x36) >> 6 & 1),
                  plVar7 != (long *)0x0)) {
            lVar8 = *(long *)puVar6;
            if (lVar8 != 0) {
              FUN_0344aa8c(lVar8,(int)plVar7[3],*(undefined8 *)(param_4 + 0x78),
                           *(undefined4 *)(param_3 + 0x14));
            }
            pcVar10 = *(code **)(*plVar7 + 0x30);
LAB_03453cf4:
            (*pcVar10)(plVar7);
          }
          lVar11 = *(long *)(lVar11 + 0x18);
        } while (lVar11 != 0);
      }
    }
  }
  return;
}


