/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01596c70; name: FUN_01596c70
 */


void FUN_01596c70(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  
  plVar1 = (long *)(param_1 + 8);
  lVar9 = *plVar1;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar9) {
    bVar10 = true;
LAB_01596cc0:
    puVar6 = PTR_FUN_047d9428;
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    lVar7 = *param_2;
    if (puVar3 != puVar4) {
      uVar8 = FUN_01596ffc(puVar3);
      if ((uVar8 & 1) != 0) {
        (**(code **)(*(long *)*puVar3 + 0xa8))();
        *(undefined **)(lVar7 + 0xa8) = puVar6;
        *(undefined8 *)(lVar7 + 0xb0) = 0;
      }
      puVar2 = puVar3 + 1;
      if (puVar2 != puVar4) {
        uVar8 = FUN_01596ffc(puVar2);
        if ((uVar8 & 1) != 0) {
          (**(code **)(*(long *)*puVar2 + 0xa8))();
          *(undefined **)(lVar7 + 0xa8) = puVar6;
          *(undefined8 *)(lVar7 + 0xb0) = 0;
        }
        puVar2 = puVar3 + 2;
        if (puVar2 != puVar4) {
          uVar8 = FUN_01596ffc(puVar2);
          if ((uVar8 & 1) != 0) {
            (**(code **)(*(long *)*puVar2 + 0xa8))();
            *(undefined **)(lVar7 + 0xa8) = puVar6;
            *(undefined8 *)(lVar7 + 0xb0) = 0;
          }
          puVar2 = puVar3 + 3;
          if (puVar2 != puVar4) {
            uVar8 = FUN_01596ffc(puVar2);
            if ((uVar8 & 1) != 0) {
              (**(code **)(*(long *)*puVar2 + 0xa8))();
              *(undefined **)(lVar7 + 0xa8) = puVar6;
              *(undefined8 *)(lVar7 + 0xb0) = 0;
            }
            puVar2 = puVar3 + 4;
            if (puVar2 != puVar4) {
              uVar8 = FUN_01596ffc(puVar2);
              if ((uVar8 & 1) != 0) {
                (**(code **)(*(long *)*puVar2 + 0xa8))();
                *(undefined **)(lVar7 + 0xa8) = puVar6;
                *(undefined8 *)(lVar7 + 0xb0) = 0;
              }
              puVar2 = puVar3 + 5;
              if (puVar2 != puVar4) {
                uVar8 = FUN_01596ffc(puVar2);
                if ((uVar8 & 1) != 0) {
                  (**(code **)(*(long *)*puVar2 + 0xa8))();
                  *(undefined **)(lVar7 + 0xa8) = puVar6;
                  *(undefined8 *)(lVar7 + 0xb0) = 0;
                }
                for (puVar3 = puVar3 + 6; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                  uVar8 = FUN_01596ffc(puVar3);
                  if ((uVar8 & 1) != 0) {
                    (**(code **)(*(long *)*puVar3 + 0xa8))();
                    *(undefined **)(lVar7 + 0xa8) = puVar6;
                    *(undefined8 *)(lVar7 + 0xb0) = 0;
                  }
                }
              }
            }
          }
        }
      }
      lVar7 = *param_2;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 != puVar4) {
      uVar8 = FUN_01596ffc(puVar3);
      if ((uVar8 & 1) != 0) {
        (**(code **)(*(long *)*puVar3 + 0xa8))();
        *(undefined **)(lVar7 + 0xa8) = puVar6;
        *(undefined8 *)(lVar7 + 0xb0) = 0;
      }
      puVar2 = puVar3 + 1;
      if (puVar2 != puVar4) {
        uVar8 = FUN_01596ffc(puVar2);
        if ((uVar8 & 1) != 0) {
          (**(code **)(*(long *)*puVar2 + 0xa8))();
          *(undefined **)(lVar7 + 0xa8) = puVar6;
          *(undefined8 *)(lVar7 + 0xb0) = 0;
        }
        puVar2 = puVar3 + 2;
        if (puVar2 != puVar4) {
          uVar8 = FUN_01596ffc(puVar2);
          if ((uVar8 & 1) != 0) {
            (**(code **)(*(long *)*puVar2 + 0xa8))();
            *(undefined **)(lVar7 + 0xa8) = puVar6;
            *(undefined8 *)(lVar7 + 0xb0) = 0;
          }
          puVar2 = puVar3 + 3;
          if (puVar2 != puVar4) {
            uVar8 = FUN_01596ffc(puVar2);
            if ((uVar8 & 1) != 0) {
              (**(code **)(*(long *)*puVar2 + 0xa8))();
              *(undefined **)(lVar7 + 0xa8) = puVar6;
              *(undefined8 *)(lVar7 + 0xb0) = 0;
            }
            puVar2 = puVar3 + 4;
            if (puVar2 != puVar4) {
              uVar8 = FUN_01596ffc(puVar2);
              if ((uVar8 & 1) != 0) {
                (**(code **)(*(long *)*puVar2 + 0xa8))();
                *(undefined **)(lVar7 + 0xa8) = puVar6;
                *(undefined8 *)(lVar7 + 0xb0) = 0;
              }
              puVar2 = puVar3 + 5;
              if (puVar2 != puVar4) {
                uVar8 = FUN_01596ffc(puVar2);
                if ((uVar8 & 1) != 0) {
                  (**(code **)(*(long *)*puVar2 + 0xa8))();
                  *(undefined **)(lVar7 + 0xa8) = puVar6;
                  *(undefined8 *)(lVar7 + 0xb0) = 0;
                }
                for (puVar3 = puVar3 + 6; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                  uVar8 = FUN_01596ffc(puVar3);
                  if ((uVar8 & 1) != 0) {
                    (**(code **)(*(long *)*puVar3 + 0xa8))();
                    *(undefined **)(lVar7 + 0xa8) = puVar6;
                    *(undefined8 *)(lVar7 + 0xb0) = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ((*(byte *)(param_1 + 600) & 7) != 0) {
      FUN_016a9abc(param_1);
    }
    if (bVar10) {
      return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01596cbc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01596cbc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01596cbc:
  bVar10 = false;
  goto LAB_01596cc0;
}


