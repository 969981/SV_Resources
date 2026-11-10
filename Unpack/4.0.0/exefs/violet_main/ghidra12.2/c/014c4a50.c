/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c4a50; name: FUN_014c4a50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014c4a50(long *param_1,undefined1 *param_2,long param_3,long param_4)

{
  short *psVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  ushort uVar14;
  short sVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  uint *puVar20;
  byte *pbVar21;
  ushort *puVar22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long *plVar26;
  undefined1 *puVar27;
  long lVar28;
  int *piVar29;
  ulong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  bool local_d0;
  undefined1 auStack_cf [7];
  undefined4 local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  long *local_80 [2];
  long *local_68;
  
  if ((*(long *)(param_3 + 8) == 0) || ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) == 0)) {
    *param_1 = 0;
  }
  else {
    local_a8 = param_2;
    plVar9 = (long *)FUN_014c6214(&local_c0,param_2,&local_a8);
    if (plVar9 != (long *)0x0) {
      lVar28 = plVar9[6];
      if (*(long *)(lVar28 + 0x10) == 0) goto LAB_014c6194;
      psVar1 = (short *)(lVar28 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
        *(undefined8 *)(lVar28 + 8) = uVar12;
        *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
      }
      else if (sVar15 == -1) goto LAB_014c61bc;
    }
    if (((*(long *)(param_3 + 8) == 0) || ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) == 0)) ||
       ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) == 0)) {
      piVar29 = (int *)0x0;
    }
    else {
      puVar20 = *(uint **)(*(long *)(param_3 + 8) + 0x1f0);
      piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
    }
    uVar31 = 0x3e800000;
    if ((10 < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[5], uVar16 != 0)) {
      uVar31 = *(undefined4 *)((long)piVar29 + uVar16);
    }
    (**(code **)(*plVar9 + 0x158))(uVar31,plVar9);
    uVar31 = 0;
    if ((0xc < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[6], uVar16 != 0)) {
      uVar31 = *(undefined4 *)((long)piVar29 + uVar16);
    }
    (**(code **)(*plVar9 + 0x160))(uVar31,plVar9);
    if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 0xf) ||
       (uVar16 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[7], uVar16 == 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = *(char *)((long)piVar29 + uVar16) != '\0';
    }
    (**(code **)(*plVar9 + 0xf0))(plVar9,bVar8);
    uVar31 = 0;
    if ((0x10 < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[8], uVar16 != 0)) {
      uVar31 = *(undefined4 *)((long)piVar29 + uVar16);
    }
    (**(code **)(*plVar9 + 0x100))(uVar31,plVar9);
    if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 0x13) ||
       (uVar16 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[9], uVar16 == 0)) {
      uVar31 = 0x42b40000;
    }
    else {
      uVar31 = *(undefined4 *)((long)piVar29 + uVar16);
    }
    (**(code **)(*plVar9 + 0x110))(uVar31,plVar9);
    uVar31 = 0;
    if ((0x14 < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[10], uVar16 != 0)) {
      uVar31 = *(undefined4 *)((long)piVar29 + uVar16);
    }
    (**(code **)(*plVar9 + 0x120))(uVar31,plVar9);
    uVar31 = 0x3f800000;
    if ((0x16 < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[0xb], uVar16 != 0)) {
      uVar31 = *(undefined4 *)((long)piVar29 + uVar16);
    }
    (**(code **)(*plVar9 + 0x130))(uVar31,plVar9);
    lVar28 = (long)*piVar29;
    uVar14 = *(ushort *)((long)piVar29 - lVar28);
    if (4 < uVar14) {
      uVar16 = (ulong)((ushort *)((long)piVar29 - lVar28))[2];
      if (uVar16 != 0) {
        uVar30 = (ulong)*(uint *)((long)piVar29 + uVar16);
        local_a8 = param_2;
        plVar10 = (long *)FUN_014c69ec(&local_c0,param_2,&local_a8);
        if (plVar10 != (long *)0x0) {
          lVar28 = plVar10[6];
          if (*(long *)(lVar28 + 0x10) == 0) {
LAB_014c6194:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar28 + 0x1a);
          do {
            sVar15 = *psVar1;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
            *(undefined8 *)(lVar28 + 8) = uVar12;
            *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) {
LAB_014c61bc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        piVar2 = (int *)((long)((long)piVar29 + uVar16) + uVar30);
        uVar31 = 0;
        if ((8 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
           (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar17 != 0)) {
          uVar31 = *(undefined4 *)((long)piVar2 + uVar17);
        }
        (**(code **)(*plVar10 + 0x78))(uVar31,plVar10);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
           (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar17 == 0)) {
          bVar8 = false;
        }
        else {
          bVar8 = *(char *)((long)piVar2 + uVar17) != '\0';
        }
        (**(code **)(*plVar10 + 0x68))(plVar10,bVar8);
        local_80[0] = plVar10;
        (**(code **)(*plVar9 + 0xd0))(&local_68,plVar9,local_80);
        if (local_68 != (long *)0x0) {
          lVar28 = local_68[6];
          psVar1 = (short *)(lVar28 + 0x1a);
          do {
            sVar15 = *psVar1;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar15 == 1) {
            *(undefined8 *)(lVar28 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar15 == 0) goto LAB_014c6154;
        }
        if (local_80[0] != (long *)0x0) {
          lVar28 = local_80[0][6];
          psVar1 = (short *)(lVar28 + 0x1a);
          do {
            sVar15 = *psVar1;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar15 == 1) {
            *(undefined8 *)(lVar28 + 0x10) = 0;
            (**(code **)(*local_80[0] + 0x50))();
          }
          else if (sVar15 == 0) {
LAB_014c6154:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
           (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar17 != 0)) {
          uVar23 = (ulong)*(uint *)((long)piVar2 + uVar17);
          bVar5 = *(byte *)((long)((long)piVar2 + uVar17) + uVar23 + 4);
          puVar18 = &DAT_cbf29ce484222645;
          if (bVar5 != 0) {
            puVar18 = &DAT_cbf29ce484222645;
            pbVar21 = (byte *)((long)piVar29 + uVar23 + uVar17 + uVar30 + uVar16 + 5);
            do {
              puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar21;
              pbVar21 = pbVar21 + 1;
            } while (bVar5 != 0);
          }
          plVar10 = *(long **)(param_4 + 0x30);
          iVar13 = -1;
          if (plVar10 != *(long **)(param_4 + 0x38)) {
LAB_014c4e6c:
            puVar24 = *(undefined1 **)(*plVar10 + 0x40);
            if (puVar24 != (undefined1 *)0x0) {
              uVar16 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
              uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
              uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar16 < 2) {
                puVar25 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar18);
              }
              else {
                puVar25 = puVar18;
                if (puVar24 <= puVar18) {
                  uVar30 = 0;
                  if (puVar24 != (undefined1 *)0x0) {
                    uVar30 = (ulong)puVar18 / (ulong)puVar24;
                  }
                  puVar25 = puVar18 + -(uVar30 * (long)puVar24);
                }
              }
              plVar26 = *(long **)(*(long *)(*plVar10 + 0x38) + (long)puVar25 * 8);
              if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0))
              {
                if (uVar16 < 2) {
                  do {
                    if ((undefined1 *)plVar26[1] == puVar18) {
                      if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c4f60;
                    }
                    else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar24 + -1)) != puVar25)
                    break;
                    plVar26 = (long *)*plVar26;
                  } while (plVar26 != (long *)0x0);
                }
                else {
                  do {
                    puVar27 = (undefined1 *)plVar26[1];
                    if (puVar27 == puVar18) {
                      if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c4f60;
                    }
                    else {
                      if (puVar24 <= puVar27) {
                        uVar16 = 0;
                        if (puVar24 != (undefined1 *)0x0) {
                          uVar16 = (ulong)puVar27 / (ulong)puVar24;
                        }
                        puVar27 = puVar27 + -(uVar16 * (long)puVar24);
                      }
                      if (puVar27 != puVar25) break;
                    }
                    plVar26 = (long *)*plVar26;
                  } while (plVar26 != (long *)0x0);
                }
              }
            }
            goto LAB_014c4f68;
          }
