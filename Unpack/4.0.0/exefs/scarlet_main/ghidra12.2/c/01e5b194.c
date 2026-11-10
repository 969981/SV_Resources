/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5b194; name: FUN_01e5b194
 */


float FUN_01e5b194(long param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  
  if (param_2 == 0) {
    return 0.0;
  }
  lVar11 = *(long *)(param_2 + 0x10);
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e5b23c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e5b23c:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar11 + 0x10) != 0) {
          lVar13 = *(long *)(lVar11 + 0x10) + -0x28;
          local_70 = lVar13;
          plVar9 = (long *)FUN_00d62350(lVar13);
          lVar11 = *plVar9;
          fVar22 = 0.0;
          if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) goto LAB_01e5b1c8;
          psVar1 = (short *)(lVar11 + 0x1a);
          sVar12 = *(short *)(lVar11 + 0x1a);
          goto LAB_01e5b290;
        }
        break;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  local_70 = 0;
  fVar22 = 0.0;
  goto LAB_01e5b1c8;
  while (sVar12 = sVar3, sVar3 != 0) {
LAB_01e5b290:
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e5b2b4;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e5b2b4:
      bVar5 = false;
    }
    if (bVar5) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 != 0) {
        plVar9 = (long *)(lVar11 + -0x28);
        lVar10 = FUN_00c8dda0(plVar9);
        fVar22 = 0.0;
        if (lVar10 == 0) goto LAB_01e5b2fc;
        FUN_00e3353c(&local_80,lVar13);
        puVar6 = local_80;
        if (local_80 == (undefined8 *)0x0) goto LAB_01e5b2fc;
        if (*(short *)((long)local_80 + 0x1a) == 0) goto LAB_01e5b380;
        psVar1 = (short *)((long)local_80 + 0x1a);
        sVar12 = *(short *)((long)local_80 + 0x1a);
        goto LAB_01e5b34c;
      }
      break;
    }
  }
  goto LAB_01e5b1c8;
  while (sVar12 = sVar3, sVar3 != 0) {
LAB_01e5b34c:
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e5b370;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e5b370:
      bVar5 = false;
    }
    if (bVar5) {
      plVar14 = (long *)0x0;
      if (local_80[2] != 0) {
        plVar14 = (long *)(local_80[2] + -0x28);
      }
      goto LAB_01e5b398;
    }
  }
LAB_01e5b380:
  plVar14 = (long *)0x0;
LAB_01e5b398:
  psVar1 = (short *)(local_80 + 3);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    piVar2 = (int *)((long)local_80 + 0x1c);
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
      lVar13 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar13;
      local_68 = *puVar6;
      FUN_00c44438(lVar13 + 0x8040,&local_68);
    }
  }
  else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar14 != (long *)0x0) {
    uVar7 = FUN_01e5b604(lVar10);
    fVar24 = 0.0;
    if ((uVar7 & 1) != 0) {
      fVar24 = *(float *)(param_1 + 0x7c) + 0.0;
    }
    uStack_78 = *(undefined8 *)(lVar10 + 0x1d8);
    local_80 = *(undefined8 **)(lVar10 + 0x1d0);
    fVar15 = (float)FUN_01e5b624(param_1,&local_80,param_3);
    fVar16 = (float)FUN_01e5b680(param_1,&local_80);
    fVar17 = (float)FUN_01e5b794(param_1,&local_80,param_3);
    fVar18 = (float)FUN_01e5b864(param_1,&local_80,param_3);
    cVar4 = *(char *)(param_2 + 0x30);
    if (cVar4 == '\x05') {
      fVar23 = *(float *)(param_1 + 200);
    }
    else if (cVar4 == '\x04') {
      fVar23 = *(float *)(param_1 + 0xc4);
    }
    else {
      fVar23 = 0.0;
      if (cVar4 == '\x03') {
        fVar23 = *(float *)(param_1 + 0xc0);
      }
    }
    fVar19 = (float)FUN_01e5bf10(param_1,param_2);
    uVar7 = uVar7 & 1;
    fVar20 = (float)FUN_01e5bffc(param_1,param_2,uVar7);
    iVar8 = FUN_01e15cb0(plVar14);
    fVar21 = (float)FUN_01e5c130(param_1,param_2,uVar7,iVar8 == 2);
    fVar22 = (float)FUN_01e5c2ac(param_1,param_2,uVar7,iVar8 == 2);
    fVar22 = fVar24 + fVar15 + fVar16 + fVar17 + fVar18 + fVar23 + fVar19 + fVar20 + fVar21 + fVar22
    ;
    lVar13 = plVar14[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar12 == 0) goto LAB_01e5b5c4;
  }
LAB_01e5b2fc:
  lVar11 = *(long *)(lVar11 + 0x70);
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  else if (sVar12 == 0) {
LAB_01e5b5c4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01e5b1c8:
  FUN_00c7f318(&local_70);
  return fVar22;
}


