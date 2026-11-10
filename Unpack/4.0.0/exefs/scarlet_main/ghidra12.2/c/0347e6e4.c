/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347e6e4; name: FUN_0347e6e4
 */


undefined8 FUN_0347e6e4(long param_1,long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar9;
  uint *puVar8;
  uint uVar10;
  long lVar11;
  long lVar12;
  
  puVar6 = PTR_DAT_047e6f28;
  puVar8 = (uint *)(param_2 + 5);
  uVar7 = *(byte *)(param_2 + 4) & 0x7f;
  puVar9 = puVar8;
  if ((char)*(byte *)(param_2 + 4) < '\0') {
    do {
      puVar8 = (uint *)((long)puVar9 + 1);
      uVar10 = *puVar9;
      uVar7 = (byte)uVar10 & 0x7f | uVar7 << 7;
      puVar9 = puVar8;
    } while ((char)(byte)uVar10 < '\0');
  }
  if (uVar7 != 0) {
    uVar10 = 0;
    lVar11 = 0;
    do {
      uVar3 = *puVar8;
      if (uVar3 == 0) {
        return 0xe;
      }
      lVar12 = *(long *)puVar6;
      pMVar1 = (MutexType *)(lVar12 + 0xe0);
      nn::os::LockMutex(pMVar1);
      uVar2 = *(uint *)(lVar12 + 0x108);
      if (uVar2 == 0) {
LAB_0347e7d4:
        nn::os::UnlockMutex(pMVar1);
        return 2;
      }
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar3 / uVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0x100) + (ulong)(uVar3 - uVar4 * uVar2) * 8);
      while( true ) {
        if (lVar12 == 0) goto LAB_0347e7d4;
        if (*(uint *)(lVar12 + 0x10) == uVar3) break;
        lVar12 = *(long *)(lVar12 + 8);
      }
      *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
      nn::os::UnlockMutex(pMVar1);
      *(undefined8 *)(lVar12 + 0x18) = 0;
      uVar10 = uVar10 + 1;
      lVar5 = param_1;
      if (lVar11 != 0) {
        lVar5 = lVar11;
      }
      *(long *)(lVar5 + 0x18) = lVar12;
      puVar8 = puVar8 + 1;
      lVar11 = lVar12;
    } while (uVar10 != uVar7);
  }
  return 1;
}


