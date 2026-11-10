/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b335c; name: FUN_002b335c
 */


undefined1  [16] FUN_002b335c(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  
  plVar13 = param_1 + 1;
  plVar14 = (long *)*plVar13;
  if (plVar14 == (long *)0x0) {
    plVar14 = plVar13;
  }
  else {
    plVar13 = param_1 + 1;
    while( true ) {
      while (iVar5 = FUN_00290c34(*param_2,plVar14[4]), iVar5 < 0) {
        plVar13 = plVar14;
        if ((long *)*plVar14 == (long *)0x0) {
          puVar12 = (undefined8 *)*plVar14;
          goto joined_r0x002b33f0;
        }
        plVar14 = (long *)*plVar14;
      }
      iVar5 = FUN_00290c34(plVar14[4],*param_2);
      if (-1 < iVar5) break;
      plVar13 = plVar14 + 1;
      if ((long *)*plVar13 == (long *)0x0) break;
      plVar14 = (long *)*plVar13;
    }
  }
  puVar12 = (undefined8 *)*plVar13;
joined_r0x002b33f0:
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0xd0);
    puVar12[4] = 0;
    lVar8 = 0;
    if (*param_3 != 0) {
      plVar1 = (long *)(*param_3 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar8 = *param_3;
    }
    puVar12[4] = lVar8;
    puVar12[5] = 0;
    puVar12[5] = *param_4;
    *param_4 = 0;
    puVar12[6] = 0;
    uVar10 = param_4[1];
    if ((uVar10 & 1) == 0) {
      uVar9 = uVar10 >> 1;
      if (uVar9 != 0) {
        puVar7 = param_4 + 2;
        puVar11 = puVar12 + 0x18;
        do {
          uVar6 = *puVar7;
          puVar11[-0x10] = puVar7[1];
          puVar11[-0x11] = uVar6;
          uVar15 = puVar7[3];
          uVar6 = puVar7[2];
          uVar17 = puVar7[5];
          uVar16 = puVar7[4];
          uVar19 = puVar7[7];
          uVar18 = puVar7[6];
          uVar20 = puVar7[8];
          puVar11[-8] = puVar7[9];
          puVar11[-9] = uVar20;
          uVar9 = uVar9 - 1;
          puVar11[-10] = uVar19;
          puVar11[-0xb] = uVar18;
          puVar11[-0xc] = uVar17;
          puVar11[-0xd] = uVar16;
          puVar11[-0xe] = uVar15;
          puVar11[-0xf] = uVar6;
          uVar18 = puVar7[0xf];
          uVar17 = puVar7[0xe];
          uVar15 = puVar7[0xb];
          uVar6 = puVar7[10];
          uVar16 = puVar7[0xc];
          uVar2 = *(undefined4 *)(puVar7 + 0x10);
          puVar11[-4] = puVar7[0xd];
          puVar11[-5] = uVar16;
          puVar11[-2] = uVar18;
          puVar11[-3] = uVar17;
          *(undefined4 *)(puVar11 + -1) = uVar2;
          puVar11[-6] = uVar15;
          puVar11[-7] = uVar6;
          *puVar11 = puVar7[0x11];
          puVar7[0x11] = 0;
          puVar7 = puVar7 + 0x12;
          puVar11 = puVar11 + 0x12;
        } while (uVar9 != 0);
        uVar10 = param_4[1];
      }
      puVar12[6] = uVar10 & 0xfffffffffffffffe;
    }
    else {
      uVar6 = param_4[2];
      puVar12[8] = param_4[3];
      puVar12[7] = uVar6;
      puVar12[6] = param_4[1] | 1;
      param_4[1] = 0;
    }
    puVar12[0x19] = param_4[0x14];
    puVar12[2] = plVar14;
    *puVar12 = 0;
    puVar12[1] = 0;
    *plVar13 = (long)puVar12;
    if (*(long *)*param_1 == 0) {
      puVar7 = puVar12;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar7 = (undefined8 *)*plVar13;
    }
    FUN_010108e0(param_1[1],puVar7);
    uVar6 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar6 = 0;
  }
  auVar21._8_8_ = uVar6;
  auVar21._0_8_ = puVar12;
  return auVar21;
}


