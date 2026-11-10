/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01319038; name: FUN_01319038
 */


void FUN_01319038(long *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  bool bVar7;
  long *plVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  ushort *puVar13;
  ushort *puVar14;
  ulong uVar15;
  ushort *puVar16;
  long lVar17;
  uint uVar18;
  short sVar19;
  long lVar20;
  ushort *puVar21;
  long lVar22;
  undefined8 uVar23;
  uint local_4c;
  undefined1 auStack_48 [8];
  
  uVar5 = *(ushort *)(param_2 + 0x52);
  *(uint *)(param_1 + 0x13) = (uint)uVar5;
  local_4c = 0x200;
  if (0x1ff < uVar5) {
    local_4c = uVar5 + 1;
  }
  param_1[0x12] = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  plVar8 = (long *)param_1[10];
  if (plVar8 != (long *)0x0) {
    if (*(ushort *)(plVar8 + 10) < local_4c) {
      plVar3 = plVar8 + 5;
      param_1[10] = 0;
      do {
        lVar22 = *plVar3;
        iVar10 = (int)lVar22 + -1;
        cVar9 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar10;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar22 == 0) goto LAB_0131925c;
    }
    lVar22 = param_1[10];
    if (lVar22 != 0) goto LAB_01319094;
  }
  lVar22 = FUN_00ea5b00(auStack_48,param_1[1],&local_4c);
  if (lVar22 != 0) {
    piVar2 = (int *)(lVar22 + 0x28);
    do {
      iVar10 = *piVar2;
      cVar9 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar10 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar17 = *plVar3;
      iVar10 = (int)lVar17 + -1;
      cVar9 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar10;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar17 == 0) {
LAB_0131925c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[10] = lVar22;
  if (lVar22 == 0) {
    cVar9 = '\x01';
LAB_0131919c:
    *(char *)((long)param_1 + 0x81) = cVar9;
    *(undefined4 *)((long)param_1 + 0x8c) = 4;
    *(undefined1 *)((long)param_1 + 0x83) = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
    if ((char)param_1[0x10] != '\0') {
      uVar15 = 0;
      do {
        lVar22 = param_1[6] + uVar15 * 0x90;
        *(undefined8 *)(lVar22 + 0x30) = *(undefined8 *)(lVar22 + 0x20);
        *(undefined8 *)(lVar22 + 0x38) = *(undefined8 *)(lVar22 + 0x28);
        *(char *)(param_1[6] + uVar15 * 0x90 + 0x82) = (char)uVar15;
        lVar22 = param_1[6];
        lVar17 = *(long *)(lVar22 + uVar15 * 0x90 + 8);
        if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1a) != 0)) {
          psVar12 = (short *)(lVar17 + 0x1a);
          sVar19 = *(short *)(lVar17 + 0x1a);
          do {
            sVar6 = *psVar12;
            if (sVar6 == sVar19) {
              cVar9 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar12,0x10);
              if (bVar7) {
                *psVar12 = sVar19 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 != '\0') goto LAB_013193c4;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_013193c4:
              bVar7 = false;
            }
            if (bVar7) {
              lVar17 = *(long *)(lVar17 + 0x10);
              if (lVar17 != 0) {
                plVar8 = *(long **)(lVar22 + uVar15 * 0x90);
                lVar22 = param_1[6] + uVar15 * 0x90;
                uVar23 = *(undefined8 *)(lVar22 + 0x28);
                plVar8[6] = *(long *)(lVar22 + 0x20);
                *(int *)(plVar8 + 7) = (int)uVar23;
                *(byte *)(plVar8 + 0xb) = *(byte *)(plVar8 + 0xb) | 0x10;
                (**(code **)(*plVar8 + 0x120))(plVar8,&DAT_03d61fe2,0);
                *(undefined1 *)((long)plVar8 + 0x59) = 0xff;
                lVar22 = *(long *)(lVar17 + 8);
                psVar12 = (short *)(lVar22 + 0x1a);
                do {
                  sVar19 = *psVar12;
                  cVar9 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(psVar12,0x10);
                  if (bVar7) {
                    *psVar12 = sVar19 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (sVar19 == 1) {
                  *(undefined8 *)(lVar22 + 0x10) = 0;
                  (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))((long *)(lVar17 + -0x28));
                }
                else if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
              break;
            }
            sVar19 = sVar6;
          } while (sVar6 != 0);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(byte *)(param_1 + 0x10));
    }
    *(undefined2 *)((long)param_1 + 0x84) = 0;
    FUN_013194d0(param_1);
    (**(code **)(*param_1 + 0x68))(param_1);
    return;
  }
LAB_01319094:
  if (*(char *)(lVar22 + 0x54) != '\0') {
    uVar11 = (uint)*(ushort *)(lVar22 + 0x50);
    if (*(ushort *)(lVar22 + 0x50) == 0) {
      iVar10 = 0;
    }
    else {
      puVar16 = *(ushort **)(param_2 + 0x30);
      iVar10 = 0;
      puVar13 = *(ushort **)(lVar22 + 0x30);
      do {
        uVar5 = *puVar16;
        *puVar13 = uVar5;
        if (uVar5 == 0) goto LAB_01319330;
        if (uVar5 == 0x10) {
          puVar21 = puVar16 + 1;
          uVar5 = *puVar21;
          uVar1 = uVar5 + 2;
          bVar7 = uVar11 < uVar1;
          uVar11 = uVar11 - uVar1;
          if (bVar7 || uVar11 == 0) {
            *puVar13 = 0;
            goto LAB_01319330;
          }
          uVar18 = uVar5 + 1;
          uVar4 = uVar18 & 7;
          puVar14 = puVar13 + 1;
          *puVar14 = uVar5;
          if (uVar4 != 0) {
            lVar17 = 0;
            do {
              lVar20 = lVar17;
              uVar18 = uVar18 - 1;
              uVar4 = uVar4 - 1;
              *(undefined2 *)((long)puVar13 + lVar20 + 4) =
                   *(undefined2 *)((long)puVar16 + lVar20 + 4);
              lVar17 = lVar20 + 2;
            } while (uVar4 != 0);
            puVar13 = (ushort *)((long)puVar13 + lVar20 + 4);
            puVar16 = (ushort *)((long)puVar16 + lVar20 + 2);
            puVar21 = puVar16 + 1;
            puVar14 = puVar13;
          }
          if (6 < uVar5) {
            do {
              puVar14[1] = puVar16[2];
              puVar14[2] = puVar21[2];
              puVar14[3] = puVar21[3];
              puVar14[4] = puVar21[4];
              puVar14[5] = puVar21[5];
              puVar14[6] = puVar21[6];
              puVar16 = puVar21 + 7;
              puVar14[7] = *puVar16;
              puVar21 = puVar21 + 8;
              uVar18 = uVar18 - 8;
              puVar14 = puVar14 + 8;
              *puVar14 = *puVar21;
              puVar13 = puVar14;
            } while (uVar18 != 0);
          }
          puVar16 = puVar21;
          iVar10 = uVar1 + iVar10;
        }
        else {
          puVar13 = puVar13 + 1;
          puVar16 = puVar16 + 1;
          iVar10 = iVar10 + 1;
          uVar11 = uVar11 - 1;
        }
      } while (uVar11 != 0);
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        puVar13[-1] = 0;
      }
    }
LAB_01319330:
    *(short *)(lVar22 + 0x52) = (short)iVar10;
    lVar22 = param_1[10];
  }
  psVar12 = *(short **)(lVar22 + 0x30);
  cVar9 = '\x01';
  do {
    sVar19 = *psVar12;
    if (sVar19 == 0x10) {
      lVar22 = (ulong)(ushort)psVar12[1] + 2;
    }
    else {
      if (sVar19 == 0) goto LAB_0131919c;
      lVar22 = 1;
      if (sVar19 == 10) {
        cVar9 = cVar9 + '\x01';
      }
    }
    psVar12 = psVar12 + lVar22;
  } while( true );
}


