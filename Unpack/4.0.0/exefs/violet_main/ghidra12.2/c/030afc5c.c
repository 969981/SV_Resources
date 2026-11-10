/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030afc5c; name: FUN_030afc5c
 */


void FUN_030afc5c(long param_1,long *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  void *__dest;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  char cVar12;
  void *__src;
  long *plVar13;
  undefined8 local_270 [56];
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  
  puVar5 = PTR_DAT_047d1a08;
  cVar12 = *(char *)(param_1 + 100);
  pcVar1 = (char *)(param_1 + 100);
  if (cVar12 == '\0') {
    if (*(char *)(param_1 + 0x30) == '\0') {
      plVar7 = *(long **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = 0;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar8 = plVar7 + 2;
        do {
          lVar10 = *plVar8;
          cVar12 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar10 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar10 == 1) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      puVar11 = (undefined8 *)0x0;
    }
    else {
      local_270[0] = 0x50;
      plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_270,0);
      if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
        (**(code **)(puVar5 + 0x10))(plVar7,"PathRequestInput");
      }
      memset(plVar7,0,0x50);
      plVar7[1] = 0xffffffff;
      plVar13 = plVar7 + 2;
      *plVar13 = 1;
      *plVar7 = (long)(PTR_DAT_047e5070 + 0x10);
      plVar8 = plVar7 + 6;
      *plVar8 = 0;
      plVar7[7] = -0x8000000000000000;
      plVar7[8] = 0;
      lVar10 = *(long *)(param_1 + 0x20);
      plVar7[5] = *(long *)(param_1 + 0x28);
      plVar7[4] = lVar10;
      if ((long *)(param_1 + 0x38) == plVar8) {
        plVar8 = (long *)0x0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x40);
        __src = *(void **)(param_1 + 0x38);
        if (iVar6 < 1) {
          __dest = (void *)0x0;
        }
        else {
          FUN_030ae110(plVar8,PTR_PTR_047d1a50,(long)iVar6);
          __dest = (void *)*plVar8;
        }
        memcpy(__dest,__src,(long)iVar6 << 5);
        plVar8 = (long *)plVar7[8];
        *(int *)(plVar7 + 7) = iVar6;
      }
      plVar9 = *(long **)(param_1 + 0x48);
      if (plVar8 != plVar9) {
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar9 = plVar9 + 2;
          do {
            cVar12 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = *plVar9 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          plVar8 = (long *)plVar7[8];
          plVar9 = *(long **)(param_1 + 0x48);
        }
        plVar7[8] = (long)plVar9;
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          plVar9 = plVar8 + 2;
          do {
            lVar10 = *plVar9;
            cVar12 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar10 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      }
      uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x240);
      local_270[0] = 0x58;
      plVar8 = (long *)(**(code **)puVar5)(0,local_270,0);
      if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
        (**(code **)(puVar5 + 0x10))(plVar8,"PathRequest");
      }
      lVar10 = *(long *)(param_1 + 0x18);
      plVar8[2] = 1;
      *(undefined1 *)(plVar8 + 3) = uVar2;
      *(undefined4 *)((long)plVar8 + 0x1c) = 0;
      *(undefined1 *)(plVar8 + 4) = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      *plVar8 = (long)(PTR_DAT_047e5078 + 0x10);
      plVar8[1] = 0xffffffff;
      plVar8[7] = lVar10;
      plVar8[8] = (long)plVar7;
      if (plVar7[1] != 0) {
        do {
          cVar12 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      plVar8[9] = 0;
      plVar8[10] = -0x8000000000000000;
      plVar9 = *(long **)(param_1 + 0x68);
      *(long **)(param_1 + 0x68) = plVar8;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar8 = plVar9 + 2;
        do {
          lVar10 = *plVar8;
          cVar12 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar10 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      if (plVar7[1] != 0) {
        do {
          lVar10 = *plVar13;
          cVar12 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar10 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      plVar7 = param_2 + 4;
      do {
        lVar10 = *plVar7;
        cVar12 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar10 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      puVar11 = (undefined8 *)(*param_2 + ((lVar10 << 0x20) >> 0x1c));
      *puVar11 = 0;
      plVar7 = puVar11 + 1;
      *plVar7 = 0;
      *(undefined4 *)puVar11 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x23c);
      lVar10 = *(long *)(param_1 + 0x68);
      if (lVar10 != 0) {
        if ((lVar10 == 0) || (*(long *)(lVar10 + 8) == 0)) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)(lVar10 + 0x10);
          do {
            cVar12 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          plVar8 = (long *)*plVar7;
          lVar10 = *(long *)(param_1 + 0x68);
        }
        *plVar7 = lVar10;
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          plVar7 = plVar8 + 2;
          do {
            lVar10 = *plVar7;
            cVar12 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar10 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      }
    }
    do {
      cVar12 = *pcVar1;
      if (cVar12 != '\0') {
        ClearExclusiveLocal();
        if (*(long *)(param_1 + 0x68) != 0) {
          *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x20) = 3;
          plVar7 = *(long **)(param_1 + 0x68);
          *(undefined8 *)(param_1 + 0x68) = 0;
          if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
            plVar8 = plVar7 + 2;
            do {
              lVar10 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 + -1 == 0) {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          plVar7 = (long *)puVar11[1];
          puVar11[1] = 0;
          if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
            plVar8 = plVar7 + 2;
            do {
              lVar10 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 + -1 == 0) {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
        }
        goto LAB_030afc8c;
      }
      cVar12 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  else {
LAB_030afc8c:
    if (cVar12 != '\x04') {
      if (cVar12 == '\x02') {
        do {
          if (*pcVar1 != '\x02') {
            ClearExclusiveLocal();
            if ((byte)(*pcVar1 - 3U) < 2) {
              return;
            }
            goto LAB_030afdfc;
          }
          cVar12 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *pcVar1 = '\x03';
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      else {
LAB_030afdfc:
        local_a0 = 1;
        uStack_98 = 0;
        uStack_88 = 0;
        local_b0 = PTR_DAT_047e34b8 + 0x10;
        uStack_a8 = 0xffffffff;
        local_80 = 0x1bf;
        local_78 = 0;
        local_90 = (undefined1 *)local_270;
        memset(local_270,0,0x1c0);
        FUN_0322bd4c(&local_b0,"Invalid state.",0xe);
        iVar6 = FUN_03226f50(0x7c46ad5a,local_270,
                             "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/Navigator/hkaiNavigatorStaleness.cpp"
                             ,0xb2);
        if (iVar6 != 0) {
          CallSupervisor(0x26);
        }
      }
    }
  }
  return;
}