LAB_014c4f74:
          (**(code **)(*plVar9 + 0xe8))(plVar9,iVar13);
        }
        lVar28 = (long)*piVar29;
        uVar14 = *(ushort *)((long)piVar29 - lVar28);
      }
      uVar7 = _DAT_03cabe60;
      uVar12 = DAT_03cab620;
      if ((6 < uVar14) && (uVar16 = (ulong)*(ushort *)((long)piVar29 + (6 - lVar28)), uVar16 != 0))
      {
        uVar30 = (ulong)*(uint *)((long)piVar29 + uVar16);
        puVar20 = (uint *)((long)((long)piVar29 + uVar16) + uVar30);
        if (*puVar20 != 0) {
          lVar28 = (long)piVar29 + uVar30 + uVar16 + 9;
          uVar16 = 0;
          do {
            uVar30 = (ulong)puVar20[uVar16 + 1];
            piVar29 = (int *)((long)(puVar20 + uVar16 + 1) + uVar30);
            if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar17 == 0)) {
              lVar19 = 0;
            }
            else {
              puVar3 = (uint *)((long)piVar29 + uVar17);
              lVar19 = (long)puVar3 + (ulong)*puVar3;
            }
            local_98 = strlen((char *)(lVar19 + 4));
            bVar5 = *(byte *)(lVar19 + 4);
            local_a8 = &DAT_cbf29ce484222645;
            if (bVar5 != 0) {
              local_a8 = &DAT_cbf29ce484222645;
              pbVar21 = (byte *)(lVar19 + 5);
              do {
                local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar21;
                pbVar21 = pbVar21 + 1;
              } while (bVar5 != 0);
            }
            local_90 = (long *)0x0;
            local_a0 = (char *)(lVar19 + 4);
            (**(code **)(*plVar9 + 0x80))(&local_88,plVar9,&local_a8);
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            (**(code **)(*local_88 + 0xa0))(&local_c0);
            lVar19 = (long)*piVar29;
            uVar14 = *(ushort *)((long)piVar29 - lVar19);
            if (10 < uVar14) {
              uVar17 = (ulong)((ushort *)((long)piVar29 - lVar19))[5];
              if (uVar17 != 0) {
                uVar23 = (ulong)*(uint *)((long)piVar29 + uVar17);
                bVar5 = *(byte *)((long)((long)piVar29 + uVar17) + uVar23 + 4);
                puVar18 = &DAT_cbf29ce484222645;
                if (bVar5 != 0) {
                  puVar18 = &DAT_cbf29ce484222645;
                  pbVar21 = (byte *)(lVar28 + uVar23 + uVar17 + uVar30);
                  do {
                    puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
                    bVar5 = *pbVar21;
                    pbVar21 = pbVar21 + 1;
                  } while (bVar5 != 0);
                }
                plVar10 = *(long **)(param_4 + 0x30);
LAB_014c512c:
                if (plVar10 != *(long **)(param_4 + 0x38)) {
                  puVar24 = *(undefined1 **)(*plVar10 + 0x40);
                  if (puVar24 != (undefined1 *)0x0) {
                    uVar17 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
                    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
                    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38;
                    if (uVar17 < 2) {
                      puVar25 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar18);
                    }
                    else {
                      puVar25 = puVar18;
                      if (puVar24 <= puVar18) {
                        uVar23 = 0;
                        if (puVar24 != (undefined1 *)0x0) {
                          uVar23 = (ulong)puVar18 / (ulong)puVar24;
                        }
                        puVar25 = puVar18 + -(uVar23 * (long)puVar24);
                      }
                    }
                    plVar26 = *(long **)(*(long *)(*plVar10 + 0x38) + (long)puVar25 * 8);
                    if ((plVar26 != (long *)0x0) &&
                       (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
                      if (uVar17 < 2) {
                        do {
                          if ((undefined1 *)plVar26[1] == puVar18) {
                            if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c5228;
                          }
                          else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar24 + -1)) !=
                                   puVar25) break;
                          plVar26 = (long *)*plVar26;
                        } while (plVar26 != (long *)0x0);
                      }
                      else {
                        do {
                          puVar27 = (undefined1 *)plVar26[1];
                          if (puVar27 == puVar18) {
                            if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c5228;
                          }
                          else {
                            if (puVar24 <= puVar27) {
                              uVar17 = 0;
                              if (puVar24 != (undefined1 *)0x0) {
                                uVar17 = (ulong)puVar27 / (ulong)puVar24;
                              }
                              puVar27 = puVar27 + -(uVar17 * (long)puVar24);
                            }
                            if (puVar27 != puVar25) break;
                          }
                          plVar26 = (long *)*plVar26;
                        } while (plVar26 != (long *)0x0);
                      }
                    }
                  }
                  goto LAB_014c5230;
                }
                sVar15 = -1;
