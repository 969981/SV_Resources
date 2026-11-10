/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00290edc; name: FUN_00290edc
 */


void FUN_00290edc(ulong *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    puVar10 = param_1 + 1;
    uVar5 = 2;
    puVar13 = puVar10;
    if (param_3 < 3) goto LAB_00290f20;
LAB_00290f54:
    uVar14 = uVar3 >> 1;
    uVar3 = param_3;
    if (param_3 <= uVar5 << 1) {
      uVar3 = uVar5 << 1;
    }
    puVar11 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar3 * 0x18);
    uVar5 = param_3;
    puVar13 = puVar11;
  }
  else {
    puVar10 = (ulong *)param_1[1];
    uVar5 = param_1[2];
    puVar13 = puVar10;
    if (uVar5 < param_3) goto LAB_00290f54;
LAB_00290f20:
    uVar3 = uVar3 >> 1;
    uVar14 = uVar3 - param_3;
    if (uVar3 < param_3) {
      uVar14 = 0;
      puVar11 = puVar13 + uVar3 * 3;
      puVar10 = (ulong *)0x0;
      uVar5 = param_3 - uVar3;
    }
    else {
      puVar10 = puVar13 + param_3 * 3;
      uVar5 = 0;
      puVar11 = (ulong *)0x0;
      uVar3 = param_3;
    }
    if (uVar3 != 0) {
      lVar6 = 0;
      do {
        while( true ) {
          lVar15 = lVar6;
          puVar1 = (undefined8 *)((long)puVar13 + lVar15);
          plVar12 = puVar1 + 1;
          FUN_0028bf34(puVar1,*plVar12);
          puVar2 = (undefined8 *)(param_2 + lVar15);
          *puVar1 = *puVar2;
          lVar6 = puVar2[1];
          *plVar12 = lVar6;
          lVar8 = puVar2[2];
          puVar1[2] = lVar8;
          if (lVar8 != 0) break;
          *(long **)((long)puVar13 + lVar15) = plVar12;
          uVar3 = uVar3 - 1;
          lVar6 = lVar15 + 0x18;
          if (uVar3 == 0) goto LAB_00291010;
        }
        *(long **)(lVar6 + 0x10) = plVar12;
        *puVar2 = puVar2 + 1;
        puVar2[1] = 0;
        puVar2[2] = 0;
        uVar3 = uVar3 - 1;
        lVar6 = lVar15 + 0x18;
      } while (uVar3 != 0);
LAB_00291010:
      param_2 = param_2 + lVar15 + 0x18;
    }
    uVar3 = 0;
    puVar13 = (ulong *)0x0;
    if (uVar5 == 0) goto LAB_0029107c;
  }
  puVar4 = (ulong *)(param_2 + 8);
  puVar11 = puVar11 + 1;
  do {
    while( true ) {
      puVar11[-1] = puVar4[-1];
      uVar7 = *puVar4;
      *puVar11 = uVar7;
      uVar9 = puVar4[1];
      puVar11[1] = uVar9;
      if (uVar9 != 0) break;
      puVar11[-1] = (ulong)puVar11;
      puVar4 = puVar4 + 3;
      uVar5 = uVar5 - 1;
      puVar11 = puVar11 + 3;
      if (uVar5 == 0) goto LAB_0029107c;
    }
    *(ulong **)(uVar7 + 0x10) = puVar11;
    puVar4[1] = 0;
    puVar4[-1] = (ulong)puVar4;
    *puVar4 = 0;
    puVar4 = puVar4 + 3;
    uVar5 = uVar5 - 1;
    puVar11 = puVar11 + 3;
  } while (uVar5 != 0);
LAB_0029107c:
  if ((uVar14 != 0) && (puVar10 != (ulong *)0x0)) {
    puVar10 = puVar10 + uVar14 * 3;
    do {
      uVar14 = uVar14 - 1;
      FUN_0028bf34(puVar10 + -3,puVar10[-2]);
      puVar10 = puVar10 + -3;
    } while (uVar14 != 0);
  }
  uVar5 = *param_1;
  if (puVar13 != (ulong *)0x0) {
    if ((uVar5 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar5 = *param_1;
    }
    uVar5 = uVar5 | 1;
    param_1[1] = (ulong)puVar13;
    param_1[2] = uVar3;
    *param_1 = uVar5;
  }
  *param_1 = uVar5 & 1 | param_3 << 1;
  return;
}


