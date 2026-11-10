/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a05ec; name: FUN_007a05ec
 */


uint FUN_007a05ec(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  
  uVar4 = *(ushort *)(param_1 + 0x114e);
  if (uVar4 != 0) {
    lVar9 = *(long *)(param_1 + 0x88);
    uVar7 = (uint)uVar4;
    if (uVar4 < 2) {
      uVar7 = 1;
    }
    uVar12 = (ulong)uVar7;
    uVar8 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      plVar10 = (long *)(lVar9 + 0x10);
      do {
        *(undefined1 *)(plVar10[-2] + 9) = 0xff;
        *(undefined1 *)(plVar10[-1] + 9) = 0xff;
        *(undefined1 *)(*plVar10 + 9) = 0xff;
        plVar1 = plVar10 + 1;
        uVar11 = uVar11 + 4;
        plVar10 = plVar10 + 4;
        *(undefined1 *)(*plVar1 + 9) = 0xff;
      } while ((uVar12 & 0xfffc) != uVar11);
    }
    if ((uVar7 & 3) != 0) {
      plVar10 = (long *)(lVar9 + uVar11 * 8);
      do {
        uVar8 = uVar8 - 1;
        *(undefined1 *)(*plVar10 + 9) = 0xff;
        plVar10 = plVar10 + 1;
      } while (uVar8 != 0);
    }
  }
  uVar8 = FUN_007a0514(param_1,param_2);
  if (*(short *)(param_1 + 0x114e) == 0) {
    uVar7 = 0xff;
  }
  else {
    uVar14 = 0;
    uVar13 = 0xff;
    do {
      uVar12 = 0;
      uVar15 = 0xffffffff;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar6 = FUN_00796784(*(long *)(*(long *)(param_1 + 0x88) + uVar12 * 8) + 0x10);
        if ((((uVar6 & 1) != 0) &&
            (lVar9 = *(long *)(*(long *)(param_1 + 0x88) + uVar12 * 8), *(char *)(lVar9 + 9) == -1))
           && (uVar6 = FUN_007967e8(lVar9 + 0x10,param_2), (uVar6 & 1) == 0)) {
          uVar6 = FUN_007a0514(uVar6,*(long *)(*(long *)(param_1 + 0x88) + uVar12 * 8) + 0x10);
          uVar7 = (uint)uVar12;
          uVar5 = uVar6;
          if (uVar11 <= uVar6) {
            uVar7 = (uint)uVar15;
            uVar5 = uVar11;
          }
          uVar11 = uVar5;
          uVar15 = (ulong)uVar7;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(param_1 + 0x114e));
      if ((int)uVar15 == -1) {
        if (((uVar13 ^ 0xffffffff) & 0xff) != 0) {
          uVar14 = uVar13;
        }
        return uVar14;
      }
      uVar11 = -(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3;
      uVar12 = FUN_007a0514(uVar6,*(long *)(*(long *)(param_1 + 0x88) + uVar11) + 0x10);
      uVar3 = (uint)(((uVar13 ^ 0xffffffff) & 0xff) == 0 && uVar8 < uVar12);
      iVar2 = uVar14 + uVar3;
      uVar7 = uVar14;
      if (uVar3 == 0) {
        uVar7 = uVar13;
      }
      uVar14 = iVar2 + 1;
      *(char *)(*(long *)(*(long *)(param_1 + 0x88) + uVar11) + 9) = (char)iVar2;
      uVar13 = uVar7;
    } while ((uVar14 & 0xff) < (uint)*(ushort *)(param_1 + 0x114e));
  }
  return uVar7;
}