LAB_014c523c:
                local_c0 = (int)sVar15;
                lVar19 = (long)*piVar29;
                uVar14 = *(ushort *)((long)piVar29 - lVar19);
              }
              lVar19 = -lVar19;
              if (0xc < uVar14) {
                uVar17 = (ulong)*(ushort *)((long)piVar29 + lVar19 + 0xc);
                if (uVar17 != 0) {
                  uVar23 = (ulong)*(uint *)((long)piVar29 + uVar17);
                  bVar5 = *(byte *)((long)((long)piVar29 + uVar17) + uVar23 + 4);
                  puVar18 = &DAT_cbf29ce484222645;
                  if (bVar5 != 0) {
                    lVar19 = uVar30 + uVar17 + uVar23;
                    puVar18 = &DAT_cbf29ce484222645;
                    do {
                      puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
                      bVar5 = *(byte *)(lVar28 + lVar19);
                      lVar19 = lVar19 + 1;
                    } while (bVar5 != 0);
                  }
                  plVar10 = *(long **)(param_4 + 0x30);
LAB_014c52a8:
                  if (plVar10 != *(long **)(param_4 + 0x38)) {
                    puVar24 = *(undefined1 **)(*plVar10 + 0x40);
                    if (puVar24 != (undefined1 *)0x0) {
                      uVar17 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
                      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
                      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38;
                      if (uVar17 < 2) {
                        puVar25 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar18);
                      }
                      else {
                        puVar25 = puVar18;
                        if (puVar24 <= puVar18) {
                          uVar23 = 0;
                          if (puVar24 != (undefined1 *)0x0) {
                            uVar23 = (ulong)puVar18 / (ulong)puVar24;
                          }
                          puVar25 = puVar18 + -(uVar23 * (long)puVar24);
                        }
                      }
                      plVar26 = *(long **)(*(long *)(*plVar10 + 0x38) + (long)puVar25 * 8);
                      if ((plVar26 != (long *)0x0) &&
                         (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
                        if (uVar17 < 2) {
                          do {
                            if ((undefined1 *)plVar26[1] == puVar18) {
                              if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c53a4;
                            }
                            else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar24 + -1)) !=
                                     puVar25) break;
                            plVar26 = (long *)*plVar26;
                          } while (plVar26 != (long *)0x0);
                        }
                        else {
                          do {
                            puVar27 = (undefined1 *)plVar26[1];
                            if (puVar27 == puVar18) {
                              if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c53a4;
                            }
                            else {
                              if (puVar24 <= puVar27) {
                                uVar17 = 0;
                                if (puVar24 != (undefined1 *)0x0) {
                                  uVar17 = (ulong)puVar27 / (ulong)puVar24;
                                }
                                puVar27 = puVar27 + -(uVar17 * (long)puVar24);
                              }
                              if (puVar27 != puVar25) break;
                            }
                            plVar26 = (long *)*plVar26;
                          } while (plVar26 != (long *)0x0);
                        }
                      }
                    }
                    goto LAB_014c53ac;
                  }
                  sVar15 = -1;
