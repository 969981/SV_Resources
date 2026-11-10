/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c44438; name: FUN_00c44438
 */


void FUN_00c44438(uint *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  
  if (*param_2 < *param_1) {
    return;
  }
  puVar1 = param_1 + 0x34;
  lVar6 = nn::os::GetCurrentThread();
  while (*(long *)puVar1 == 0 && *(long *)(param_1 + 0x36) == 0) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *(long *)puVar1 = lVar6;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00c44484;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*(long *)puVar1 != 0 || *(long *)(param_1 + 0x36) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*(long *)puVar1 == 0 && *(long *)(param_1 + 0x36) == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *(long *)puVar1 = lVar6;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c44484;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *(long *)puVar1 = lVar6;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c44484:
  if ((*(ulong *)(*(long *)(param_1 + 0x22) + ((ulong)(*param_2 - *param_1 >> 3) & 0x1ffffff8)) >>
       ((ulong)(*param_2 - *param_1) & 0x3f) & 1) != 0) {
    lVar6 = *(long *)(param_1 + 6);
    lVar8 = *(long *)(param_1 + 8);
    uVar9 = 0;
    if (lVar8 - lVar6 != 0) {
      uVar9 = (lVar8 - lVar6) * 0x80 - 1;
    }
    uVar10 = *(long *)(param_1 + 0x16) + *(long *)(param_1 + 0x14);
    if (uVar9 == uVar10) {
      FUN_00c44724(param_1 + 4);
      uVar10 = *(long *)(param_1 + 0x14) + *(long *)(param_1 + 0x16);
      lVar6 = *(long *)(param_1 + 6);
      lVar8 = *(long *)(param_1 + 8);
    }
    if (lVar8 == lVar6) {
      puVar12 = (uint *)0x0;
    }
    else {
      puVar12 = (uint *)(*(long *)(lVar6 + (uVar10 >> 7 & 0x1fffffffffffff8)) + (uVar10 & 0x3ff) * 4
                        );
    }
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar12 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar12 = *param_2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *(long *)(param_1 + 0x16) = *(long *)(param_1 + 0x16) + 1;
    uVar9 = (ulong)(*param_2 - *param_1 >> 3) & 0x1ffffff8;
    *(ulong *)(*(long *)(param_1 + 0x22) + uVar9) =
         *(ulong *)(*(long *)(param_1 + 0x22) + uVar9) &
         (1L << ((ulong)(*param_2 - *param_1) & 0x3f) ^ 0xffffffffffffffffU);
    param_1[2] = param_1[2] - 1;
  }
  do {
    lVar6 = *(long *)puVar1;
    lVar8 = *(long *)(param_1 + 0x36);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *(long *)puVar1 = lVar6;
      *(long *)(param_1 + 0x36) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *(long *)(param_1 + 0x36);
    if (*(long *)puVar1 != lVar6 || lVar2 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c44608;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      puVar1[0] = 0;
      puVar1[1] = 0;
      *(long *)(param_1 + 0x35) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00c44608:
  if (!bVar7) {
    do {
      lVar6 = *(long *)puVar1;
      lVar8 = *(long *)(param_1 + 0x36);
      if (lVar6 != *(long *)puVar1 || lVar8 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c446d4;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        *(long *)(param_1 + 0x35) = lVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00c446d4:
    if (!bVar7) {
      do {
        lVar2 = *(long *)puVar1;
        lVar3 = *(long *)(param_1 + 0x36);
        if (lVar2 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar8 = lVar3;
          goto joined_r0x00c446d4;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          puVar1[0] = 0;
          puVar1[1] = 0;
          *(long *)(param_1 + 0x35) = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar2;
      lVar8 = lVar3;
      goto joined_r0x00c446d4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
  return;
}


