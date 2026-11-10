/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0340e9e0; name: FUN_0340e9e0
 */


void FUN_0340e9e0(void)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  
  if (DAT_048af280 != 0) {
    lVar9 = *(long *)PTR_DAT_047e2fe8;
    uVar10 = *(uint *)(lVar9 + 0xb0);
    iVar8 = 0;
    do {
      piVar12 = *(int **)(lVar9 + 0xa8);
      piVar3 = piVar12 + (ulong)uVar10 * 8;
      if ((uVar10 != 0) && (*piVar12 != iVar8)) {
        lVar14 = (ulong)uVar10 * 0x20;
        do {
          lVar14 = lVar14 + -0x20;
          if (lVar14 == 0) {
            piVar12 = piVar3;
            break;
          }
          piVar1 = piVar12 + 8;
          piVar11 = piVar12 + 8;
          piVar12 = piVar1;
        } while (*piVar11 != iVar8);
      }
      if (piVar3 != piVar12) {
        if (piVar12 < piVar3 + -8) {
          do {
            piVar11 = piVar12 + 8;
            *(undefined8 *)piVar12 = *(undefined8 *)piVar11;
            *(undefined8 *)(piVar12 + 2) = *(undefined8 *)(piVar12 + 10);
            *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(piVar12 + 0xc);
            *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(piVar12 + 0xe);
            piVar12 = piVar11;
          } while (piVar11 < piVar3 + -8);
          uVar10 = *(uint *)(lVar9 + 0xb0);
        }
        uVar10 = uVar10 - 1;
        *(uint *)(lVar9 + 0xb0) = uVar10;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x13);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    puVar4 = PTR_DAT_047e6d38;
    lVar9 = 0;
    uVar10 = 0;
    do {
      if ((uVar10 >> 3 & 1) != 0) {
        puVar15 = *(undefined8 **)(puVar4 + lVar9 * 0x10);
        puVar13 = (uint *)(puVar4 + lVar9 * 0x10 + 8);
        uVar10 = *puVar13;
        puVar17 = puVar15 + (ulong)uVar10 * 3;
        if ((uVar10 != 0) && ((undefined1 *)*puVar15 != &LAB_0340d1d0)) {
          lVar14 = (ulong)uVar10 * 0x18;
          do {
            lVar14 = lVar14 + -0x18;
            if (lVar14 == 0) {
              puVar15 = puVar17;
              break;
            }
            puVar2 = puVar15 + 3;
            puVar16 = puVar15 + 3;
            puVar15 = puVar2;
          } while ((undefined1 *)*puVar16 != &LAB_0340d1d0);
        }
        if (puVar17 != puVar15) {
          if (puVar15 < puVar17 + -3) {
            do {
              puVar16 = puVar15 + 3;
              *puVar15 = *puVar16;
              puVar15[1] = puVar15[4];
              *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar15 + 5);
              puVar15 = puVar16;
            } while (puVar16 < puVar17 + -3);
            uVar10 = *puVar13;
          }
          *puVar13 = uVar10 - 1;
        }
      }
      puVar5 = PTR_DAT_047e6d30;
      lVar9 = lVar9 + 1;
      uVar10 = 1 << (ulong)((uint)lVar9 & 0x1f);
    } while (lVar9 != 4);
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
    nn::os::LockMutex((MutexType *)puVar5);
    lVar9 = 0;
    uVar10 = 0;
    do {
      if ((uVar10 >> 7 & 1) != 0) {
        puVar15 = *(undefined8 **)(puVar4 + lVar9 * 0x10);
        puVar13 = (uint *)(puVar4 + lVar9 * 0x10 + 8);
        uVar10 = *puVar13;
        puVar17 = puVar15 + (ulong)uVar10 * 3;
        if ((uVar10 != 0) && ((code *)*puVar15 != FUN_0340e9e0)) {
          lVar14 = (ulong)uVar10 * 0x18;
          do {
            lVar14 = lVar14 + -0x18;
            if (lVar14 == 0) {
              puVar15 = puVar17;
              break;
            }
            puVar2 = puVar15 + 3;
            puVar16 = puVar15 + 3;
            puVar15 = puVar2;
          } while ((code *)*puVar16 != FUN_0340e9e0);
        }
        if (puVar17 != puVar15) {
          if (puVar15 < puVar17 + -3) {
            do {
              puVar16 = puVar15 + 3;
              *puVar15 = *puVar16;
              puVar15[1] = puVar15[4];
              *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar15 + 5);
              puVar15 = puVar16;
            } while (puVar16 < puVar17 + -3);
            uVar10 = *puVar13;
          }
          *puVar13 = uVar10 - 1;
        }
      }
      lVar9 = lVar9 + 1;
      uVar10 = 1 << (ulong)((uint)lVar9 & 0x1f);
    } while (lVar9 != 8);
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
    puVar7 = PTR_DAT_047e6cd0;
    puVar6 = PTR_DAT_047e2fd0;
    lVar9 = *(long *)(PTR_DAT_047e6cd0 + 0x10);
    puVar4 = PTR_DAT_047e2fd0;
    puVar5 = PTR_DAT_047e6ce0;
    while( true ) {
      PTR_DAT_047e2fd0 = puVar4;
      PTR_DAT_047e6ce0 = puVar5;
      if (lVar9 == 0) break;
      lVar14 = *(long *)(lVar9 + 8);
      puVar15 = *(undefined8 **)(lVar14 + 0x60);
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15);
        (**(code **)(puVar6 + 0x30))(4,puVar15);
        *(undefined8 *)(lVar14 + 0x60) = 0;
        lVar9 = *(long *)(puVar7 + 0x10);
        puVar4 = PTR_DAT_047e2fd0;
        puVar5 = PTR_DAT_047e6ce0;
      }
    }
    lVar9 = *(long *)(puVar5 + 0x10);
    lVar14 = DAT_048af280;
    while (DAT_048af280 = lVar14, lVar9 != 0) {
      lVar18 = *(long *)(lVar9 + 8);
      puVar15 = *(undefined8 **)(lVar18 + 0x68);
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15);
        (**(code **)(puVar4 + 0x30))(4,puVar15);
        *(undefined8 *)(lVar18 + 0x68) = 0;
        lVar9 = *(long *)(puVar5 + 0x10);
        lVar14 = DAT_048af280;
      }
    }
    if (lVar14 != 0) {
      nn::os::FinalizeMutex((MutexType *)(lVar14 + 0xd0));
      if (*(long *)(lVar14 + 0xb0) != 0) {
        *(undefined4 *)(lVar14 + 0xb8) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
        *(undefined8 *)(lVar14 + 0xb0) = 0;
        *(undefined4 *)(lVar14 + 0xbc) = 0;
      }
      if (*(long *)(lVar14 + 0xa0) != 0) {
        *(undefined4 *)(lVar14 + 0xa8) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
        *(undefined8 *)(lVar14 + 0xa0) = 0;
        *(undefined4 *)(lVar14 + 0xac) = 0;
      }
      if (*(long *)(lVar14 + 0x90) != 0) {
        *(undefined4 *)(lVar14 + 0x98) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
        *(undefined8 *)(lVar14 + 0x90) = 0;
        *(undefined4 *)(lVar14 + 0x9c) = 0;
      }
      FUN_034141a0(lVar14);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,lVar14);
    }
    lVar9 = DAT_048af308;
    DAT_048af280 = 0;
    if (DAT_048af308 != 0) {
      nn::os::FinalizeMutex((MutexType *)(DAT_048af308 + 0x28));
      if (*(long *)(lVar9 + 0x10) != 0) {
        *(undefined4 *)(lVar9 + 0x18) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined4 *)(lVar9 + 0x1c) = 0;
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,DAT_048af308);
      DAT_048af308 = 0;
    }
    *PTR_DAT_047e6d40 = 0;
  }
  return;
}