LAB_014c53b8:
                  local_bc = (int)sVar15;
                  lVar19 = -(long)*piVar29;
                  uVar14 = *(ushort *)((long)piVar29 - (long)*piVar29);
                }
                if (0xe < uVar14) {
                  uVar17 = (ulong)*(ushort *)((long)piVar29 + lVar19 + 0xe);
                  if (uVar17 != 0) {
                    uVar23 = (ulong)*(uint *)((long)piVar29 + uVar17);
                    bVar5 = *(byte *)((long)((long)piVar29 + uVar17) + uVar23 + 4);
                    puVar18 = &DAT_cbf29ce484222645;
                    if (bVar5 != 0) {
                      lVar19 = uVar30 + uVar17 + uVar23;
                      puVar18 = &DAT_cbf29ce484222645;
                      do {
                        puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
                        bVar5 = *(byte *)(lVar28 + lVar19);
                        lVar19 = lVar19 + 1;
                      } while (bVar5 != 0);
                    }
                    plVar10 = *(long **)(param_4 + 0x30);
LAB_014c5424:
                    if (plVar10 != *(long **)(param_4 + 0x38)) {
                      puVar24 = *(undefined1 **)(*plVar10 + 0x40);
                      if (puVar24 != (undefined1 *)0x0) {
                        uVar17 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
                        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
                        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                 0x38;
                        if (uVar17 < 2) {
                          puVar25 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar18);
                        }
                        else {
                          puVar25 = puVar18;
                          if (puVar24 <= puVar18) {
                            uVar23 = 0;
                            if (puVar24 != (undefined1 *)0x0) {
                              uVar23 = (ulong)puVar18 / (ulong)puVar24;
                            }
                            puVar25 = puVar18 + -(uVar23 * (long)puVar24);
                          }
                        }
                        plVar26 = *(long **)(*(long *)(*plVar10 + 0x38) + (long)puVar25 * 8);
                        if ((plVar26 != (long *)0x0) &&
                           (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
                          if (uVar17 < 2) {
                            do {
                              if ((undefined1 *)plVar26[1] == puVar18) {
                                if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c5520;
                              }
                              else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar24 + -1)) !=
                                       puVar25) break;
                              plVar26 = (long *)*plVar26;
                            } while (plVar26 != (long *)0x0);
                          }
                          else {
                            do {
                              puVar27 = (undefined1 *)plVar26[1];
                              if (puVar27 == puVar18) {
                                if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c5520;
                              }
                              else {
                                if (puVar24 <= puVar27) {
                                  uVar17 = 0;
                                  if (puVar24 != (undefined1 *)0x0) {
                                    uVar17 = (ulong)puVar27 / (ulong)puVar24;
                                  }
                                  puVar27 = puVar27 + -(uVar17 * (long)puVar24);
                                }
                                if (puVar27 != puVar25) break;
                              }
                              plVar26 = (long *)*plVar26;
                            } while (plVar26 != (long *)0x0);
                          }
                        }
                      }
                      goto LAB_014c5528;
                    }
                    sVar15 = -1;
