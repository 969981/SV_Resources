/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00568880; name: FUN_00568880
 */


void FUN_00568880(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar16 = *param_2;
  lVar4 = param_2[1];
  lVar12 = *(long *)(*(long *)(lVar16 + 8) + 0x48);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar2 = param_2[2];
  lVar5 = param_2[3];
  lVar3 = param_2[5];
  lVar6 = param_2[6];
  lVar13 = param_2[7];
  lVar17 = param_2[4];
  param_2[4] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar14 = param_2[9];
  lVar15 = param_2[8];
  param_2[8] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  plVar19 = *(long **)(lVar12 + 0x240);
  puVar18 = *(undefined8 **)(lVar12 + 0x4b8);
  plVar10 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0xf8,8);
  plVar10[2] = 0;
  plVar11 = plVar10 + 1;
  *plVar11 = 0;
  puVar9 = PTR_DAT_047ce078;
  plVar10[3] = (long)plVar19;
  plVar1 = plVar10 + 4;
  *plVar10 = (long)(puVar9 + 0x10);
  FUN_006c4254(plVar1);
  plVar10[4] = (long)(PTR_DAT_047ce080 + 0x10);
  nn::os::InitializeEvent(plVar10 + 6,0,0);
  plVar10[4] = (long)(PTR_DAT_047ce088 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
  *(undefined1 *)(plVar10 + 0x1e) = 0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = *plVar11 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,400,8);
  plVar20 = plVar11 + 1;
  *plVar20 = 0;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar19;
  *plVar11 = (long)&PTR_LAB_044ca378;
  FUN_006c5398(plVar11 + 4);
  plVar11[4] = (long)&PTR_LAB_044ca3b0;
  lVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,0x10000,0x10);
  if (lVar12 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_006c4058(plVar11 + 10,plVar1,0,lVar12,0x10000,1);
  *(undefined1 *)((long)plVar11 + 0x189) = 1;
  plVar11[0x2d] = (long)plVar19;
  plVar11[0x2e] = 0x10000;
  plVar11[10] = (long)&PTR_LAB_044ca3e0;
  plVar11[0x2f] = (long)plVar1;
  plVar11[0x30] = (long)plVar10;
  plVar11[0x23] = lVar16;
  plVar11[0x24] = lVar4;
  plVar11[0x25] = lVar2;
  plVar11[0x26] = lVar5;
  plVar11[0x27] = lVar17;
  plVar11[0x28] = lVar3;
  plVar11[0x29] = lVar6;
  plVar11[0x2a] = lVar13;
  plVar11[0x2b] = lVar15;
  plVar11[0x2c] = lVar14;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *plVar20 = *plVar20 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  local_70 = plVar11 + 4;
  local_68 = plVar11;
  (**(code **)*puVar18)(puVar18,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar19 = local_68 + 1;
    do {
      lVar16 = *plVar19;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = lVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar19 = local_78 + 1;
    do {
      lVar16 = *plVar19;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = lVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar10;
  if (plVar11 != (long *)0x0) {
    do {
      lVar16 = *plVar20;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *plVar20 = lVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


