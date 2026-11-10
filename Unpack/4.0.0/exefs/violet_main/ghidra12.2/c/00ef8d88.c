/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ef8d88; name: FUN_00ef8d88
 */


void FUN_00ef8d88(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar9 = (undefined8 *)*param_1;
  if (puVar9 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)param_1[1];
    lVar3 = tpidr_el0;
    puVar7 = puVar9;
    if (puVar10 != puVar9) {
      do {
        puVar10 = puVar10 + -1;
        puVar7 = (undefined8 *)*puVar10;
        *puVar10 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          puVar11 = (undefined8 *)*puVar7;
          if (puVar11 != (undefined8 *)0x0) {
            puVar6 = (undefined8 *)puVar7[1];
            if (puVar6 == puVar11) {
              puVar6 = puVar11;
            }
            else {
              do {
                puVar6 = puVar6 + -1;
                puVar8 = (undefined8 *)*puVar6;
                *puVar6 = 0;
                if (puVar8 != (undefined8 *)0x0) {
                  FUN_00d44bc8(puVar8 + 2);
                  *puVar8 = &PTR_LAB_045a0398;
                  if ((long *)puVar8[1] != (long *)0x0) {
                    (**(code **)(*(long *)puVar8[1] + 0x20))();
                  }
                  plVar5 = *(long **)(lVar3 + 0x30);
                  if (plVar5 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar5 = DAT_04859430;
                    *(long **)(lVar3 + 0x30) = DAT_04859430;
                  }
                  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
                  if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar5 + 0x18))(plVar5,puVar8,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar5,puVar8,0,8);
                  }
                }
              } while (puVar11 != puVar6);
              puVar6 = (undefined8 *)*puVar7;
            }
            puVar7[1] = puVar11;
            if (puVar6 != (undefined8 *)0x0) {
              plVar5 = *(long **)(lVar3 + 0x30);
              if (plVar5 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar5 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
              if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                (**(code **)(*plVar5 + 0x18))(plVar5,puVar6,0,8);
              }
              else {
                FUN_00c48fe8(plVar5,puVar6,0,8);
              }
            }
          }
          plVar5 = *(long **)(lVar3 + 0x30);
          if (plVar5 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar5 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar5 + 0x18))(plVar5,puVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar5,puVar7,0,8);
          }
        }
      } while (puVar10 != puVar9);
      puVar7 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar9;
    if (puVar7 != (undefined8 *)0x0) {
      plVar5 = *(long **)(lVar3 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ef8f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x18))(plVar5,puVar7,0,8);
        return;
      }
      FUN_00c48fe8(plVar5,puVar7,0,8);
      return;
    }
  }
  return;
}


