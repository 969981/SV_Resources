/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5fe98; name: FUN_00e5fe98
 */


void FUN_00e5fe98(long param_1)

{
  char cVar1;
  size_t __n;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *__dest;
  long *plVar6;
  long lVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x500) != '\0') {
    if (((*PTR_DAT_047d94e8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d94e8);
    }
    lVar7 = *(long *)PTR_DAT_047d94f0;
    plVar6 = (long *)(lVar7 + 0x28);
    *(long *)PTR_DAT_047d94f8 = lVar7;
    lVar5 = *plVar6;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar5) {
      lVar3 = nn::os::GetCurrentThread();
LAB_00e5ff10:
      if (*plVar6 == 0) goto code_r0x00e5ff18;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x30));
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x30));
            while (*plVar6 == 0) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar8) {
                *plVar6 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00e5ff20;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar8) {
          *plVar6 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00e5ff20:
      bVar8 = false;
      goto LAB_00e5ff24;
    }
    plVar6 = (long *)0x0;
    bVar8 = true;
LAB_00e5ff24:
    __dest = *(long **)(lVar7 + 0x40);
    lVar3 = *(long *)(lVar7 + 0x48) - (long)__dest;
    if (lVar3 != 0) {
      uVar4 = lVar3 >> 3;
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      do {
        if (*__dest == param_1) {
          __n = (*(long *)(lVar7 + 0x48) - (long)__dest) - 8;
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          *(size_t *)(lVar7 + 0x48) = (long)__dest + __n;
          break;
        }
        __dest = __dest + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (!bVar8) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    *(undefined1 *)(param_1 + 0x500) = 0;
  }
  return;
code_r0x00e5ff18:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar8) {
    *plVar6 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00e5ff20;
  goto LAB_00e5ff10;
}


