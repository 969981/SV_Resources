/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03453908; name: FUN_03453908
 */


void FUN_03453908(undefined8 param_1,long param_2,long param_3,long param_4,uint param_5)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  if ((param_4 != 0) && ((param_5 & 1) == 0)) {
    if (*(long *)(param_4 + 0x28) != 0) {
      FUN_034c4b58();
    }
    param_5 = 1;
  }
  puVar5 = PTR_DAT_047e6f28;
  lVar10 = *(long *)(param_2 + 0x18);
  if (lVar10 != 0) {
    if (param_4 == 0) {
      do {
        if (*(short *)(lVar10 + 0x34) == 0x403) {
          plVar7 = (long *)FUN_0344ec90(*(undefined8 *)puVar5,*(undefined4 *)(lVar10 + 0x30),
                                        *(byte *)(lVar10 + 0x36) >> 6 & 1);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x88))();
            pcVar8 = *(code **)(*plVar7 + 0x30);
LAB_03453b78:
            (*pcVar8)(plVar7);
          }
        }
        else if (*(short *)(lVar10 + 0x34) == 0x2103) {
          lVar9 = *(long *)puVar5;
          pMVar1 = (MutexType *)(lVar9 + 0xa8);
          uVar2 = *(uint *)(lVar10 + 0x30);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(lVar9 + 0xd0);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (plVar7 = *(long **)(*(long *)(lVar9 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
              if (*(uint *)(plVar7 + 2) == uVar2) {
                *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar1);
                FUN_03453908(param_1,plVar7,param_3,0,param_5 & 1);
                pcVar8 = *(code **)(*plVar7 + 0x18);
                goto LAB_03453b78;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
        }
        lVar10 = *(long *)(lVar10 + 0x18);
      } while (lVar10 != 0);
    }
    else {
      do {
        if (*(short *)(lVar10 + 0x34) == 0x2103) {
          lVar9 = *(long *)puVar5;
          pMVar1 = (MutexType *)(lVar9 + 0xa8);
          uVar2 = *(uint *)(lVar10 + 0x30);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(lVar9 + 0xd0);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (plVar7 = *(long **)(*(long *)(lVar9 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
              if (*(uint *)(plVar7 + 2) == uVar2) {
                *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar1);
                FUN_03453908(param_1,plVar7,param_3,param_4,param_5 & 1);
                pcVar8 = *(code **)(*plVar7 + 0x18);
                goto LAB_03453a88;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
        }
        else if ((*(short *)(lVar10 + 0x34) == 0x403) &&
                (plVar7 = (long *)FUN_0344ec90(*(undefined8 *)puVar5,*(undefined4 *)(lVar10 + 0x30),
                                               *(byte *)(lVar10 + 0x36) >> 6 & 1),
                plVar7 != (long *)0x0)) {
          iVar6 = (**(code **)(*plVar7 + 0x88))();
          if ((iVar6 - 2U < 4) && (*(long *)PTR_DAT_047e6f60 != 0)) {
            FUN_0344a698(*(long *)PTR_DAT_047e6f60,(int)plVar7[3],*(undefined8 *)(param_4 + 0x78),
                         *(undefined4 *)(param_3 + 0x14),param_3 + 0x1c,
                         *(undefined2 *)(param_3 + 0x1a),*(short *)(param_3 + 0x18) != 0);
          }
          pcVar8 = *(code **)(*plVar7 + 0x30);
LAB_03453a88:
          (*pcVar8)(plVar7);
        }
        lVar10 = *(long *)(lVar10 + 0x18);
      } while (lVar10 != 0);
    }
  }
  return;
}


