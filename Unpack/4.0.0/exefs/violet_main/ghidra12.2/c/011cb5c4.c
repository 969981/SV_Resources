/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011cb5c4; name: FUN_011cb5c4
 */


void FUN_011cb5c4(long *param_1,long param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  undefined **ppuVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  bool bVar13;
  short sVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  puVar12 = PTR_DAT_047d66f8;
  lVar15 = *(long *)(*(long *)(param_2 + 8) + 0x1f0);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar12 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&PTR_FUN_0459c7c8;
  param_1[1] = lVar11;
  param_1[4] = (long)&PTR_LAB_0459c800;
  param_1[5] = 0x100000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = (long)&PTR_FUN_0459c830;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  plVar17 = param_1 + 0x1a;
  *plVar17 = 0;
  param_1[0x19] = (long)&PTR_FUN_0459c870;
  param_1[0xd] = lVar15;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[6] = 0;
  param_1[7] = (long)&DAT_cbf29ce484222645;
  param_1[8] = (long)&DAT_03c886bc;
  param_1[9] = 0;
  param_1[0xe] = (ulong)*(uint *)(lVar15 + 0xc) + lVar15;
  lVar15 = *(long *)(param_2 + 8);
  local_a8 = &PTR_FUN_0459c850;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = (long *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_011cc64c(&uStack_a0,lVar15 + 0x218);
  plVar16 = *(long **)(lVar15 + 0x228);
  if (plVar16 != (long *)0x0) {
    lVar8 = plVar16[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_011cbc48;
    psVar3 = (short *)(lVar8 + 0x1a);
    do {
      sVar14 = *psVar3;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar13) {
        *psVar3 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar10;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) goto LAB_011cb978;
  }
  if (local_90 != (long *)0x0) {
    lVar8 = local_90[6];
    psVar3 = (short *)(lVar8 + 0x1a);
    do {
      sVar14 = *psVar3;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar13) {
        *psVar3 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      lVar8 = *local_90;
      local_90 = plVar16;
      (**(code **)(lVar8 + 0x50))();
      plVar16 = local_90;
    }
    else {
      local_90 = plVar16;
      if (sVar14 == 0) goto LAB_011cbb30;
    }
  }
  local_90 = plVar16;
  FUN_00cef9d0(&local_88,lVar15 + 0x230);
  FUN_00ceffd4(&local_78,lVar15 + 0x240);
  local_a8 = &PTR_FUN_0459c830;
  FUN_011cbdcc(param_1 + 0x10);
  FUN_011cc64c(param_1 + 0x11,&uStack_a0);
  plVar16 = local_90;
  if (local_90 != (long *)0x0) {
    lVar15 = local_90[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_011cbc48;
    psVar3 = (short *)(lVar15 + 0x1a);
    do {
      sVar14 = *psVar3;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar13) {
        *psVar3 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar10;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) goto LAB_011cb978;
  }
  plVar9 = (long *)param_1[0x13];
  param_1[0x13] = (long)plVar16;
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[6];
    psVar3 = (short *)(lVar15 + 0x1a);
    do {
      sVar14 = *psVar3;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar13) {
        *psVar3 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_011cbb30;
  }
  FUN_00cef9d0(param_1 + 0x14,&local_88);
  FUN_00ceffd4(param_1 + 0x16,&local_78);
  FUN_011cbc68(&local_a8);
  FUN_011fcf60(param_1 + 0x19);
  lVar15 = *(long *)(param_2 + 0x10);
  FUN_011fd444(&local_a8,lVar15);
  if ((local_a8 != (undefined **)0x0) && (*(short *)((long)local_a8 + 0x1a) != 0)) {
    psVar3 = (short *)((long)local_a8 + 0x1a);
    sVar14 = *(short *)((long)local_a8 + 0x1a);
LAB_011cbaac:
    sVar4 = *psVar3;
    if (sVar4 == sVar14) {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar13) {
        *psVar3 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_011cbad0;
      bVar13 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_011cbad0:
      bVar13 = false;
    }
    if (!bVar13) goto code_r0x011cbad8;
    puVar12 = local_a8[2];
    if (puVar12 != (undefined *)0x0) {
      plVar16 = (long *)*plVar17;
      *plVar17 = 0;
      if (plVar16 != (long *)0x0) {
        lVar8 = plVar16[6];
        psVar3 = (short *)(lVar8 + 0x1a);
        do {
          sVar14 = *psVar3;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar13) {
            *psVar3 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar16 + 0x50))();
        }
        else if (sVar14 == 0) goto LAB_011cbb30;
      }
      *plVar17 = (long)(puVar12 + -0x28);
      goto LAB_011cb7b0;
    }
  }
LAB_011cb7a0:
  plVar16 = (long *)*plVar17;
  lVar15 = 0;
  *plVar17 = 0;
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[6];
    psVar3 = (short *)(lVar15 + 0x1a);
    do {
      sVar14 = *psVar3;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar13) {
        *psVar3 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_011cbb30;
    lVar15 = 0;
  }
LAB_011cb7b0:
  ppuVar6 = local_a8;
  param_1[0x1b] = lVar15;
  if (local_a8 != (undefined **)0x0) {
    ppuVar1 = local_a8 + 3;
    do {
      sVar14 = *(short *)ppuVar1;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar13) {
        *(short *)ppuVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_68 = *ppuVar6;
        FUN_00c44438(lVar15 + 0x8040,&local_68);
      }
    }
    else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar15 = *(long *)(param_2 + 0x18);
  if (lVar15 != 0) {
    lVar8 = *(long *)(lVar15 + 0x30);
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_011cbc48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar3 = (short *)(lVar8 + 0x1a);
    do {
      sVar14 = *psVar3;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar13) {
        *psVar3 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar10;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) {
LAB_011cb978:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar16 = (long *)param_1[0x1c];
  param_1[0x1c] = lVar15;
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[6];
    psVar3 = (short *)(lVar15 + 0x1a);
    do {
      sVar14 = *psVar3;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar13) {
        *psVar3 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))();
    }
    else if (sVar14 == 0) {
LAB_011cbb30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00cef9d0(param_1 + 0x1d,param_2 + 0x20);
  FUN_00ceffd4(param_1 + 0x1f,param_2 + 0x30);
  return;
code_r0x011cbad8:
  sVar14 = sVar4;
  if (sVar4 == 0) goto LAB_011cb7a0;
  goto LAB_011cbaac;
}


