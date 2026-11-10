/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03107e10; name: FUN_03107e10
 */


void FUN_03107e10(undefined8 *param_1,long param_2,char *param_3,byte param_4,undefined4 param_5)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *local_70;
  long *local_68;
  long *local_48;
  
  lVar11 = tpidr_el0;
  lVar9 = *(long *)(lVar11 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar11 + 0x1000b8) = lVar9;
  }
  plVar12 = *(long **)(lVar9 + 0x3e0);
  if (plVar12 != (long *)0x0) {
    lVar11 = *plVar12;
    if (*(code **)(lVar11 + 0x18) != (code *)0x0) {
      (**(code **)(lVar11 + 0x18))
                ("hkaiWorldProcessingTasks::makeContext",0x25,*(undefined8 *)(lVar11 + 0x28));
    }
    puVar6 = (undefined8 *)plVar12[2];
    uVar10 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar12[3]) && (plVar12[2] = uVar10, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TthkaiWorldProcessingTasks::makeContext";
      uVar5 = nn::os::GetSystemTick();
      puVar6[1] = uVar5;
    }
    if (((*(byte *)(lVar11 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
      puVar6 = (undefined8 *)plVar12[2];
      uVar10 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar12[3]) && (plVar12[2] = uVar10, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar12[6] + 8);
      }
    }
  }
  puVar4 = PTR_DAT_047d1a08;
  local_48 = (long *)0xb8;
  local_68 = plVar12;
  puVar6 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(puVar6,"hkReferencedObject");
  }
  memset(puVar6,0,0xb8);
  *puVar6 = &PTR_LAB_0464deb8;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0;
  puVar6[1] = 0xffffffff;
  puVar6[2] = 1;
  *(undefined1 *)(puVar6 + 5) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0x80000000;
  *(undefined4 *)(puVar6 + 9) = 0x7fffffff;
  puVar6[4] = 0;
  *(undefined1 *)((long)puVar6 + 0x4c) = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined1 *)(puVar6 + 0xe) = 0;
  *(undefined4 *)((long)puVar6 + 0x7c) = 0xffffffff;
  *(undefined1 *)(puVar6 + 0x10) = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0x8000000000000000;
  puVar6[0xc] = &DAT_03d7702c;
  *(undefined8 *)((long)puVar6 + 0x74) = 0x7fffffff7fffffff;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  *param_1 = puVar6;
  puVar6[3] = param_2;
  FUN_03108410(puVar6 + 5,param_3);
  *(byte *)(puVar6 + 0x15) = param_4 & 1;
  if ((*param_3 == '\0') && (param_3[0x48] == '\0')) goto LAB_031080d0;
  if ((param_4 & 1) == 0) {
    lVar11 = *(long *)(param_2 + 0x250);
    if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
      plVar8 = (long *)(lVar11 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar8 = (long *)puVar6[4];
    puVar6[4] = lVar11;
    if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) goto LAB_031080d0;
    plVar7 = plVar8 + 2;
    do {
      lVar11 = *plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uVar1 = 0;
    if (param_3[0x48] != '\0') {
      uVar1 = *(undefined4 *)(param_3 + 0x54);
    }
    FUN_030d166c(&local_48,*(undefined8 *)(param_2 + 0x250),uVar1);
    plVar8 = local_48;
    local_48 = (long *)0x0;
    plVar7 = (long *)puVar6[4];
    puVar6[4] = plVar8;
    if (plVar7 == (long *)0x0) goto LAB_031080d0;
    if (plVar7[1] != 0) {
      plVar8 = plVar7 + 2;
      do {
        lVar11 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    if ((local_48 == (long *)0x0) || (local_48[1] == 0)) goto LAB_031080d0;
    plVar7 = local_48 + 2;
    do {
      lVar11 = *plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_48;
    } while (cVar2 != '\0');
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x18))();
  }
LAB_031080d0:
  if (*param_3 == '\0') {
    local_48 = *(long **)(param_2 + 0x130);
  }
  else {
    FUN_0310a200(&local_70,param_2,param_3,puVar6[4],param_4 & 1,param_5,&local_48);
    plVar8 = local_70;
    local_70 = (long *)0x0;
    plVar7 = (long *)puVar6[0x11];
    puVar6[0x11] = plVar8;
    if (plVar7 != (long *)0x0) {
      if (plVar7[1] != 0) {
        plVar8 = plVar7 + 2;
        do {
          lVar11 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
        plVar8 = local_70 + 2;
        do {
          lVar11 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*local_70 + 0x18))();
        }
      }
    }
  }
  if (param_3[0x24] != '\0') {
    FUN_03118f20(&local_70,param_2,local_48,param_3,param_4 & 1,param_5);
    plVar8 = local_70;
    local_70 = (long *)0x0;
    plVar7 = (long *)puVar6[0x12];
    puVar6[0x12] = plVar8;
    if (plVar7 != (long *)0x0) {
      if (plVar7[1] != 0) {
        plVar8 = plVar7 + 2;
        do {
          lVar11 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
        plVar8 = local_70 + 2;
        do {
          lVar11 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*local_70 + 0x18))();
        }
      }
    }
  }
  if (param_3[0x48] != '\0') {
    FUN_0311bb30(&local_70,param_2,local_48,param_3,puVar6[4],param_4 & 1,param_5);
    plVar8 = local_70;
    local_70 = (long *)0x0;
    plVar7 = (long *)puVar6[0x13];
    puVar6[0x13] = plVar8;
    if (plVar7 != (long *)0x0) {
      if (plVar7[1] != 0) {
        plVar8 = plVar7 + 2;
        do {
          lVar11 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
        plVar8 = local_70 + 2;
        do {
          lVar11 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*local_70 + 0x18))();
        }
      }
    }
  }
  if (param_3[0x58] != '\0') {
    FUN_0311f640(&local_70,param_2,param_3,param_4 & 1,param_5);
    plVar8 = local_70;
    local_70 = (long *)0x0;
    plVar7 = (long *)puVar6[0x14];
    puVar6[0x14] = plVar8;
    if (plVar7 != (long *)0x0) {
      if (plVar7[1] != 0) {
        plVar8 = plVar7 + 2;
        do {
          lVar11 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
        plVar8 = local_70 + 2;
        do {
          lVar11 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*local_70 + 0x18))();
        }
      }
    }
  }
  *(undefined4 *)((long)puVar6 + 0xac) = 0;
  if (plVar12 != (long *)0x0) {
    lVar11 = *plVar12;
    if (((*(byte *)(lVar11 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
      puVar6 = (undefined8 *)plVar12[2];
      uVar10 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar12[3]) && (plVar12[2] = uVar10, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar12[6] + 8);
      }
    }
    puVar6 = (undefined8 *)plVar12[2];
    uVar10 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar12[3]) && (plVar12[2] = uVar10, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_03c2d363;
      uVar5 = nn::os::GetSystemTick();
      puVar6[1] = uVar5;
    }
    if (*(code **)(lVar11 + 0x20) != (code *)0x0) {
      (**(code **)(lVar11 + 0x20))(*(undefined8 *)(lVar11 + 0x28));
    }
  }
  return;
}


