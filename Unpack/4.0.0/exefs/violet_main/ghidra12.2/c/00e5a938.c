/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5a938; name: FUN_00e5a938
 */


void FUN_00e5a938(long param_1,ulong param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *local_38;
  
  if ((*(char *)(param_1 + 0x6f0) == '\0') && (*(char *)(param_1 + 0x6f4) == '\0')) {
    if ((*(long *)(param_1 + 0x388) != 0) &&
       (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x388) + 0x10), puVar11 != (undefined8 *)0x0)
       ) {
      plVar7 = (long *)(**(code **)*puVar11)(puVar11);
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar4 != 0)) {
        uVar6 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar6;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)PTR_DAT_047d6528) {
          lVar8 = puVar11[0xda];
          *(long *)(param_1 + 0x6f8) = lVar8;
          goto LAB_00e5a9cc;
        }
      }
    }
    FUN_00cebc38(&local_38,param_1);
    if (local_38 == (long *)0x0) {
      return;
    }
    plVar7 = local_38 + 0x8f;
    if (((((char)local_38[0x91] == '\0') && (*(char *)((long)local_38 + 0x48c) == '\0')) &&
        (plVar7 = local_38 + 0x8c, (char)local_38[0x8e] == '\0')) &&
       ((*(char *)((long)local_38 + 0x474) == '\0' &&
        (plVar7 = (long *)local_38[0x8b], plVar7 == (long *)0x0)))) {
      if (((*PTR_DAT_047d4df8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      lVar8 = *(long *)PTR_DAT_047d4e00;
      *(long *)PTR_DAT_047d4e08 = lVar8;
      plVar7 = (long *)(lVar8 + 0xb140);
    }
    *(long **)(param_1 + 0x6f8) = plVar7;
    (**(code **)(*local_38 + 0x60))(local_38);
    lVar8 = *(long *)(param_1 + 0x6f8);
LAB_00e5a9cc:
    if (lVar8 != 0) {
      plVar7 = (long *)(param_1 + 0x620);
      lVar10 = *plVar7;
      lVar5 = nn::os::GetCurrentThread();
      if (lVar5 != lVar10) {
        lVar5 = nn::os::GetCurrentThread();
LAB_00e5a9ec:
        if (*plVar7 == 0) goto code_r0x00e5a9f4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x628));
        do {
          if (*plVar7 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x628));
              while (*plVar7 == 0) {
                cVar1 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar9) {
                  *plVar7 = lVar5;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 == '\0') goto LAB_00e5a9fc;
              }
            } while( true );
          }
          cVar1 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar9) {
            *plVar7 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
LAB_00e5a9fc:
        bVar9 = false;
        goto LAB_00e5aa00;
      }
      plVar7 = (long *)0x0;
      bVar9 = true;
LAB_00e5aa00:
      puVar11 = *(undefined8 **)(param_1 + 0x638);
      puVar13 = *(undefined8 **)(param_1 + 0x640);
      if (puVar11 != puVar13) {
        FUN_00d3ec6c(*puVar11,lVar8);
        while (puVar11 = puVar11 + 4, puVar11 != puVar13) {
          FUN_00d3ec6c(*puVar11,lVar8);
        }
      }
      if (!bVar9) {
        *plVar7 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
      }
    }
    FUN_00e5af00(param_1);
    FUN_00e5ad48(param_1);
  }
  else {
    lVar8 = param_1 + 0x6e0;
    *(long *)(param_1 + 0x6f8) = lVar8;
    plVar7 = (long *)(param_1 + 0x620);
    lVar10 = *plVar7;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar10) {
      lVar5 = nn::os::GetCurrentThread();
LAB_00e5ab18:
      if (*plVar7 == 0) goto code_r0x00e5ab20;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x628));
      do {
        if (*plVar7 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x628));
            while (*plVar7 == 0) {
              cVar1 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar9) {
                *plVar7 = lVar5;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00e5ab28;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar9) {
          *plVar7 = lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00e5ab28:
      bVar9 = false;
      goto LAB_00e5ab2c;
    }
    plVar7 = (long *)0x0;
    bVar9 = true;
LAB_00e5ab2c:
    puVar11 = *(undefined8 **)(param_1 + 0x638);
    puVar13 = *(undefined8 **)(param_1 + 0x640);
    if (puVar11 != puVar13) {
      FUN_00d3ec6c(*puVar11,lVar8);
      while (puVar11 = puVar11 + 4, puVar11 != puVar13) {
        FUN_00d3ec6c(*puVar11,lVar8);
      }
    }
    if (!bVar9) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    FUN_00e5af00(param_1);
    FUN_00e5ad48(param_1);
    if ((param_2 & 1) == 0) {
      return;
    }
  }
  puVar3 = PTR_DAT_047d6528;
  puVar2 = PTR_DAT_047d6520;
  plVar7 = *(long **)(param_1 + 0x3d8);
  plVar12 = *(long **)(param_1 + 0x3e0);
  do {
    if (plVar7 == plVar12) {
      return;
    }
    if ((*plVar7 != 0) && (puVar11 = *(undefined8 **)(*plVar7 + 0x10), puVar11 != (undefined8 *)0x0)
       ) {
      puVar13 = (undefined8 *)(**(code **)*puVar11)(puVar11);
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
        uVar6 = FUN_0151c130();
        *(undefined8 *)puVar3 = uVar6;
        __cxa_guard_release(puVar2);
      }
      for (; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)*puVar13) {
        if (puVar13 == (undefined8 *)puVar3) {
          FUN_00e5a938(puVar11 + -5,0);
          break;
        }
      }
    }
    plVar7 = plVar7 + 2;
  } while( true );
code_r0x00e5ab20:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *plVar7 = lVar5;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00e5ab28;
  goto LAB_00e5ab18;
code_r0x00e5a9f4:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *plVar7 = lVar5;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00e5a9fc;
  goto LAB_00e5a9ec;
}


