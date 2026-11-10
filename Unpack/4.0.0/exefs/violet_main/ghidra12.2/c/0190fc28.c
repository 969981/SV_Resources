/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0190fc28; name: FUN_0190fc28
 */


void FUN_0190fc28(long *param_1,char *param_2)

{
  int *piVar1;
  long *plVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  char *pcVar16;
  int iVar17;
  ulong in_x16;
  ulong extraout_x16;
  int iVar18;
  ulong in_x17;
  ulong extraout_x17;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  char *pcVar22;
  byte bVar23;
  undefined4 local_d0 [2];
  long *local_c8;
  undefined1 auStack_c0 [80];
  long *local_70 [2];
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    plVar20 = *(long **)(param_2 + 0x18);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
      in_x16 = extraout_x16;
      in_x17 = extraout_x17;
    }
    iVar11 = *(int *)(param_2 + 0x44);
    pcVar22 = (char *)param_1[(long)iVar11 * 7 + 0xfd];
    pcVar16 = (char *)param_1[(long)iVar11 * 7 + 0xfe];
    if (pcVar22 != pcVar16) {
      iVar4 = *(int *)(param_2 + 0x48);
      iVar5 = *(int *)(param_2 + 0x4c);
      pcVar19 = param_2;
      plVar21 = param_1;
      do {
        if (*pcVar22 == '\0') {
          bVar23 = 1;
        }
        else {
          plVar21 = *(long **)(pcVar22 + 0x18);
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x18))(plVar21);
          }
          in_x16 = (ulong)*(uint *)(pcVar22 + 0x44);
          pcVar19 = (char *)(ulong)*(uint *)(pcVar22 + 0x48);
          bVar23 = 0;
          in_x17 = (ulong)*(uint *)(pcVar22 + 0x4c);
        }
        plVar12 = *(long **)(pcVar22 + 0x70);
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 5;
          do {
            lVar14 = *plVar2;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = (int)lVar14 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar14 == -1) goto LAB_0190ff28;
        }
        cVar6 = pcVar22[0x98];
        iVar17 = (int)in_x16;
        iVar18 = (int)in_x17;
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 5;
          do {
            lVar14 = *plVar2;
            iVar10 = (int)lVar14 + -1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = iVar10;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*plVar12 + 0x10))();
            in_x17 = in_x17 & 0xffffffff;
            in_x16 = in_x16 & 0xffffffff;
          }
          else if ((int)lVar14 == 0) goto LAB_0190ff7c;
        }
        if (!(bool)(plVar21 == (long *)0x0 | bVar23)) {
          in_x16 = in_x16 & 0xffffffff;
          in_x17 = in_x17 & 0xffffffff;
          (**(code **)(*plVar21 + 0x20))(plVar21);
        }
        if (iVar18 == iVar5 &&
            ((int)pcVar19 == iVar4 &&
            (iVar17 == iVar11 && (plVar12 != (long *)0x0 && cVar6 != '\0')))) goto LAB_0190febc;
        pcVar22 = pcVar22 + 0xa0;
      } while (pcVar22 != pcVar16);
    }
    plVar21 = (long *)param_1[1];
    lVar14 = param_1[0xec];
    if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) {
      plVar12 = (long *)0x0;
    }
    else {
      psVar3 = (short *)(lVar14 + 0x1a);
      sVar15 = *(short *)(lVar14 + 0x1a);
      do {
        sVar7 = *psVar3;
        if (sVar7 == sVar15) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar9) {
            *psVar3 = sVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01910060;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01910060:
          bVar9 = false;
        }
        if (bVar9) {
          plVar12 = (long *)0x0;
          if (*(long *)(lVar14 + 0x10) != 0) {
            plVar12 = (long *)(*(long *)(lVar14 + 0x10) + -0x28);
          }
          break;
        }
        plVar12 = (long *)0x0;
        sVar15 = sVar7;
      } while (sVar7 != 0);
    }
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar21;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    lVar13 = (**(code **)(*plVar21 + 0x10))(plVar21,0x5b0,0x10);
    if (lVar13 == 0) {
      (**(code **)(*plVar21 + 0xe8))(plVar21);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    local_d0[0] = *(undefined4 *)(param_2 + 0x10);
    local_c8 = *(long **)(param_2 + 0x18);
    local_70[0] = plVar12;
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x18))();
    }
    memcpy(auStack_c0,param_2 + 0x20,0x48);
    FUN_019100c0(lVar13,local_70,local_d0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_70[0] != (long *)0x0) {
      (**(code **)(*local_70[0] + 0x60))();
    }
    *(undefined4 *)(lVar13 + 0x18) = 0x1005b0;
    *(long **)(lVar13 + 8) = plVar21;
    *(long *)(lVar13 + 0x10) = lVar13;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    piVar1 = (int *)(lVar13 + 0x28);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == -1) {
LAB_0190ff28:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar21 = *(long **)(param_2 + 0x70);
    param_2[0x70] = '\0';
    param_2[0x71] = '\0';
    param_2[0x72] = '\0';
    param_2[0x73] = '\0';
    param_2[0x74] = '\0';
    param_2[0x75] = '\0';
    param_2[0x76] = '\0';
    param_2[0x77] = '\0';
    if (plVar21 != (long *)0x0) {
      plVar12 = plVar21 + 5;
      do {
        lVar14 = *plVar12;
        iVar11 = (int)lVar14 + -1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar9) {
          *(int *)plVar12 = iVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar21 + 0x10))();
      }
      else if ((int)lVar14 == 0) {
LAB_0190ff7c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(long *)(param_2 + 0x70) = lVar13;
LAB_0190febc:
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))();
    }
  }
  return;
}


