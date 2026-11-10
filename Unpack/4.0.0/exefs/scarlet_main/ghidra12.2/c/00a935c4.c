/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a935c4; name: FUN_00a935c4
 */


uint FUN_00a935c4(long param_1,ulong param_2)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  uint unaff_w23;
  uint uVar15;
  long *local_68 [2];
  long local_58;
  long **local_38;
  
  if ((((*(long *)(param_1 + 0x180) == 0) || (*(short *)(*(long *)(param_1 + 0x180) + 0x1a) == 0))
      && (lVar11 = *(long *)(param_1 + 0x80), lVar11 != 0)) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar14 = *(short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar14) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00a93798;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a93798:
        bVar7 = false;
      }
      if (bVar7) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 != 0) {
          local_68[0] = &local_58;
          local_38 = local_68;
          plVar10 = (long *)(lVar11 + 0xe8);
          lVar13 = *plVar10;
          lVar12 = nn::os::GetCurrentThread();
          if (lVar12 == lVar13) {
            unaff_w23 = 1;
          }
          else {
            lVar12 = nn::os::GetCurrentThread();
            do {
              if (*plVar10 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
                  while (*plVar10 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                    if (bVar7) {
                      *plVar10 = lVar12;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_00a937f8;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *plVar10 = lVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_00a937f8:
            unaff_w23 = 0;
          }
          lVar12 = FUN_01e001ec(&local_38,lVar11 + 0x100);
          if (lVar12 == 0) {
            lVar12 = FUN_01e001ec(&local_38,lVar11 + 0x138);
          }
          if (unaff_w23 == 0) {
            *(undefined8 *)(lVar11 + 0xe8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
          }
          if (lVar12 != 0) {
            FUN_01dff734(local_68,lVar12);
            FUN_01e0031c((long *)(param_1 + 0x180),local_68);
            plVar10 = local_68[0];
            if (local_68[0] != (long *)0x0) {
              plVar2 = local_68[0] + 3;
              do {
                sVar14 = (short)*plVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *(short *)plVar2 = sVar14 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar14 == 1) {
                piVar3 = (int *)((long)local_68[0] + 0x1c);
                do {
                  iVar9 = *piVar3;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar7) {
                    *piVar3 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar9 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar12 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar12;
                  local_38 = (long **)*plVar10;
                  FUN_00c44438(lVar12 + 0x8040,&local_38);
                }
              }
              else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))();
        }
        break;
      }
      sVar14 = sVar4;
    } while (sVar4 != 0);
  }
  lVar11 = *(long *)(param_1 + 0x180);
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar14 = *(short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar14) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 != 0) {
            if (*(char *)(lVar11 + 0xf6) != '\x03') {
              unaff_w23 = 0;
              goto LAB_00a9368c;
            }
            plVar10 = (long *)FUN_00d63f6c(param_1);
            lVar12 = *plVar10;
            if ((lVar12 == 0) || (*(short *)(lVar12 + 0x1a) == 0)) goto LAB_00a93680;
            psVar1 = (short *)(lVar12 + 0x1a);
            sVar14 = *(short *)(lVar12 + 0x1a);
            goto LAB_00a93708;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      sVar14 = sVar4;
    } while (sVar4 != 0);
  }
LAB_00a936b8:
  unaff_w23 = 0;
LAB_00a936bc:
  return unaff_w23 & 1;
LAB_00a93708:
  sVar4 = *psVar1;
  if (sVar4 == sVar14) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar14 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_00a9372c;
    bVar7 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00a9372c:
    bVar7 = false;
  }
  if (!bVar7) goto code_r0x00a93734;
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) goto LAB_00a93680;
  if (*(int *)(lVar12 + 0x120) == 2) {
    uVar15 = 0;
    goto LAB_00a939ac;
  }
  if (*(long *)(lVar12 + 0x110) == 0) {
    uVar8 = *(uint *)(lVar12 + 0xf8);
  }
  else {
    uVar8 = FUN_00cf44f4(*(undefined8 *)(*(long *)(lVar12 + 0x110) + 0x70));
    uVar8 = uVar8 & 0xffff;
  }
  uVar15 = 1;
  if ((int)uVar8 < 0x165) {
    if (0x115 < (int)uVar8) {
      if ((0x38 < uVar8 - 0x116) ||
         ((1L << ((ulong)(uVar8 - 0x116) & 0x3f) & 0x100000000000003U) == 0)) goto LAB_00a939dc;
      goto LAB_00a939ac;
    }
    if (((uVar8 - 0xae < 0x34) && ((1L << ((ulong)(uVar8 - 0xae) & 0x3f) & 0x801000000e001U) != 0))
       || ((uVar8 - 0x27 < 2 || (uVar8 == 0x7b)))) goto LAB_00a939ac;
LAB_00a939dc:
    unaff_w23 = 1;
    bVar7 = true;
    if ((uVar8 == 0x36) && (uVar15 = 1, (param_2 & 1) == 0)) goto LAB_00a939ac;
  }
  else {
    if ((int)uVar8 < 0x3bf) {
      if (((0x28 < uVar8 - 0x2bd) || ((1L << ((ulong)(uVar8 - 0x2bd) & 0x3f) & 0x10000006001U) == 0)
          ) && ((uVar8 != 0x165 && (uVar8 != 0x192)))) goto LAB_00a939dc;
    }
    else if ((0x1a < uVar8 - 0x3bf) || ((1 << (ulong)(uVar8 - 0x3bf & 0x1f) & 0x4800005U) == 0))
    goto LAB_00a939dc;
LAB_00a939ac:
    unaff_w23 = uVar15;
    bVar7 = false;
  }
  lVar13 = *(long *)(lVar12 + 0x70);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))((long *)(lVar12 + -0x28));
    if (bVar7) goto LAB_00a93680;
LAB_00a9368c:
    bVar7 = false;
  }
  else {
    if (sVar14 == 0) goto LAB_00a939f4;
    if (!bVar7) goto LAB_00a9368c;
LAB_00a93680:
    bVar7 = true;
  }
  lVar12 = *(long *)(lVar11 + 0x70);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
  }
  else if (sVar14 == 0) {
LAB_00a939f4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (!bVar7) goto LAB_00a936bc;
  goto LAB_00a936b8;
code_r0x00a93734:
  sVar14 = sVar4;
  if (sVar4 == 0) goto LAB_00a93680;
  goto LAB_00a93708;
}


