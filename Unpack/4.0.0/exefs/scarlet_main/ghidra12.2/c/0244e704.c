/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0244e704; name: FUN_0244e704
 */


bool FUN_0244e704(long param_1)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  bool bVar15;
  short sVar16;
  undefined8 *puVar17;
  long *local_48;
  
  lVar13 = *(long *)(param_1 + 0x18);
  if ((lVar13 != 0) && (sVar16 = *(short *)(lVar13 + 0x1a), sVar16 != 0)) {
    puVar17 = *(undefined8 **)(lVar13 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar9 != 0)) {
      uVar12 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar12;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar17 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar13 + 0x1a);
      while (puVar17 != (undefined8 *)PTR_DAT_047d6c50) {
        puVar17 = (undefined8 *)*puVar17;
        if (puVar17 == (undefined8 *)0x0) {
          return false;
        }
      }
LAB_0244e77c:
      sVar5 = *psVar1;
      if (sVar5 == sVar16) {
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_0244e7a0;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0244e7a0:
        bVar15 = false;
      }
      if (!bVar15) {
        sVar16 = sVar5;
        if (sVar5 == 0) {
          return false;
        }
        goto LAB_0244e77c;
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 == 0) {
        return false;
      }
      plVar14 = (long *)(lVar13 + -0x28);
      plVar2 = (long *)(lVar13 + 0x58);
      do {
        lVar11 = *plVar2;
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar15) {
          *plVar2 = lVar11;
          *(undefined8 *)(lVar13 + 0x60) = *(undefined8 *)(lVar13 + 0x60);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar11) {
        lVar11 = nn::os::GetCurrentThread();
LAB_0244e7e8:
        if (*plVar2 == 0 && *(long *)(lVar13 + 0x60) == 0) goto code_r0x0244e7f4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x68));
        do {
          if (*plVar2 != 0 || *(long *)(lVar13 + 0x60) != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x68));
              while (*plVar2 == 0 && *(long *)(lVar13 + 0x60) == 0) {
                cVar7 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar15) {
                  *plVar2 = lVar11;
                  *(undefined8 *)(lVar13 + 0x60) = 0;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_0244e7fc;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar15) {
            *plVar2 = lVar11;
            *(undefined8 *)(lVar13 + 0x60) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_0244e7fc:
        bVar15 = false;
        goto LAB_0244e800;
      }
      bVar15 = true;
LAB_0244e800:
      FUN_00c65924(plVar14);
      FUN_01cdace0(&local_48,plVar14);
      uVar8 = FUN_0244ea44(param_1,local_48);
      FUN_00f0893c(plVar14);
      if (local_48 != (long *)0x0) {
        lVar11 = local_48[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_48 + 0x50))();
        }
        else if (sVar16 == 0) goto LAB_0244e90c;
      }
      bVar6 = (uVar8 & 0xff) != 0 && 0xff < uVar8;
      if (!bVar15) {
        do {
          lVar11 = *plVar2;
          lVar10 = *(long *)(lVar13 + 0x60);
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar15) {
            *plVar2 = lVar11;
            *(long *)(lVar13 + 0x60) = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar13 + 0x60);
          if (lVar3 != lVar11 || lVar4 != lVar10) {
            bVar15 = false;
            ClearExclusiveLocal();
            goto LAB_0244e8d8;
          }
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar15) {
            *plVar2 = 0;
            *(long *)(lVar13 + 0x5c) = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar15 = true;
LAB_0244e8d8:
        if (!bVar15) {
          do {
            lVar11 = *plVar2;
            lVar10 = *(long *)(lVar13 + 0x60);
            if (lVar11 != lVar3 || lVar10 != lVar4) {
              bVar15 = false;
              ClearExclusiveLocal();
              goto joined_r0x0244ea00;
            }
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar15) {
              *plVar2 = 0;
              *(long *)(lVar13 + 0x5c) = lVar4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar15 = true;
joined_r0x0244ea00:
          if (!bVar15) {
            do {
              lVar3 = *plVar2;
              lVar4 = *(long *)(lVar13 + 0x60);
              if (lVar3 != lVar11 || lVar4 != lVar10) {
                bVar15 = false;
                ClearExclusiveLocal();
                lVar11 = lVar3;
                lVar10 = lVar4;
                goto joined_r0x0244ea00;
              }
              cVar7 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar15) {
                *plVar2 = 0;
                *(long *)(lVar13 + 0x5c) = lVar10;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar15 = true;
            lVar11 = lVar3;
            lVar10 = lVar4;
            goto joined_r0x0244ea00;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x68));
      }
      lVar13 = *(long *)(lVar13 + 8);
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))(plVar14);
        return bVar6;
      }
      if (sVar16 != 0) {
        return bVar6;
      }
LAB_0244e90c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return false;
code_r0x0244e7f4:
  cVar7 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar15) {
    *plVar2 = lVar11;
    *(undefined8 *)(lVar13 + 0x60) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0244e7fc;
  goto LAB_0244e7e8;
}


