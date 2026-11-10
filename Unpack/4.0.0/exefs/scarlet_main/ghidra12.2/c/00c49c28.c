/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c49c28; name: FUN_00c49c28
 */


void FUN_00c49c28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if ((*(byte *)((long)param_1 + 0x99) & 1) != 0) {
    if ((*(byte *)(param_1 + 7) & 1) != 0) {
      puVar8 = (undefined8 *)*param_1;
      puVar10 = (undefined8 *)param_1[1];
      if (puVar10 != puVar8) {
        pcVar7 = (code *)puVar10[-0xf];
        if (pcVar7 != (code *)0x0) {
          puVar10[-0xe] = 0;
          puVar10[-0xd] = 0;
          puVar10[-0x10] = 0;
          puVar10[-0xf] = 0;
          (*pcVar7)(puVar10 + -0xc);
        }
        if (puVar10 + -0x10 != puVar8) {
          pcVar7 = (code *)puVar10[-0x1f];
          if (pcVar7 != (code *)0x0) {
            puVar10[-0x1e] = 0;
            puVar10[-0x1d] = 0;
            puVar10[-0x20] = 0;
            puVar10[-0x1f] = 0;
            (*pcVar7)(puVar10 + -0x1c);
          }
          if (puVar10 + -0x20 != puVar8) {
            pcVar7 = (code *)puVar10[-0x2f];
            if (pcVar7 != (code *)0x0) {
              puVar10[-0x2e] = 0;
              puVar10[-0x2d] = 0;
              puVar10[-0x30] = 0;
              puVar10[-0x2f] = 0;
              (*pcVar7)(puVar10 + -0x2c);
            }
            if (puVar10 + -0x30 != puVar8) {
              pcVar7 = (code *)puVar10[-0x3f];
              if (pcVar7 != (code *)0x0) {
                puVar10[-0x3e] = 0;
                puVar10[-0x3d] = 0;
                puVar10[-0x40] = 0;
                puVar10[-0x3f] = 0;
                (*pcVar7)(puVar10 + -0x3c);
              }
              if (puVar10 + -0x40 != puVar8) {
                pcVar7 = (code *)puVar10[-0x4f];
                if (pcVar7 != (code *)0x0) {
                  puVar10[-0x4e] = 0;
                  puVar10[-0x4d] = 0;
                  puVar10[-0x50] = 0;
                  puVar10[-0x4f] = 0;
                  (*pcVar7)(puVar10 + -0x4c);
                }
                if (puVar10 + -0x50 != puVar8) {
                  do {
                    pcVar7 = (code *)puVar10[-0x5f];
                    if (pcVar7 != (code *)0x0) {
                      puVar10[-0x5e] = 0;
                      puVar10[-0x5d] = 0;
                      puVar10[-0x60] = 0;
                      puVar10[-0x5f] = 0;
                      (*pcVar7)(puVar10 + -0x5c);
                    }
                    puVar10 = puVar10 + -0x10;
                  } while (puVar8 + 0x50 != puVar10);
                }
              }
            }
          }
        }
      }
      param_1[1] = puVar8;
      *(undefined1 *)(param_1 + 7) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x99) = 0;
  }
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    plVar2 = param_1 + 0x10;
    lVar5 = nn::os::GetCurrentThread();
