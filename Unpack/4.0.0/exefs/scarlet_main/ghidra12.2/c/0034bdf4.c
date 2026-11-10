/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034bdf4; name: FUN_0034bdf4
 */


ulong * FUN_0034bdf4(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    puVar14 = param_1 + 1;
    uVar7 = 2;
    puVar6 = puVar14;
    if (uVar12 >> 1 == 2) {
LAB_0034be4c:
      uVar15 = uVar7 << 1;
      puVar6 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar7 << 4);
      puVar11 = puVar6;
      goto LAB_0034be68;
    }
  }
  else {
    puVar14 = (ulong *)param_1[1];
    uVar7 = param_1[2];
    puVar6 = puVar14;
    if (uVar12 >> 1 == uVar7) goto LAB_0034be4c;
  }
  uVar15 = 0;
  puVar11 = (ulong *)0x0;
  puVar14 = puVar6;
LAB_0034be68:
  puVar16 = (ulong *)(uVar12 >> 1);
  puVar6 = puVar6 + (long)puVar16;
  *puVar6 = 0;
  *puVar6 = *param_2;
  *param_2 = 0;
  if (puVar11 == (ulong *)0x0) {
    uVar12 = *param_1;
  }
  else {
    if (puVar16 != (ulong *)0x0) {
      puVar8 = puVar14;
      if (puVar16 == (ulong *)0x1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        puVar10 = puVar11 + 1;
        do {
          puVar10[-1] = 0;
          puVar10[-1] = *puVar8;
          *puVar8 = 0;
          *puVar10 = 0;
          uVar7 = uVar7 + 2;
          *puVar10 = puVar8[1];
          puVar8[1] = 0;
          puVar8 = puVar8 + 2;
          puVar10 = puVar10 + 2;
        } while (((ulong)puVar16 & 0x7ffffffffffffffe) != uVar7);
      }
      puVar4 = PTR_LAB_047cba48;
      puVar10 = puVar14;
      puVar5 = PTR_LAB_047cba48;
      if (((uint)uVar12 >> 1 & 1) != 0) {
        puVar11[uVar7] = 0;
        puVar11[uVar7] = *puVar8;
        *puVar8 = 0;
        puVar4 = PTR_LAB_047cba48;
        puVar5 = PTR_LAB_047cba48;
      }
      while (PTR_LAB_047cba48 = puVar5, puVar5 = PTR_LAB_047cba48, PTR_LAB_047cba48 = puVar4,
            puVar10 != (ulong *)0x0) {
        puVar16 = (ulong *)((long)puVar16 + -1);
        puVar13 = (undefined8 *)puVar14[(long)puVar16];
        puVar10 = puVar16;
        if (puVar13 != (undefined8 *)0x0) {
          plVar1 = puVar13 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar4 = PTR_LAB_047cba48;
          if (lVar9 + -1 == 0) {
            (**(code **)*puVar13)(puVar13);
            FUN_0049e790(puVar5,puVar13);
            puVar4 = PTR_LAB_047cba48;
          }
        }
      }
    }
    uVar12 = *param_1;
    if ((uVar12 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar12 = *param_1;
    }
    uVar12 = uVar12 | 1;
    param_1[1] = (ulong)puVar11;
    param_1[2] = uVar15;
  }
  *param_1 = uVar12 + 2;
  return puVar6;
}


