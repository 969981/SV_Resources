/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01775724; name: FUN_01775724
 */


/* WARNING: Removing unreachable block (ram,0x017757a0) */

void FUN_01775724(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 auStack_c0 [12];
  
  plVar1 = (long *)(param_1 + 0x30);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x38);
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x38) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0177576c:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x38);
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x38) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x38) != lVar9) goto LAB_017757a4;
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x34) = lVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar5 = *(long *)(param_1 + 0x50);
  lVar7 = *(long *)(param_1 + 0x58);
  if (lVar5 != lVar7) {
    do {
      for (lVar9 = *(long *)(lVar5 + 8); lVar9 != lVar5; lVar9 = *(long *)(lVar9 + 8)) {
        plVar6 = (long *)FUN_0277e158(param_1,lVar9 + 0x10);
        if (*plVar6 != 0) {
          local_c8 = &LAB_02bd8948;
          local_d0 = &LAB_02bd893c;
          local_e0 = &LAB_02bd8918;
          local_d8 = FUN_02bd8938;
          auStack_c0[0] = param_2;
          FUN_00c42e90(*plVar6,&local_e0);
          pcVar4 = local_d8;
          if (local_d8 != (code *)0x0) {
            local_d0 = (undefined1 *)0x0;
            local_c8 = (undefined1 *)0x0;
            local_e0 = (undefined1 *)0x0;
            local_d8 = (code *)0x0;
            (*pcVar4)(auStack_c0);
          }
        }
      }
      lVar5 = lVar5 + 0x38;
    } while (lVar5 != lVar7);
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x38);
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x38) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar9 != lVar5 || lVar2 != lVar7) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto joined_r0x017758b4;
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x34) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar8 = true;
joined_r0x017758b4:
  do {
    if (bVar8) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40));
      return;
    }
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x38);
      if (lVar5 != lVar9 || lVar7 != lVar2) {
        bVar8 = false;
        ClearExclusiveLocal();
        lVar9 = lVar5;
        lVar2 = lVar7;
        goto joined_r0x017758b4;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x34) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
    lVar9 = lVar5;
    lVar2 = lVar7;
  } while( true );
LAB_017757a4:
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar9 = *(long *)(param_1 + 0x38);
  goto LAB_0177576c;
}


