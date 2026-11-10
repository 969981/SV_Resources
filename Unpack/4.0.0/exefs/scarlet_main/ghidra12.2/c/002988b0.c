/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002988b0; name: FUN_002988b0
 */


ulong * FUN_002988b0(ulong *param_1,ulong *param_2,int *param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  void *__ptr;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    puVar10 = param_1 + 1;
    uVar5 = 10;
    puVar4 = puVar10;
    if (uVar11 >> 1 == 10) {
LAB_0029890c:
      uVar8 = uVar5 << 1;
      puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar5 << 5);
      puVar7 = puVar4;
      goto LAB_00298928;
    }
  }
  else {
    puVar10 = (ulong *)param_1[1];
    uVar5 = param_1[2];
    puVar4 = puVar10;
    if (uVar11 >> 1 == uVar5) goto LAB_0029890c;
  }
  uVar8 = 0;
  puVar7 = (ulong *)0x0;
  puVar10 = puVar4;
LAB_00298928:
  uVar9 = uVar11 >> 1;
  puVar4 = puVar4 + uVar9 * 2;
  uVar5 = *param_2;
  *param_2 = 0;
  iVar2 = *param_3;
  *puVar4 = uVar5;
  puVar4[1] = (long)iVar2;
  if (puVar7 == (ulong *)0x0) {
    uVar11 = *param_1;
  }
  else {
    if (uVar9 != 0) {
      puVar6 = puVar10;
      if (uVar9 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          uVar12 = *puVar6;
          puVar1 = puVar7 + uVar5 * 2;
          *puVar6 = 0;
          puVar1[1] = puVar6[1];
          *puVar1 = uVar12;
          puVar3 = puVar6 + 3;
          uVar12 = puVar6[2];
          uVar5 = uVar5 + 2;
          puVar6[2] = 0;
          puVar6 = puVar6 + 4;
          puVar1[3] = *puVar3;
          puVar1[2] = uVar12;
        } while ((uVar9 & 0x7ffffffffffffffe) != uVar5);
      }
      if (((uint)uVar11 >> 1 & 1) != 0) {
        uVar11 = *puVar6;
        *puVar6 = 0;
        (puVar7 + uVar5 * 2)[1] = puVar6[1];
        puVar7[uVar5 * 2] = uVar11;
      }
      if (puVar10 != (ulong *)0x0) {
        puVar10 = puVar10 + uVar9 * 2;
        do {
          puVar10 = puVar10 + -2;
          __ptr = (void *)*puVar10;
          *puVar10 = 0;
          if (__ptr != (void *)0x0) {
                    /* try { // try from 002989d0 to 002989d3 has its CatchHandler @ 00298a20 */
            free(__ptr);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    uVar11 = *param_1;
    if ((uVar11 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar11 = *param_1;
    }
    uVar11 = uVar11 | 1;
    param_1[1] = (ulong)puVar7;
    param_1[2] = uVar8;
  }
  *param_1 = uVar11 + 2;
  return puVar4;
}


