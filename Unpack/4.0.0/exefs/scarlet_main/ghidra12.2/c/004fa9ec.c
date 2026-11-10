/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fa9ec; name: FUN_004fa9ec
 */


void FUN_004fa9ec(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  uVar2 = *(uint *)(param_2 + 8);
  if (uVar2 != 0) {
    lVar12 = *(long *)(param_2 + 0x10);
    lVar6 = FUN_0053234c(param_1,uVar2);
    iVar1 = (int)param_1[1];
    iVar13 = *(int *)param_1[2];
    uVar3 = iVar13 - iVar1;
    if (0 < (int)uVar3 && 0 < (int)uVar2) {
      uVar9 = 0;
      do {
        FUN_0052d810(*(undefined8 *)(lVar12 + 8 + uVar9 * 8),*(undefined8 *)(lVar6 + uVar9 * 8));
        uVar9 = uVar9 + 1;
        if (uVar3 <= uVar9) break;
      } while (uVar9 < uVar2);
    }
    puVar5 = PTR_LAB_047cba90;
    puVar4 = PTR_FUN_047cba38;
    if ((int)uVar3 < (int)uVar2) {
      lVar10 = *param_1;
      lVar8 = (long)(int)uVar3 * 8;
      if (lVar10 == 0) {
        puVar15 = (undefined8 *)(lVar8 + lVar12);
        iVar13 = (iVar1 + uVar2) - iVar13;
        puVar14 = (undefined8 *)(lVar6 + lVar8);
        do {
          puVar15 = puVar15 + 1;
          uVar11 = *puVar15;
          puVar7 = (undefined8 *)FUN_0049e770(puVar4,0x18);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
          }
          FUN_0052d810(uVar11,puVar7);
          iVar13 = iVar13 + -1;
          *puVar14 = puVar7;
          puVar14 = puVar14 + 1;
        } while (iVar13 != 0);
      }
      else {
        puVar15 = (undefined8 *)(lVar8 + lVar12);
        iVar13 = (iVar1 + uVar2) - iVar13;
        puVar14 = (undefined8 *)(lVar6 + lVar8);
        do {
          puVar15 = puVar15 + 1;
          uVar11 = *puVar15;
          if (*(long *)(lVar10 + 0x70) != 0) {
            FUN_00520d08(lVar10,0,0x18);
          }
          puVar7 = (undefined8 *)FUN_00520544(lVar10,0x18,puVar5);
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          FUN_0052d810(uVar11,puVar7);
          iVar13 = iVar13 + -1;
          *puVar14 = puVar7;
          puVar14 = puVar14 + 1;
        } while (iVar13 != 0);
      }
    }
    iVar1 = (int)param_1[1] + uVar2;
    *(int *)(param_1 + 1) = iVar1;
    if (*(int *)param_1[2] < iVar1) {
      *(int *)param_1[2] = iVar1;
    }
  }
  return;
}


