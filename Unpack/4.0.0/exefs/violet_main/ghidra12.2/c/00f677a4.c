/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f677a4; name: FUN_00f677a4
 */


void FUN_00f677a4(long *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  if (param_1 != param_2) {
    plVar18 = (long *)param_1[3];
    if (plVar18 == (long *)param_2[3]) {
      lVar14 = param_1[2];
      puVar17 = (undefined8 *)*param_1;
    }
    else {
      puVar17 = (undefined8 *)*param_1;
      puVar20 = (undefined8 *)param_1[1];
      if (puVar20 == puVar17) {
        puVar20 = puVar17;
      }
      else {
        do {
          puVar20 = puVar20 + -2;
          puVar16 = (undefined8 *)*puVar20;
          if (puVar16 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar16 + 3);
            do {
              sVar3 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)puVar16 + 0x1c);
              do {
                iVar11 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)puVar7;
                *(long *)puVar8 = lVar14;
                local_68 = *puVar16;
                FUN_00c44438(lVar14 + 0x8040,&local_68);
              }
            }
            else if (sVar3 == 0) goto LAB_00f679a8;
          }
        } while (puVar20 != puVar17);
        puVar20 = (undefined8 *)*param_1;
        plVar18 = (long *)param_1[3];
      }
      lVar14 = param_1[2];
      param_1[1] = (long)puVar17;
      uVar21 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar21 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,puVar20,lVar14 - (long)puVar20,8);
      }
      else {
        FUN_00c48fe8(plVar18,puVar20,lVar14 - (long)puVar20,8);
      }
      param_1[1] = 0;
      param_1[2] = 0;
      puVar17 = (undefined8 *)0x0;
      lVar14 = 0;
      *param_1 = 0;
      plVar18 = (long *)param_2[3];
    }
    param_1[3] = (long)plVar18;
    puVar7 = PTR_DAT_047d3918;
    lVar19 = *param_2;
    lVar4 = param_2[1];
    uVar21 = lVar4 - lVar19 >> 4;
    if ((ulong)(lVar14 - (long)puVar17 >> 4) < uVar21) {
      if (puVar17 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)param_1[1];
        if (puVar20 == puVar17) {
          puVar20 = puVar17;
        }
        else {
          do {
            puVar20 = puVar20 + -2;
            puVar16 = (undefined8 *)*puVar20;
            if (puVar16 != (undefined8 *)0x0) {
              psVar1 = (short *)(puVar16 + 3);
              do {
                sVar3 = *psVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar3 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar3 == 1) {
                piVar2 = (int *)((long)puVar16 + 0x1c);
                do {
                  iVar11 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar14 = *(long *)PTR_DAT_047d3910;
                  *(long *)puVar7 = lVar14;
                  local_68 = *puVar16;
                  FUN_00c44438(lVar14 + 0x8040,&local_68);
                }
              }
              else if (sVar3 == 0) goto LAB_00f679a8;
            }
          } while (puVar20 != puVar17);
          puVar20 = (undefined8 *)*param_1;
          lVar14 = param_1[2];
          plVar18 = (long *)param_1[3];
        }
        param_1[1] = (long)puVar17;
        uVar13 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,puVar20,lVar14 - (long)puVar20,8);
        }
        else {
          FUN_00c48fe8(plVar18,puVar20,lVar14 - (long)puVar20,8);
        }
        lVar14 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
      }
      if (uVar21 >> 0x3c != 0) {
LAB_00f67dd0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar21 <= (ulong)(lVar14 >> 3)) {
        uVar21 = lVar14 >> 3;
      }
      if (0x7fffffffffffffe < (ulong)(lVar14 >> 4)) {
        uVar21 = 0xfffffffffffffff;
      }
      if (uVar21 >> 0x3c != 0) goto LAB_00f67dd0;
      puVar17 = (undefined8 *)
                (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar21 << 4,8);
      if (puVar17 == (undefined8 *)0x0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
      param_1[2] = (long)(puVar17 + uVar21 * 2);
      *param_1 = (long)puVar17;
      param_1[1] = (long)puVar17;
      puVar7 = PTR_LAB_047d3900;
      for (; lVar19 != lVar4; lVar19 = lVar19 + 0x10) {
        lVar14 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar7,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          *puVar17 = 0;
          puVar17[1] = 0;
          FUN_00d0a71c(puVar17,lVar19);
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00f67e08;
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar14;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          *puVar17 = 0;
          puVar17[1] = 0;
          FUN_00d0a71c(puVar17,lVar19);
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        puVar17 = puVar17 + 2;
      }
    }
    else {
      lVar14 = lVar19 + (param_1[1] - (long)puVar17);
      uVar13 = param_1[1] - (long)puVar17 >> 4;
      lVar12 = lVar14;
      if (uVar21 <= uVar13) {
        lVar12 = lVar4;
      }
      if (lVar12 != lVar19) {
        FUN_00d0a71c(puVar17,lVar19);
        lVar19 = lVar19 + 0x10;
        puVar17 = puVar17 + 2;
        if (lVar19 != lVar12) {
          do {
            FUN_00d0a71c(puVar17,lVar19);
            lVar19 = lVar19 + 0x10;
            puVar17 = puVar17 + 2;
          } while (lVar12 != lVar19);
        }
      }
      puVar10 = PTR_LAB_047d3de8;
      puVar9 = PTR_DAT_047d3918;
      puVar8 = PTR_DAT_047d3910;
      puVar7 = PTR_LAB_047d3900;
      if (uVar13 < uVar21) {
        puVar17 = (undefined8 *)param_1[1];
        if (lVar12 != lVar4) {
          do {
            lVar19 = param_1[3];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(puVar7,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar12 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar12 == 0) {
              *puVar17 = 0;
              puVar17[1] = 0;
              FUN_00d0a71c(puVar17,lVar14);
            }
            else {
              if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00f67e08:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar19;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar17 = 0;
              puVar17[1] = 0;
              FUN_00d0a71c(puVar17,lVar14);
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
            }
            lVar14 = lVar14 + 0x10;
            puVar17 = puVar17 + 2;
          } while (lVar4 != lVar14);
        }
        param_1[1] = (long)puVar17;
        return;
      }
      puVar20 = (undefined8 *)param_1[1];
      if (puVar20 != puVar17) {
        pbVar15 = PTR_DAT_047d3908;
        do {
          puVar20 = puVar20 + -2;
          puVar16 = (undefined8 *)*puVar20;
          if (puVar16 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar16 + 3);
            do {
              sVar3 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)puVar16 + 0x1c);
              do {
                iVar11 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 != -1) {
                if (((*pbVar15 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(puVar10,puVar8,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)puVar8;
                *(long *)puVar9 = lVar14;
                local_68 = *puVar16;
                FUN_00c44438(lVar14 + 0x8040,&local_68);
                pbVar15 = PTR_DAT_047d3908;
              }
            }
            else if (sVar3 == 0) {
LAB_00f679a8:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        } while (puVar20 != puVar17);
      }
    }
    param_1[1] = (long)puVar17;
  }
  return;
}


