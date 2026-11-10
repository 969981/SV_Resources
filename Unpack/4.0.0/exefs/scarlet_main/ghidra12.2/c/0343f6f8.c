/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343f6f8; name: FUN_0343f6f8
 */


uint FUN_0343f6f8(long param_1,uint param_2)

{
  ulong uVar1;
  MutexType *pMVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0xa8) == 0)) {
    uVar15 = 0;
  }
  else {
    pMVar2 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e8);
    nn::os::LockMutex(pMVar2);
    puVar5 = PTR_DAT_047e2fd0;
    puVar14 = *(undefined8 **)(param_1 + 0xb0);
    if (puVar14 == (undefined8 *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        plVar9 = (long *)puVar14[1];
        puVar13 = *(undefined8 **)(param_1 + 0xb8);
        uVar8 = *(uint *)(plVar9 + 3);
        uVar4 = *(uint *)(puVar14 + 2);
        if (puVar13 == (undefined8 *)0x0 || puVar14 == puVar13) {
          puVar11 = (undefined8 *)0x0;
          puVar12 = puVar13;
        }
        else {
          puVar12 = puVar13;
          do {
            puVar11 = puVar12;
            puVar12 = (undefined8 *)*puVar11;
          } while (puVar12 != (undefined8 *)0x0 && puVar14 != puVar12);
        }
        iVar3 = uVar8 + uVar15;
        if (puVar12 == (undefined8 *)0x0) {
          uVar10 = uVar4;
        }
        else {
          if (puVar12 == puVar13) {
            *(undefined8 *)(param_1 + 0xb8) = *puVar12;
            puVar13 = puVar14;
          }
          else {
            *puVar11 = *puVar12;
            puVar13 = *(undefined8 **)(param_1 + 0xb0);
          }
          if (puVar13 == puVar12) {
            *(undefined8 **)(param_1 + 0xb0) = puVar11;
          }
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
          plVar9 = (long *)puVar14[1];
          uVar8 = *(uint *)(plVar9 + 3);
          uVar10 = *(uint *)(puVar14 + 2);
        }
        uVar15 = iVar3 - uVar4;
        uVar1 = *plVar9 + (ulong)uVar10;
        uVar4 = *(uint *)(param_1 + 0x90);
        iVar3 = uVar10 - uVar8;
        if (uVar1 < uVar4 && (ulong)uVar4 < *plVar9 + (ulong)uVar8) {
          iVar3 = (int)uVar1 - uVar4;
        }
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar3;
        lVar7 = *(long *)(param_1 + 0x50);
        lVar6 = puVar14[1];
        puVar14[1] = 0;
        if (lVar6 != 0) {
          FUN_03440670(lVar7 + 0x2a8);
        }
        (**(code **)(puVar5 + 0x30))(7,puVar14);
      } while ((uVar15 < param_2) &&
              (puVar14 = *(undefined8 **)(param_1 + 0xb0), puVar14 != (undefined8 *)0x0));
    }
    nn::os::UnlockMutex(pMVar2);
  }
  return uVar15;
}


