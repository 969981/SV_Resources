/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c5688; name: FUN_019c5688
 */


void FUN_019c5688(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long *plVar13;
  long *local_70;
  undefined8 *local_68 [3];
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar6 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar10 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar10;
  param_1[4] = (long)(puVar6 + 0x88);
  plVar12 = param_1 + 5;
  *plVar12 = (long)(puVar6 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar12);
  *param_1 = (long)&DAT_04543470;
  param_1[4] = (long)&PTR_LAB_045434e8;
  *plVar12 = (long)&PTR_LAB_04543538;
  *(undefined4 *)(param_1 + 8) = 0x3fc00000;
  param_1[0x10] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_00d8fb98(local_68,&DAT_04543580);
  FUN_00e25df8(&local_48,local_68);
  puVar7 = local_48;
  plVar12 = (long *)0x0;
  if (local_48 != (undefined8 *)0x0) {
    if (*(short *)((long)local_48 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48 + 0x1a);
      sVar11 = *(short *)((long)local_48 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_019c5a64;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019c5a64:
          bVar5 = false;
        }
        if (bVar5) {
          plVar12 = (long *)0x0;
          if (local_48[2] != 0) {
            plVar12 = (long *)(local_48[2] + -0x28);
          }
          goto LAB_019c5a8c;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
    plVar12 = (long *)0x0;
LAB_019c5a8c:
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar11 == 0) goto LAB_019c5878;
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    FUN_00d8fb98(local_68,&DAT_04543598);
    FUN_00cb7f10(&local_70,plVar12 + 8,local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      plVar13 = local_70 + 5;
      (**(code **)(*local_70 + 0x18))(local_68);
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      if ((long *)local_68[0][2] == plVar13) {
        FUN_00cbc6dc(&local_48,local_68);
      }
      puVar7 = local_68[0];
      if (local_68[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68[0] + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar2 = (int *)((long)local_68[0] + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_38 = *puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_38);
          }
        }
        else if (sVar11 == 0) goto LAB_019c5878;
      }
      FUN_00ca1ea4(param_1 + 9,&local_48);
      puVar7 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_48 + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar2 = (int *)((long)local_48 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_68[0] = (undefined8 *)*puVar7;
            FUN_00c44438(lVar9 + 0x8040,local_68);
          }
        }
        else if (sVar11 == 0) {
LAB_019c5878:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (local_70 != (long *)0x0) {
        lVar9 = local_70[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_70 + 0x50))();
        }
        else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    (**(code **)(*plVar12 + 0x60))(plVar12);
  }
  return;
}