LAB_014c5534:
                    local_b8 = (int)sVar15;
                    lVar19 = -(long)*piVar29;
                    uVar14 = *(ushort *)((long)piVar29 - (long)*piVar29);
                  }
                  if (0x10 < uVar14) {
                    uVar17 = (ulong)*(ushort *)((long)piVar29 + lVar19 + 0x10);
                    if (uVar17 != 0) {
                      uVar23 = (ulong)*(uint *)((long)piVar29 + uVar17);
                      bVar5 = *(byte *)((long)((long)piVar29 + uVar17) + uVar23 + 4);
                      puVar18 = &DAT_cbf29ce484222645;
                      if (bVar5 != 0) {
                        lVar19 = uVar30 + uVar17 + uVar23;
                        puVar18 = &DAT_cbf29ce484222645;
                        do {
                          puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
                          bVar5 = *(byte *)(lVar28 + lVar19);
                          lVar19 = lVar19 + 1;
                        } while (bVar5 != 0);
                      }
                      plVar10 = *(long **)(param_4 + 0x30);
LAB_014c55a0:
                      if (plVar10 != *(long **)(param_4 + 0x38)) {
                        puVar24 = *(undefined1 **)(*plVar10 + 0x40);
                        if (puVar24 != (undefined1 *)0x0) {
                          uVar17 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
                          uVar17 = (uVar17 & 0x3333333333333333) +
                                   (uVar17 >> 2 & 0x3333333333333333);
                          uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38;
                          if (uVar17 < 2) {
                            puVar25 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar18);
                          }
                          else {
                            puVar25 = puVar18;
                            if (puVar24 <= puVar18) {
                              uVar23 = 0;
                              if (puVar24 != (undefined1 *)0x0) {
                                uVar23 = (ulong)puVar18 / (ulong)puVar24;
                              }
                              puVar25 = puVar18 + -(uVar23 * (long)puVar24);
                            }
                          }
                          plVar26 = *(long **)(*(long *)(*plVar10 + 0x38) + (long)puVar25 * 8);
                          if ((plVar26 != (long *)0x0) &&
                             (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
                            if (uVar17 < 2) {
                              do {
                                if ((undefined1 *)plVar26[1] == puVar18) {
                                  if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c569c;
                                }
                                else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar24 + -1))
                                         != puVar25) break;
                                plVar26 = (long *)*plVar26;
                              } while (plVar26 != (long *)0x0);
                            }
                            else {
                              do {
                                puVar27 = (undefined1 *)plVar26[1];
                                if (puVar27 == puVar18) {
                                  if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c569c;
                                }
                                else {
                                  if (puVar24 <= puVar27) {
                                    uVar17 = 0;
                                    if (puVar24 != (undefined1 *)0x0) {
                                      uVar17 = (ulong)puVar27 / (ulong)puVar24;
                                    }
                                    puVar27 = puVar27 + -(uVar17 * (long)puVar24);
                                  }
                                  if (puVar27 != puVar25) break;
                                }
                                plVar26 = (long *)*plVar26;
                              } while (plVar26 != (long *)0x0);
                            }
                          }
                        }
                        goto LAB_014c56a4;
                      }
                      sVar15 = -1;
LAB_014c56b0:
                      local_b4 = (int)sVar15;
                      lVar19 = -(long)*piVar29;
                      uVar14 = *(ushort *)((long)piVar29 - (long)*piVar29);
                    }
                    if ((0x16 < uVar14) &&
                       (uVar17 = (ulong)*(ushort *)((long)piVar29 + lVar19 + 0x16), uVar17 != 0)) {
                      uVar23 = (ulong)*(uint *)((long)piVar29 + uVar17);
                      bVar5 = *(byte *)((long)((long)piVar29 + uVar17) + uVar23 + 4);
                      puVar18 = &DAT_cbf29ce484222645;
                      if (bVar5 != 0) {
                        lVar19 = uVar30 + uVar17 + uVar23;
                        puVar18 = &DAT_cbf29ce484222645;
                        do {
                          puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
                          bVar5 = *(byte *)(lVar28 + lVar19);
                          lVar19 = lVar19 + 1;
                        } while (bVar5 != 0);
                      }
                      plVar10 = *(long **)(param_4 + 0x30);
LAB_014c571c:
                      if (plVar10 != *(long **)(param_4 + 0x38)) {
                        puVar24 = *(undefined1 **)(*plVar10 + 0x40);
                        if (puVar24 != (undefined1 *)0x0) {
                          uVar30 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
                          uVar30 = (uVar30 & 0x3333333333333333) +
                                   (uVar30 >> 2 & 0x3333333333333333);
                          uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                   >> 0x38;
                          if (uVar30 < 2) {
                            puVar25 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar18);
                          }
                          else {
                            puVar25 = puVar18;
                            if (puVar24 <= puVar18) {
                              uVar17 = 0;
                              if (puVar24 != (undefined1 *)0x0) {
                                uVar17 = (ulong)puVar18 / (ulong)puVar24;
                              }
                              puVar25 = puVar18 + -(uVar17 * (long)puVar24);
                            }
                          }
                          plVar26 = *(long **)(*(long *)(*plVar10 + 0x38) + (long)puVar25 * 8);
                          if ((plVar26 != (long *)0x0) &&
                             (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
                            if (uVar30 < 2) {
                              do {
                                if ((undefined1 *)plVar26[1] == puVar18) {
                                  if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c5818;
                                }
                                else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar24 + -1))
                                         != puVar25) break;
                                plVar26 = (long *)*plVar26;
                              } while (plVar26 != (long *)0x0);
                            }
                            else {
                              do {
                                puVar27 = (undefined1 *)plVar26[1];
                                if (puVar27 == puVar18) {
                                  if ((undefined1 *)plVar26[2] == puVar18) goto LAB_014c5818;
                                }
                                else {
                                  if (puVar24 <= puVar27) {
                                    uVar30 = 0;
                                    if (puVar24 != (undefined1 *)0x0) {
                                      uVar30 = (ulong)puVar27 / (ulong)puVar24;
                                    }
                                    puVar27 = puVar27 + -(uVar30 * (long)puVar24);
                                  }
                                  if (puVar27 != puVar25) break;
                                }
                                plVar26 = (long *)*plVar26;
                              } while (plVar26 != (long *)0x0);
                            }
                          }
                        }
                        goto LAB_014c5820;
                      }
                      sVar15 = -1;
