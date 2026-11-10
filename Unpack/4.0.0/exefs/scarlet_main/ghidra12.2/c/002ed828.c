/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ed828; name: FUN_002ed828
 */


void FUN_002ed828(ulong *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    puVar13 = param_1 + 1;
    uVar6 = 2;
  }
  else {
    puVar13 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  if (uVar6 < param_2) {
    if (param_2 <= uVar6 << 1) {
      param_2 = uVar6 << 1;
    }
    puVar14 = (ulong *)(uVar11 >> 1);
    uVar6 = FUN_0049e770(PTR_FUN_047cba38,param_2 << 3);
    if (puVar14 != (ulong *)0x0) {
      puVar8 = puVar13;
      if (puVar14 == (ulong *)0x1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        puVar10 = (ulong *)(uVar6 + 8);
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
        } while (((ulong)puVar14 & 0x7ffffffffffffffe) != uVar7);
      }
      puVar4 = PTR_LAB_047cba48;
      puVar10 = puVar13;
      puVar5 = PTR_LAB_047cba48;
      if (((uint)uVar11 >> 1 & 1) != 0) {
        *(undefined8 *)(uVar6 + uVar7 * 8) = 0;
        *(ulong *)(uVar6 + uVar7 * 8) = *puVar8;
        *puVar8 = 0;
        puVar4 = PTR_LAB_047cba48;
        puVar5 = PTR_LAB_047cba48;
      }
      while (PTR_LAB_047cba48 = puVar5, puVar5 = PTR_LAB_047cba48, PTR_LAB_047cba48 = puVar4,
            puVar10 != (ulong *)0x0) {
        puVar14 = (ulong *)((long)puVar14 + -1);
        puVar12 = (undefined8 *)puVar13[(long)puVar14];
        puVar10 = puVar14;
        if (puVar12 != (undefined8 *)0x0) {
          plVar1 = puVar12 + 1;
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
            (**(code **)*puVar12)(puVar12);
            FUN_0049e790(puVar5,puVar12);
            puVar4 = PTR_LAB_047cba48;
          }
        }
      }
    }
    uVar11 = *param_1;
    if ((uVar11 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar11 = *param_1;
    }
    param_1[1] = uVar6;
    param_1[2] = param_2;
    *param_1 = uVar11 | 1;
  }
  return;
}


