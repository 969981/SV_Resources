/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2c458; name: FUN_01e2c458
 */


void FUN_01e2c458(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  short sVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined1 *local_150;
  code *local_148;
  code *local_140;
  undefined1 *local_138;
  undefined1 auStack_130 [96];
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [32];
  undefined4 local_50;
  
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 == 0) {
    return;
  }
  if (*(short *)(lVar12 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar12 + 0x1a);
  sVar15 = *(short *)(lVar12 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar15) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e2c4c8;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e2c4c8:
      bVar5 = false;
    }
    if (bVar5) {
      lVar12 = *(long *)(lVar12 + 0x10);
      if (lVar12 == 0) {
        return;
      }
      plVar16 = (long *)(lVar12 + -0x28);
      if (*(long *)(param_1 + 8) == 0) {
        uVar8 = *(undefined2 *)(param_1 + 0x10);
        uVar9 = *(undefined2 *)(param_1 + 0x12);
        uVar7 = *(undefined1 *)(param_1 + 0x14);
      }
      else {
        uVar8 = FUN_00cf44f4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x70));
        uVar9 = FUN_00cf41a8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x70));
        uVar7 = FUN_00cec030(*(undefined8 *)(*(long *)(param_1 + 8) + 0x70));
      }
      FUN_0140f7d8(auStack_70,uVar8,uVar9,uVar7,1);
      if (((*PTR_DAT_047d92e0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d92e0), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d94d8,PTR_DAT_047d92e8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d92e0);
      }
      lVar13 = *(long *)PTR_DAT_047d92e8;
      *(long *)PTR_DAT_047d92f0 = lVar13;
      local_78 = *(undefined8 *)(lVar13 + 0x28);
      lVar13 = FUN_013f8bd4(plVar16,*(undefined8 *)(lVar12 + -0x20),&local_78);
      puVar6 = PTR_DAT_047d92d8;
      if (lVar13 == 0) goto LAB_01e2c614;
      local_d0 = (undefined8 *)0x0;
      uStack_c8 = 0;
      local_88 = 0x42c800003f000000;
      uStack_80 = 0x3f8000003f800000;
      local_98 = 0x4120000041700000;
      local_90 = local_50;
      local_a8 = 0x40a0000040a00000;
      local_a0 = 0x40a00000;
      local_c0 = 0x3f80000040c00000;
      uStack_b8 = 0x42c800003f800000;
      local_b0 = 0x3f000000;
      if ((*(long *)(lVar13 + 0x120) == 0) ||
         (puVar18 = *(undefined8 **)(*(long *)(lVar13 + 0x120) + 8), puVar18 == (undefined8 *)0x0))
      goto LAB_01e2c60c;
      if (((*PTR_DAT_047d92d0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d92d0), iVar10 != 0)) {
        uVar11 = FUN_01e2b0d8();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(PTR_DAT_047d92d0);
      }
      goto LAB_01e2c5f8;
    }
    sVar15 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
code_r0x01e2c6d0:
  sVar15 = sVar3;
  if (sVar3 == 0) goto LAB_01e2c7e4;
  goto LAB_01e2c6a4;
  while (puVar18 = (undefined8 *)*puVar18, puVar18 != (undefined8 *)0x0) {
LAB_01e2c5f8:
    if (puVar18 == (undefined8 *)puVar6) {
      FUN_01193608(&local_d0,lVar13 + 0x120);
      break;
    }
  }
LAB_01e2c60c:
  if (local_d0 != (undefined8 *)0x0) {
    if (*(short *)((long)local_d0 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_d0 + 0x1a);
      sVar15 = *(short *)((long)local_d0 + 0x1a);
LAB_01e2c6a4:
      sVar3 = *psVar1;
      if (sVar3 == sVar15) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e2c6c8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e2c6c8:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x01e2c6d0;
      lVar13 = local_d0[2];
      if (lVar13 != 0) {
        plVar17 = (long *)(lVar13 + -0x28);
        FUN_01e21adc(plVar17,&local_98);
        FUN_01e2c94c(plVar17,&local_a8);
        FUN_01e21ba4(plVar17,&local_c0);
        FUN_013f8a48(plVar17,&local_88);
        if (*(int *)(lVar13 + 0x18) == 0) {
          *(undefined4 *)(lVar13 + 0x18) = 1;
        }
        *(undefined1 *)(lVar13 + 0x378) = 0;
        local_150 = &LAB_00aa4e7c;
        local_148 = FUN_00aa4e90;
        local_140 = FUN_00aa4e94;
        local_138 = &LAB_00aa4e98;
        pcVar14 = *(code **)(lVar13 + 0x40);
        if (pcVar14 == (code *)0x0) {
LAB_01e2c778:
          (*local_140)(auStack_130,lVar13 + 0x58);
          *(undefined1 **)(lVar13 + 0x50) = local_138;
          *(undefined8 *)(lVar13 + 0x38) = local_150;
          *(code **)(lVar13 + 0x40) = local_148;
          *(code **)(lVar13 + 0x48) = local_140;
        }
        else {
          *(undefined8 *)(lVar13 + 0x48) = 0;
          *(undefined8 *)(lVar13 + 0x50) = 0;
          *(undefined8 *)(lVar13 + 0x38) = 0;
          *(undefined8 *)(lVar13 + 0x40) = 0;
          (*pcVar14)(lVar13 + 0x58);
          if (local_140 != (code *)0x0) goto LAB_01e2c778;
        }
        pcVar14 = local_148;
        if (local_148 != (code *)0x0) {
          local_140 = (code *)0x0;
          local_138 = (undefined1 *)0x0;
          local_150 = (undefined1 *)0x0;
          local_148 = (code *)0x0;
          (*pcVar14)(auStack_130);
        }
        lVar13 = *(long *)(lVar13 + 8);
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar17 + 0x50))(plVar17);
        }
        else if (sVar15 == 0) goto LAB_01e2c638;
      }
    }
LAB_01e2c7e4:
    puVar18 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_d0 + 3);
      do {
        sVar15 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_150 = (undefined1 *)*puVar18;
          FUN_00c44438(lVar13 + 0x8040,&local_150);
        }
      }
      else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_01e2c614:
  lVar12 = *(long *)(lVar12 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16);
  }
  else if (sVar15 == 0) {
LAB_01e2c638:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


