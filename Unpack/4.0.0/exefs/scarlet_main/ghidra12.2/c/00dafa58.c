/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dafa58; name: FUN_00dafa58
 */


long * FUN_00dafa58(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x118);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x118) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00dafa98:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x120));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x118);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x118) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar8 || *(long *)(param_1 + 0x118) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00dafac8;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x114) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00dafac8:
  if (!bVar7) {
    lVar8 = lVar3;
    lVar9 = *(long *)(param_1 + 0x118);
    goto LAB_00dafa98;
  }
  lVar6 = *(long *)(param_1 + 0xd0);
  if ((ulong)(long)param_3 < (ulong)((*(long *)(param_1 + 0xd8) - lVar6 >> 3) * 0x6db6db6db6db6db7))
  {
    plVar11 = *(long **)(lVar6 + (long)param_3 * 0x38);
    puVar12 = (undefined8 *)(lVar6 + (long)param_3 * 0x38 + 8);
    plVar13 = (long *)*puVar12;
    if (plVar11 == plVar13) {
      plVar13 = plVar11;
    }
    else {
      do {
        plVar10 = *(long **)(*plVar11 + 0x30);
        if (plVar10 == (long *)0x0) {
          if (*param_2 == 0) goto LAB_00dafb80;
        }
        else {
          plVar2 = plVar10 + 5;
          do {
            lVar6 = *plVar2;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = (int)lVar6 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          plVar14 = (long *)*param_2;
          do {
            lVar6 = *plVar2;
            iVar5 = (int)lVar6 + -1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = iVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
          if (plVar14 == plVar10) goto LAB_00dafb80;
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar13);
      plVar11 = plVar13;
LAB_00dafb80:
      plVar13 = (long *)*puVar12;
    }
    if (plVar13 != plVar11) goto LAB_00dafb90;
  }
  if (((DAT_0485dc38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0485dc38), iVar5 != 0)) {
    plVar11 = (long *)&DAT_0485dc30;
    FUN_00100190(&LAB_02bd86a8,&DAT_0485dc30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0485dc38);
  }
  else {
    plVar11 = (long *)&DAT_0485dc30;
  }
LAB_00dafb90:
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x118);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x118) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x118);
    if (lVar9 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00dafbcc;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x114) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00dafbcc:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x118);
      if (lVar6 != lVar9 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00dafc74;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x114) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00dafc74:
    if (!bVar7) {
      do {
        lVar9 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x118);
        if (lVar9 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar8 = lVar3;
          goto joined_r0x00dafc74;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x114) = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar8 = lVar3;
      goto joined_r0x00dafc74;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x120));
  return plVar11;
}


