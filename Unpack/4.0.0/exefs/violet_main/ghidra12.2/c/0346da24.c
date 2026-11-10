/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346da24; name: FUN_0346da24
 */


void FUN_0346da24(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(param_1 + 0x140);
  if (plVar6 == (long *)0x0) {
    uVar2 = *(uint *)(param_1 + 300);
    if (uVar2 == 0) goto LAB_0346dafc;
    lVar7 = *(long *)PTR_DAT_047e6f28;
    pMVar1 = (MutexType *)(lVar7 + 0x150);
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(lVar7 + 0x178);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar6 = *(long **)(*(long *)(lVar7 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
        if (*(uint *)(plVar6 + 2) == uVar2) {
          *(int *)((long)plVar6 + 0x14) = *(int *)((long)plVar6 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          *(long **)(param_1 + 0x140) = plVar6;
          goto LAB_0346da44;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
  }
  else {
LAB_0346da44:
    puVar5 = PTR_DAT_047e6fd8;
    if ((int)plVar6[0x1d] != 0) {
      lVar7 = plVar6[0x1c];
      do {
        FUN_034b6c14(*(undefined8 *)puVar5,param_1,*(undefined4 *)(lVar7 + 0xc));
        lVar7 = lVar7 + 0x30;
      } while (lVar7 != plVar6[0x1c] + (ulong)*(uint *)(plVar6 + 0x1d) * 0x30);
      plVar6 = *(long **)(param_1 + 0x140);
    }
    if (plVar6 == (long *)0x0) goto LAB_0346dafc;
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
LAB_0346dafc:
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  *(ushort *)(param_1 + 0x198) = *(ushort *)(param_1 + 0x198) | 0x20;
  return;
}