LAB_014c582c:
                      local_b0 = (int)sVar15;
                    }
                  }
                }
              }
            }
            (**(code **)(*local_88 + 0x98))(local_88,&local_c0);
            puVar22 = (ushort *)((long)piVar29 - (long)*piVar29);
            lVar19 = -(long)*piVar29;
            uVar14 = *puVar22;
            if (uVar14 < 0x15) {
LAB_014c5c18:
              if (0x12 < uVar14) goto LAB_014c5c20;
            }
            else {
              uVar30 = (ulong)puVar22[10];
              if (uVar30 != 0) {
                puVar3 = (uint *)((long)piVar29 + uVar30);
                uVar4 = *puVar3;
                local_a8 = param_2;
                plVar10 = (long *)FUN_014c6344(&local_d0,param_2,&local_a8);
                if (plVar10 != (long *)0x0) {
                  lVar19 = plVar10[6];
                  if (*(long *)(lVar19 + 0x10) == 0) goto LAB_014c6194;
                  psVar1 = (short *)(lVar19 + 0x1a);
                  do {
                    sVar15 = *psVar1;
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar8) {
                      *psVar1 = sVar15 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar15 == 0) {
                    uVar11 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
                    *(undefined8 *)(lVar19 + 8) = uVar11;
                    *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
                  }
                  else if (sVar15 == -1) goto LAB_014c61bc;
                }
                piVar2 = (int *)((long)puVar3 + (ulong)uVar4);
                if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
                   (uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar30 == 0)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = *(char *)((long)piVar2 + uVar30) != '\0';
                }
                (**(code **)(*plVar10 + 0x68))(plVar10,bVar8);
                uVar31 = 0;
                if (6 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar2 + uVar30);
                  }
                }
                (**(code **)(*plVar10 + 0x78))(uVar31,plVar10);
                uVar31 = 0;
                if (0x1c < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xe];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar2 + uVar30);
                  }
                }
                (**(code **)(*plVar10 + 0xd0))(uVar31,plVar10);
                uVar11 = 0;
                if (0x1a < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xd];
                  uVar11 = 0;
                  if (uVar30 != 0) {
                    uVar11 = *(undefined8 *)((long)piVar2 + uVar30);
                  }
                }
                (**(code **)(*plVar10 + 0xc0))(uVar11,plVar10);
                uVar11 = (**(code **)(*plVar10 + 0xe8))(plVar10);
                if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x15) {
                  bVar8 = false;
                }
                else {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10];
                  bVar8 = false;
                  if (uVar30 != 0) {
                    bVar8 = *(char *)((long)piVar2 + uVar30) != '\0';
                  }
                }
                _local_d0 = CONCAT71(SUB87((ulong)uVar11 >> 8,0),bVar8);
                uVar31 = 0;
                if (0x16 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar2 + uVar30);
                  }
                }
                _local_d0 = CONCAT44(uVar31,_local_d0);
                local_c8 = 0;
                if (0x18 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xc];
                  local_c8 = 0;
                  if (uVar30 != 0) {
                    local_c8 = *(undefined4 *)((long)piVar2 + uVar30);
                  }
                }
                (**(code **)(*plVar10 + 0xe0))(plVar10,&local_d0);
                (**(code **)(*plVar10 + 0xf8))(&local_a8,plVar10);
                if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
                  bVar8 = false;
                }
                else {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
                  bVar8 = false;
                  if (uVar30 != 0) {
                    bVar8 = *(char *)((long)piVar2 + uVar30) != '\0';
                  }
                }
                local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,bVar8);
                if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) {
                  uVar31 = 0;
                }
                else {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar2 + uVar30);
                  }
                }
                uVar32 = 0;
                if (10 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
                  uVar32 = 0;
                  if (uVar30 != 0) {
                    uVar32 = *(undefined4 *)((long)piVar2 + uVar30);
                  }
                }
                uVar33 = 0;
                if (0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
                  uVar33 = 0;
                  if (uVar30 != 0) {
                    uVar33 = *(undefined4 *)((long)piVar2 + uVar30);
                  }
                }
                local_98 = CONCAT44(uVar31,uVar33);
                uVar31 = 0;
                if (0xe < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar2 + uVar30);
                  }
                }
                local_a8 = (undefined1 *)CONCAT44(uVar31,(undefined4)local_a8);
                uVar31 = 0;
                if (0x10 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar2 + uVar30);
                  }
                }
                local_a0 = (char *)CONCAT44(uVar32,uVar31);
                (**(code **)(*plVar10 + 0xf0))(plVar10,&local_a8);
                local_e0 = plVar10;
                (**(code **)(*local_88 + 0x78))(&local_d8,local_88,&local_e0);
                if (local_d8 != (long *)0x0) {
                  lVar19 = local_d8[6];
                  psVar1 = (short *)(lVar19 + 0x1a);
                  do {
                    sVar15 = *psVar1;
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar8) {
                      *psVar1 = sVar15 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar15 == 1) {
                    *(undefined8 *)(lVar19 + 0x10) = 0;
                    (**(code **)(*local_d8 + 0x50))();
                  }
                  else if (sVar15 == 0) goto LAB_014c6154;
                }
                if (local_e0 != (long *)0x0) {
                  lVar19 = local_e0[6];
                  psVar1 = (short *)(lVar19 + 0x1a);
                  do {
                    sVar15 = *psVar1;
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar8) {
                      *psVar1 = sVar15 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar15 == 1) {
                    *(undefined8 *)(lVar19 + 0x10) = 0;
                    (**(code **)(*local_e0 + 0x50))();
                  }
                  else if (sVar15 == 0) goto LAB_014c6154;
                }
                lVar19 = -(long)*piVar29;
                uVar14 = *(ushort *)((long)piVar29 - (long)*piVar29);
                goto LAB_014c5c18;
              }
