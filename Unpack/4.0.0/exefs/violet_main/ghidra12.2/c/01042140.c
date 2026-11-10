/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01042140; name: FUN_01042140
 */


void FUN_01042140(long *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_047d3910;
  lVar5 = *param_2;
  lVar6 = param_2[1];
  do {
    if (lVar5 == lVar6) {
      return;
    }
    plVar15 = *(long **)(lVar5 + 0x20);
    plVar12 = *(long **)(lVar5 + 0x28);
    plVar13 = plVar15;
    if ((plVar15 != plVar12) && (*plVar15 != *param_1)) {
      do {
        plVar13 = plVar13 + 3;
        if (plVar12 == plVar13) {
          plVar13 = plVar12;
          goto LAB_0104223c;
        }
      } while (*plVar13 != *param_1);
    }
    if (plVar13 != plVar12) {
      if (plVar13 + 3 != plVar12) {
        plVar14 = plVar13;
        if (plVar13[3] != *param_1) {
          FUN_00f0ecf0(plVar13);
          *(int *)(plVar13 + 2) = (int)plVar13[5];
          plVar14 = plVar13 + 3;
        }
        if (plVar13 + 6 != plVar12) {
          if (plVar13[6] != *param_1) {
            FUN_00f0ecf0(plVar14);
            *(int *)(plVar14 + 2) = (int)plVar13[8];
            plVar14 = plVar14 + 3;
          }
          for (plVar13 = plVar13 + 9; plVar13 != plVar12; plVar13 = plVar13 + 3) {
            if (*plVar13 != *param_1) {
              FUN_00f0ecf0(plVar14,plVar13);
              *(int *)(plVar14 + 2) = (int)plVar13[2];
              plVar14 = plVar14 + 3;
            }
          }
        }
        plVar15 = *(long **)(lVar5 + 0x20);
        plVar12 = *(long **)(lVar5 + 0x28);
        plVar13 = plVar14;
      }
    }
LAB_0104223c:
    lVar11 = (long)plVar12 - (long)plVar13;
    if (lVar11 != 0) {
      plVar14 = (long *)((long)plVar15 + ((long)plVar13 - (long)plVar15));
      plVar3 = (long *)((long)plVar14 + lVar11);
      if (plVar3 != plVar12) {
        FUN_00f0ecf0(plVar14,plVar3);
        *(int *)(plVar15 + ((long)plVar13 - (long)plVar15 >> 3) + 2) = (int)plVar3[2];
        plVar14 = plVar14 + 3;
        if (plVar3 + 3 != plVar12) {
          do {
            FUN_00f0ecf0(plVar14,plVar14 + (lVar11 >> 3));
            *(int *)(plVar14 + 2) = (int)(plVar14 + (lVar11 >> 3))[2];
            plVar14 = plVar14 + 3;
          } while (plVar12 + -(lVar11 >> 3) != plVar14);
        }
        plVar12 = *(long **)(lVar5 + 0x28);
      }
      while (plVar12 != plVar14) {
        plVar12 = plVar12 + -3;
        puVar16 = (undefined8 *)*plVar12;
        if (puVar16 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar16 + 3);
          do {
            sVar4 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar4 == 1) {
            piVar2 = (int *)((long)puVar16 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)puVar9;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_68 = *puVar16;
              FUN_00c44438(lVar11 + 0x8040,&local_68);
            }
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
      *(long **)(lVar5 + 0x28) = plVar14;
    }
    lVar5 = lVar5 + 0x58;
  } while( true );
}


