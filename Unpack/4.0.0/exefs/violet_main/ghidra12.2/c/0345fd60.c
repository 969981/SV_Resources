/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345fd60; name: FUN_0345fd60
 */


void FUN_0345fd60(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  MutexType *pMVar11;
  
  plVar10 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if ((param_2 != (long *)0x0) && (lVar5 = *param_2, lVar5 != 0)) {
    plVar6 = (long *)**(long **)PTR_DAT_047e7040;
    uVar2 = *(uint *)(*(long **)PTR_DAT_047e7040 + 1);
    plVar8 = plVar6;
    if ((uVar2 != 0) && (*plVar6 != lVar5)) {
      lVar9 = (ulong)uVar2 * 8;
      plVar7 = plVar6;
      do {
        lVar9 = lVar9 + -8;
        if (lVar9 == 0) {
          plVar8 = plVar6 + uVar2;
          goto LAB_0345fde8;
        }
        plVar8 = plVar7 + 1;
        plVar1 = plVar7 + 1;
        plVar7 = plVar8;
      } while (*plVar1 != lVar5);
    }
LAB_0345fde8:
    if (((plVar8 != (long *)0x0) && (plVar6 + uVar2 != plVar8)) && (*(short *)(lVar5 + 0x40) != -1))
    {
      *(short *)(lVar5 + 0x40) = *(short *)(lVar5 + 0x40) + 1;
      *(long *)(param_1 + 0x50) = *param_2;
      uVar2 = *(uint *)(param_2 + 1);
      *(uint *)(param_1 + 0x58) = uVar2;
      pMVar11 = *(MutexType **)PTR_DAT_047e6f28;
      nn::os::LockMutex(pMVar11);
      uVar3 = *(uint *)(pMVar11 + 0x28);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (lVar5 = *(long *)(*(long *)(pMVar11 + 0x20) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
          if (*(uint *)(lVar5 + 0x10) == uVar2) {
            lVar9 = lVar5 + -8;
            *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
            goto LAB_0345fe78;
          }
        }
      }
      lVar9 = 0;
LAB_0345fe78:
      nn::os::UnlockMutex(pMVar11);
      *(long *)(param_1 + 0xf0) = lVar9;
    }
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0345fea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x30))(plVar10);
  return;
}


