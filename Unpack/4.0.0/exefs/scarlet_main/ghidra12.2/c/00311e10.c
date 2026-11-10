/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00311e10; name: FUN_00311e10
 */


void FUN_00311e10(uint *param_1,ulong param_2,ulong param_3,uint param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *plVar16;
  
  uVar9 = (ulong)*param_1;
  uVar6 = param_1[4];
  uVar8 = param_1[5];
  uVar4 = (ulong)uVar8;
  uVar7 = param_1[6];
  if (uVar9 < param_3) {
    if (uVar8 == 0) {
      return;
    }
    while( true ) {
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 - 1;
      if (uVar6 == 0) break;
      uVar8 = param_1[2];
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar6 / uVar8;
      }
      uVar8 = (uint)*(ushort *)(*(long *)(param_1 + 8) + (ulong)(uVar6 - uVar12 * uVar8) * 2);
      if (((uint)uVar4 < uVar8) || (uVar7 == 0xffffffff)) {
        param_1[4] = uVar6;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar8 = (uint)uVar4 - uVar8 & 0xffff;
      uVar4 = (ulong)uVar8;
      param_1[5] = uVar8;
      param_1[6] = uVar7;
      if (uVar8 == 0) {
        param_1[4] = uVar6;
        return;
      }
    }
LAB_00312164:
    param_1[4] = 0;
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar12 = uVar7;
  if (uVar9 < uVar4 + param_3) {
    uVar15 = uVar6;
    do {
      uVar15 = uVar15 + 1;
      if (uVar15 == 0) goto LAB_00312164;
      uVar8 = param_1[2];
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar15 / uVar8;
      }
      uVar8 = (uint)*(ushort *)(*(long *)(param_1 + 8) + (ulong)(uVar15 - uVar3 * uVar8) * 2);
      uVar3 = (uint)uVar4 - uVar8;
      if (((uint)uVar4 < uVar8) || (uVar12 == 0)) {
        param_1[4] = uVar15;
        goto LAB_00312170;
      }
      uVar8 = uVar3 & 0xffff;
      uVar4 = (ulong)uVar8;
      uVar12 = uVar12 - 1;
      param_1[5] = uVar8;
      param_1[6] = uVar12;
    } while (uVar9 < param_3 + (ushort)uVar3);
    param_1[4] = uVar15;
  }
  if (*param_1 <= uVar12) {
LAB_00312170:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar15 = param_1[2];
  uVar7 = uVar6 + uVar7 + 1;
  uVar6 = 0;
  if (uVar15 != 0) {
    uVar6 = uVar7 / uVar15;
  }
  *(short *)(*(long *)(param_1 + 8) + (ulong)(uVar7 - uVar6 * uVar15) * 2) = (short)param_3;
  param_1[5] = uVar8 + (int)param_3 & 0xffff;
  param_1[6] = uVar12 + 1;
  if (uVar7 == 0) {
    return;
  }
  uVar8 = param_4 >> 6 & 0x3f;
  uVar9 = (ulong)uVar8;
  uVar10 = *(ulong *)(param_1 + uVar9 * 4 + 0x1c);
  uVar4 = uVar9;
  if (uVar10 != param_2) {
    if (uVar10 == 0) {
      uVar8 = (uint)param_2 & 3;
      if (1 < uVar8) {
        plVar16 = (long *)((param_2 & 0xfffffffffffffffc) + 0x40);
        if (uVar8 == 2) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar2) {
              *plVar16 = *plVar16 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        else {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar2) {
              *plVar16 = *plVar16 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      *(ulong *)(param_1 + uVar9 * 4 + 0x1c) = param_2;
    }
    else {
      uVar6 = param_4 >> 0xc & 0x3f;
      uVar4 = (ulong)uVar6;
      puVar11 = (ulong *)(param_1 + uVar4 * 4 + 0x1c);
      uVar10 = *puVar11;
      if (uVar10 != param_2) {
        if (((uint)param_2 >> 1 & 1) != 0) {
          plVar16 = (long *)((param_2 & 0xfffffffffffffffc) + 0x40);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar2) {
              *plVar16 = *plVar16 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          uVar10 = *puVar11;
        }
        if (uVar10 != 0) {
          if (param_1[uVar4 * 4 + 0x1e] <= param_1[uVar9 * 4 + 0x1e]) {
            uVar8 = uVar6;
          }
          puVar11 = (ulong *)(param_1 + (ulong)uVar8 * 4 + 0x1c);
          uVar4 = *puVar11;
          *puVar11 = param_2;
          *(uint *)(puVar11 + 1) = uVar7;
          uVar8 = (uint)uVar4 & 3;
          if (1 < uVar8) {
            uVar4 = uVar4 & 0xfffffffffffffffc;
            plVar16 = (long *)(uVar4 + 0x40);
            do {
              lVar13 = *plVar16;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar2) {
                *plVar16 = lVar13 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar13 + -1 == 0) {
              FUN_00376de0(uVar8,uVar4,*(undefined4 *)(uVar4 + 0x48));
            }
          }
          goto LAB_00312040;
        }
        *puVar11 = param_2;
      }
    }
  }
  param_1[uVar4 * 4 + 0x1e] = uVar7;
LAB_00312040:
  uVar8 = param_5 >> 6 & 0x3f;
  uVar4 = (ulong)uVar8;
  puVar5 = *(undefined8 **)(param_2 & 0xfffffffffffffffc);
  if (*(undefined8 **)(param_1 + uVar4 * 4 + 0x11c) == puVar5) {
    param_1[uVar4 * 4 + 0x11e] = uVar7;
    return;
  }
  if (*(undefined8 **)(param_1 + uVar4 * 4 + 0x11c) == (undefined8 *)0x0) {
    plVar16 = (long *)*puVar5;
    uVar9 = uVar4;
    if (plVar16 != (long *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *plVar16 = *plVar16 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    uVar6 = param_5 >> 0xc & 0x3f;
    uVar9 = (ulong)uVar6;
    puVar14 = *(undefined8 **)(param_1 + uVar9 * 4 + 0x11c);
    if (puVar14 == puVar5) {
      param_1[uVar9 * 4 + 0x11e] = uVar7;
      return;
    }
    plVar16 = (long *)*puVar5;
    if (plVar16 != (long *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *plVar16 = *plVar16 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar14 = *(undefined8 **)(param_1 + uVar9 * 4 + 0x11c);
    }
    if (puVar14 != (undefined8 *)0x0) {
      if (param_1[uVar9 * 4 + 0x11e] <= param_1[uVar4 * 4 + 0x11e]) {
        uVar8 = uVar6;
      }
      param_1 = param_1 + (ulong)uVar8 * 4 + 0x11c;
      puVar14 = *(undefined8 **)param_1;
      *(undefined8 **)param_1 = puVar5;
      param_1[2] = uVar7;
      plVar16 = (long *)*puVar14;
      if (plVar16 != (long *)0x0) {
        do {
          lVar13 = *plVar16;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003120ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)puVar14[3])(puVar14[4]);
          return;
        }
      }
      return;
    }
  }
  *(undefined8 **)(param_1 + uVar9 * 4 + 0x11c) = puVar5;
  param_1[uVar9 * 4 + 0x11e] = uVar7;
  return;
}


