/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0179e914; name: FUN_0179e914
 */


void FUN_0179e914(long param_1,ulong param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  
  plVar9 = (long *)(param_1 + 0xb108);
  lVar8 = *plVar9;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar8) {
    lVar2 = nn::os::GetCurrentThread();
LAB_0179e954:
    if (*plVar9 == 0) goto code_r0x0179e95c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb110));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb110));
          while (*plVar9 == 0) {
            cVar1 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar10) {
              *plVar9 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0179e964;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0179e964:
    bVar10 = false;
    goto LAB_0179e96c;
  }
  plVar9 = (long *)0x0;
  bVar10 = true;
LAB_0179e96c:
  lVar2 = *(long *)(param_1 + 0xb120);
  lVar8 = *(long *)(param_1 + 0xb128);
  uVar3 = (lVar8 - lVar2 >> 5) * -0x5555555555555555;
  if (uVar3 == param_2) {
    lVar5 = lVar8;
    do {
      lVar7 = lVar2;
      if ((lVar2 + 0x60 == lVar5) || (lVar7 = lVar5 + -0x60, *(char *)(lVar5 + -0xb0) != '\0'))
      break;
      pcVar4 = (char *)(lVar5 + -0xac);
      lVar5 = lVar7;
    } while (*pcVar4 == '\0');
    if (lVar7 != lVar8) {
      *(long *)(param_1 + 0xb128) = lVar7;
    }
  }
  else {
    param_2 = param_2 - 1;
    if (uVar3 <= param_2) {
LAB_0179eb34:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    pcVar4 = (char *)(lVar2 + param_2 * 0x60 + 0x10);
    if (*pcVar4 != '\0') {
      *pcVar4 = '\0';
    }
    *(undefined1 *)(lVar2 + param_2 * 0x60 + 0x14) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xb4e0);
  if (lVar2 != 0) {
    do {
      uVar3 = *(long *)(param_1 + 0xb4d8) + lVar2 + -1;
      uVar3 = *(ulong *)(*(long *)(*(long *)(param_1 + 0xb4b8) + (uVar3 >> 6 & 0x3fffffffffffff8)) +
                        (uVar3 & 0x1ff) * 8);
      lVar8 = *(long *)(param_1 + 0xb120);
      uVar6 = (*(long *)(param_1 + 0xb128) - lVar8 >> 5) * -0x5555555555555555;
      if (uVar3 <= uVar6) {
        uVar3 = uVar3 - 1;
        if (uVar6 <= uVar3) goto LAB_0179eb34;
        if ((*(char *)(lVar8 + uVar3 * 0x60 + 0x10) != '\0') ||
           (*(char *)(lVar8 + uVar3 * 0x60 + 0x14) != '\0')) goto LAB_0179e9e0;
      }
      *(long *)(param_1 + 0xb4e0) = lVar2 + -1;
      FUN_0179eb3c(param_1 + 0xb4b0);
      lVar2 = *(long *)(param_1 + 0xb4e0);
    } while (lVar2 != 0);
  }
  if (*(long *)(param_1 + 0xb120) != *(long *)(param_1 + 0xb128)) {
    FUN_021a5bcc(param_1);
  }
LAB_0179e9e0:
  if (!bVar10) {
    *plVar9 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    return;
  }
  return;
code_r0x0179e95c:
  cVar1 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar10) {
    *plVar9 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0179e964;
  goto LAB_0179e954;
}


