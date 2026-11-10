/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03226530; name: FUN_03226530
 */


void FUN_03226530(long param_1,int param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  if (param_3 == '\0') {
    if (param_2 != 0) {
      uVar4 = *(uint *)(param_1 + 0x24);
      if ((int)uVar4 < *(int *)(param_1 + 0x20) * 2) {
        FUN_02ef5fd4((long *)(param_1 + 0x18),PTR_PTR_047d1a50,uVar4 * 2 + 2);
        uVar4 = *(uint *)(param_1 + 0x24);
      }
      uVar2 = (param_2 >> 0x1f) * -0x61c8864f;
      uVar1 = (param_2 * -0x61c8864f & 0xff00ff00U) >> 8 | (param_2 * -0x61c8864f & 0xff00ffU) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = uVar1 + (uVar1 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2;
      lVar7 = *(long *)(param_1 + 0x18);
      while( true ) {
        uVar2 = uVar4 & uVar2;
        lVar6 = *(long *)(lVar7 + (ulong)uVar2 * 0x10);
        if (lVar6 == -1) break;
        if (lVar6 == param_2) {
          iVar5 = 0;
          goto LAB_032266a0;
        }
        uVar2 = uVar2 + 1;
      }
      iVar5 = 1;
LAB_032266a0:
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar5;
      *(long *)(lVar7 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4)) =
           (long)param_2;
      *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar2 * 0x10 + 8) = 1;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x24);
    if (0 < (int)uVar4) {
      uVar2 = (param_2 >> 0x1f) * -0x61c8864f;
      uVar1 = (param_2 * -0x61c8864f & 0xff00ff00U) >> 8 | (param_2 * -0x61c8864f & 0xff00ffU) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = uVar4 & (uVar1 + (uVar1 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2);
      uVar3 = (ulong)uVar2;
      lVar7 = *(long *)(*(long *)(param_1 + 0x18) + uVar3 * 0x10);
      if (lVar7 != -1) {
        do {
          if (lVar7 == param_2) goto LAB_032265f4;
          uVar2 = (int)uVar3 + 1U & uVar4;
          uVar3 = (ulong)uVar2;
          lVar7 = *(long *)(*(long *)(param_1 + 0x18) + uVar3 * 0x10);
        } while (lVar7 != -1);
      }
    }
    uVar2 = uVar4 + 1;
LAB_032265f4:
    if ((int)uVar2 <= (int)uVar4) {
      FUN_02ef6198();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  return;
}


