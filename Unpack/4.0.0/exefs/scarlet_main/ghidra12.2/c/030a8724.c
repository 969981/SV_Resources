/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a8724; name: FUN_030a8724
 */


void FUN_030a8724(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_047e5038;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[3] = *(long *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 6) = 0;
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 8) == 0) {
      param_1[4] = lVar6;
    }
    else {
      plVar4 = (long *)(lVar6 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[4];
      param_1[4] = *(long *)(param_2 + 0x20);
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar5 = plVar4 + 2;
        do {
          lVar6 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x30) = 0;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  lVar6 = *(long *)(param_2 + 0x50);
  param_1[0xb] = *(long *)(param_2 + 0x58);
  param_1[10] = lVar6;
  puVar3 = PTR_DAT_047d1a08;
  lVar6 = *(long *)(param_2 + 0x68);
  if (lVar6 != 0) {
    local_38 = 0x28;
    plVar4 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
      (**(code **)(puVar3 + 0x10))(plVar4,"hkaiNavVolumeInstanceQueryMediator");
    }
    plVar5 = *(long **)(lVar6 + 0x18);
    *plVar4 = (long)(PTR_DAT_047e5048 + 0x10);
    plVar4[1] = 0xffffffff;
    plVar4[2] = 1;
    plVar4[3] = (long)plVar5;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar5 = (long *)plVar4[3];
    }
    plVar4[4] = (long)param_1;
    (**(code **)(*plVar5 + 0x30))(plVar5,*(undefined8 *)(param_1[4] + 0x38));
    plVar5 = (long *)param_1[0xd];
    param_1[0xd] = (long)plVar4;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar4 = plVar5 + 2;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  return;
}


