/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f71a98; name: FUN_02f71a98
 */


void FUN_02f71a98(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 local_48;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_046102b8;
  memset(param_1 + 2,0,0x1e08);
  puVar4 = PTR_DAT_047d1a08;
  local_48 = 0x18;
  plVar5 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(plVar5,"hkReferencedObject");
  }
  plVar5[1] = 0xffffffff;
  lVar9 = 0;
  plVar8 = plVar5 + 2;
  *plVar8 = 1;
  *plVar5 = (long)(PTR_DAT_047e48f8 + 0x10);
  if (plVar5 == (long *)0x0) {
    do {
      plVar6 = (long *)param_1[lVar9 * 0x1f + 2];
      param_1[lVar9 * 0x1f + 2] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 3];
      param_1[lVar9 * 0x1f + 3] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 4];
      param_1[lVar9 * 0x1f + 4] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 5];
      param_1[lVar9 * 0x1f + 5] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 6];
      param_1[lVar9 * 0x1f + 6] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 7];
      param_1[lVar9 * 0x1f + 7] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 8];
      param_1[lVar9 * 0x1f + 8] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 9];
      param_1[lVar9 * 0x1f + 9] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 10];
      param_1[lVar9 * 0x1f + 10] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0xb];
      param_1[lVar9 * 0x1f + 0xb] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0xc];
      param_1[lVar9 * 0x1f + 0xc] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0xd];
      param_1[lVar9 * 0x1f + 0xd] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0xe];
      param_1[lVar9 * 0x1f + 0xe] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0xf];
      param_1[lVar9 * 0x1f + 0xf] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x10];
      param_1[lVar9 * 0x1f + 0x10] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x11];
      param_1[lVar9 * 0x1f + 0x11] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x12];
      param_1[lVar9 * 0x1f + 0x12] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x13];
      param_1[lVar9 * 0x1f + 0x13] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x14];
      param_1[lVar9 * 0x1f + 0x14] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x15];
      param_1[lVar9 * 0x1f + 0x15] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x16];
      param_1[lVar9 * 0x1f + 0x16] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x17];
      param_1[lVar9 * 0x1f + 0x17] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x18];
      param_1[lVar9 * 0x1f + 0x18] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x19];
      param_1[lVar9 * 0x1f + 0x19] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x1a];
      param_1[lVar9 * 0x1f + 0x1a] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x1b];
      param_1[lVar9 * 0x1f + 0x1b] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x1c];
      param_1[lVar9 * 0x1f + 0x1c] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x1d];
      param_1[lVar9 * 0x1f + 0x1d] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x1e];
      param_1[lVar9 * 0x1f + 0x1e] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x1f];
      param_1[lVar9 * 0x1f + 0x1f] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[lVar9 * 0x1f + 0x20];
      param_1[lVar9 * 0x1f + 0x20] = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x1f);
  }
  else {
    do {
      lVar10 = 0;
      do {
        if (plVar5[1] != 0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar6 = (long *)param_1[lVar9 * 0x1f + lVar10 + 2];
        param_1[lVar9 * 0x1f + lVar10 + 2] = plVar5;
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
          plVar1 = plVar6 + 2;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x1f);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x1f);
  }
  if (plVar5[1] != 0) {
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  return;
}


