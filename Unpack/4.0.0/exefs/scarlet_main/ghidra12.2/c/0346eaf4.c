/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346eaf4; name: FUN_0346eaf4
 */


undefined1  [16] FUN_0346eaf4(undefined8 param_1,long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined4 local_44;
  
  uVar10 = 0;
  auVar9 = ZEXT816(0);
  if ((*(byte *)(param_2 + 0x13c) >> 6 & 1) != 0) {
    lVar8 = *(long *)(param_2 + 0x140);
    if (lVar8 == 0) {
      uVar2 = *(uint *)(param_2 + 300);
      auVar9 = ZEXT816(0);
      if (uVar2 != 0) {
        lVar8 = *(long *)PTR_DAT_047e6f28;
        pMVar1 = (MutexType *)(lVar8 + 0x150);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(lVar8 + 0x178);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (lVar8 = *(long *)(*(long *)(lVar8 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
              lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
            if (*(uint *)(lVar8 + 0x10) == uVar2) {
              *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              *(long *)(param_2 + 0x140) = lVar8;
              goto LAB_0346eb28;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar10;
        auVar9 = auVar9 << 0x40;
        *(undefined8 *)(param_2 + 0x140) = 0;
      }
    }
    else {
LAB_0346eb28:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar10;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar10;
      uVar10 = (ulong)*(byte *)(lVar8 + 0xdd);
      auVar9 = auVar5 << 0x40;
      if ((uVar10 != 0xff) &&
         (plVar7 = (long *)(lVar8 + uVar10 * 0x18 + 0x30), auVar9 = auVar6 << 0x40, *plVar7 != 0)) {
        lVar8 = lVar8 + uVar10 * 0x18;
        local_44 = *(undefined4 *)(lVar8 + 0x40);
        auVar9 = FUN_03447dcc(param_1,plVar7,&local_44);
        *(undefined4 *)(lVar8 + 0x40) = local_44;
      }
    }
  }
  return auVar9;
}


