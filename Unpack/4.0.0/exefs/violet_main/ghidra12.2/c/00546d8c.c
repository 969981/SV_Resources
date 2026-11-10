/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00546d8c; name: FUN_00546d8c
 */


void FUN_00546d8c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *local_180;
  long *local_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [112];
  long local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  
  if ((param_1[1] != 0) &&
     (plVar7 = (long *)std::__shared_weak_count::lock(), plVar7 != (long *)0x0)) {
    lVar11 = *param_1;
    if (lVar11 != 0) {
      uVar8 = FUN_01cf7e20();
      FUN_01e9fa84(&local_80,uVar8);
      FUN_01e9fb38(&local_70,&local_80);
                    /* try { // try from 00546dec to 00546df7 has its CatchHandler @ 0054723c */
      FUN_0054a1c4(&local_180,*(undefined8 *)(lVar11 + 8),&local_70);
      plVar1 = local_178;
      plVar13 = local_180;
      local_180 = (long *)0x0;
      local_178 = (long *)0x0;
      plVar12 = (long *)param_1[5];
      param_1[4] = (long)plVar13;
      param_1[5] = (long)plVar1;
      if (plVar12 != (long *)0x0) {
        plVar13 = plVar12 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_0054d084(param_1 + 6,auStack_170);
      FUN_0054d26c(param_1 + 0x16,auStack_f0);
      FUN_00549ecc(auStack_f0);
      FUN_0054a034(auStack_170);
      if (local_178 != (long *)0x0) {
        plVar13 = local_178 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_178 + 0x10))(local_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 != (long *)0x0) {
        plVar13 = local_68 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar13 = local_78;
      lVar6 = local_80;
      lVar10 = param_1[2];
      lVar11 = *param_2;
      lVar2 = param_2[1];
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_80 = 0;
      local_78 = (long *)0x0;
      plVar15 = *(long **)(lVar10 + 0x240);
      puVar14 = *(undefined8 **)(lVar10 + 0x4b8);
      plVar12 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xd0,8);
      plVar12[2] = 0;
      plVar9 = plVar12 + 1;
      *plVar9 = 0;
      puVar5 = PTR_DAT_047cc158;
      plVar12[3] = (long)plVar15;
      plVar1 = plVar12 + 4;
      *plVar12 = (long)(puVar5 + 0x10);
      FUN_006c4254(plVar1);
      plVar12[4] = (long)(PTR_DAT_047cc168 + 0x10);
      nn::os::InitializeEvent(plVar12 + 6,0,0);
      plVar12[4] = (long)(PTR_DAT_047cc160 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar12 + 0xb),false,0);
      *(undefined1 *)(plVar12 + 0x19) = 0;
      if (plVar12 != (long *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x160,8);
      plVar16 = plVar9 + 1;
      *plVar16 = 0;
      plVar9[2] = 0;
      plVar9[3] = (long)plVar15;
      *plVar9 = (long)&PTR_FUN_044c8770;
      FUN_006c5398(plVar9 + 4);
      plVar9[4] = (long)&PTR_LAB_044c87a8;
      lVar10 = (**(code **)(*plVar15 + 0x10))(plVar15,0x10000,0x10);
      if (lVar10 == 0) {
        local_180 = (long *)CONCAT44(local_180._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_180,"");
      }
      FUN_006c4058(plVar9 + 10,plVar1,0,lVar10,0x10000,1);
      plVar9[10] = (long)&PTR_LAB_044c87d8;
      plVar9[0x27] = (long)plVar15;
      plVar9[0x28] = 0x10000;
      *(undefined1 *)((long)plVar9 + 0x159) = 1;
      plVar9[0x29] = (long)plVar1;
      plVar9[0x2a] = (long)plVar12;
      plVar9[0x23] = lVar11;
      plVar9[0x24] = lVar2;
      plVar9[0x25] = lVar6;
      plVar9[0x26] = (long)plVar13;
      local_70 = 0;
      local_68 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_180 = plVar9 + 4;
      local_178 = plVar9;
      (**(code **)*puVar14)(puVar14,&local_180,&local_70);
      if (local_178 != (long *)0x0) {
        plVar13 = local_178 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_178 + 0x10))(local_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 != (long *)0x0) {
        plVar13 = local_68 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar9 != (long *)0x0) {
        do {
          lVar11 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined1 *)(plVar12 + 5) = 1;
      param_1[0x24] = (long)plVar1;
      plVar13 = (long *)param_1[0x25];
      param_1[0x25] = (long)plVar12;
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 1;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 != (long *)0x0) {
        plVar13 = local_78 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    plVar13 = plVar7 + 1;
    do {
      lVar11 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