LAB_014c5c20:
              uVar30 = (ulong)*(ushort *)((long)piVar29 + lVar19 + 0x12);
              if (uVar30 != 0) {
                puVar3 = (uint *)((long)piVar29 + uVar30);
                uVar4 = *puVar3;
                local_a8 = param_2;
                plVar10 = (long *)FUN_014c65b8(&local_d0,param_2,&local_a8);
                if (plVar10 != (long *)0x0) {
                  lVar19 = plVar10[6];
                  if (*(long *)(lVar19 + 0x10) == 0) goto LAB_014c6194;
                  psVar1 = (short *)(lVar19 + 0x1a);
                  do {
                    sVar15 = *psVar1;
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar8) {
                      *psVar1 = sVar15 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar15 == 0) {
                    uVar11 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
                    *(undefined8 *)(lVar19 + 8) = uVar11;
                    *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
                  }
                  else if (sVar15 == -1) goto LAB_014c61bc;
                }
                piVar29 = (int *)((long)puVar3 + (ulong)uVar4);
                if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
                   (uVar30 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar30 == 0)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = *(char *)((long)piVar29 + uVar30) != '\0';
                }
                (**(code **)(*plVar10 + 0x68))(plVar10,bVar8);
                uVar31 = 0;
                if (6 < *(ushort *)((long)piVar29 - (long)*piVar29)) {
                  uVar30 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[3];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar29 + uVar30);
                  }
                }
                (**(code **)(*plVar10 + 0x78))(uVar31,plVar10);
                uVar11 = uVar12;
                if ((10 < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
                   (uVar30 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[5], uVar30 != 0)) {
                  uVar11 = *(undefined8 *)((long)piVar29 + uVar30);
                }
                (**(code **)(*plVar10 + 0xd0))(uVar11,plVar10);
                uVar11 = uVar7;
                if ((0xc < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
                   (uVar30 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[6], uVar30 != 0)) {
                  uVar11 = *(undefined8 *)((long)piVar29 + uVar30);
                }
                (**(code **)(*plVar10 + 0xc0))(uVar11,plVar10);
                (**(code **)(*plVar10 + 0xe8))(&local_a8,plVar10);
                if (*(ushort *)((long)piVar29 - (long)*piVar29) < 9) {
                  bVar8 = false;
                }
                else {
                  uVar30 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[4];
                  bVar8 = false;
                  if (uVar30 != 0) {
                    bVar8 = *(char *)((long)piVar29 + uVar30) != '\0';
                  }
                }
                local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,bVar8);
                uVar31 = 0;
                if (0xe < *(ushort *)((long)piVar29 - (long)*piVar29)) {
                  uVar30 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[7];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar29 + uVar30);
                  }
                }
                local_a8 = (undefined1 *)CONCAT44(uVar31,(undefined4)local_a8);
                uVar31 = 0;
                if (0x10 < *(ushort *)((long)piVar29 - (long)*piVar29)) {
                  uVar30 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[8];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar29 + uVar30);
                  }
                }
                uVar32 = 0;
                if (0x12 < *(ushort *)((long)piVar29 - (long)*piVar29)) {
                  uVar30 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[9];
                  uVar32 = 0;
                  if (uVar30 != 0) {
                    uVar32 = *(undefined4 *)((long)piVar29 + uVar30);
                  }
                }
                local_a0 = (char *)CONCAT44(uVar32,uVar31);
                uVar31 = 0;
                if (0x14 < *(ushort *)((long)piVar29 - (long)*piVar29)) {
                  uVar30 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[10];
                  uVar31 = 0;
                  if (uVar30 != 0) {
                    uVar31 = *(undefined4 *)((long)piVar29 + uVar30);
                  }
                }
                local_98 = CONCAT44(local_98._4_4_,uVar31);
                (**(code **)(*plVar10 + 0xe0))(plVar10,&local_a8);
                local_f0 = plVar10;
                (**(code **)(*local_88 + 0x88))(&local_e8,local_88,&local_f0);
                if (local_e8 != (long *)0x0) {
                  lVar19 = local_e8[6];
                  psVar1 = (short *)(lVar19 + 0x1a);
                  do {
                    sVar15 = *psVar1;
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar8) {
                      *psVar1 = sVar15 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar15 == 1) {
                    *(undefined8 *)(lVar19 + 0x10) = 0;
                    (**(code **)(*local_e8 + 0x50))();
                  }
                  else if (sVar15 == 0) goto LAB_014c6154;
                }
                if (local_f0 != (long *)0x0) {
                  lVar19 = local_f0[6];
                  psVar1 = (short *)(lVar19 + 0x1a);
                  do {
                    sVar15 = *psVar1;
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar8) {
                      *psVar1 = sVar15 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar15 == 1) {
                    *(undefined8 *)(lVar19 + 0x10) = 0;
                    (**(code **)(*local_f0 + 0x50))();
                  }
                  else if (sVar15 == 0) goto LAB_014c6154;
                }
              }
            }
            if (local_88 != (long *)0x0) {
              lVar19 = local_88[6];
              psVar1 = (short *)(lVar19 + 0x1a);
              do {
                sVar15 = *psVar1;
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar8) {
                  *psVar1 = sVar15 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar15 == 1) {
                *(undefined8 *)(lVar19 + 0x10) = 0;
                (**(code **)(*local_88 + 0x50))();
              }
              else if (sVar15 == 0) goto LAB_014c6154;
            }
            uVar16 = uVar16 + 1;
            lVar28 = lVar28 + 4;
          } while (uVar16 < *puVar20);
        }
      }
    }
    *param_1 = (long)plVar9;
  }
  return;
