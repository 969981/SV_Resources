/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d23c0; name: FUN_031d23c0
 */


void FUN_031d23c0(byte param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  MutexType *pMVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  
  lVar4 = tpidr_el0;
  if ((param_2 & 1) != 0) {
    pMVar3 = *(MutexType **)(PTR_DAT_047e4880 + 0x18);
    lVar12 = **(long **)(PTR_DAT_047e4880 + 0x20);
    nn::os::LockMutex(pMVar3);
    if (lVar12 != 0) {
      bVar2 = 0;
      if (param_1 != 0xff) {
        bVar2 = param_1;
      }
      if (bVar2 < 0x20) {
        uVar5 = (ulong)bVar2;
        do {
          lVar10 = *(long *)(lVar12 + 0x3d8);
          lVar9 = *(long *)(lVar4 + 0x1000b8);
          if (lVar9 == 0) {
            lVar9 = FUN_00e5d3b4();
            *(long *)(lVar4 + 0x1000b8) = lVar9;
          }
          uVar1 = *(int *)(lVar9 + 0x3c8) + 1;
          *(uint *)(lVar9 + 0x3c8) = uVar1;
          if (uVar1 < 0x10) {
            lVar7 = *(long *)(lVar9 + 0x3d0);
            plVar6 = (long *)(lVar9 + 0x10 + (ulong)uVar1 * 0x38);
            *plVar6 = lVar7;
            plVar6[1] = 0;
            plVar6[6] = 0;
            plVar6[2] = 0;
            plVar6[3] = 0;
            plVar6[4] = 0;
            plVar6[5] = 0;
            plVar6[1] = *(long *)(lVar7 + 8);
            plVar6[2] = *(long *)(lVar7 + 0x10);
            plVar6[3] = *(long *)(lVar7 + 0x18);
            plVar6[4] = *(long *)(lVar7 + 0x20);
            plVar6[5] = *(long *)(lVar7 + 0x28);
            plVar6[6] = *(long *)(lVar7 + 0x30);
            lVar7 = lVar9 + 0x10 + (long)*(int *)(lVar9 + 0x3c8) * 0x38;
            *(long *)(lVar9 + 0x3d0) = lVar7;
          }
          else {
            lVar7 = *(long *)(lVar9 + 0x3d0);
          }
          *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 8);
          *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x10);
          *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x18);
          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x20);
          *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x28);
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x30);
          if (param_1 == 0xff) {
            puVar11 = (undefined8 *)(lVar10 + uVar5 * 0xe8 + 0xe8);
            uVar13 = uVar5;
            do {
              uVar13 = uVar13 + 1;
              FUN_031d2e9c(puVar11,0xffffffffffffffff,0);
              *(undefined1 *)*puVar11 = 1;
              if (*(int *)((long)puVar11 + 0x1c) == 0) {
                *(undefined8 *)((long)puVar11 + 0x14) = 0;
                *(undefined4 *)((long)puVar11 + 0x1c) = 0;
                if (*(int *)(puVar11 + 2) != 0) {
                  (**(code **)(PTR_PTR_046a5408 + 0x20))
                            (&PTR_PTR_046a5408,puVar11[1],(long)*(int *)(puVar11 + 2) << 3);
                  *(undefined4 *)(puVar11 + 2) = 0;
                  puVar11[1] = 0;
                }
              }
              *(undefined1 *)*puVar11 = 0;
              puVar11 = puVar11 + 0x1d;
            } while (((uint)uVar13 & 0xff) != 0x20);
          }
          else {
            FUN_031d2e9c(lVar10 + uVar5 * 0xe8 + 0xe8,0xffffffffffffffff,0);
          }
          uVar1 = *(int *)(lVar9 + 0x3c8) - 1;
          if ((0 < *(int *)(lVar9 + 0x3c8)) && (*(uint *)(lVar9 + 0x3c8) = uVar1, uVar1 < 0x10)) {
            *(ulong *)(lVar9 + 0x3d0) = lVar9 + (ulong)uVar1 * 0x38 + 0x10;
          }
          lVar12 = *(long *)(lVar12 + 0x528);
        } while (lVar12 != 0);
      }
      else {
        do {
          lVar9 = *(long *)(lVar4 + 0x1000b8);
          if (lVar9 == 0) {
            lVar9 = FUN_00e5d3b4();
            *(long *)(lVar4 + 0x1000b8) = lVar9;
          }
          uVar1 = *(int *)(lVar9 + 0x3c8) + 1;
          *(uint *)(lVar9 + 0x3c8) = uVar1;
          if (uVar1 < 0x10) {
            lVar10 = *(long *)(lVar9 + 0x3d0);
            plVar6 = (long *)(lVar9 + 0x10 + (ulong)uVar1 * 0x38);
            *plVar6 = lVar10;
            plVar6[1] = 0;
            plVar6[6] = 0;
            plVar6[2] = 0;
            plVar6[3] = 0;
            plVar6[4] = 0;
            plVar6[5] = 0;
            plVar6[1] = *(long *)(lVar10 + 8);
            plVar6[2] = *(long *)(lVar10 + 0x10);
            plVar6[3] = *(long *)(lVar10 + 0x18);
            plVar6[4] = *(long *)(lVar10 + 0x20);
            plVar6[5] = *(long *)(lVar10 + 0x28);
            plVar6[6] = *(long *)(lVar10 + 0x30);
            lVar10 = lVar9 + 0x10 + (long)*(int *)(lVar9 + 0x3c8) * 0x38;
            *(long *)(lVar9 + 0x3d0) = lVar10;
          }
          else {
            lVar10 = *(long *)(lVar9 + 0x3d0);
          }
          *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 8);
          *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x10);
          *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x18);
          *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x20);
          *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x28);
          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(*(long *)(lVar12 + 0x3d0) + 0x30);
          uVar1 = *(int *)(lVar9 + 0x3c8) - 1;
          if ((0 < *(int *)(lVar9 + 0x3c8)) && (*(uint *)(lVar9 + 0x3c8) = uVar1, uVar1 < 0x10)) {
            *(ulong *)(lVar9 + 0x3d0) = lVar9 + (ulong)uVar1 * 0x38 + 0x10;
          }
          lVar12 = *(long *)(lVar12 + 0x528);
        } while (lVar12 != 0);
      }
    }
    nn::os::UnlockMutex(pMVar3);
  }
  lVar12 = *(long *)(lVar4 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar4 + 0x1000b8) = lVar12;
  }
  bVar2 = 0;
  if (param_1 != 0xff) {
    bVar2 = param_1;
  }
  if (bVar2 < 0x20) {
    uVar5 = (ulong)bVar2;
    if (param_1 != 0xff) {
      FUN_031d2e9c(*(long *)(lVar12 + 0x3d8) + uVar5 * 0xe8 + 0xe8,0xffffffffffffffff,0);
      return;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar12 + 0x3d8) + uVar5 * 0xe8);
    do {
      uVar5 = uVar5 + 1;
      puVar8 = puVar11 + 0x1d;
      FUN_031d2e9c(puVar8,0xffffffffffffffff,0);
      *(undefined1 *)*puVar8 = 1;
      if (*(int *)((long)puVar11 + 0x104) == 0) {
        *(undefined8 *)((long)puVar11 + 0xfc) = 0;
        *(undefined4 *)((long)puVar11 + 0x104) = 0;
        if (*(int *)(puVar11 + 0x1f) != 0) {
          (**(code **)(PTR_PTR_046a5408 + 0x20))
                    (&PTR_PTR_046a5408,puVar11[0x1e],(long)*(int *)(puVar11 + 0x1f) << 3);
          *(undefined4 *)(puVar11 + 0x1f) = 0;
          puVar11[0x1e] = 0;
        }
      }
      *(undefined1 *)*puVar8 = 0;
      puVar11 = puVar8;
    } while (((uint)uVar5 & 0xff) != 0x20);
  }
  return;
}


