/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03473774; name: FUN_03473774
 */


void FUN_03473774(long param_1)

{
  MutexType *pMVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  puVar6 = PTR_DAT_047e6f28;
  plVar8 = *(long **)(param_1 + 0x128);
  do {
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar9 = *(long *)puVar6;
    pMVar1 = (MutexType *)(lVar9 + 0x38);
    uVar3 = *(uint *)(plVar8 + 1);
    nn::os::LockMutex(pMVar1);
    uVar4 = *(uint *)(lVar9 + 0x60);
    if (uVar4 != 0) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar3 / uVar4;
      }
      for (lVar9 = *(long *)(*(long *)(lVar9 + 0x58) + (ulong)(uVar3 - uVar5 * uVar4) * 8);
          lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
        if (*(uint *)(lVar9 + 0x10) == uVar3) {
          plVar7 = (long *)(lVar9 + -8);
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          bVar2 = *(byte *)(param_1 + 0x1bc) & 7;
          if (bVar2 == 2) {
            FUN_0347365c(plVar7,*(undefined4 *)(param_1 + 0x18));
          }
          else if (bVar2 == 1) {
            FUN_0347322c(*(undefined4 *)((long)plVar8 + 0xc),plVar7,*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(plVar8 + 2),*(undefined4 *)(plVar8 + 3),
                         *(undefined4 *)((long)plVar8 + 0x1c));
          }
          else if ((*(byte *)(param_1 + 0x1bc) & 7) == 0) {
            FUN_03473548(plVar7,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)((long)plVar8 + 0x14)
                         ,*(undefined4 *)(plVar8 + 3),*(undefined4 *)((long)plVar8 + 0x1c));
          }
          (**(code **)(*plVar7 + 0x30))(plVar7);
          goto LAB_034737e8;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
LAB_034737e8:
    plVar8 = (long *)*plVar8;
  } while( true );
}


