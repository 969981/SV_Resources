/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c66c8; name: FUN_016c66c8
 */


void FUN_016c66c8(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  plVar13 = (long *)(param_1 + 0x28);
  lVar5 = nn::os::GetCurrentThread();
LAB_016c66f0:
  if (*plVar13 == 0) goto code_r0x016c66f8;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
        while (*plVar13 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_016c6700;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_016c6700:
  for (plVar13 = *(long **)(param_1 + 0xe0); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    (**(code **)(*(long *)plVar13[6] + 0x88))((long *)plVar13[6],param_2);
  }
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 1:
    uVar9 = *(ulong *)(param_1 + 0x70);
    uVar8 = *(ulong *)(param_1 + 0x90);
    if (uVar9 != uVar8) {
      uVar10 = *(ulong *)(param_1 + 0xb8);
      if (uVar10 != 0) {
        uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          uVar12 = uVar10 - 1 & uVar9;
        }
        else {
          uVar12 = uVar9;
          if (uVar10 <= uVar9) {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = uVar9 / uVar10;
            }
            uVar12 = uVar9 - uVar12 * uVar10;
          }
        }
        plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + uVar12 * 8);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if (plVar13[1] != uVar9) {
                if ((plVar13[1] & uVar10 - 1) == uVar12) goto LAB_016c6c10;
                break;
              }
              if (plVar13[2] == uVar9) goto LAB_016c6c5c;
LAB_016c6c10:
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              uVar11 = plVar13[1];
              if (uVar11 == uVar9) {
                if (plVar13[2] == uVar9) goto LAB_016c6c5c;
              }
              else {
                if (uVar10 <= uVar11) {
                  uVar3 = 0;
                  if (uVar10 != 0) {
                    uVar3 = uVar11 / uVar10;
                  }
                  uVar11 = uVar11 - uVar3 * uVar10;
                }
                if (uVar11 != uVar12) break;
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
      }
      goto LAB_016c6c70;
    }
    goto LAB_016c6a00;
  case 2:
    uVar9 = *(ulong *)(param_1 + 0xb8);
    uVar8 = *(ulong *)(param_1 + 0x70);
    if ((uVar9 & uVar9 - 1) == 0) {
      plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + (uVar9 - 1 & uVar8) * 8);
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != uVar8);
      } while (plVar13[2] != uVar8);
    }
    else {
      uVar10 = uVar8;
      if (uVar9 <= uVar8) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar8 / uVar9;
        }
        uVar10 = uVar8 - uVar10 * uVar9;
      }
      plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + uVar10 * 8);
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != uVar8);
      } while (plVar13[2] != uVar8);
    }
    uVar8 = (**(code **)(**(long **)((long)plVar13 + 0x30) + 0x98))();
    if ((uVar8 & 1) == 0) break;
    local_24[0] = 1;
    FUN_016c6e1c(*(undefined8 *)(param_1 + 0x120),local_24);
    *(undefined4 *)(param_1 + 0x48) = 3;
    if (*(char *)(*(long *)((long)plVar13 + 0x30) + 100) == '\0') break;
    nn::oe::SetCpuBoostMode(1);
    goto LAB_016c6920;
  case 4:
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x98);
    plVar13 = *(long **)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xa0);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    plVar6 = *(long **)(param_1 + 0x88);
    *(long **)(param_1 + 0x88) = plVar13;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    uVar9 = *(ulong *)(param_1 + 0xb8);
    uVar8 = *(ulong *)(param_1 + 0x70);
    if ((uVar9 & uVar9 - 1) == 0) {
      plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + (uVar9 - 1 & uVar8) * 8);
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != uVar8);
      } while (plVar13[2] != uVar8);
    }
    else {
      uVar10 = uVar8;
      if (uVar9 <= uVar8) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar8 / uVar9;
        }
        uVar10 = uVar8 - uVar10 * uVar9;
      }
      plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + uVar10 * 8);
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != uVar8);
      } while (plVar13[2] != uVar8);
    }
    (**(code **)(**(long **)((long)plVar13 + 0x30) + 0x68))();
    *(undefined4 *)(*(long *)((long)plVar13 + 0x30) + 0x60) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x48) = 5;
    nn::oe::SetCpuBoostMode(0);
    DAT_0485a120 = 0;
    if (((*PTR_DAT_047d8c40 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    lVar5 = *(long *)PTR_DAT_047d8c48;
    *(long *)PTR_DAT_047d8c50 = lVar5;
    lVar14 = *(long *)(lVar5 + 0x308);
    nn::os::ChangeThreadPriority((ThreadType *)(lVar14 + 0x40),0xf);
    nn::os::ChangeThreadPriority((ThreadType *)(*(long *)(lVar14 + 0x460) + 0x40),0x11);
    nn::os::ChangeThreadPriority((ThreadType *)(*(long *)(lVar14 + 0x468) + 0x40),0xf);
    nn::os::ChangeThreadPriority((ThreadType *)(*(long *)(lVar14 + 0x470) + 0x40),0xf);
    uVar7 = 1;
    goto LAB_016c6b18;
  case 5:
    uVar9 = *(ulong *)(param_1 + 0xb8);
    uVar8 = *(ulong *)(param_1 + 0x70);
    if ((uVar9 & uVar9 - 1) == 0) {
      plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + (uVar9 - 1 & uVar8) * 8);
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != uVar8);
      } while (plVar13[2] != uVar8);
    }
    else {
      uVar10 = uVar8;
      if (uVar9 <= uVar8) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar8 / uVar9;
        }
        uVar10 = uVar8 - uVar10 * uVar9;
      }
      plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + uVar10 * 8);
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != uVar8);
      } while (plVar13[2] != uVar8);
    }
    uVar8 = (**(code **)(**(long **)((long)plVar13 + 0x30) + 0x90))();
    if ((uVar8 & 1) != 0) {
      local_28[0] = 1;
      FUN_016c6e1c(*(undefined8 *)(param_1 + 0x118),local_28);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    break;
  case 6:
    uVar9 = *(ulong *)(param_1 + 0xb8);
    uVar8 = *(ulong *)(param_1 + 0x90);
    if ((uVar9 & uVar9 - 1) == 0) {
      plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + (uVar9 - 1 & uVar8) * 8);
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != uVar8);
      } while (plVar13[2] != uVar8);
    }
    else {
      uVar10 = uVar8;
      if (uVar9 <= uVar8) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar8 / uVar9;
        }
        uVar10 = uVar8 - uVar10 * uVar9;
      }
      plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + uVar10 * 8);
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != uVar8);
      } while (plVar13[2] != uVar8);
    }
    (**(code **)(**(long **)((long)plVar13 + 0x30) + 0x80))();
    *(undefined4 *)(param_1 + 0x48) = 3;
    if (*(char *)(*(long *)((long)plVar13 + 0x30) + 100) == '\0') break;
    nn::oe::SetCpuBoostMode(1);
