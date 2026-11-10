/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebbfe0; name: FUN_01ebbfe0
 */


uint FUN_01ebbfe0(long param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  uint local_34;
  long *local_18;
  
  lVar9 = *(long *)(param_1 + 0x50);
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar9 != lVar3) {
    do {
      if (((*(long *)(lVar9 + 0x78) != 0) && (*(short *)(*(long *)(lVar9 + 0x78) + 0x1a) != 0)) &&
         (*(long *)(lVar9 + 0x78) == *param_2)) goto LAB_01ebc040;
      lVar9 = lVar9 + 0xd0;
    } while (lVar3 != lVar9);
    lVar9 = lVar3;
LAB_01ebc040:
    if (lVar9 != *(long *)(param_1 + 0x58)) {
      lVar9 = *(long *)(lVar9 + 0x98);
      if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar9 + 0x1a);
        sVar10 = *(short *)(lVar9 + 0x1a);
LAB_01ebc064:
        sVar4 = *psVar1;
        if (sVar4 == sVar10) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar10 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01ebc088;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01ebc088:
          bVar7 = false;
        }
        if (!bVar7) goto code_r0x01ebc090;
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          plVar11 = (long *)(lVar9 + -0x28);
          FUN_00dbfec0(&local_18,plVar11);
          if (local_18 == (long *)0x0) {
            bVar7 = true;
          }
          else {
            local_34 = FUN_00dbf7ec();
            if (local_18 != (long *)0x0) {
              plVar2 = local_18 + 5;
              do {
                lVar3 = *plVar2;
                iVar8 = (int)lVar3 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *(int *)plVar2 = iVar8;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*local_18 + 0x10))();
              }
              else if ((int)lVar3 == 0) goto LAB_01ebc2cc;
            }
            bVar7 = false;
          }
          lVar9 = *(long *)(lVar9 + 0x70);
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          goto joined_r0x01ebc184;
        }
      }
      goto LAB_01ebc0fc;
    }
  }
  lVar9 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar9 != lVar3) {
    do {
      if (((*(long *)(lVar9 + 0x78) != 0) && (*(short *)(*(long *)(lVar9 + 0x78) + 0x1a) != 0)) &&
         (*(long *)(lVar9 + 0x78) == *param_2)) goto LAB_01ebc0e8;
      lVar9 = lVar9 + 0xc0;
    } while (lVar3 != lVar9);
    lVar9 = lVar3;
LAB_01ebc0e8:
    if (((lVar9 != *(long *)(param_1 + 0x90)) && (lVar9 = *(long *)(lVar9 + 0xa8), lVar9 != 0)) &&
       (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar10 = *(short *)(lVar9 + 0x1a);
LAB_01ebc1a8:
      sVar4 = *psVar1;
      if (sVar4 == sVar10) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_01ebc1cc;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ebc1cc:
        bVar7 = false;
      }
      if (!bVar7) goto code_r0x01ebc1d4;
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        plVar11 = (long *)(lVar9 + -0x28);
        FUN_00dbfec0(&local_18,plVar11);
        if (local_18 == (long *)0x0) {
          bVar7 = true;
        }
        else {
          local_34 = FUN_00dbf7ec();
          if (local_18 != (long *)0x0) {
            plVar2 = local_18 + 5;
            do {
              lVar3 = *plVar2;
              iVar8 = (int)lVar3 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *(int *)plVar2 = iVar8;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*local_18 + 0x10))();
            }
            else if ((int)lVar3 == 0) {
LAB_01ebc2cc:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          bVar7 = false;
        }
        lVar9 = *(long *)(lVar9 + 0x70);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
joined_r0x01ebc184:
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if (!bVar7) goto LAB_01ebc100;
      }
    }
  }
LAB_01ebc0fc:
  local_34 = 0;
LAB_01ebc100:
  return local_34 & 1;
code_r0x01ebc090:
  sVar10 = sVar4;
  if (sVar4 == 0) goto LAB_01ebc0fc;
  goto LAB_01ebc064;
code_r0x01ebc1d4:
  sVar10 = sVar4;
  if (sVar4 == 0) goto LAB_01ebc0fc;
  goto LAB_01ebc1a8;
}


