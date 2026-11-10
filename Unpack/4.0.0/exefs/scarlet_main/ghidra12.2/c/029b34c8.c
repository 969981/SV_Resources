/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b34c8; name: FUN_029b34c8
 */


void FUN_029b34c8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  short sVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  code *pcVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *local_68;
  long *local_48;
  
  *param_1 = (long)&PTR_FUN_046042c0;
  param_1[4] = (long)&PTR_LAB_04604390;
  param_1[5] = (long)&PTR_LAB_04604440;
  pcVar16 = (code *)param_1[0x13];
  if (pcVar16 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar16)(param_1 + 0x16);
  }
  lVar18 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar18 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar8 = *(int *)(lVar12 + 0x12c8);
    iVar11 = iVar8 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar11;
    if (*(int *)(lVar12 + 0x12cc) <= iVar8) {
      *(int *)(lVar12 + 0x12cc) = iVar11;
    }
    FUN_0133424c(lVar18);
    plVar14 = (long *)param_1[0xe];
    lVar12 = param_1[0xf];
    lVar19 = param_1[0x10];
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,lVar12,lVar19);
    }
    else {
      FUN_00c48fe8(plVar14,lVar18,lVar12,lVar19);
    }
    lVar18 = FUN_00c4e600();
    iVar11 = *(int *)(lVar18 + 0x12c8) + -1;
    *(int *)(lVar18 + 0x12c8) = iVar11;
    if (iVar11 == 0) {
      plVar14 = (long *)FUN_00c4e600();
      if (plVar14[600] != 0) {
        local_68 = plVar14 + plVar14[600] * 3;
        local_48 = plVar14;
        FUN_00c4ea30(&local_48,&local_68);
        plVar20 = (long *)*plVar14;
        plVar6 = plVar14;
        if (plVar14[600] != 0) {
          plVar6 = plVar14 + plVar14[600] * 3;
        }
        if (plVar6 == plVar14) {
          uVar21 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar14 + 0xd0))();
          if ((long *)*plVar14 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar14,plVar14);
            plVar20 = (long *)*plVar14;
          }
          plVar5 = plVar14 + 3;
          if (plVar6 == plVar5) {
            uVar21 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar5 + 0xd0))();
            bVar10 = (long *)*plVar5 != plVar20;
            if (bVar10) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar14,plVar14 + 3);
              plVar20 = (long *)plVar14[3];
            }
            uVar21 = (ulong)bVar10;
            plVar5 = plVar14 + 6;
            if (plVar6 == plVar5) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar5 + 0xd0))();
              if ((long *)*plVar5 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + 6);
                plVar20 = (long *)plVar14[6];
                uVar21 = 2;
              }
              plVar5 = plVar14 + 9;
              if (plVar6 == plVar5) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar5 + 0xd0))();
                if ((long *)*plVar5 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + 9);
                  plVar20 = (long *)plVar14[9];
                  uVar21 = 3;
                }
                plVar5 = plVar14 + 0xc;
                if (plVar6 == plVar5) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar5 + 0xd0))();
                  if ((long *)*plVar5 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + 0xc);
                    plVar20 = (long *)plVar14[0xc];
                    uVar21 = 4;
                  }
                  plVar5 = plVar14 + 0xf;
                  if (plVar6 == plVar5) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar5 + 0xd0))();
                    if ((long *)*plVar5 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + 0xf);
                      plVar20 = (long *)plVar14[0xf];
                      uVar21 = 5;
                    }
                    uVar13 = 6;
                    for (plVar5 = plVar14 + 0x12; plVar6 != plVar5; plVar5 = plVar5 + 3) {
                      (**(code **)(*(long *)*plVar5 + 0xd0))();
                      if ((long *)*plVar5 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar5);
                        plVar20 = (long *)*plVar5;
                        uVar21 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar14 + uVar21 * 3,plVar14 + uVar13 * 3);
        plVar14[600] = 0;
      }
      *(undefined4 *)(lVar18 + 0x12cc) = 0;
    }
  }
  puVar1 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  param_1[5] = (long)(puVar1 + 0x170);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  puVar1 = PTR_DAT_047e3080 + 0x88;
  puVar2 = PTR_DAT_047e3080 + 0x138;
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar17 = (undefined8 *)param_1[6];
  if (puVar17 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar17 + 3);
    do {
      sVar7 = *psVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar10) {
        *psVar3 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar4 = (int *)((long)puVar17 + 0x1c);
      do {
        iVar11 = *piVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar10) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_48 = (long *)*puVar17;
        FUN_00c44438(lVar18 + 0x8040,&local_48);
      }
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


