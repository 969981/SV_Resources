/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d45b38; name: FUN_00d45b38
 */


void FUN_00d45b38(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar7 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar7);
    uVar4 = FUN_00d4488c((long)puVar1 + (ulong)*puVar1,param_3);
    puVar8 = (undefined8 *)*param_2;
    *param_2 = uVar4;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_LAB_045a0398;
      if ((long *)puVar8[1] != (long *)0x0) {
        (**(code **)(*(long *)puVar8[1] + 0x20))();
      }
      lVar5 = tpidr_el0;
      plVar9 = *(long **)(lVar5 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,puVar8,0,8);
      }
    }
  }
  if ((6 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar7 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar7);
    uVar2 = *puVar1;
    lVar5 = tpidr_el0;
    plVar9 = *(long **)(lVar5 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x18,8);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    FUN_00d43b60((long)puVar1 + (ulong)uVar2,puVar8,param_3);
    puVar10 = (undefined8 *)param_2[1];
    param_2[1] = puVar8;
    if (puVar10 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar10;
      if (puVar8 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)puVar10[1];
        if (puVar12 == puVar8) {
          puVar12 = puVar8;
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            puVar11 = (undefined8 *)*puVar12;
            *puVar12 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              FUN_00d44bc8(puVar11 + 2);
              *puVar11 = &PTR_LAB_045a0398;
              if ((long *)puVar11[1] != (long *)0x0) {
                (**(code **)(*(long *)puVar11[1] + 0x20))();
              }
              plVar9 = *(long **)(lVar5 + 0x30);
              if (plVar9 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar9 = DAT_04859430;
                *(long **)(lVar5 + 0x30) = DAT_04859430;
              }
              uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
              if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                (**(code **)(*plVar9 + 0x18))(plVar9,puVar11,0,8);
              }
              else {
                FUN_00c48fe8(plVar9,puVar11,0,8);
              }
            }
          } while (puVar8 != puVar12);
          puVar12 = (undefined8 *)*puVar10;
        }
        puVar10[1] = puVar8;
        if (puVar12 != (undefined8 *)0x0) {
          plVar9 = *(long **)(lVar5 + 0x30);
          if (plVar9 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar9 = DAT_04859430;
            *(long **)(lVar5 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,puVar12,0,8);
          }
          else {
            FUN_00c48fe8(plVar9,puVar12,0,8);
          }
        }
      }
      plVar9 = *(long **)(lVar5 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d45d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar10,0,8);
        return;
      }
      FUN_00c48fe8(plVar9,puVar10,0,8);
      return;
    }
  }
  return;
}


