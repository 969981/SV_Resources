/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5ad48; name: FUN_00e5ad48
 */


void FUN_00e5ad48(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  
  if (*(char *)(param_1 + 0x728) == '\0') {
    if (*(long *)(param_1 + 0x638) == *(long *)(param_1 + 0x640)) {
      bVar5 = 0;
      goto LAB_00e5ad7c;
    }
    if (*(char *)(*(long *)(param_1 + 0x6f8) + 0x14) != '\0') {
      bVar5 = *(byte *)(param_1 + 0x7c1) ^ 1;
      goto LAB_00e5ad7c;
    }
  }
  bVar5 = 1;
LAB_00e5ad7c:
  bVar5 = bVar5 | *(long *)(param_1 + 0x678) != *(long *)(param_1 + 0x670);
  if (bVar5 != *(byte *)(param_1 + 0x720)) {
    plVar8 = (long *)(param_1 + 0x708);
    lVar7 = *plVar8;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar7) {
      lVar3 = nn::os::GetCurrentThread();
LAB_00e5adcc:
      if (*plVar8 == 0) goto code_r0x00e5add4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x710));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x710));
            while (*plVar8 == 0) {
              cVar1 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *plVar8 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00e5addc;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00e5addc:
      bVar6 = false;
      goto LAB_00e5ade0;
    }
    plVar8 = (long *)0x0;
    bVar6 = true;
LAB_00e5ade0:
    if ((bVar5 != *(byte *)(param_1 + 0x720)) && (*(char *)(param_1 + 0x7c6) == '\0')) {
      if (((*PTR_DAT_047d4df8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      uVar4 = *(undefined8 *)PTR_DAT_047d4e00;
      *(undefined8 *)PTR_DAT_047d4e08 = uVar4;
      if (bVar5 == 0) {
        FUN_00f204ec(uVar4,param_1);
      }
      else {
        FUN_00e5b080();
      }
      *(byte *)(param_1 + 0x720) = bVar5;
    }
    if (!bVar6) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
      return;
    }
  }
  return;
code_r0x00e5add4:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar6) {
    *plVar8 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00e5addc;
  goto LAB_00e5adcc;
}


