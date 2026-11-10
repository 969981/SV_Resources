/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e10e4; name: FUN_015e10e4
 */


void FUN_015e10e4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  
  plVar1 = (long *)(param_1 + 8);
  lVar10 = *plVar1;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar10) {
    bVar9 = true;
LAB_015e1134:
    plVar1 = *(long **)(param_1 + 0x20);
    plVar3 = *(long **)(param_1 + 0x28);
    lVar6 = *param_2;
    if (plVar1 != plVar3) {
      if (((*plVar1 != 0) && (uVar7 = FUN_011d66f8(*plVar1 + 8), (uVar7 & 1) != 0)) &&
         (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
        (**(code **)(*(long *)*plVar1 + 0xa8))();
        *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
      }
      plVar2 = plVar1 + 1;
      if (plVar2 != plVar3) {
        if (((*plVar2 != 0) && (uVar7 = FUN_011d66f8(*plVar2 + 8), (uVar7 & 1) != 0)) &&
           (uVar7 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
          (**(code **)(*(long *)*plVar2 + 0xa8))();
          *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
          *(undefined8 *)(lVar6 + 0xb0) = 0;
        }
        plVar2 = plVar1 + 2;
        if (plVar2 != plVar3) {
          if (((*plVar2 != 0) && (uVar7 = FUN_011d66f8(*plVar2 + 8), (uVar7 & 1) != 0)) &&
             (uVar7 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
            (**(code **)(*(long *)*plVar2 + 0xa8))();
            *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
            *(undefined8 *)(lVar6 + 0xb0) = 0;
          }
          plVar2 = plVar1 + 3;
          if (plVar2 != plVar3) {
            if (((*plVar2 != 0) && (uVar7 = FUN_011d66f8(*plVar2 + 8), (uVar7 & 1) != 0)) &&
               (uVar7 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
              (**(code **)(*(long *)*plVar2 + 0xa8))();
              *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
              *(undefined8 *)(lVar6 + 0xb0) = 0;
            }
            plVar2 = plVar1 + 4;
            if (plVar2 != plVar3) {
              if (((*plVar2 != 0) && (uVar7 = FUN_011d66f8(*plVar2 + 8), (uVar7 & 1) != 0)) &&
                 (uVar7 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
                (**(code **)(*(long *)*plVar2 + 0xa8))();
                *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
                *(undefined8 *)(lVar6 + 0xb0) = 0;
              }
              puVar5 = PTR_FUN_047d9428;
              for (plVar1 = plVar1 + 5; plVar1 != plVar3; plVar1 = plVar1 + 1) {
                if (((*plVar1 != 0) && (uVar7 = FUN_011d66f8(*plVar1 + 8), (uVar7 & 1) != 0)) &&
                   (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
                  (**(code **)(*(long *)*plVar1 + 0xa8))();
                  *(undefined **)(lVar6 + 0xa8) = puVar5;
                  *(undefined8 *)(lVar6 + 0xb0) = 0;
                }
              }
            }
          }
        }
      }
      lVar6 = *param_2;
    }
    plVar1 = *(long **)(param_1 + 0x58);
    plVar3 = *(long **)(param_1 + 0x60);
    if (plVar1 != plVar3) {
      if (((*plVar1 != 0) && (uVar7 = FUN_011d66f8(*plVar1 + 8), (uVar7 & 1) != 0)) &&
         (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
        (**(code **)(*(long *)*plVar1 + 0xa8))();
        *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
      }
      plVar2 = plVar1 + 1;
      if (plVar2 != plVar3) {
        if (((*plVar2 != 0) && (uVar7 = FUN_011d66f8(*plVar2 + 8), (uVar7 & 1) != 0)) &&
           (uVar7 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
          (**(code **)(*(long *)*plVar2 + 0xa8))();
          *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
          *(undefined8 *)(lVar6 + 0xb0) = 0;
        }
        plVar2 = plVar1 + 2;
        if (plVar2 != plVar3) {
          if (((*plVar2 != 0) && (uVar7 = FUN_011d66f8(*plVar2 + 8), (uVar7 & 1) != 0)) &&
             (uVar7 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
            (**(code **)(*(long *)*plVar2 + 0xa8))();
            *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
            *(undefined8 *)(lVar6 + 0xb0) = 0;
          }
          plVar2 = plVar1 + 3;
          if (plVar2 != plVar3) {
            if (((*plVar2 != 0) && (uVar7 = FUN_011d66f8(*plVar2 + 8), (uVar7 & 1) != 0)) &&
               (uVar7 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
              (**(code **)(*(long *)*plVar2 + 0xa8))();
              *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
              *(undefined8 *)(lVar6 + 0xb0) = 0;
            }
            plVar2 = plVar1 + 4;
            if (plVar2 != plVar3) {
              if (((*plVar2 != 0) && (uVar7 = FUN_011d66f8(*plVar2 + 8), (uVar7 & 1) != 0)) &&
                 (uVar7 = (**(code **)(*(long *)*plVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
                (**(code **)(*(long *)*plVar2 + 0xa8))();
                *(undefined **)(lVar6 + 0xa8) = PTR_FUN_047d9428;
                *(undefined8 *)(lVar6 + 0xb0) = 0;
              }
              puVar5 = PTR_FUN_047d9428;
              for (plVar1 = plVar1 + 5; plVar1 != plVar3; plVar1 = plVar1 + 1) {
                if (((*plVar1 != 0) && (uVar7 = FUN_011d66f8(*plVar1 + 8), (uVar7 & 1) != 0)) &&
                   (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
                  (**(code **)(*(long *)*plVar1 + 0xa8))();
                  *(undefined **)(lVar6 + 0xa8) = puVar5;
                  *(undefined8 *)(lVar6 + 0xb0) = 0;
                }
              }
            }
          }
        }
      }
    }
    if ((*(byte *)(param_1 + 600) & 7) != 0) {
      pcVar8 = *(code **)(param_1 + 0xa8);
      if ((*(ulong *)(param_1 + 0xb0) & 1) != 0) {
        pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xb0) >> 1)));
      }
      (*pcVar8)();
    }
    if (bVar9) {
      return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_015e1130;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_015e1130;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_015e1130:
  bVar9 = false;
  goto LAB_015e1134;
}


