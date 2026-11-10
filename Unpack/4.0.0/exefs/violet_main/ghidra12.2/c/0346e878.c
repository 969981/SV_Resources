/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346e878; name: FUN_0346e878
 */


undefined1  [16] FUN_0346e878(undefined1 param_1 [16],long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  ulong uVar9;
  undefined8 uVar10;
  
  uVar10 = param_1._8_8_;
  uVar9 = param_1._0_8_;
  lVar7 = *(long *)(param_2 + 0x140);
  if (lVar7 == 0) {
    uVar2 = *(uint *)(param_2 + 300);
    if (uVar2 != 0) {
      lVar7 = *(long *)PTR_DAT_047e6f28;
      pMVar1 = (MutexType *)(lVar7 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar7 + 0x178);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (lVar7 = *(long *)(*(long *)(lVar7 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          if (*(uint *)(lVar7 + 0x10) == uVar2) {
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            *(long *)(param_2 + 0x140) = lVar7;
            goto LAB_0346e898;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      *(undefined8 *)(param_2 + 0x140) = 0;
    }
  }
  else {
LAB_0346e898:
    uVar5 = (ulong)*(byte *)(lVar7 + 0xd8);
    if ((uVar5 != 0xff) && (lVar6 = *(long *)(lVar7 + uVar5 * 0x18 + 0x30), lVar6 != 0)) {
      uVar9 = (ulong)(uint)(param_1._0_4_ * 0.01 *
                           *(float *)(lVar6 + (ulong)(*(int *)(lVar7 + uVar5 * 0x18 + 0x38) - 2) *
                                              0xc));
      uVar10 = 0;
    }
  }
  auVar8._8_8_ = uVar10;
  auVar8._0_8_ = uVar9;
  return auVar8;
}


