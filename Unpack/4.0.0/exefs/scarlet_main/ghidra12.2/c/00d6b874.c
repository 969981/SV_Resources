/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6b874; name: FUN_00d6b874
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6b874(float param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [12];
  undefined8 *puVar9;
  code *pcVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  short sVar16;
  long *plVar17;
  float fVar18;
  undefined8 *local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [104];
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  FUN_00d6bcfc(&local_100);
  puVar9 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    if (*(short *)((long)local_100 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_100 + 0x1a);
      sVar16 = *(short *)((long)local_100 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar16) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00d6b8f8;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d6b8f8:
          bVar7 = false;
        }
        if (bVar7) {
          plVar17 = (long *)0x0;
          if (local_100[2] != 0) {
            plVar17 = (long *)(local_100[2] + -0x28);
          }
          goto LAB_00d6b920;
        }
        sVar16 = sVar5;
      } while (sVar5 != 0);
    }
    plVar17 = (long *)0x0;
LAB_00d6b920:
    psVar1 = (short *)(local_100 + 3);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_48 = *puVar9;
        FUN_00c44438(lVar13 + 0x8040,&local_48);
      }
    }
    else if (sVar16 == 0) {
LAB_00d6bc28:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar17 != (long *)0x0) {
      plVar12 = (long *)FUN_00d63f6c(param_2);
      lVar13 = *plVar12;
      if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar13 + 0x1a);
        sVar16 = *(short *)(lVar13 + 0x1a);
LAB_00d6ba28:
        sVar5 = *psVar1;
        if (sVar5 == sVar16) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00d6ba4c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d6ba4c:
          bVar7 = false;
        }
        if (!bVar7) goto code_r0x00d6ba54;
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 != 0) {
          param_1 = *(float *)(param_2 + 0x290) - param_1;
          plVar12 = (long *)(lVar13 + -0x28);
          *(float *)(param_2 + 0x290) = param_1;
          if (param_1 < 0.0) {
            auVar8 = FUN_01e0e244(plVar12);
            local_e0 = &LAB_00a95ec4;
            local_d8 = FUN_00a95f48;
            local_d0 = &LAB_00a95f4c;
            puStack_c8 = &LAB_00a95f50;
            local_100 = (undefined8 *)0x49a7bcfacb27321d;
            pcStack_f8 = "eff_headcenter01";
            local_f0 = 0x10;
            local_e8 = (long *)0x0;
            FUN_01e0e440(local_58,CONCAT44(auVar8._4_4_ * 0.25,auVar8._0_4_ * 0.0),_DAT_03d305a0,
                         auVar8._0_8_,auVar8._8_4_ * 0.0,plVar17,0x16,&local_e0,&local_100);
            if (local_58[0] != (undefined8 *)0x0) {
              psVar1 = (short *)(local_58[0] + 3);
              do {
                sVar16 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar16 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar16 == 1) {
                piVar2 = (int *)((long)local_58[0] + 0x1c);
                do {
                  iVar11 = *piVar2;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar7) {
                    *piVar2 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar11 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar14 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar14;
                  local_48 = *local_58[0];
                  FUN_00c44438(lVar14 + 0x8040,&local_48);
                }
              }
              else if (sVar16 == 0) goto LAB_00d6bc28;
            }
            if (local_e8 != (long *)0x0) {
              (**(code **)(*local_e8 + 0x20))();
            }
            pcVar10 = local_d8;
            if (local_d8 != (code *)0x0) {
              local_d0 = (undefined1 *)0x0;
              puStack_c8 = (undefined1 *)0x0;
              local_e0 = (undefined1 *)0x0;
              local_d8 = (code *)0x0;
              (*pcVar10)(auStack_c0);
            }
            uVar3 = *(ulong *)(param_2 + 0x48);
            uVar4 = *(ulong *)(param_2 + 0x50);
            uVar15 = uVar4 ^ uVar3;
            *(ulong *)(param_2 + 0x48) = uVar15 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar15 << 0x10;
            *(ulong *)(param_2 + 0x50) = uVar15 >> 0x1b | uVar15 << 0x25;
            fVar18 = (float)(uVar4 + uVar3) * 5.421011e-20;
            *(float *)(param_2 + 0x290) = fVar18 + fVar18 + 0.0 + 3.0;
          }
          lVar13 = *(long *)(lVar13 + 0x70);
          psVar1 = (short *)(lVar13 + 0x1a);
          do {
            sVar16 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*plVar12 + 0x50))(plVar12);
          }
          else if (sVar16 == 0) goto LAB_00d6b978;
        }
      }
LAB_00d6b954:
      lVar13 = plVar17[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))(plVar17);
      }
      else if (sVar16 == 0) {
LAB_00d6b978:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x00d6ba54:
  sVar16 = sVar5;
  if (sVar5 == 0) goto LAB_00d6b954;
  goto LAB_00d6ba28;
}


