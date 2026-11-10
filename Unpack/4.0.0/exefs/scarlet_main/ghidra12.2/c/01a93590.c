/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a93590; name: FUN_01a93590
 */


undefined8 FUN_01a93590(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  long local_38;
  
  plVar4 = (long *)FUN_00c41a10(param_1,1);
  if (plVar4 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar4;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar9 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar9;
  if (lVar6 != 0) {
    FUN_01084180(lVar6);
    puVar2 = PTR_DAT_047d38f8;
    lVar7 = *(long *)PTR_DAT_047d38f8;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar7) {
      uVar10 = nn::os::GetCurrentThread();
LAB_01a9369c:
      if (*(long *)puVar2 == 0) goto code_r0x01a936a4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar8) {
                *(undefined8 *)puVar2 = uVar10;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_01a936ac;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar8) {
          *(undefined8 *)puVar2 = uVar10;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_01a936ac:
      bVar8 = false;
      goto LAB_01a93608;
    }
    bVar8 = true;
LAB_01a93608:
    plVar4 = *(long **)(lVar9 + 0x30);
    local_38 = lVar6;
    if (plVar4 < *(long **)(lVar9 + 0x38)) {
      uVar10 = *(undefined8 *)(lVar9 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        *plVar4 = lVar6;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *plVar4 = local_38;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      *(long **)(lVar9 + 0x30) = plVar4 + 1;
    }
    else {
      FUN_01a937b8(lVar9 + 0x28,&local_38);
    }
    if (!bVar8) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
  }
  return 0;
code_r0x01a936a4:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar8) {
    *(undefined8 *)puVar2 = uVar10;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01a936ac;
  goto LAB_01a9369c;
}