LAB_014c4f60:
  if (-1 < (short)plVar26[6]) {
    iVar13 = (int)(short)(*(short *)((long)plVar10 + 10) + (short)plVar26[6]);
    goto LAB_014c4f74;
  }
LAB_014c4f68:
  plVar10 = plVar10 + 2;
  if (plVar10 == *(long **)(param_4 + 0x38)) goto LAB_014c4f74;
  goto LAB_014c4e6c;
LAB_014c5228:
  if (-1 < (short)plVar26[6]) {
    sVar15 = *(short *)((long)plVar10 + 10) + (short)plVar26[6];
    goto LAB_014c523c;
  }
LAB_014c5230:
  plVar10 = plVar10 + 2;
  goto LAB_014c512c;
LAB_014c53a4:
  if (-1 < (short)plVar26[6]) {
    sVar15 = *(short *)((long)plVar10 + 10) + (short)plVar26[6];
    goto LAB_014c53b8;
  }
LAB_014c53ac:
  plVar10 = plVar10 + 2;
  goto LAB_014c52a8;
LAB_014c5520:
  if (-1 < (short)plVar26[6]) {
    sVar15 = *(short *)((long)plVar10 + 10) + (short)plVar26[6];
    goto LAB_014c5534;
  }
LAB_014c5528:
  plVar10 = plVar10 + 2;
  goto LAB_014c5424;
LAB_014c569c:
  if (-1 < (short)plVar26[6]) {
    sVar15 = *(short *)((long)plVar10 + 10) + (short)plVar26[6];
    goto LAB_014c56b0;
  }
LAB_014c56a4:
  plVar10 = plVar10 + 2;
  goto LAB_014c55a0;
LAB_014c5818:
  if (-1 < (short)plVar26[6]) {
    sVar15 = *(short *)((long)plVar10 + 10) + (short)plVar26[6];
    goto LAB_014c582c;
  }
LAB_014c5820:
  plVar10 = plVar10 + 2;
  goto LAB_014c571c;
}


