/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132d790; name: FUN_0132d790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0132d790(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  float fVar19;
  long local_e0;
  long local_d0;
  undefined4 uStack_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_88;
  
  if (*(int *)(param_1 + 0x120) != 1) {
    return;
  }
  FUN_00c9e664(&local_b0,param_1 + 0xe8);
  lVar15 = 0;
  if (local_a8 != (long *)0x0) {
    lVar15 = local_a8[9];
  }
  lVar15 = FUN_01086108(lVar15 + 0x108,&local_c0);
  if (local_a8 != (long *)0x0) {
    plVar9 = local_a8 + 5;
    do {
      lVar16 = *plVar9;
      iVar8 = (int)lVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_a8 + 0x10))();
      goto LAB_0132d818;
    }
    if ((int)lVar16 != 0) goto LAB_0132d818;
LAB_0132dd80:
    pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar12 = "DecrementReferenceInternal";
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar14 = "Reference counter underflows.";
    goto LAB_0132dda0;
  }
LAB_0132d818:
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x60))();
  }
  if (lVar15 != 0) {
    if (*(int *)(lVar15 + 0x128) != 2) {
      return;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x128) + 0x30);
    if (plVar9 == (long *)0x0) {
      uStack_c8 = (undefined4)_DAT_00000088;
      local_d0 = _DAT_00000080;
    }
    else {
      plVar17 = plVar9 + 5;
      do {
        lVar16 = *plVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = (int)lVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar16 == -1) goto LAB_0132ddd0;
      uStack_c8 = (undefined4)plVar9[0x11];
      local_d0 = plVar9[0x10];
      do {
        lVar16 = *plVar17;
        iVar8 = (int)lVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_0132dd80;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x128) + 0x30);
    if (plVar9 == (long *)0x0) {
      local_e0 = _DAT_000000a0;
    }
    else {
      plVar17 = plVar9 + 5;
      do {
        lVar16 = *plVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = (int)lVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar16 == -1) {
LAB_0132ddd0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      local_e0 = plVar9[0x14];
      do {
        lVar16 = *plVar17;
        iVar8 = (int)lVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_0132dd80;
    }
    lVar16 = *(long *)(lVar15 + 0x130);
    if ((int)((ulong)(*(long *)(lVar16 + 0x78) - *(long *)(lVar16 + 0x70)) >> 3) * -0x33333333 != 0)
    {
      uVar18 = 0;
      fVar19 = (float)((ulong)local_e0 >> 0x20);
      do {
        FUN_00c5ecb4(&local_88,*(undefined8 *)(lVar16 + 0x30),
                     *(long *)(lVar16 + 0x70) + uVar18 * 0x28);
        local_b0 = (long *)0x9fb1213e2d641ad9;
        local_a8 = (long *)0x3be9a66;
        local_a0 = 0xd;
        local_98 = (long *)0x0;
        local_c0 = (float)local_d0;
        local_b4 = 0.0;
        fStack_bc = (float)(int)((ulong)local_d0 >> 0x20);
        local_b8 = (float)uStack_c8;
        (**(code **)(*(long *)(local_88[7] + 0x30) + 0x30))
                  ((long *)(local_88[7] + 0x30),&local_b0,&local_c0);
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        local_b0 = (long *)0x299ba4ff44afe28c;
        local_a8 = (long *)0x3bd5750;
        local_a0 = 0xc;
        local_98 = (long *)0x0;
        local_c0 = (float)local_e0;
        fStack_bc = fVar19;
        local_b8 = 1.0 / (float)local_e0;
        local_b4 = 1.0 / fVar19;
        (**(code **)(*(long *)(local_88[7] + 0x30) + 0x30))
                  ((long *)(local_88[7] + 0x30),&local_b0,&local_c0);
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (local_88 != (long *)0x0) {
          plVar9 = local_88 + 5;
          do {
            lVar16 = *plVar9;
            iVar8 = (int)lVar16 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *(int *)plVar9 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_88 + 0x10))();
          }
          else if ((int)lVar16 == 0) goto LAB_0132dd80;
        }
        lVar16 = *(long *)(lVar15 + 0x130);
        uVar18 = uVar18 + 1;
      } while (uVar18 < (uint)((int)((ulong)(*(long *)(lVar16 + 0x78) - *(long *)(lVar16 + 0x70)) >>
                                    3) * -0x33333333));
    }
  }
  plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0xe8) + 0x48) + 0x460);
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_0132de10;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar10;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
      pcVar11 = "count != 0";
      pcVar12 = "AddReference";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar14 = "Reference counter overflows.";
      goto LAB_0132dda0;
    }
  }
  puVar5 = PTR_DAT_047d88d0;
  if (((*PTR_DAT_047d88d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  puVar7 = PTR_DAT_047d88e0;
  puVar6 = PTR_DAT_047d88d8;
  lVar15 = *(long *)PTR_DAT_047d88d8;
  *(long *)PTR_DAT_047d88e0 = lVar15;
  plVar17 = *(long **)(lVar15 + 0xe8);
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_0132de10;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar10;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
LAB_0132d98c:
      FUN_00e21f0c(plVar17);
      lVar15 = plVar17[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))(plVar17);
      }
      else if (sVar2 == 0) goto LAB_0132dda8;
      goto LAB_0132d9b8;
    }
    if (sVar2 != -1) goto LAB_0132d98c;
LAB_0132de18:
    pcVar11 = "count != 0";
    pcVar12 = "AddReference";
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar14 = "Reference counter overflows.";
LAB_0132dda0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
  }
  FUN_00e21f0c(0);
LAB_0132d9b8:
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  plVar17 = *(long **)(lVar15 + 0xd0);
  if (plVar17 == (long *)0x0) {
    FUN_00e21f0c(0);
  }
  else {
    lVar15 = plVar17[6];
    if (*(long *)(lVar15 + 0x10) == 0) {
LAB_0132de10:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar10;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0132de18;
    FUN_00e21f0c(plVar17);
    lVar15 = plVar17[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar2 == 0) goto LAB_0132dda8;
  }
  FUN_0132de7c(*(undefined8 *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x120) = 2;
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar2 == 0) {
LAB_0132dda8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


