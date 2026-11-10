/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb7028; name: FUN_00cb7028
 */


undefined * FUN_00cb7028(long param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  bool bVar11;
  long lVar12;
  
  plVar9 = (long *)(param_1 + 0x140);
  lVar12 = *plVar9;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar12) {
    lVar4 = nn::os::GetCurrentThread();
LAB_00cb7060:
    if (*plVar9 == 0) goto code_r0x00cb7068;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
          while (*plVar9 == 0) {
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar11) {
              *plVar9 = lVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00cb7070;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar11) {
        *plVar9 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00cb7070:
    bVar11 = false;
    goto LAB_00cb7074;
  }
  bVar11 = true;
LAB_00cb7074:
  uVar6 = *(ulong *)(param_1 + 0x160);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar5;
    }
    else if (uVar5 < uVar6) {
      uVar8 = uVar5;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar5 / uVar6;
      }
      uVar8 = uVar5 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x158) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_00cb70f8;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_00cb70f8;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar2 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  if (((DAT_0485db38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0485db38), iVar3 != 0)) {
    puVar10 = &DAT_0485db30;
    FUN_00100190(&LAB_02bcfbc4,&DAT_0485db30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0485db38);
  }
  else {
    puVar10 = &DAT_0485db30;
  }
LAB_00cb7100:
  if (!bVar11) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  }
  return puVar10;
code_r0x00cb7068:
  cVar1 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar11) {
    *plVar9 = lVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00cb7070;
  goto LAB_00cb7060;
LAB_00cb70f8:
  puVar10 = (undefined *)(plVar9[6] + 0x70);
  goto LAB_00cb7100;
}


