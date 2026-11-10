/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0326fcb0; name: FUN_0326fcb0
 */


void FUN_0326fcb0(long param_1,long param_2,ulong *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  int iVar21;
  ulong *puVar22;
  long local_100 [20];
  
  uVar5 = (ulong)param_6;
  uVar19 = uVar5 * 2;
  puVar22 = param_3;
  if (((ulong)param_3 & 0xf) != 0) {
    uVar6 = 4 - (((ulong)param_3 & 0xf) >> 2);
    uVar7 = uVar19;
    if (uVar6 <= uVar19) {
      uVar7 = uVar6;
    }
    puVar20 = (ulong *)((long)param_3 + uVar7 * 4);
    uVar19 = uVar19 - uVar7;
    if (param_3 < puVar20) {
      memset(param_3,0,uVar7 * 4);
      uVar7 = uVar7 * 4 - 1;
      uVar1 = ((uint)(uVar7 >> 2) & 0x3fffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar8 = -((ulong)uVar1 & 7);
        do {
          puVar22 = (ulong *)((long)puVar22 + 4);
          bVar4 = lVar8 != -1;
          lVar8 = lVar8 + 1;
        } while (bVar4);
      }
      if (0x1b < uVar7) {
        do {
          puVar22 = puVar22 + 4;
        } while (puVar22 < puVar20);
      }
    }
  }
  if ((3 < uVar19) && (0 < (long)(uVar19 & 0xfffffffffffffffc))) {
    puVar20 = (ulong *)((long)puVar22 + (uVar19 & 0xfffffffffffffffc) * 4);
    puVar13 = puVar20;
    if (puVar20 <= puVar22 + 2) {
      puVar13 = puVar22 + 2;
    }
    memset(puVar22,0,(long)puVar13 + ~(ulong)puVar22 + 0x10 & 0xfffffffffffffff0);
    do {
      puVar22 = puVar22 + 2;
    } while (puVar22 < puVar20);
  }
  if (puVar22 < param_3 + param_6) {
    memset(puVar22,0,(long)(param_3 + param_6) + ~(ulong)puVar22 + 4 & 0xfffffffffffffffc);
  }
  if (param_4 != 0) {
    uVar19 = 0;
    puVar22 = (ulong *)((ulong)local_100 | 8);
    uVar7 = uVar5;
    puVar20 = param_3;
    do {
      puVar20 = puVar20 + 1;
      uVar6 = *(ulong *)(param_1 + uVar19 * 8);
      uVar1 = param_5;
      if ((uint)uVar7 <= param_5) {
        uVar1 = (uint)uVar7;
      }
      memset(local_100,0,0x90);
      iVar21 = (int)uVar19;
      uVar3 = param_5;
      if (param_6 - iVar21 <= param_5) {
        uVar3 = param_6 - iVar21;
      }
      if (uVar3 == 0) {
        uVar9 = 0;
        uVar16 = 0;
      }
      else {
        uVar11 = 0;
        uVar9 = 0;
        uVar12 = uVar6 >> 0x20;
        uVar6 = uVar6 & 0xffffffff;
        uVar17 = 0;
        do {
          uVar15 = *(ulong *)(param_2 + uVar11 * 8);
          uVar16 = uVar15 & 0xffffffff;
          uVar15 = uVar15 >> 0x20;
          uVar18 = uVar16 * uVar6;
          uVar2 = uVar16 * uVar12 + (uVar18 >> 0x20);
          uVar16 = uVar15 * uVar6 + (uVar2 & 0xffffffff);
          uVar18 = uVar18 & 0xffffffff | uVar16 << 0x20;
          uVar16 = uVar15 * uVar12 + (uVar2 >> 0x20) + (uVar16 >> 0x20);
          iVar10 = (int)uVar11;
          uVar11 = uVar11 + 1;
          uVar2 = uVar18 + uVar17;
          local_100[(uint)(iVar21 + iVar10)] = uVar2 + uVar9;
          uVar9 = (ulong)(CARRY8(uVar18,uVar17) || CARRY8(uVar2,uVar9));
          uVar17 = uVar16;
        } while (uVar1 != uVar11);
      }
      local_100[uVar3 + iVar21] = uVar16 + uVar9;
      local_100[uVar3 + iVar21 + 1] = 0;
      if (uVar19 < uVar5) {
        if (~uVar19 == -uVar5) {
          uVar6 = 0;
          uVar16 = uVar19;
        }
        else {
          lVar8 = 0;
          uVar6 = 0;
          puVar13 = puVar20;
          puVar14 = puVar22;
          do {
            uVar11 = puVar14[-1];
            lVar8 = lVar8 + -2;
            uVar17 = puVar13[-1];
            uVar16 = uVar17 + uVar11;
            puVar13[-1] = uVar16 + uVar6;
            uVar9 = *puVar13;
            uVar16 = (ulong)(CARRY8(uVar17,uVar11) || CARRY8(uVar16,uVar6));
            uVar11 = *puVar14;
            uVar6 = uVar9 + uVar11;
            *puVar13 = uVar6 + uVar16;
            uVar6 = (ulong)(CARRY8(uVar9,uVar11) || CARRY8(uVar6,uVar16));
            puVar13 = puVar13 + 2;
            puVar14 = puVar14 + 2;
          } while (-lVar8 != (uVar7 & 0xfffffffffffffffe));
          uVar16 = uVar19 - lVar8;
        }
        if ((uVar5 - uVar19 & 1) != 0) {
          param_3[uVar16] = param_3[uVar16] + local_100[uVar16] + uVar6;
        }
      }
      uVar19 = uVar19 + 1;
      uVar7 = uVar7 - 1;
      puVar22 = puVar22 + 1;
    } while (uVar19 != param_4);
  }
  return;
}


