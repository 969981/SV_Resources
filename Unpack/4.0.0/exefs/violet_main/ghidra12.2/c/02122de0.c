/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02122de0; name: FUN_02122de0
 */


uint FUN_02122de0(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  short sVar12;
  uint uVar13;
  long *plVar14;
  uint unaff_w21;
  long lVar15;
  long local_70 [3];
  long *local_58;
  long *local_50 [2];
  
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar10 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar10;
  FUN_017df8a0(local_50,uVar10,*(undefined4 *)(param_1 + 0x1c0));
  if ((local_50[0] != (long *)0x0) && (*(short *)((long)local_50[0] + 0x1a) != 0)) {
    if ((local_50[0] == (long *)0x0) || (*(short *)((long)local_50[0] + 0x1a) == 0)) {
LAB_02122e54:
      unaff_w21 = 1;
    }
    else {
      psVar1 = (short *)((long)local_50[0] + 0x1a);
      unaff_w21 = 1;
      sVar12 = *(short *)((long)local_50[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02122f04;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02122f04:
          bVar5 = false;
        }
        if (bVar5) {
          lVar11 = local_50[0][2];
          if (lVar11 == 0) goto LAB_02122e54;
          plVar14 = (long *)(lVar11 + -0x28);
          if (*(char *)param_2[1] == '\0') {
            unaff_w21 = 0;
            bVar5 = false;
            goto LAB_02122ff8;
          }
          iVar9 = FUN_021230fc(plVar14);
          if (iVar9 == 0) goto LAB_02122ff0;
          uVar13 = 0;
          goto LAB_02122f40;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
  }
  goto LAB_02122e58;
  while( true ) {
    uVar13 = uVar13 + 1;
    uVar8 = FUN_021230fc(plVar14);
    if (uVar8 <= uVar13) break;
LAB_02122f40:
    FUN_02123104(local_70,plVar14,uVar13);
    lVar7 = local_70[0];
    lVar15 = *param_2;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (lVar7 == lVar15) {
      bVar5 = false;
      unaff_w21 = 1;
      goto LAB_02122ff8;
    }
  }
LAB_02122ff0:
  unaff_w21 = 1;
  bVar5 = true;
LAB_02122ff8:
  lVar11 = *(long *)(lVar11 + 8);
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar14 + 0x50))(plVar14);
  }
  else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (!bVar5) {
    uVar13 = 1;
    goto LAB_02122e5c;
  }
LAB_02122e58:
  uVar13 = 0;
LAB_02122e5c:
  if (local_50[0] != (long *)0x0) {
    plVar14 = local_50[0] + 3;
    do {
      sVar12 = (short)*plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(short *)plVar14 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_70[0] = *local_50[0];
        FUN_00c44438(lVar11 + 0x8040,local_70);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return unaff_w21 & uVar13;
}