LAB_00c49d08:
    if (*plVar2 == 0) goto code_r0x00c49d10;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x11));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x11));
          while (*plVar2 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00c49d18;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00c49d18:
    FUN_00c4a2f4(param_1,param_1[1],param_1[8],param_1[9]);
    *(undefined1 *)(param_1 + 7) = 1;
    puVar8 = (undefined8 *)param_1[8];
    puVar10 = (undefined8 *)param_1[9];
    if (puVar10 != puVar8) {
      pcVar7 = (code *)puVar10[-0xf];
      if (pcVar7 != (code *)0x0) {
        puVar10[-0xe] = 0;
        puVar10[-0xd] = 0;
        puVar10[-0x10] = 0;
        puVar10[-0xf] = 0;
        (*pcVar7)(puVar10 + -0xc);
      }
      if (puVar10 + -0x10 != puVar8) {
        pcVar7 = (code *)puVar10[-0x1f];
        if (pcVar7 != (code *)0x0) {
          puVar10[-0x1e] = 0;
          puVar10[-0x1d] = 0;
          puVar10[-0x20] = 0;
          puVar10[-0x1f] = 0;
          (*pcVar7)(puVar10 + -0x1c);
        }
        if (puVar10 + -0x20 != puVar8) {
          pcVar7 = (code *)puVar10[-0x2f];
          if (pcVar7 != (code *)0x0) {
            puVar10[-0x2e] = 0;
            puVar10[-0x2d] = 0;
            puVar10[-0x30] = 0;
            puVar10[-0x2f] = 0;
            (*pcVar7)(puVar10 + -0x2c);
          }
          if (puVar10 + -0x30 != puVar8) {
            pcVar7 = (code *)puVar10[-0x3f];
            if (pcVar7 != (code *)0x0) {
              puVar10[-0x3e] = 0;
              puVar10[-0x3d] = 0;
              puVar10[-0x40] = 0;
              puVar10[-0x3f] = 0;
              (*pcVar7)(puVar10 + -0x3c);
            }
            if (puVar10 + -0x40 != puVar8) {
              pcVar7 = (code *)puVar10[-0x4f];
              if (pcVar7 != (code *)0x0) {
                puVar10[-0x4e] = 0;
                puVar10[-0x4d] = 0;
                puVar10[-0x50] = 0;
                puVar10[-0x4f] = 0;
                (*pcVar7)(puVar10 + -0x4c);
              }
              if (puVar10 + -0x50 != puVar8) {
                do {
                  pcVar7 = (code *)puVar10[-0x5f];
                  if (pcVar7 != (code *)0x0) {
                    puVar10[-0x5e] = 0;
                    puVar10[-0x5d] = 0;
                    puVar10[-0x60] = 0;
                    puVar10[-0x5f] = 0;
                    (*pcVar7)(puVar10 + -0x5c);
                  }
                  puVar10 = puVar10 + -0x10;
                } while (puVar8 + 0x50 != puVar10);
              }
            }
          }
        }
      }
    }
    param_1[9] = puVar8;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    param_1[0x10] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x11));
  }
  puVar8 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  if ((puVar8 != puVar10) && (uVar6 = (*(code *)*puVar8)(puVar8 + 4,param_2), (uVar6 & 1) == 0)) {
    do {
      puVar9 = puVar10;
      if (puVar10 + -0x10 == puVar8) goto LAB_00c49c78;
      puVar9 = puVar8 + 0x10;
      puVar1 = puVar8 + 0x14;
      puVar8 = puVar8 + 0x10;
      uVar6 = (*(code *)*puVar9)(puVar1,param_2);
    } while ((uVar6 & 1) == 0);
  }
  puVar9 = puVar8;
  if ((puVar8 != puVar10) && (puVar8 + 0x10 != puVar10)) {
    uVar6 = (*(code *)puVar8[0x10])(puVar8 + 0x14,param_2);
    if ((uVar6 & 1) == 0) {
      FUN_00c4a25c(puVar8,puVar8 + 0x10);
      puVar9 = puVar8 + 0x10;
    }
    if (puVar8 + 0x20 != puVar10) {
      uVar6 = (*(code *)puVar8[0x20])(puVar8 + 0x24,param_2);
      if ((uVar6 & 1) == 0) {
        FUN_00c4a25c(puVar9,puVar8 + 0x20);
        puVar9 = puVar9 + 0x10;
      }
      if (puVar8 + 0x30 != puVar10) {
        uVar6 = (*(code *)puVar8[0x30])(puVar8 + 0x34,param_2);
        if ((uVar6 & 1) == 0) {
          FUN_00c4a25c(puVar9,puVar8 + 0x30);
          puVar9 = puVar9 + 0x10;
        }
        if (puVar8 + 0x40 != puVar10) {
          uVar6 = (*(code *)puVar8[0x40])(puVar8 + 0x44,param_2);
          if ((uVar6 & 1) == 0) {
            FUN_00c4a25c(puVar9,puVar8 + 0x40);
            puVar9 = puVar9 + 0x10;
          }
          if (puVar8 + 0x50 != puVar10) {
            uVar6 = (*(code *)puVar8[0x50])(puVar8 + 0x54,param_2);
            if ((uVar6 & 1) == 0) {
              FUN_00c4a25c(puVar9,puVar8 + 0x50);
              puVar9 = puVar9 + 0x10;
            }
            for (puVar8 = puVar8 + 0x60; puVar8 != puVar10; puVar8 = puVar8 + 0x10) {
              uVar6 = (*(code *)*puVar8)(puVar8 + 4,param_2);
              if ((uVar6 & 1) == 0) {
                FUN_00c4a25c(puVar9,puVar8);
                puVar9 = puVar9 + 0x10;
              }
            }
          }
        }
      }
    }
  }
