/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d77dc0; name: FUN_00d77dc0
 */


undefined8 FUN_00d77dc0(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  char *local_38;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if (puVar4 == (undefined8 *)0x0) {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar8 = (char *)*puVar4;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar9 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar9;
  if (pcVar8 != (char *)0x0) {
    if (*pcVar8 == '\x01') {
      FUN_00d77ff8(pcVar8 + 8,0);
    }
    puVar2 = PTR_DAT_047d38f8;
    lVar6 = *(long *)PTR_DAT_047d38f8;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar6) {
      uVar10 = nn::os::GetCurrentThread();
LAB_00d77edc:
      if (*(long *)puVar2 == 0) goto code_r0x00d77ee4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar10;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00d77eec;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *(undefined8 *)puVar2 = uVar10;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00d77eec:
      bVar7 = false;
      goto LAB_00d77e48;
    }
    bVar7 = true;
LAB_00d77e48:
    puVar4 = *(undefined8 **)(lVar9 + 0x30);
    local_38 = pcVar8;
    if (puVar4 < *(undefined8 **)(lVar9 + 0x38)) {
      uVar10 = *(undefined8 *)(lVar9 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        *puVar4 = pcVar8;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *puVar4 = local_38;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      *(undefined8 **)(lVar9 + 0x30) = puVar4 + 1;
    }
    else {
      FUN_01948f50(lVar9 + 0x28,&local_38);
    }
    if (!bVar7) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
  }
  return 0;
code_r0x00d77ee4:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar7) {
    *(undefined8 *)puVar2 = uVar10;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d77eec;
  goto LAB_00d77edc;
}


