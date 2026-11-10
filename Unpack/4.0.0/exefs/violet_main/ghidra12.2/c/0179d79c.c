/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0179d79c; name: FUN_0179d79c
 */


void FUN_0179d79c(undefined4 param_1,long *param_2)

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
LAB_0179d808:
      if (*plVar4 == 0) goto code_r0x0179d810;
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
              if (cVar1 == '\0') goto LAB_0179d818;
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
LAB_0179d818:
      bVar5 = false;
      goto LAB_0179d820;
    }
    plVar4 = (long *)0x0;
    bVar5 = true;
LAB_0179d820:
    if ((ulong)((*(long *)(lVar7 + 0xb128) - *(long *)(lVar7 + 0xb120) >> 5) * -0x5555555555555555)
        <= lVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    *(undefined4 *)(*(long *)(lVar7 + 0xb120) + (lVar8 - 1U) * 0x60) = param_1;
    if (!bVar5) {
      *plVar4 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar4 + 1));
      return;
    }
  }
  return;
code_r0x0179d810:
  cVar1 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar5) {
    *plVar4 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0179d818;
  goto LAB_0179d808;
}


