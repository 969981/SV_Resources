/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c0bec; name: FUN_034c0bec
 */


ulong FUN_034c0bec(long param_1,long param_2,undefined1 *param_3,short *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  ushort *puVar16;
  ushort *puVar17;
  long *plVar18;
  uint uVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  ulong uVar22;
  
  *param_3 = 1;
  plVar18 = *(long **)(param_1 + 0x110);
  if (*(short *)(param_2 + 0x12) == 0) {
    plVar11 = plVar18;
    if (param_4 != (short *)0x0) {
      if ((*(byte *)(param_4 + 1) & 1) == 0) {
LAB_034c0c30:
        *param_3 = 0;
        return 0;
      }
      if ((*(byte *)(param_4 + 1) >> 1 & 1) == 0) {
        sVar8 = *param_4;
        *param_4 = sVar8 + -1;
        if ((short)(sVar8 + -1) == 0) goto LAB_034c0c30;
        plVar11 = *(long **)(param_1 + 0x110);
      }
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))();
    *(undefined2 *)(param_2 + 0x12) = uVar7;
    uVar12 = (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
    sVar8 = (short)uVar12;
    memset(*(void **)(param_2 + 0x28),0,(uVar12 & 0xffffffff) + 7 >> 3);
    *(short *)(param_2 + 0x10) = sVar8;
    if ((*(byte *)(param_1 + 0x144) & 0x30) == 0x10) {
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 8);
      uVar13 = 0;
      if (*(int *)(param_2 + 0x20) != 0) {
        puVar20 = *(undefined2 **)(param_2 + 0x18);
        do {
          puVar21 = puVar20 + 1;
          iVar9 = (**(code **)(*plVar18 + 0x58))(plVar18,*puVar20);
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar9;
          uVar13 = *(uint *)(param_2 + 0x20);
          puVar20 = puVar21;
        } while (puVar21 != (undefined2 *)(*(long *)(param_2 + 0x18) + (ulong)uVar13 * 2));
        sVar8 = *(short *)(param_2 + 0x10);
      }
    }
    else {
      uVar13 = *(uint *)(param_2 + 0x20);
    }
    *(short *)(param_2 + 0x10) = sVar8 - (short)uVar13;
  }
  uVar1 = *(ushort *)(param_1 + 0x145);
  lVar15 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
  *(long *)PTR_DAT_047e7068 = lVar15;
  uVar12 = 0;
  uVar13 = (uint)((ulong)lVar15 >> 0x21);
  if ((uVar1 >> 3 & 1) == 0) {
    uVar1 = *(ushort *)(param_2 + 0x10);
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar13 / uVar1;
    }
    iVar9 = -1;
    do {
      uVar19 = (uint)uVar12;
      if ((*(byte *)(param_1 + 0x144) & 0x30) == 0) {
        if ((*(short *)(param_1 + 0x142) == 0) ||
           ((*(byte *)(*(long *)(param_2 + 0x30) + (uVar12 >> 3 & 0x1fff)) >> (ulong)(uVar19 & 7) &
            1) == 0)) goto LAB_034c0dbc;
      }
      else {
        uVar12 = uVar12 >> 3 & 0x1fff;
        uVar2 = 1 << (ulong)(uVar19 & 7);
        if (((uVar2 & *(byte *)(*(long *)(param_2 + 0x28) + uVar12)) == 0) &&
           ((uVar2 & *(byte *)(*(long *)(param_2 + 0x30) + uVar12)) == 0)) {
LAB_034c0dbc:
          iVar9 = iVar9 + 1;
        }
      }
      uVar19 = uVar19 + 1;
      uVar12 = (ulong)uVar19;
    } while (iVar9 < (int)(uVar13 - uVar4 * uVar1));
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar13 / uVar4;
    }
    iVar9 = -1;
    do {
      uVar19 = (uint)uVar12;
      if ((*(byte *)(param_1 + 0x144) & 0x30) == 0) {
        if ((*(short *)(param_1 + 0x142) == 0) ||
           ((*(byte *)(*(long *)(param_2 + 0x30) + (uVar12 >> 3 & 0x1fff)) >> (ulong)(uVar19 & 7) &
            1) == 0)) goto LAB_034c0e40;
      }
      else {
        uVar22 = uVar12 >> 3 & 0x1fff;
        uVar3 = 1 << (ulong)(uVar19 & 7);
        if (((uVar3 & *(byte *)(*(long *)(param_2 + 0x28) + uVar22)) == 0) &&
           ((uVar3 & *(byte *)(*(long *)(param_2 + 0x30) + uVar22)) == 0)) {
LAB_034c0e40:
          iVar10 = (**(code **)(*plVar18 + 0x58))(plVar18,uVar12);
          iVar9 = iVar10 + iVar9;
        }
      }
      uVar19 = uVar19 + 1;
      uVar12 = (ulong)uVar19;
    } while (iVar9 < (int)(uVar13 - uVar2 * uVar4));
  }
  uVar19 = uVar19 - 1;
  uVar12 = (ulong)uVar19;
  if ((*(byte *)(param_1 + 0x144) & 0x30) == 0) {
    lVar15 = *(long *)(param_2 + 0x28);
    if ((*(byte *)(lVar15 + ((ulong)(uVar19 >> 3) & 0x1fff)) >> (ulong)(uVar19 & 7) & 1) == 0) {
      uVar22 = (ulong)(uVar19 >> 3) & 0x1fff;
      *(byte *)(lVar15 + uVar22) = *(byte *)(lVar15 + uVar22) | (byte)(1 << (uVar12 & 7));
      *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
    }
    FUN_034c0a04(param_1,param_2,uVar19);
    return uVar12;
  }
  uVar1 = *(ushort *)(param_1 + 0x142);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  iVar9 = (**(code **)(*plVar18 + 0x58))(plVar18,uVar12);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar9;
  *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
  uVar22 = (ulong)(uVar19 >> 3) & 0x1fff;
  bVar5 = (byte)(1 << (uVar12 & 7));
  *(byte *)(*(long *)(param_2 + 0x28) + uVar22) =
       *(byte *)(*(long *)(param_2 + 0x28) + uVar22) | bVar5;
  uVar4 = *(uint *)(param_2 + 0x20);
  uVar13 = *(uint *)(param_2 + 0x24);
  if (uVar13 <= uVar4) {
    iVar9 = uVar13 + (uVar13 >> 1);
    if (uVar13 == 0) {
      iVar9 = 1;
    }
    uVar13 = iVar9 + uVar13;
    lVar15 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                       (0,*(undefined8 *)(param_2 + 0x18),(ulong)uVar13 << 1);
    if (lVar15 == 0) goto LAB_034c0fc4;
    *(long *)(param_2 + 0x18) = lVar15;
    *(uint *)(param_2 + 0x24) = uVar13;
  }
  if (uVar4 < uVar13) {
    uVar13 = *(uint *)(param_2 + 0x20);
    *(uint *)(param_2 + 0x20) = uVar13 + 1;
    if (*(long *)(param_2 + 0x18) != 0) {
      *(short *)(*(long *)(param_2 + 0x18) + (ulong)uVar13 * 2) = (short)uVar19;
      *(byte *)(*(long *)(param_2 + 0x30) + uVar22) =
           *(byte *)(*(long *)(param_2 + 0x30) + uVar22) | bVar5;
      sVar8 = (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
      uVar13 = *(uint *)(param_2 + 0x20);
      if ((ushort)(sVar8 - 1U) <= uVar1) {
        uVar1 = sVar8 - 1U;
      }
      if (uVar13 <= uVar1) {
        return uVar12;
      }
      puVar16 = *(ushort **)(param_2 + 0x18);
      uVar1 = *puVar16;
      puVar14 = puVar16 + ((ulong)uVar13 - 1);
      if (puVar16 < puVar14) {
        uVar22 = (ulong)uVar13 * 2 - 3;
        uVar13 = ((uint)(uVar22 >> 1) & 0x7fffffff) + 1;
        if ((uVar13 & 3) != 0) {
          lVar15 = -((ulong)uVar13 & 3);
          puVar17 = puVar16;
          do {
            puVar16 = puVar17 + 1;
            *puVar17 = *puVar16;
            bVar6 = lVar15 != -1;
            lVar15 = lVar15 + 1;
            puVar17 = puVar16;
          } while (bVar6);
        }
        if (5 < uVar22) {
          do {
            puVar17 = puVar16 + 4;
            *(undefined8 *)puVar16 = *(undefined8 *)(puVar16 + 1);
            puVar16 = puVar17;
          } while (puVar17 < puVar14);
        }
        uVar13 = *(uint *)(param_2 + 0x20);
      }
      *(uint *)(param_2 + 0x20) = uVar13 - 1;
      uVar22 = (ulong)(uVar1 >> 3);
      *(byte *)(*(long *)(param_2 + 0x30) + uVar22) =
           *(byte *)(*(long *)(param_2 + 0x30) + uVar22) & ((byte)(1 << ((ulong)uVar1 & 7)) ^ 0xff);
      if ((*(byte *)(*(long *)(param_2 + 0x28) + uVar22) >> (ulong)(uVar1 & 7) & 1) == 0) {
        iVar9 = (**(code **)(*plVar18 + 0x58))(plVar18);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar9;
        *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
        return uVar12;
      }
      return uVar12;
    }
  }
LAB_034c0fc4:
  *(undefined2 *)(param_2 + 0x12) = 0;
  return uVar12;
}


