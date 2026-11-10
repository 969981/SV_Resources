/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e29ce8; name: FUN_00e29ce8
 */


long FUN_00e29ce8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  void *__s;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar9 = *(long *)(param_1 + 0x78);
  plVar10 = (long *)(lVar9 + param_2 * 0x28 + 8);
  if (*plVar10 == 0) {
    plVar1 = (long *)(param_1 + 0x2a0);
    lVar8 = *plVar1;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar8) {
      lVar7 = nn::os::GetCurrentThread();
      bVar4 = false;
LAB_00e29ed0:
      if (*plVar1 == 0) goto code_r0x00e29ed8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
      bVar4 = false;
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              bVar4 = false;
              if (cVar2 == '\0') goto LAB_00e29d64;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_00e29d64;
    }
    bVar4 = true;
LAB_00e29d64:
    if (*plVar10 == 0) {
      local_78 = *(long **)(param_1 + 8);
      __s = (void *)(**(code **)(*local_78 + 0x10))(local_78,0xa8,8);
      if (__s == (void *)0x0) {
        local_70 = 0;
        local_68 = 0;
        local_78 = (long *)0x0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = local_78;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        memset(__s,0,0xa8);
        *(undefined4 *)((long)__s + 0x14) = 1;
        nn::os::InitializeLightEvent((long)__s + 8,0,1);
        *(undefined8 *)((long)__s + 0x28) = 0;
        *(undefined8 *)((long)__s + 0x40) = 0;
        *(undefined8 *)((long)__s + 0x48) = 0;
        *(undefined8 *)((long)__s + 0x30) = 0;
        *(undefined8 *)((long)__s + 0x38) = 0;
        *(undefined8 *)((long)__s + 0x18) = 0;
        *(undefined8 *)((long)__s + 0x20) = 0;
        FUN_00e2a440((undefined8 *)((long)__s + 0x28));
        *(undefined8 *)((long)__s + 0x58) = 0;
        *(undefined8 *)((long)__s + 0x60) = 0;
        *(undefined8 *)((long)__s + 0x50) = 0;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
           (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
          lVar5 = tpidr_el0;
          lVar8 = *(long *)(lVar5 + 0x30);
          if (lVar8 == 0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            lVar8 = DAT_04859430;
            *(long *)(lVar5 + 0x30) = DAT_04859430;
          }
        }
        *(long *)((long)__s + 0x68) = lVar8;
        *(undefined8 *)((long)__s + 0x70) = 0x1fffffffffffffff;
        *(undefined8 *)((long)__s + 0x78) = 0;
        *(undefined4 *)((long)__s + 0x80) = 0;
        *(undefined8 *)((long)__s + 0x88) = 0;
        *(undefined8 *)((long)__s + 0x90) = 0;
        *(undefined8 *)((long)__s + 0x98) = 0;
        *(undefined8 *)((long)__s + 0xa0) = 0;
        local_70 = 0xa8;
        local_68 = 8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      lVar7 = *plVar10;
      *plVar10 = (long)__s;
      if (lVar7 != 0) {
        FUN_0219d8e4(lVar9 + param_2 * 0x28 + 0x10);
      }
      lVar7 = lVar9 + param_2 * 0x28;
      *(long **)(lVar7 + 0x10) = local_78;
      *(undefined8 *)(lVar7 + 0x18) = local_70;
      *(undefined8 *)(lVar7 + 0x20) = local_68;
    }
    if (!bVar4) {
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a8));
    }
  }
  return lVar9 + param_2 * 0x28;
code_r0x00e29ed8:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar7;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00e29d64;
  goto LAB_00e29ed0;
}


