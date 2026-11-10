/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd3de0; name: FUN_01dd3de0
 */


void FUN_01dd3de0(long param_1,long param_2,int *param_3)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  short sVar12;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  if (*(char *)(param_1 + 500) != '\0') {
    return;
  }
  iVar8 = *param_3;
  if (iVar8 < 0) {
    if (*(int *)(param_2 + 4) == 5) {
      FUN_01dd29cc(&local_c0,param_1,3);
      if ((local_c0 == (long *)0x0) || (*(short *)((long)local_c0 + 0x1a) == 0)) {
        plVar10 = (long *)0x0;
      }
      else {
        psVar2 = (short *)((long)local_c0 + 0x1a);
        sVar12 = *(short *)((long)local_c0 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar12) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01dd43b4;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01dd43b4:
            bVar5 = false;
          }
          if (bVar5) {
            plVar10 = (long *)0x0;
            if (local_c0[2] != 0) {
              plVar10 = (long *)(local_c0[2] + -0x28);
            }
            break;
          }
          plVar10 = (long *)0x0;
          sVar12 = sVar3;
        } while (sVar3 != 0);
      }
      FUN_014e974c(plVar10,param_1 + 0x17c,1,0);
      if (plVar10 != (long *)0x0) {
        lVar11 = plVar10[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar12 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        else if (sVar12 == 0) {
LAB_01dd41f4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (local_c0 != (long *)0x0) {
        plVar10 = local_c0 + 3;
        do {
          sVar12 = (short)*plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(short *)plVar10 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 != 1) goto LAB_01dd4238;
        piVar1 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01dd42c4:
        plVar10 = local_c0;
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_e0 = *plVar10;
          FUN_00c44438(lVar11 + 0x8040,&local_e0);
        }
      }
    }
    else {
      FUN_01dd29cc(&local_c0,param_1,0);
      local_e0 = CONCAT44(*(int *)(param_2 + 4) + 1,5);
      FUN_014e4eac(param_1,&local_e0);
      if (local_c0 != (long *)0x0) {
        plVar10 = local_c0 + 3;
        do {
          sVar12 = (short)*plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(short *)plVar10 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          piVar1 = (int *)((long)local_c0 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_01dd42c4;
        }
LAB_01dd4238:
        if (sVar12 == 0) goto LAB_01dd41a8;
      }
    }
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    local_e0 = -0x54b66c967d0cc7d9;
    local_d8 = "PLAY_UI_COMMON_SELECT";
    local_d0 = 0x15;
    local_c8 = (long *)0x0;
    if (*(long *)(lVar11 + 0x48) == 0) {
      uVar9 = 0xffffffffffffffff;
    }
    else {
      uVar9 = FUN_00cf8198();
    }
    pcVar6 = local_d8;
    memset(&local_c0,0,0x80);
    plVar10 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    iVar8 = (**(code **)(*plVar10 + 0xd0))(plVar10,pcVar6,uVar9,1,&LAB_01080c70,lVar11,0,0,0);
    if (iVar8 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_e0,iVar8,uVar9,0,&local_c0,0);
      pcVar7 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = (long *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar7)(auStack_a0);
      }
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    iVar8 = *param_3;
  }
  if (iVar8 < 1) {
    return;
  }
  if (*(int *)(param_2 + 4) == 5) {
    FUN_01dd29cc(&local_c0,param_1,3);
    if ((local_c0 != (long *)0x0) && (*(short *)((long)local_c0 + 0x1a) != 0)) {
      psVar2 = (short *)((long)local_c0 + 0x1a);
      sVar12 = *(short *)((long)local_c0 + 0x1a);
LAB_01dd4348:
      sVar3 = *psVar2;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01dd436c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dd436c:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x01dd4374;
      lVar11 = local_c0[2];
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + -0x28);
        FUN_014e974c(plVar10,param_1 + 0x184,1,0);
        lVar11 = *(long *)(lVar11 + 8);
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar12 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        else if (sVar12 == 0) goto LAB_01dd41f4;
        goto LAB_01dd3e6c;
      }
    }
LAB_01dd3e58:
    FUN_014e974c(0,param_1 + 0x184,1,0);
LAB_01dd3e6c:
    if (local_c0 == (long *)0x0) goto LAB_01dd3f54;
    plVar10 = local_c0 + 3;
    do {
      sVar12 = (short)*plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(short *)plVar10 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar1 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_01dd4264;
    }
  }
  else {
    FUN_01dd29cc(&local_c0,param_1,0);
    local_e0 = (ulong)(*(int *)(param_2 + 4) + 1) << 0x20;
    FUN_014e4eac(param_1,&local_e0);
    if (local_c0 == (long *)0x0) goto LAB_01dd3f54;
    plVar10 = local_c0 + 3;
    do {
      sVar12 = (short)*plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(short *)plVar10 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar1 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01dd4264:
      plVar10 = local_c0;
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_e0 = *plVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_e0);
      }
      goto LAB_01dd3f54;
    }
  }
  if (sVar12 == 0) {
LAB_01dd41a8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_01dd3f54:
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar11 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar11;
  local_e0 = 0xab49936982f33827;
  local_d8 = "PLAY_UI_COMMON_SELECT";
  local_d0 = 0x15;
  local_c8 = (long *)0x0;
  if (*(long *)(lVar11 + 0x48) == 0) {
    uVar9 = 0xffffffffffffffff;
  }
  else {
    uVar9 = FUN_00cf8198();
  }
  pcVar6 = local_d8;
  memset(&local_c0,0,0x80);
  plVar10 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
  iVar8 = (**(code **)(*plVar10 + 0xd0))(plVar10,pcVar6,uVar9,1,&LAB_01080c70,lVar11,0,0,0);
  if (iVar8 != 0) {
    FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_e0,iVar8,uVar9,0,&local_c0,0);
    pcVar7 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = (long *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar7)(auStack_a0);
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
code_r0x01dd4374:
  sVar12 = sVar3;
  if (sVar3 == 0) goto LAB_01dd3e58;
  goto LAB_01dd4348;
}


