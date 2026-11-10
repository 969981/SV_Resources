/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f48b88; name: FUN_02f48b88
 */


void FUN_02f48b88(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  
  puVar3 = PTR_PTR_047d1a50;
  puVar2 = PTR_DAT_047d1a08;
  uVar5 = *(uint *)(param_1 + 0x24);
  uVar6 = (ulong)uVar5;
  if (-1 < (int)uVar5) {
    plVar7 = *(long **)(param_1 + 0x18);
    uVar8 = 0xffffffffffffffff;
    plVar12 = plVar7;
    do {
      if (*plVar12 != -1) {
        uVar10 = (uint)uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      plVar12 = plVar12 + 2;
      uVar10 = uVar5;
    } while (uVar6 != uVar8);
    uVar10 = uVar10 + 1;
    if ((int)uVar10 <= (int)uVar5) {
      do {
        lVar11 = plVar7[(long)(int)uVar10 * 2 + 1];
        if (lVar11 != 0) {
          if (*(long *)(lVar11 + 8) != 0) {
            lVar9 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                 (ulong)*(byte *)(*(long *)(lVar11 + 8) + 0x18) * 0x200 + 0x48))();
            FUN_02f49ee8(lVar9,lVar11,FUN_02f49b6c,0);
            FUN_02f4a18c(lVar9 + 8,lVar11,FUN_02f49ca8,0);
            *(undefined8 *)(lVar11 + 8) = 0;
            *(undefined1 *)(lVar11 + 0x28) = 0;
          }
          *(undefined4 *)(lVar11 + 0x18) = 0;
          if ((-1 < (int)*(uint *)(lVar11 + 0x1c)) && (*(long *)(lVar11 + 0x10) != 0)) {
            (**(code **)(*(long *)puVar3 + 0x20))
                      (puVar3,*(long *)(lVar11 + 0x10),(ulong)*(uint *)(lVar11 + 0x1c) << 2);
          }
          *(undefined8 *)(lVar11 + 0x10) = 0;
          *(undefined4 *)(lVar11 + 0x1c) = 0x80000000;
          (**(code **)(puVar2 + 8))(0,lVar11,0);
          uVar6 = (ulong)*(uint *)(param_1 + 0x24);
        }
        uVar5 = (uint)uVar6;
        uVar1 = uVar5;
        if ((int)uVar5 <= (int)uVar10) {
          uVar1 = uVar10;
        }
        lVar9 = (long)(int)uVar10 * 0x10;
        lVar11 = (long)(int)uVar1 - (long)(int)uVar10;
        do {
          lVar9 = lVar9 + 0x10;
          if (lVar11 == 0) {
            uVar10 = uVar1 + 1;
            break;
          }
          lVar11 = lVar11 + -1;
          uVar10 = uVar10 + 1;
        } while (*(long *)(*(long *)(param_1 + 0x18) + lVar9) == -1);
        if ((int)uVar5 < (int)uVar10) break;
        plVar7 = *(long **)(param_1 + 0x18);
      } while( true );
    }
  }
  puVar3 = PTR_PTR_047d1a50;
  puVar2 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar11 = (long)*(int *)(param_1 + 0x30) << 3;
    plVar12 = *(long **)(param_1 + 0x28);
    do {
      lVar9 = *plVar12;
      if (lVar9 != 0) {
        if (*(long *)(lVar9 + 8) != 0) {
          lVar4 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                               (ulong)*(byte *)(*(long *)(lVar9 + 8) + 0x18) * 0x200 + 0x48))();
          FUN_02f49ee8(lVar4,lVar9,FUN_02f49b6c,0);
          FUN_02f4a18c(lVar4 + 8,lVar9,FUN_02f49ca8,0);
          *(undefined8 *)(lVar9 + 8) = 0;
          *(undefined1 *)(lVar9 + 0x28) = 0;
        }
        *(undefined4 *)(lVar9 + 0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar9 + 0x1c)) && (*(long *)(lVar9 + 0x10) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar9 + 0x10),(ulong)*(uint *)(lVar9 + 0x1c) << 2);
        }
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined4 *)(lVar9 + 0x1c) = 0x80000000;
        (**(code **)(puVar2 + 8))(0,lVar9,0);
      }
      plVar12 = plVar12 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
    uVar5 = *(uint *)(param_1 + 0x24);
  }
  if (0 < (int)uVar5) {
    lVar11 = 0;
    uVar6 = (ulong)(uVar5 + 1);
    do {
      if (*(long *)(*(long *)(param_1 + 0x18) + lVar11) != -1) {
        *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar11) = 0xffffffffffffffff;
      }
      uVar6 = uVar6 - 1;
      lVar11 = lVar11 + 0x10;
    } while (uVar6 != 0);
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


