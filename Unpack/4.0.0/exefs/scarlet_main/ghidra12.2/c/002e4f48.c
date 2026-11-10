/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e4f48; name: FUN_002e4f48
 */


undefined2 *
FUN_002e4f48(int param_1,undefined8 *param_2,uint param_3,undefined4 param_4,ulong param_5)

{
  long *plVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *__dest;
  ulong uVar12;
  undefined2 *puVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar3 = (undefined2)param_4;
  if (param_3 == 0) {
    puVar13 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (param_1 == 6) {
      if (puVar13 == (undefined2 *)0x0) {
        return (undefined2 *)0x0;
      }
      puVar13[1] = uVar3;
      *puVar13 = 1;
      puVar13[2] = 1;
    }
    else {
      if (puVar13 == (undefined2 *)0x0) {
        return (undefined2 *)0x0;
      }
      puVar13[1] = uVar3;
      *puVar13 = 2;
      puVar13[2] = 1;
    }
    *(undefined8 *)(puVar13 + 7) = 0;
    *(undefined8 *)(puVar13 + 3) = 0;
    puVar13[0x13] = 0;
    *(undefined8 *)(puVar13 + 0xf) = 0;
    *(undefined8 *)(puVar13 + 0xb) = 0;
    return puVar13;
  }
  uVar14 = (ulong)param_3;
  if (param_3 == 1) {
    return (undefined2 *)*param_2;
  }
  __dest = (undefined8 *)0x0;
  if ((param_1 == 6) && ((param_5 & 1) != 0)) {
    uVar12 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3;
    __dest = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,uVar12);
    memmove(__dest,param_2,uVar12);
                    /* try { // try from 002e4ff4 to 002e5003 has its CatchHandler @ 002e52dc */
    uVar5 = FUN_002df930(__dest,uVar14,param_4);
    uVar14 = (ulong)uVar5;
    if (uVar5 == 1) {
      puVar13 = (undefined2 *)*__dest;
      goto LAB_002e52a0;
    }
    param_2 = __dest;
  }
  uVar5 = (uint)uVar14;
  if ((int)uVar5 < 0x10000) {
    puVar13 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (puVar13 != (undefined2 *)0x0) {
      *(char *)puVar13 = (char)param_1;
      *(undefined1 *)((long)puVar13 + 1) = 0;
      puVar13[1] = uVar3;
      puVar13[2] = 1;
      puVar13[0x13] = 0;
      *(undefined8 *)(puVar13 + 7) = 0;
      *(undefined8 *)(puVar13 + 3) = 0;
      *(undefined8 *)(puVar13 + 0xf) = 0;
      *(undefined8 *)(puVar13 + 0xb) = 0;
    }
    if (1 < (int)uVar5) {
      uVar7 = FUN_0049e7b0(PTR_FUN_047cba38,uVar14 << 3);
      *(undefined8 *)(puVar13 + 4) = uVar7;
    }
    puVar8 = (undefined8 *)(puVar13 + 4);
    puVar13[3] = (short)uVar14;
    if (1 < (uVar5 & 0xffff)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    if (0 < (int)uVar5) {
      if ((uVar5 < 8) || ((puVar8 < param_2 + uVar14 && (param_2 < puVar8 + uVar14)))) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar14 & 0xfffffff8;
        puVar9 = puVar8 + 4;
        puVar10 = param_2 + 4;
        uVar11 = uVar12;
        do {
          uVar7 = puVar10[-4];
          uVar18 = puVar10[-1];
          uVar17 = puVar10[-2];
          uVar11 = uVar11 - 8;
          uVar20 = puVar10[1];
          uVar19 = *puVar10;
          uVar22 = puVar10[3];
          uVar21 = puVar10[2];
          puVar9[-3] = puVar10[-3];
          puVar9[-4] = uVar7;
          puVar9[-1] = uVar18;
          puVar9[-2] = uVar17;
          puVar9[1] = uVar20;
          *puVar9 = uVar19;
          puVar9[3] = uVar22;
          puVar9[2] = uVar21;
          puVar9 = puVar9 + 8;
          puVar10 = puVar10 + 8;
        } while (uVar11 != 0);
        if (uVar12 == uVar14) goto LAB_002e52a0;
      }
      uVar4 = uVar12;
      for (uVar11 = uVar14 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        puVar8[uVar4] = param_2[uVar4];
        uVar4 = uVar4 + 1;
      }
      if (2 < ~uVar12 + uVar14) {
        lVar6 = uVar14 - uVar4;
        puVar8 = puVar8 + uVar4 + 2;
        param_2 = param_2 + uVar4 + 2;
        do {
          puVar8[-2] = param_2[-2];
          puVar8[-1] = param_2[-1];
          *puVar8 = *param_2;
          puVar9 = param_2 + 1;
          lVar6 = lVar6 + -4;
          param_2 = param_2 + 4;
          puVar8[1] = *puVar9;
          puVar8 = puVar8 + 4;
        } while (lVar6 != 0);
      }
    }
  }
  else {
    uVar2 = (int)(uVar5 + 0xfffe) / 0xffff;
    puVar13 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (puVar13 != (undefined2 *)0x0) {
      *(char *)puVar13 = (char)param_1;
      *(undefined1 *)((long)puVar13 + 1) = 0;
      puVar13[1] = uVar3;
      puVar13[2] = 1;
      puVar13[0x13] = 0;
      *(undefined8 *)(puVar13 + 7) = 0;
      *(undefined8 *)(puVar13 + 3) = 0;
      *(undefined8 *)(puVar13 + 0xf) = 0;
      *(undefined8 *)(puVar13 + 0xb) = 0;
    }
    lVar6 = FUN_0049e7b0(PTR_FUN_047cba38,(ulong)uVar2 << 3);
    *(long *)(puVar13 + 4) = lVar6;
    puVar13[3] = (short)uVar2;
    plVar1 = (long *)(puVar13 + 4);
    if (1 < (uVar2 & 0xffff)) {
      plVar1 = (long *)lVar6;
    }
    uVar14 = (long)(int)uVar2 - 1;
    uVar16 = (uint)uVar14;
    uVar2 = uVar16;
    if ((int)uVar16 < 2) {
      uVar2 = 1;
    }
    uVar12 = (ulong)uVar2;
    puVar8 = param_2;
    plVar15 = plVar1;
    do {
                    /* try { // try from 002e50f8 to 002e510f has its CatchHandler @ 002e52e4 */
      uVar7 = FUN_002e4f48(param_1,puVar8,0xffff,param_4,0);
      puVar8 = puVar8 + 0xffff;
      uVar12 = uVar12 - 1;
      *plVar15 = uVar7;
      plVar15 = plVar15 + 1;
    } while (uVar12 != 0);
    lVar6 = (-(uVar14 >> 0x1f & 1) & 0xffff000000000000 | uVar14 * 0x10000 & 0xffffffff0000) -
            (long)(int)uVar16;
                    /* try { // try from 002e5134 to 002e5143 has its CatchHandler @ 002e52d8 */
    uVar7 = FUN_002e4f48(param_1,param_2 + lVar6,uVar5 - (int)lVar6,param_4,0);
    plVar1[uVar14] = uVar7;
  }
LAB_002e52a0:
  if (__dest != (undefined8 *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48,__dest);
  }
  return puVar13;
}


