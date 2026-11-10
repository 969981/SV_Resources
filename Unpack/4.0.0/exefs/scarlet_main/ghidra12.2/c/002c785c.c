/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c785c; name: FUN_002c785c
 */


undefined1  [16]
FUN_002c785c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  plVar10 = param_1 + 1;
  plVar11 = (long *)*plVar10;
  if (plVar11 == (long *)0x0) {
    plVar11 = plVar10;
  }
  else {
    plVar10 = param_1 + 1;
    while( true ) {
      while (iVar4 = FUN_00290c34(*param_2,plVar11[4]), iVar4 < 0) {
        plVar10 = plVar11;
        if ((long *)*plVar11 == (long *)0x0) {
          puVar9 = (undefined8 *)*plVar11;
          goto joined_r0x002c78e8;
        }
        plVar11 = (long *)*plVar11;
      }
      iVar4 = FUN_00290c34(plVar11[4],*param_2);
      if (-1 < iVar4) break;
      plVar10 = plVar11 + 1;
      if ((long *)*plVar10 == (long *)0x0) break;
      plVar11 = (long *)*plVar10;
    }
  }
  puVar9 = (undefined8 *)*plVar10;
joined_r0x002c78e8:
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x60);
    plVar7 = (long *)*param_4;
    puVar9[4] = 0;
    lVar8 = *plVar7;
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar8 = *plVar7;
    }
    puVar9[4] = lVar8;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[0xb] = 0;
    puVar9[2] = plVar11;
    puVar9[10] = 0;
    puVar9[9] = 0;
    puVar9[9] = puVar9 + 10;
    puVar9[6] = 0;
    puVar9[5] = 0;
    puVar9[8] = 0;
    puVar9[7] = 0;
    *plVar10 = (long)puVar9;
    if (*(long *)*param_1 == 0) {
      puVar6 = puVar9;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar6 = (undefined8 *)*plVar10;
    }
    FUN_010108e0(param_1[1],puVar6);
    uVar5 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar5 = 0;
  }
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = puVar9;
  return auVar12;
}


