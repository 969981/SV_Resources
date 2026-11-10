/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008daf64; name: FUN_008daf64
 */


void FUN_008daf64(long param_1,long param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((param_2 == 0) || (*(uint *)(param_2 + 8) == 0xffffffff)) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar10 = 0;
    piVar17 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
    do {
      puVar1 = (uint *)(piVar17 + 3);
      if (*piVar17 == 0x4d495250) {
        uVar10 = uVar10 + 1;
      }
      piVar15 = (int *)((long)piVar17 + (ulong)*puVar1);
      piVar17 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar17 = piVar15;
      }
    } while (piVar17 != (int *)0x0);
    *(uint *)(param_1 + 0x68) = uVar10;
    if (uVar10 != 0) {
      lVar13 = (ulong)uVar10 * 0x98 + 0x20;
      plVar7 = (long *)(**(code **)(**(long **)(param_1 + 0x458) + 0x10))
                                 (*(long **)(param_1 + 0x458),lVar13,0x80);
      *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + lVar13;
      iVar16 = *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
      *(long **)(param_1 + 0x70) = plVar7;
      puVar3 = PTR_DAT_047d25c8;
      if (iVar16 != 0) {
        uVar12 = (long)iVar16 * 0x98 - 0x98;
        uVar10 = ((uint)(uVar12 / 0x98) & 0x1ffffff) + 1;
        plVar11 = plVar7;
        if ((uVar10 & 3) != 0) {
          lVar13 = -((ulong)uVar10 & 3);
          puVar2 = PTR_DAT_047d25c8 + 0x10;
          do {
            *plVar11 = (long)puVar2;
            bVar6 = lVar13 != -1;
            lVar13 = lVar13 + 1;
            *(undefined1 *)(plVar11 + 1) = 0;
            *(undefined8 *)((long)plVar11 + 0xc) = 0;
            *(undefined8 *)((long)plVar11 + 0x14) = 0;
            *(undefined8 *)((long)plVar11 + 0x1c) = 0;
            *(undefined8 *)((long)plVar11 + 0x24) = 0;
            *(undefined8 *)((long)plVar11 + 0x2c) = 0;
            *(undefined8 *)((long)plVar11 + 0x34) = 0;
            *(undefined8 *)((long)plVar11 + 0x3c) = 0;
            *(undefined8 *)((long)plVar11 + 0x44) = 0;
            *(undefined8 *)((long)plVar11 + 0x4c) = 0;
            *(undefined4 *)((long)plVar11 + 0x54) = 0;
            plVar11 = plVar11 + 0x13;
          } while (bVar6);
        }
        if (0x1c7 < uVar12) {
          puVar3 = puVar3 + 0x10;
          do {
            *plVar11 = (long)puVar3;
            *(undefined1 *)(plVar11 + 1) = 0;
            *(undefined8 *)((long)plVar11 + 0xc) = 0;
            *(undefined8 *)((long)plVar11 + 0x14) = 0;
            *(undefined8 *)((long)plVar11 + 0x1c) = 0;
            *(undefined8 *)((long)plVar11 + 0x24) = 0;
            *(undefined8 *)((long)plVar11 + 0x2c) = 0;
            *(undefined8 *)((long)plVar11 + 0x34) = 0;
            *(undefined8 *)((long)plVar11 + 0x3c) = 0;
            *(undefined8 *)((long)plVar11 + 0x44) = 0;
            *(undefined8 *)((long)plVar11 + 0x4c) = 0;
            *(undefined4 *)((long)plVar11 + 0x54) = 0;
            plVar11[0x13] = (long)puVar3;
            *(undefined1 *)(plVar11 + 0x14) = 0;
            *(undefined8 *)((long)plVar11 + 0xa4) = 0;
            *(undefined8 *)((long)plVar11 + 0xac) = 0;
            *(undefined8 *)((long)plVar11 + 0xb4) = 0;
            *(undefined8 *)((long)plVar11 + 0xbc) = 0;
            *(undefined8 *)((long)plVar11 + 0xc4) = 0;
            *(undefined8 *)((long)plVar11 + 0xcc) = 0;
            *(undefined8 *)((long)plVar11 + 0xd4) = 0;
            *(undefined8 *)((long)plVar11 + 0xdc) = 0;
            *(undefined8 *)((long)plVar11 + 0xe4) = 0;
            *(undefined4 *)((long)plVar11 + 0xec) = 0;
            plVar11[0x26] = (long)puVar3;
            *(undefined1 *)(plVar11 + 0x27) = 0;
            *(undefined8 *)((long)plVar11 + 0x13c) = 0;
            *(undefined8 *)((long)plVar11 + 0x144) = 0;
            *(undefined8 *)((long)plVar11 + 0x14c) = 0;
            *(undefined8 *)((long)plVar11 + 0x154) = 0;
            *(undefined8 *)((long)plVar11 + 0x15c) = 0;
            *(undefined8 *)((long)plVar11 + 0x164) = 0;
            *(undefined8 *)((long)plVar11 + 0x16c) = 0;
            *(undefined8 *)((long)plVar11 + 0x174) = 0;
            *(undefined8 *)((long)plVar11 + 0x17c) = 0;
            *(undefined4 *)((long)plVar11 + 0x184) = 0;
            plVar11[0x39] = (long)puVar3;
            *(undefined1 *)(plVar11 + 0x3a) = 0;
            *(undefined8 *)((long)plVar11 + 0x1d4) = 0;
            *(undefined8 *)((long)plVar11 + 0x1dc) = 0;
            *(undefined8 *)((long)plVar11 + 0x1e4) = 0;
            *(undefined8 *)((long)plVar11 + 0x1ec) = 0;
            *(undefined8 *)((long)plVar11 + 500) = 0;
            *(undefined8 *)((long)plVar11 + 0x1fc) = 0;
            *(undefined8 *)((long)plVar11 + 0x204) = 0;
            *(undefined8 *)((long)plVar11 + 0x20c) = 0;
            puVar4 = (undefined8 *)((long)plVar11 + 0x214);
            *(undefined4 *)((long)plVar11 + 0x21c) = 0;
            plVar11 = plVar11 + 0x4c;
            *puVar4 = 0;
          } while (plVar11 != plVar7 + (long)iVar16 * 0x13);
        }
      }
      *(long **)(param_1 + 0x78) = plVar7;
      if (*(uint *)(param_2 + 8) == 0xffffffff) {
        piVar17 = (int *)0x0;
      }
      else {
        piVar17 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
        do {
          if (*piVar17 == 0x4d495250) break;
          puVar1 = (uint *)(piVar17 + 3);
          piVar15 = (int *)((long)piVar17 + (ulong)*puVar1);
          piVar17 = (int *)0x0;
          if (*puVar1 != 0xffffffff) {
            piVar17 = piVar15;
          }
        } while (piVar17 != (int *)0x0);
      }
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      local_60 = 0;
      uStack_58 = 0;
      FUN_008f0470(&local_60);
      local_60 = CONCAT44(4,(undefined4)local_60);
      lVar8 = FUN_008f06e0(uVar14,&local_60);
      lVar13 = 0;
      if (piVar17 != (int *)0x0) {
        piVar15 = piVar17;
        do {
          lVar9 = FUN_008dc504(piVar15);
          lVar13 = (lVar8 + -1 + lVar9 & -lVar8) + lVar13;
          puVar1 = (uint *)(piVar15 + 3);
          piVar5 = (int *)((long)piVar15 + (ulong)*puVar1);
          piVar15 = (int *)0x0;
          if (*puVar1 != 0xffffffff) {
            piVar15 = piVar5;
          }
        } while (piVar15 != (int *)0x0);
      }
      lVar8 = param_1 + 0x2a0;
      uVar12 = FUN_008ee488(lVar8,*(undefined8 *)(param_1 + 0x10),param_1 + 0x450,4,lVar13);
      if ((uVar12 & 1) != 0) {
        FUN_008f0980(lVar8,param_1 + 0x430);
      }
      *(undefined8 *)(param_1 + 0x440) = 0;
      uVar14 = FUN_008f0928(lVar8);
      *(undefined8 *)(param_1 + 0x448) = uVar14;
      if (piVar17 != (int *)0x0) {
        lVar13 = 0;
        iVar16 = 0;
        do {
          uVar12 = FUN_008dc588(*(long *)(param_1 + 0x78) + lVar13,lVar8,piVar17);
          if ((uVar12 & 1) == 0) {
            FUN_008d43e0("Faild to initialize primitive: Index %d \n",iVar16);
            uVar10 = piVar17[3];
          }
          else {
            *(ulong *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + (ulong)(uint)piVar17[1];
            uVar10 = piVar17[3];
          }
          if (uVar10 == 0xffffffff) break;
          iVar16 = iVar16 + 1;
          lVar13 = lVar13 + 0x98;
          bVar6 = piVar17 != (int *)0x0;
          piVar17 = (int *)((long)piVar17 + (ulong)uVar10);
        } while (bVar6);
      }
      FUN_008f0940(lVar8,0,*(undefined8 *)(param_1 + 0x2e8));
      FUN_008f093c(lVar8);
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}