LAB_00c49c78:
  puVar8 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar8 - (long)puVar9;
  if (lVar5 != 0) {
    if ((undefined8 *)((long)puVar9 + lVar5) != puVar8) {
      do {
        FUN_00c4a25c(puVar9,puVar9 + (lVar5 >> 7) * 0x10);
        puVar9 = puVar9 + 0x10;
      } while (puVar8 + (lVar5 >> 7) * -0x10 != puVar9);
      puVar8 = (undefined8 *)param_1[1];
    }
    if (puVar8 != puVar9) {
      pcVar7 = (code *)puVar8[-0xf];
      if (pcVar7 != (code *)0x0) {
        puVar8[-0xe] = 0;
        puVar8[-0xd] = 0;
        puVar8[-0x10] = 0;
        puVar8[-0xf] = 0;
        (*pcVar7)(puVar8 + -0xc);
      }
      if (puVar8 + -0x10 != puVar9) {
        pcVar7 = (code *)puVar8[-0x1f];
        if (pcVar7 != (code *)0x0) {
          puVar8[-0x1e] = 0;
          puVar8[-0x1d] = 0;
          puVar8[-0x20] = 0;
          puVar8[-0x1f] = 0;
          (*pcVar7)(puVar8 + -0x1c);
        }
        if (puVar8 + -0x20 != puVar9) {
          pcVar7 = (code *)puVar8[-0x2f];
          if (pcVar7 != (code *)0x0) {
            puVar8[-0x2e] = 0;
            puVar8[-0x2d] = 0;
            puVar8[-0x30] = 0;
            puVar8[-0x2f] = 0;
            (*pcVar7)(puVar8 + -0x2c);
          }
          if (puVar8 + -0x30 != puVar9) {
            pcVar7 = (code *)puVar8[-0x3f];
            if (pcVar7 != (code *)0x0) {
              puVar8[-0x3e] = 0;
              puVar8[-0x3d] = 0;
              puVar8[-0x40] = 0;
              puVar8[-0x3f] = 0;
              (*pcVar7)(puVar8 + -0x3c);
            }
            if (puVar8 + -0x40 != puVar9) {
              pcVar7 = (code *)puVar8[-0x4f];
              if (pcVar7 != (code *)0x0) {
                puVar8[-0x4e] = 0;
                puVar8[-0x4d] = 0;
                puVar8[-0x50] = 0;
                puVar8[-0x4f] = 0;
                (*pcVar7)(puVar8 + -0x4c);
              }
              if (puVar8 + -0x50 != puVar9) {
                do {
                  pcVar7 = (code *)puVar8[-0x5f];
                  if (pcVar7 != (code *)0x0) {
                    puVar8[-0x5e] = 0;
                    puVar8[-0x5d] = 0;
                    puVar8[-0x60] = 0;
                    puVar8[-0x5f] = 0;
                    (*pcVar7)(puVar8 + -0x5c);
                  }
                  puVar8 = puVar8 + -0x10;
                } while (puVar9 + 0x50 != puVar8);
              }
            }
          }
        }
      }
    }
    param_1[1] = puVar9;
  }
  if ((undefined8 *)*param_1 == puVar9) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
code_r0x00c49d10:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar4) {
    *plVar2 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00c49d18;
  goto LAB_00c49d08;
}


