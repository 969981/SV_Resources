/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b8438; name: FUN_034b8438
 */


void FUN_034b8438(long *param_1,long param_2,int param_3,int param_4,undefined1 *param_5)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint *puVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  int *piVar17;
  
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 == 0) {
LAB_034b84a4:
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
    return;
  }
  uVar3 = (int)param_2 + param_3;
  uVar11 = 0;
  if (uVar4 != 0) {
    uVar11 = uVar3 / uVar4;
  }
  plVar16 = *(long **)(param_1[3] + (ulong)(uVar3 - uVar11 * uVar4) * 8);
  while( true ) {
    if (plVar16 == (long *)0x0) goto LAB_034b84a4;
    if ((*plVar16 == param_2) && ((int)plVar16[1] == param_3)) break;
    plVar16 = (long *)plVar16[2];
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = (int)plVar16[0xb] != 0;
  }
  puVar7 = PTR_DAT_047e2fd0;
  if (*(uint *)(plVar16 + 0xb) == 0) {
    return;
  }
  piVar17 = (int *)plVar16[10];
  lVar9 = (ulong)*(uint *)(plVar16 + 0xb) << 5;
  while (*piVar17 != param_4) {
    piVar17 = piVar17 + 8;
    lVar9 = lVar9 + -0x20;
    if (lVar9 == 0) {
      return;
    }
  }
  uVar4 = piVar17[1];
  if (*(long *)(piVar17 + 2) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    piVar17[2] = 0;
    piVar17[3] = 0;
  }
  piVar17[4] = 0;
  piVar17[5] = 0;
  uVar11 = *(uint *)(plVar16 + 0xb);
  piVar10 = (int *)(plVar16[10] + (ulong)uVar11 * 0x20 + -0x20);
  if (piVar17 < piVar10) {
    do {
      piVar12 = piVar17 + 8;
      *(undefined8 *)(piVar17 + 6) = *(undefined8 *)(piVar17 + 0xe);
      *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar17 + 0xc);
      *(undefined8 *)(piVar17 + 2) = *(undefined8 *)(piVar17 + 10);
      *(undefined8 *)piVar17 = *(undefined8 *)piVar12;
      piVar17 = piVar12;
    } while (piVar12 < piVar10);
    uVar11 = *(uint *)(plVar16 + 0xb);
  }
  uVar11 = uVar11 - 1;
  *(uint *)(plVar16 + 0xb) = uVar11;
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != 0) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar4 / uVar5;
    }
    puVar8 = *(uint **)(*param_1 + (ulong)(uVar4 - uVar6 * uVar5) * 8);
    if (puVar8 != (uint *)0x0) {
LAB_034b85a0:
      if (*puVar8 != uVar4) goto code_r0x034b85ac;
      if (uVar11 != 0) {
        lVar9 = (ulong)uVar11 << 5;
        puVar13 = (uint *)(plVar16[10] + 4);
        do {
          if (*puVar13 == uVar4) goto LAB_034b85ec;
          lVar9 = lVar9 + -0x20;
          puVar13 = puVar13 + 8;
        } while (lVar9 != 0);
      }
      FUN_034b74e8(puVar8,plVar16);
    }
  }
LAB_034b85ec:
  FUN_03498580(*(undefined8 *)PTR_DAT_047e7048,plVar16,uVar4);
  if ((int)plVar16[0xb] != 0) {
    return;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 != 0) {
    uVar11 = 0;
    if (uVar4 != 0) {
      uVar11 = uVar3 / uVar4;
    }
    plVar2 = (long *)(param_1[3] + (ulong)(uVar3 - uVar11 * uVar4) * 8);
    plVar15 = (long *)*plVar2;
    if (plVar15 != (long *)0x0) {
      plVar14 = (long *)0x0;
      do {
        if ((*plVar15 == param_2) && ((int)plVar15[1] == param_3)) {
          if (plVar14 != (long *)0x0) {
            plVar2 = plVar14 + 2;
          }
          *plVar2 = plVar15[2];
          *(int *)(param_1 + 5) = (int)param_1[5] + -1;
          break;
        }
        plVar1 = plVar15 + 2;
        plVar14 = plVar15;
        plVar15 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
    }
  }
  if (plVar16[10] != 0) {
    *(undefined4 *)(plVar16 + 0xb) = 0;
    (**(code **)(puVar7 + 0x30))(0);
    plVar16[10] = 0;
    *(undefined4 *)((long)plVar16 + 0x5c) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x034b86c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar7 + 0x30))(0,plVar16);
  return;
code_r0x034b85ac:
  puVar8 = *(uint **)(puVar8 + 2);
  if (puVar8 == (uint *)0x0) goto LAB_034b85ec;
  goto LAB_034b85a0;
}


