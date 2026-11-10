/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029db6dc; name: FUN_029db6dc
 */


void FUN_029db6dc(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar13;
  long *plVar12;
  long lVar14;
  long lVar15;
  
  plVar1 = (long *)(param_2 + 0x30);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x38);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x38) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_029db718:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x40));
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x38);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_2 + 0x38) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar7 || *(long *)(param_2 + 0x38) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_029db748;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x34) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_029db748:
  if (!bVar6) {
    lVar7 = lVar3;
    lVar9 = *(long *)(param_2 + 0x38);
    goto LAB_029db718;
  }
  lVar7 = *(long *)(param_2 + 0x58);
  for (lVar5 = *(long *)(param_2 + 0x50); lVar5 != lVar7; lVar5 = lVar5 + 0x38) {
    for (lVar9 = *(long *)(lVar5 + 8); lVar9 != lVar5; lVar9 = *(long *)(lVar9 + 8)) {
      lVar3 = *(long *)(lVar9 + 0x10) + 0x68;
      lVar10 = *(long *)(*(long *)(lVar9 + 0x10) + 0x70);
      if (lVar3 != lVar10) {
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar15 = lVar11;
        lVar14 = lVar10;
        if (*(long *)(lVar11 + 0x30) != *param_3) {
          while (lVar14 = *(long *)(lVar14 + 8), lVar3 != lVar14) {
            lVar15 = *(long *)(lVar14 + 0x10);
            if (*(long *)(lVar15 + 0x30) == *param_3) goto LAB_029db824;
          }
          do {
            *(uint *)(lVar11 + 0x158) = *(uint *)(lVar11 + 0x158) | 0x20;
            if (*(long **)(lVar11 + 0x208) != *(long **)(lVar11 + 0x210)) {
              plVar12 = *(long **)(lVar11 + 0x208);
LAB_029db7cc:
              plVar13 = plVar12 + 1;
              if (*(long *)(*plVar12 + 0xa8) != *param_3) goto code_r0x029db7dc;
              lVar5 = *(long *)(lVar10 + 0x10);
              *param_1 = lVar5;
              if (lVar5 != 0) {
                piVar2 = (int *)(lVar5 + 0x28);
                do {
                  iVar8 = *piVar2;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar8 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                goto LAB_029db840;
              }
              goto LAB_029db848;
            }
LAB_029db804:
            lVar10 = *(long *)(lVar10 + 8);
            if (lVar3 == lVar10) goto LAB_029db810;
            lVar11 = *(long *)(lVar10 + 0x10);
          } while( true );
        }
LAB_029db824:
        *param_1 = lVar15;
        if (lVar15 != 0) {
          piVar2 = (int *)(lVar15 + 0x28);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_029db840:
          if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        goto LAB_029db848;
      }
LAB_029db810:
    }
  }
  *param_1 = 0;
LAB_029db848:
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_2 + 0x38);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0x38) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x38);
    if (lVar9 != lVar5 || lVar3 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_029db884;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0x34) = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_029db884:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_2 + 0x38);
      if (lVar5 != lVar9 || lVar7 != lVar3) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x029db914;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x34) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x029db914:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x38);
        if (lVar9 != lVar5 || lVar3 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar7 = lVar3;
          goto joined_r0x029db914;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_2 + 0x34) = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar7 = lVar3;
      goto joined_r0x029db914;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x40));
  return;
code_r0x029db7dc:
  plVar12 = plVar13;
  if (*(long **)(lVar11 + 0x210) == plVar13) goto LAB_029db804;
  goto LAB_029db7cc;
}


