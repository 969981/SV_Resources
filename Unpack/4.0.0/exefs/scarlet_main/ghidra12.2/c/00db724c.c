/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db724c; name: FUN_00db724c
 */


void FUN_00db724c(undefined1 param_1 [16],long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*param_2 != 0) {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    lVar7 = *(long *)PTR_DAT_047d4e00;
    plVar4 = (long *)(lVar7 + 0xb108);
    *(long *)PTR_DAT_047d4e08 = lVar7;
    lVar8 = *param_2;
    lVar6 = *plVar4;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar6) {
      lVar3 = nn::os::GetCurrentThread();
LAB_00db72b8:
      if (*plVar4 == 0) goto code_r0x00db72c0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xb110));
      do {
        if (*plVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xb110));
            while (*plVar4 == 0) {
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar5) {
                *plVar4 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00db72c8;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar5) {
          *plVar4 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00db72c8:
      bVar5 = false;
      goto LAB_00db72d0;
    }
    plVar4 = (long *)0x0;
    bVar5 = true;
LAB_00db72d0:
    if ((ulong)((*(long *)(lVar7 + 0xb128) - *(long *)(lVar7 + 0xb120) >> 5) * -0x5555555555555555)
        <= lVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar3 = *(long *)(lVar7 + 0xb120) + (lVar8 - 1U) * 0x60;
    *(long *)(lVar3 + 0x28) = param_1._8_8_;
    *(long *)(lVar3 + 0x20) = param_1._0_8_;
    if (!bVar5) {
      *plVar4 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar4 + 1));
      return;
    }
  }
  return;
code_r0x00db72c0:
  cVar1 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar5) {
    *plVar4 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00db72c8;
  goto LAB_00db72b8;
}


