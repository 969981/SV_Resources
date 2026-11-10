/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341a450; name: FUN_0341a450
 */


void FUN_0341a450(float *param_1,long *param_2,float *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar12 = param_1[1] - param_3[1];
  fVar13 = *param_1 - *param_3;
  fVar15 = param_1[2] - param_3[2];
  uVar3 = *(uint *)(param_2 + 1);
  plVar5 = (long *)*param_2;
  lVar8 = 0;
  lVar6 = (ulong)uVar3 * 0x10;
  uVar11 = 0xffffffff;
  do {
    uVar4 = uVar3;
    if (lVar6 == lVar8) break;
    pfVar10 = *(float **)((long)plVar5 + lVar8);
    uVar11 = uVar11 + 1;
    fVar16 = param_1[1] - pfVar10[1];
    fVar14 = *param_1 - *pfVar10;
    fVar17 = param_1[2] - pfVar10[2];
    lVar8 = lVar8 + 0x10;
    uVar4 = uVar11;
  } while (fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17 <=
           fVar13 * fVar13 + fVar12 * fVar12 + fVar15 * fVar15);
  if (uVar3 != 0) {
    plVar9 = plVar5;
    do {
      if ((float *)*plVar9 == param_3) {
        return;
      }
      lVar6 = lVar6 + -0x10;
      plVar9 = plVar9 + 2;
    } while (lVar6 != 0);
  }
  uVar11 = *(uint *)((long)param_2 + 0xc);
  if (uVar11 <= uVar3) {
    iVar1 = uVar11 + (uVar11 >> 1);
    if (uVar11 == 0) {
      iVar1 = 1;
    }
    uVar11 = iVar1 + uVar11;
    plVar5 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(10,plVar5,(ulong)uVar11 << 4);
    if (plVar5 == (long *)0x0) {
      return;
    }
    *param_2 = (long)plVar5;
    *(uint *)((long)param_2 + 0xc) = uVar11;
  }
  if (uVar3 < uVar11) {
    uVar11 = *(uint *)(param_2 + 1);
    *(uint *)(param_2 + 1) = uVar11 + 1;
    plVar9 = plVar5 + (ulong)uVar11 * 2;
    if (plVar5 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      *plVar9 = 0;
      *(undefined2 *)(plVar9 + 1) = 0;
      lVar8 = *param_2;
    }
    uVar7 = (ulong)uVar4;
    if ((long *)(lVar8 + (ulong)uVar4 * 0x10) < plVar9) {
      do {
        plVar5 = plVar9 + -2;
        *plVar9 = *plVar5;
        *(short *)(plVar9 + 1) = (short)plVar9[-1];
        lVar8 = *param_2;
        plVar9 = plVar5;
      } while ((long *)(lVar8 + uVar7 * 0x10) < plVar5);
    }
    if (lVar8 != 0) {
      puVar2 = (undefined8 *)(lVar8 + uVar7 * 0x10);
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 1) = 0;
      if (*param_2 != 0) {
        plVar5 = (long *)(*param_2 + uVar7 * 0x10);
        *plVar5 = (long)param_3;
        *(undefined2 *)(plVar5 + 1) = 0;
      }
    }
  }
  return;
}


