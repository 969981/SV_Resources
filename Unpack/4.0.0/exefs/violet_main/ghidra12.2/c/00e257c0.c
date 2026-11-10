/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e257c0; name: FUN_00e257c0
 */


undefined8 FUN_00e257c0(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  short sVar18;
  long *plVar19;
  long *local_80;
  long *local_78;
  long *local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  long *local_50 [2];
  
  lVar14 = *(long *)(param_1 + 0x120);
  if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar14 + 0x1a);
    sVar18 = *(short *)(lVar14 + 0x1a);
LAB_00e259c4:
    sVar4 = *psVar1;
    if (sVar4 == sVar18) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_00e259e8;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00e259e8:
      bVar7 = false;
    }
    if (!bVar7) goto code_r0x00e259f0;
    lVar14 = *(long *)(lVar14 + 0x10);
    if (lVar14 != 0) {
      lVar15 = *(long *)(lVar14 + 0x70);
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*(long *)(lVar14 + -0x28) + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_00e25c54;
      goto LAB_00e258a0;
    }
  }
LAB_00e257e4:
  puVar8 = PTR_DAT_047d4240;
  if (((*PTR_DAT_047d4240 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar10 = PTR_DAT_047d4250;
  puVar9 = PTR_DAT_047d4248;
  uVar13 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar13;
  FUN_00cf9884(&local_70,uVar13,"outdoor_env");
  plVar2 = local_70;
  plVar19 = (long *)PTR_DAT_047d8b70;
  if (local_70 != (long *)0x0) {
    plVar19 = local_70 + 6;
  }
  plVar17 = (long *)PTR_PTR_047d4508;
  if (local_70 != (long *)0x0) {
    plVar17 = local_70 + 7;
  }
  lStack_68 = *plVar17;
  if (local_70 == (long *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = local_70[8];
  }
  local_58 = (long *)0x0;
  plVar17 = (long *)0x0;
  plVar11 = (long *)*plVar19;
  if (local_70 != (long *)0x0) {
    lVar14 = *local_70;
    local_70 = (long *)*plVar19;
    (**(code **)(lVar14 + 0x18))(plVar2);
    plVar17 = plVar2;
    plVar11 = local_70;
  }
  local_70 = plVar11;
  local_58 = plVar17;
  FUN_00e25df8(local_50,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (local_50[0] == (long *)0x0) {
    return 0;
  }
  if (*(short *)((long)local_50[0] + 0x1a) == 0) {
    if (local_50[0] == (long *)0x0) {
      return 0;
    }
    plVar19 = local_50[0] + 3;
    do {
      sVar18 = (short)*plVar19;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *(short *)plVar19 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 == -1) {
        return 0;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar14 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar14;
      local_70 = (long *)*local_50[0];
      FUN_00c44438(lVar14 + 0x8040,&local_70);
      return 0;
    }
    if (sVar18 != 0) {
      return 0;
    }
    goto LAB_00e2592c;
  }
  if (local_50[0] == (long *)0x0) goto LAB_00e258a0;
  if (*(short *)((long)local_50[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_50[0] + 0x1a);
    sVar18 = *(short *)((long)local_50[0] + 0x1a);
LAB_00e25b00:
    sVar4 = *psVar1;
    if (sVar4 == sVar18) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_00e25b24;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00e25b24:
      bVar7 = false;
    }
    if (!bVar7) goto code_r0x00e25b2c;
    lVar14 = local_50[0][2];
    if (lVar14 == 0) goto LAB_00e25be4;
    local_80 = (long *)0x0;
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar13 = *(undefined8 *)puVar9;
    *(undefined8 *)puVar10 = uVar13;
    FUN_00cf9884(&local_70,uVar13,&DAT_03c8bcac);
    plVar19 = local_80;
    local_80 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x20))();
    }
    local_80 = local_70;
    FUN_01dbf5e4(&local_78,lVar14 + 0x18,&local_80);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_78 == (long *)0x0) goto LAB_00e25bec;
    lVar15 = FUN_0169aa38(local_78 + 0x21,&local_70);
    if (lVar15 != 0) {
      FUN_0188a070(&local_70);
      FUN_01fa5158((long *)(param_1 + 0x120),&local_70);
      FUN_015dc5d8(&local_70);
    }
    if (local_78 != (long *)0x0) {
      lVar16 = local_78[6];
      psVar1 = (short *)(lVar16 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_00e25c54;
    }
    if (lVar15 == 0) {
LAB_00e25bec:
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))();
    goto LAB_00e25c04;
  }
LAB_00e25be4:
  bVar7 = true;
  plVar19 = local_50[0];
LAB_00e25c08:
  plVar2 = plVar19 + 3;
  do {
    sVar18 = (short)*plVar2;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(short *)plVar2 = sVar18 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar18 == 1) {
    piVar3 = (int *)((long)plVar19 + 0x1c);
    do {
      iVar12 = *piVar3;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar14 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar14;
      local_70 = (long *)*plVar19;
      FUN_00c44438(lVar14 + 0x8040,&local_70);
    }
  }
  else if (sVar18 == 0) {
LAB_00e2592c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  goto joined_r0x00e25d00;
code_r0x00e259f0:
  sVar18 = sVar4;
  if (sVar4 == 0) goto LAB_00e257e4;
  goto LAB_00e259c4;
code_r0x00e25b2c:
  sVar18 = sVar4;
  if (sVar4 == 0) goto code_r0x00e25b34;
  goto LAB_00e25b00;
code_r0x00e25b34:
  bVar7 = true;
LAB_00e25c04:
  plVar19 = local_50[0];
  if (local_50[0] != (long *)0x0) goto LAB_00e25c08;
joined_r0x00e25d00:
  if (!bVar7) {
    return 0;
  }
LAB_00e258a0:
  lVar14 = *(long *)(param_1 + 0x120);
  if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) {
    return 0;
  }
  psVar1 = (short *)(lVar14 + 0x1a);
  sVar18 = *(short *)(lVar14 + 0x1a);
  do {
    sVar4 = *psVar1;
    if (sVar4 == sVar18) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_00e25a30;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00e25a30:
      bVar7 = false;
    }
    if (bVar7) {
      lVar14 = *(long *)(lVar14 + 0x10);
      if (lVar14 == 0) {
        return 0;
      }
      lVar15 = *(long *)(lVar14 + 0x70);
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*(long *)(lVar14 + -0x28) + 0x50))();
      }
      else if (sVar18 == 0) {
LAB_00e25c54:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return 1;
    }
    sVar18 = sVar4;
    if (sVar4 == 0) {
      return 0;
    }
  } while( true );
}


