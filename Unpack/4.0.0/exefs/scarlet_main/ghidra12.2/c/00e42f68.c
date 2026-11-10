/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e42f68; name: FUN_00e42f68
 */


void FUN_00e42f68(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  MutexType *pMVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  if (*(char *)(param_1 + 0x32) != '\0') {
    *(undefined8 *)(param_1 + 0x1260) = 0;
    *(undefined8 *)(param_1 + 0x1268) = 0;
    *(undefined8 *)(param_1 + 0x1270) = 0;
    *(undefined8 *)(param_1 + 0x1278) = 0;
    *(undefined8 *)(param_1 + 0x1280) = 0;
    *(undefined8 *)(param_1 + 0x1288) = 0;
    *(undefined4 *)(param_1 + 0x1290) = 0;
    *(undefined8 *)(param_1 + 0x1298) = 0;
    *(undefined8 *)(param_1 + 0x12a0) = 0;
    *(undefined8 *)(param_1 + 0x12a8) = 0;
    *(undefined8 *)(param_1 + 0x12b0) = 0;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_008d45d0();
    FUN_008c9c18(param_1 + 0x14c8);
    if (0 < *(int *)(param_1 + 8)) {
      lVar5 = 0;
      lVar6 = 0x8b8;
      do {
        lVar1 = *(long *)(param_1 + 0x10) + lVar6;
        *(undefined8 *)(lVar1 + -0x7c0) = 0;
        *(undefined8 *)(lVar1 + -0x7b8) = 0;
        lVar5 = lVar5 + 1;
        *(undefined8 *)(lVar1 + -2000) = 0;
        *(undefined8 *)(lVar1 + -0x7c8) = 0;
        *(undefined8 *)(lVar1 + -0x7e0) = 0;
        *(undefined8 *)(lVar1 + -0x7d8) = 0;
        *(undefined8 *)(lVar1 + -0x7f0) = 0;
        *(undefined8 *)(lVar1 + -0x7e8) = 0;
        *(undefined8 *)(lVar1 + -0x800) = 0;
        *(undefined8 *)(lVar1 + -0x7f8) = 0;
        *(undefined8 *)(lVar1 + -0x810) = 0;
        *(undefined8 *)(lVar1 + -0x808) = 0;
        *(undefined8 *)(lVar1 + -0x820) = 0;
        *(undefined8 *)(lVar1 + -0x818) = 0;
        *(undefined8 *)(lVar1 + -0x830) = 0;
        *(undefined8 *)(lVar1 + -0x828) = 0;
        *(undefined8 *)(lVar1 + -0x840) = 0;
        *(undefined8 *)(lVar1 + -0x838) = 0;
        *(undefined8 *)(lVar1 + -0x850) = 0;
        *(undefined8 *)(lVar1 + -0x848) = 0;
        *(undefined8 *)(lVar1 + -0x860) = 0;
        *(undefined8 *)(lVar1 + -0x858) = 0;
        *(undefined8 *)(lVar1 + -0x870) = 0;
        *(undefined8 *)(lVar1 + -0x868) = 0;
        *(undefined8 *)(lVar1 + -0x880) = 0;
        *(undefined8 *)(lVar1 + -0x878) = 0;
        *(undefined8 *)(lVar1 + -0x890) = 0;
        *(undefined8 *)(lVar1 + -0x888) = 0;
        *(undefined8 *)(lVar1 + -0x8a0) = 0;
        *(undefined8 *)(lVar1 + -0x898) = 0;
        *(undefined8 *)(lVar1 + -0x8b0) = 0;
        *(undefined8 *)(lVar1 + -0x8a8) = 0;
        lVar1 = *(long *)(param_1 + 0x10) + lVar6;
        *(undefined8 *)(lVar1 + -0x10) = 0;
        *(undefined8 *)(lVar1 + -8) = 0;
        *(undefined8 *)(lVar1 + -0x20) = 0;
        *(undefined8 *)(lVar1 + -0x18) = 0;
        *(undefined8 *)(lVar1 + -0x30) = 0;
        *(undefined8 *)(lVar1 + -0x28) = 0;
        *(undefined8 *)(lVar1 + -0x40) = 0;
        *(undefined8 *)(lVar1 + -0x38) = 0;
        *(undefined8 *)(lVar1 + -0x50) = 0;
        *(undefined8 *)(lVar1 + -0x48) = 0;
        *(undefined8 *)(lVar1 + -0x60) = 0;
        *(undefined8 *)(lVar1 + -0x58) = 0;
        *(undefined8 *)(lVar1 + -0x70) = 0;
        *(undefined8 *)(lVar1 + -0x68) = 0;
        *(undefined8 *)(lVar1 + -0x80) = 0;
        *(undefined8 *)(lVar1 + -0x78) = 0;
        *(undefined8 *)(lVar1 + -0x90) = 0;
        *(undefined8 *)(lVar1 + -0x88) = 0;
        *(undefined8 *)(lVar1 + -0xa0) = 0;
        *(undefined8 *)(lVar1 + -0x98) = 0;
        *(undefined8 *)(lVar1 + -0xb0) = 0;
        *(undefined8 *)(lVar1 + -0xa8) = 0;
        *(undefined8 *)(lVar1 + -0xc0) = 0;
        *(undefined8 *)(lVar1 + -0xb8) = 0;
        *(undefined8 *)(lVar1 + -0xd0) = 0;
        *(undefined8 *)(lVar1 + -200) = 0;
        *(undefined8 *)(lVar1 + -0xe0) = 0;
        *(undefined8 *)(lVar1 + -0xd8) = 0;
        *(undefined8 *)(lVar1 + -0xf0) = 0;
        *(undefined8 *)(lVar1 + -0xe8) = 0;
        *(undefined8 *)(lVar1 + -0x100) = 0;
        *(undefined8 *)(lVar1 + -0xf8) = 0;
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar6);
        lVar6 = lVar6 + 0x9e8;
        puVar2[0x1e] = 0;
        puVar2[0x1f] = 0;
        puVar2[0x1c] = 0;
        puVar2[0x1d] = 0;
        puVar2[0x1a] = 0;
        puVar2[0x1b] = 0;
        puVar2[0x18] = 0;
        puVar2[0x19] = 0;
        puVar2[0x16] = 0;
        puVar2[0x17] = 0;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      } while (lVar5 < *(int *)(param_1 + 8));
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
    if (0 < *(int *)(param_1 + 0x8b8)) {
      lVar5 = 0;
      do {
        lVar6 = lVar5 * 8;
        FUN_008ca534(*(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar6));
        FUN_008e578c(param_1,*(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar6));
        *(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar6) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x8b8));
    }
    *(undefined4 *)(param_1 + 0x8b8) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
    pMVar3 = (MutexType *)(param_1 + 0x16e0);
    nn::os::LockMutex(pMVar3);
    lVar5 = 0;
    bVar9 = false;
    do {
      lVar6 = lVar5 * 8 + 0x2b0;
      while( true ) {
        lVar1 = param_1 + lVar5 * 8;
        lVar7 = *(long *)(lVar1 + 0x4b0);
        if (*(long *)(lVar1 + 0x4b0) != 0) break;
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 8;
        if (lVar5 == 0x40) {
          nn::os::UnlockMutex(pMVar3);
          if (!bVar9) {
            return;
          }
          goto LAB_00e431d8;
        }
      }
      do {
        lVar8 = *(long *)(lVar7 + 0x1d0);
        if (*(long *)(lVar1 + 0xb0) == 0) {
          *(long *)(lVar1 + 0xb0) = lVar7;
          *(undefined8 *)(lVar7 + 0x1d8) = 0;
        }
        else {
          *(long *)(*(long *)(param_1 + lVar6) + 0x1d0) = lVar7;
          *(undefined8 *)(lVar7 + 0x1d8) = *(undefined8 *)(param_1 + lVar6);
        }
        *(undefined8 *)(lVar7 + 0x1d0) = 0;
        *(long *)(param_1 + lVar6) = lVar7;
        *(undefined1 *)(lVar7 + 0xf) = 0;
        lVar7 = lVar8;
      } while (lVar8 != 0);
      bVar4 = lVar5 != 0x3f;
      lVar5 = lVar5 + 1;
      bVar9 = true;
    } while (bVar4);
    nn::os::UnlockMutex(pMVar3);
LAB_00e431d8:
    memset((void *)(param_1 + 0x4b0),0,0x400);
  }
  return;
}


