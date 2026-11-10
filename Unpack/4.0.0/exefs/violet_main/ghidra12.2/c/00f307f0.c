/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f307f0; name: FUN_00f307f0
 */


void FUN_00f307f0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  long **pplVar2;
  int *piVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  long **pplVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  long *local_58;
  
  plVar15 = *(long **)(*(long *)(param_2 + 0x140) + 0x148);
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_00f30b80;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar4 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar4 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_00f30bcc;
  }
  plVar17 = (long *)plVar15[8];
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[6];
    if (*(long *)(lVar16 + 0x10) == 0) {
LAB_00f30b80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar4 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar4 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar14;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_00f30bcc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  uVar14 = *param_3;
  uVar6 = param_3[1];
  uVar5 = param_3[2];
  plVar7 = (long *)param_3[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_80 = &local_58;
  local_58 = (long *)0x0;
  uStack_78 = uVar14;
  local_70 = uVar6;
  uStack_68 = uVar5;
  local_60 = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_00f30ef8(plVar17,&local_80,0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  plVar11 = local_58;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar4 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar4 == 0) goto LAB_00f30b24;
  }
  lVar16 = plVar15[6];
  psVar1 = (short *)(lVar16 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar4 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar16 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
  }
  else if (sVar4 == 0) {
LAB_00f30b24:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (plVar11 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))(&local_80,plVar11);
    *param_1 = 0;
    param_1[1] = 0;
    if (local_80 != (long **)0x0) {
      if ((local_80[1] != (long *)0x0) && (uVar13 = FUN_00cc4840(), (uVar13 & 1) != 0)) {
        FUN_00f30bd4(param_1,&local_80);
      }
      pplVar10 = local_80;
      if (local_80 != (long **)0x0) {
        pplVar2 = local_80 + 3;
        do {
          sVar4 = *(short *)pplVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
          if (bVar9) {
            *(short *)pplVar2 = sVar4 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_80 + 0x1c);
          do {
            iVar12 = *piVar3;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_58 = *pplVar10;
            FUN_00c44438(lVar16 + 0x8040,&local_58);
          }
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


