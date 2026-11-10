/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005dea18; name: FUN_005dea18
 */


void FUN_005dea18(long *param_1,byte param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 local_98;
  long *local_90;
  undefined1 auStack_88 [8];
  long *local_80;
  undefined1 auStack_78 [8];
  ulong local_70;
  long local_60;
  long local_50;
  long *local_48;
  
  bVar3 = *(byte *)(param_1 + 2);
  if ((bVar3 & 1) == 0) {
    if (bVar3 < 2) {
      return;
    }
  }
  else if (param_1[3] == 0) {
    return;
  }
  local_50 = 0;
  local_48 = (long *)0x0;
  if ((param_1[1] != 0) &&
     (local_48 = (long *)std::__shared_weak_count::lock(), local_48 != (long *)0x0)) {
    local_50 = *param_1;
    if (local_50 != 0) {
                    /* try { // try from 005dea80 to 005dea8b has its CatchHandler @ 005deca0 */
      FUN_00605794(auStack_78,0);
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        lVar8 = (long)param_1 + 0x11;
      }
      else {
        lVar8 = param_1[4];
      }
                    /* try { // try from 005deab0 to 005deacf has its CatchHandler @ 005deca8 */
      FUN_005deccc(auStack_78,lVar8);
      if (local_60 == 0) {
        puVar6 = (ulong *)(local_70 & 0xfffffffffffffffe);
        if ((local_70 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        local_60 = FUN_00616300(puVar6);
      }
      *(byte *)(local_60 + 0x48) = param_2 & 1;
      pbVar9 = (byte *)*param_3;
      pbVar2 = (byte *)param_3[1];
      if (pbVar9 != pbVar2) {
        if (local_60 == 0) goto LAB_005deb00;
LAB_005deaf0:
        if ((*pbVar9 & 1) != 0) goto LAB_005deb1c;
        do {
          pbVar7 = pbVar9 + 1;
          while( true ) {
            FUN_005dedec(local_60,pbVar7);
            if (pbVar2 + -0x20 == pbVar9) goto LAB_005deb44;
            pbVar9 = pbVar9 + 0x20;
            if (local_60 != 0) goto LAB_005deaf0;
LAB_005deb00:
            puVar6 = (ulong *)(local_70 & 0xfffffffffffffffe);
            if ((local_70 & 1) != 0) {
              puVar6 = (ulong *)*puVar6;
            }
                    /* try { // try from 005deb0c to 005deb23 has its CatchHandler @ 005decb0 */
            local_60 = FUN_00616300(puVar6);
            if ((*pbVar9 & 1) == 0) break;
LAB_005deb1c:
            pbVar7 = *(byte **)(pbVar9 + 0x10);
          }
        } while( true );
      }
LAB_005deb44:
      pbVar2 = (byte *)param_4[1];
      for (pbVar9 = (byte *)*param_4; pbVar9 != pbVar2; pbVar9 = pbVar9 + 0x20) {
        if (local_60 == 0) {
          puVar6 = (ulong *)(local_70 & 0xfffffffffffffffe);
          if ((local_70 & 1) != 0) {
            puVar6 = (ulong *)*puVar6;
          }
                    /* try { // try from 005deb74 to 005deb8b has its CatchHandler @ 005decac */
          local_60 = FUN_00616300(puVar6);
          if ((*pbVar9 & 1) == 0) goto LAB_005deb60;
LAB_005deb84:
          pbVar7 = *(byte **)(pbVar9 + 0x10);
        }
        else {
          if ((*pbVar9 & 1) != 0) goto LAB_005deb84;
LAB_005deb60:
          pbVar7 = pbVar9 + 1;
        }
        FUN_005deef4(local_60,pbVar7);
      }
      local_98 = 0;
      local_90 = (long *)0x0;
      FUN_005deffc(auStack_88,*(undefined8 *)(local_50 + 8),auStack_78,&local_98);
      if (local_80 != (long *)0x0) {
        plVar1 = local_80 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_90 != (long *)0x0) {
        plVar1 = local_90 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar8 = param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      if (lVar8 != 0) {
        std::__shared_weak_count::__release_weak();
      }
      FUN_006057e8(auStack_78);
      if (local_48 == (long *)0x0) {
        return;
      }
    }
    plVar1 = local_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