LAB_016c6920:
    DAT_0485a120 = 1;
    if (((*PTR_DAT_047d8c40 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    lVar5 = *(long *)PTR_DAT_047d8c48;
    *(long *)PTR_DAT_047d8c50 = lVar5;
    lVar14 = *(long *)(lVar5 + 0x308);
    nn::os::ChangeThreadPriority((ThreadType *)(lVar14 + 0x40),0xf);
    nn::os::ChangeThreadPriority((ThreadType *)(*(long *)(lVar14 + 0x460) + 0x40),0xf);
    nn::os::ChangeThreadPriority((ThreadType *)(*(long *)(lVar14 + 0x468) + 0x40),0xf);
    nn::os::ChangeThreadPriority((ThreadType *)(*(long *)(lVar14 + 0x470) + 0x40),0xf);
    uVar7 = 2;
LAB_016c6b18:
    *(undefined4 *)(lVar5 + 0x310) = uVar7;
  }
switchD_016c6748_caseD_3:
  *(undefined8 *)(param_1 + 0x28) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x30));
  return;
code_r0x016c66f8:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar2) {
    *plVar13 = lVar5;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_016c6700;
  goto LAB_016c66f0;
LAB_016c6c5c:
  (**(code **)(*(long *)plVar13[6] + 0x80))();
  uVar8 = *(ulong *)(param_1 + 0x90);
LAB_016c6c70:
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xa0);
  plVar13 = *(long **)(param_1 + 0xa8);
  *(ulong *)(param_1 + 0x70) = uVar8;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x98);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar6 = *(long **)(param_1 + 0x88);
  *(long **)(param_1 + 0x88) = plVar13;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
LAB_016c6a00:
  uVar9 = *(ulong *)(param_1 + 0xb8);
  uVar8 = *(ulong *)(param_1 + 0x70);
  if ((uVar9 & uVar9 - 1) == 0) {
    plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + (uVar9 - 1 & uVar8) * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != uVar8);
    } while (plVar13[2] != uVar8);
  }
  else {
    uVar10 = uVar8;
    if (uVar9 <= uVar8) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar8 / uVar9;
      }
      uVar10 = uVar8 - uVar10 * uVar9;
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + uVar10 * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != uVar8);
    } while (plVar13[2] != uVar8);
  }
  (**(code **)(**(long **)((long)plVar13 + 0x30) + 0x70))();
  *(undefined4 *)(*(long *)((long)plVar13 + 0x30) + 0x60) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x48) = 2;
  goto switchD_016c6748_caseD_3;
}


