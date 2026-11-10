/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01818418; name: FUN_01818418
 */


void FUN_01818418(long *param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  
  if (((DAT_04839790 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04839790), iVar6 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  DAT_04839778 = DAT_04839780;
  if (((DAT_04839780 != 0) && (*param_2 != 0)) && (*(short *)(*param_2 + 0x1a) != 0)) {
    lVar9 = *(long *)(DAT_04839780 + 0x4058);
    lVar8 = *(long *)(DAT_04839780 + 0x4060);
    lVar7 = lVar9;
    if ((lVar9 != lVar8) && (*(long *)(lVar9 + 8) != *param_2)) {
      do {
        lVar7 = lVar9 + 0xb0;
        if (lVar8 == lVar7) {
          lVar7 = lVar8;
          break;
        }
        plVar1 = (long *)(lVar9 + 0xb8);
        lVar9 = lVar7;
      } while (*plVar1 != *param_2);
    }
    if (lVar8 == lVar7) {
      lVar9 = *(long *)(DAT_04839780 + 0x4090);
      lVar8 = *(long *)(DAT_04839780 + 0x4098);
      lVar7 = lVar9;
      if ((lVar9 != lVar8) && (*(long *)(lVar9 + 8) != *param_2)) {
        do {
          lVar7 = lVar9 + 0x1c8;
          if (lVar8 == lVar7) {
            lVar7 = lVar8;
            break;
          }
          plVar1 = (long *)(lVar9 + 0x1d0);
          lVar9 = lVar7;
        } while (*plVar1 != *param_2);
      }
      if (((lVar8 != lVar7) && (lVar7 = *param_2, lVar7 != 0)) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar7 + 0x1a);
        sVar10 = *(short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01818574;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01818574:
            bVar5 = false;
          }
          if (bVar5) goto LAB_01818608;
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
    }
    else {
      lVar7 = *param_2;
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar7 + 0x1a);
        sVar10 = *(short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01818500;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01818500:
            bVar5 = false;
          }
          if (bVar5) {
LAB_01818608:
            lVar9 = 0;
            if (*(long *)(lVar7 + 0x10) != 0) {
              lVar9 = *(long *)(lVar7 + 0x10) + -0x28;
            }
            *param_1 = lVar9;
            return;
          }
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
    }
  }
  *param_1 = 0;
  return;
}


