/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cd368; name: FUN_034cd368
 */


undefined4 FUN_034cd368(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x13c) >> 6 & 1) != 0)) {
    lVar6 = *(long *)(lVar7 + 0x140);
    if (lVar6 == 0) {
      uVar2 = *(uint *)(lVar7 + 300);
      if (uVar2 != 0) {
        lVar6 = *(long *)PTR_DAT_047e6f28;
        pMVar1 = (MutexType *)(lVar6 + 0x150);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(lVar6 + 0x178);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (lVar6 = *(long *)(*(long *)(lVar6 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
              lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
            if (*(uint *)(lVar6 + 0x10) == uVar2) {
              *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              *(long *)(lVar7 + 0x140) = lVar6;
              goto LAB_034cd390;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
        *(undefined8 *)(lVar7 + 0x140) = 0;
      }
    }
    else {
LAB_034cd390:
      uVar5 = (ulong)*(byte *)(lVar6 + 0xd8);
      if ((uVar5 != 0xff) && (lVar7 = *(long *)(lVar6 + uVar5 * 0x18 + 0x30), lVar7 != 0)) {
        uVar5 = (ulong)(*(int *)(lVar6 + uVar5 * 0x18 + 0x38) - 2);
        if (*(float *)(lVar7 + uVar5 * 0xc + 4) <= *(float *)PTR_DAT_047e70f8) {
          uVar8 = *(undefined4 *)(lVar7 + uVar5 * 0xc);
          uVar5 = (ulong)*(byte *)(lVar6 + 0xd9);
          if (uVar5 == 0xff) {
            return uVar8;
          }
          lVar7 = *(long *)(lVar6 + uVar5 * 0x18 + 0x30);
          if (lVar7 == 0) {
            return uVar8;
          }
          if (*(float *)(lVar7 + (ulong)(*(int *)(lVar6 + uVar5 * 0x18 + 0x38) - 2) * 0xc + 4) <=
              *(float *)PTR_DAT_047e70f8) {
            return uVar8;
          }
        }
      }
    }
  }
  return 0x501502f9;
}


