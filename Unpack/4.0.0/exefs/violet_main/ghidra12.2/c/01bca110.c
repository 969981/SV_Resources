/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bca110; name: FUN_01bca110
 */


undefined1  [16] FUN_01bca110(long param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  short sVar12;
  uint uVar13;
  int *piVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  ulong local_b0;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int *local_48;
  int *local_40;
  
  lVar9 = *(long *)(param_1 + 0x40);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar12 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01bca180;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01bca180:
        bVar6 = false;
      }
      if (bVar6) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          plVar15 = (long *)(lVar9 + -0x28);
          FUN_01bc9ec8(&local_48,plVar15);
          FUN_00d996a8(&local_60,&local_48,param_2);
          local_78 = local_60;
          uStack_70 = uStack_58;
          local_68 = local_50;
          lVar9 = *(long *)(lVar9 + 0x70);
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar15 + 0x50))(plVar15);
          }
          else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          FUN_00d996a8(&local_48,&local_78,param_3);
          puVar7 = PTR_DAT_047d5608;
          if (local_40 == (int *)0x0) {
            fVar16 = 0.0;
            fVar17 = 0.0;
            local_b0 = 0;
          }
          else {
            fVar17 = 0.0;
            fVar16 = 0.0;
            if (6 < *(ushort *)((long)local_40 - (long)*local_40)) {
              uVar10 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
              fVar16 = 0.0;
              if (uVar10 != 0) {
                puVar8 = (uint *)((long)local_40 + uVar10);
                puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                local_60 = &DAT_03c705dc;
                puVar8 = bsearch(&local_60,puVar8 + 1,(ulong)*puVar8,4,
                                 (__compar_fn_t)PTR_LAB_047d5600);
                if (puVar8 == (uint *)0x0) {
                  fVar16 = 0.0;
                }
                else {
                  fVar16 = 0.0;
                  if (local_48 != (int *)0x0) {
                    piVar2 = (int *)((long)puVar8 + (ulong)*puVar8);
                    puVar11 = (ushort *)((long)piVar2 - (long)*piVar2);
                    uVar3 = *puVar11;
                    if (uVar3 < 7) {
                      piVar14 = (int *)0x0;
                    }
                    else {
                      piVar14 = (int *)0x0;
                      if ((ulong)puVar11[3] != 0) {
                        puVar8 = (uint *)((long)piVar2 + (ulong)puVar11[3]);
                        piVar14 = (int *)((long)puVar8 + (ulong)*puVar8);
                      }
                    }
                    if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
                       (uVar10 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar10 == 0
                       )) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = (long)*(char *)((long)piVar14 + uVar10) & 0xffffffff;
                    }
                    if (*(long *)(puVar7 + uVar10 * 8) == 4) {
                      fVar16 = 0.0;
                      if (uVar3 < 0xb) {
                        uVar13 = 0;
                      }
                      else {
                        uVar13 = 0;
                        if ((ulong)puVar11[5] != 0) {
                          uVar13 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar11[5]);
                        }
                        if ((0xe < uVar3) && ((ulong)puVar11[7] != 0)) {
                          fVar16 = (float)*(double *)((long)piVar2 + (ulong)puVar11[7]);
                        }
                      }
                      if ((uVar13 < *(ushort *)((long)local_48 - (long)*local_48)) &&
                         (uVar10 = (ulong)*(ushort *)
                                           (((long)local_48 - (long)*local_48) + (ulong)uVar13),
                         uVar10 != 0)) {
                        fVar16 = *(float *)((long)local_48 + uVar10);
                      }
                    }
                    else {
                      fVar16 = 0.0;
                      if (0xe < uVar3) {
                        fVar16 = 0.0;
                        if ((ulong)puVar11[7] != 0) {
                          fVar16 = (float)*(double *)((long)piVar2 + (ulong)puVar11[7]);
                        }
                      }
                    }
                  }
                }
              }
            }
            if (local_40 == (int *)0x0) {
              local_b0 = 0;
            }
            else {
              local_b0 = 0;
              fVar17 = 0.0;
              if (6 < *(ushort *)((long)local_40 - (long)*local_40)) {
                uVar10 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
                fVar17 = 0.0;
                if (uVar10 != 0) {
                  puVar8 = (uint *)((long)local_40 + uVar10);
                  puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                  local_60 = &DAT_03bf41a8;
                  puVar8 = bsearch(&local_60,puVar8 + 1,(ulong)*puVar8,4,
                                   (__compar_fn_t)PTR_LAB_047d5600);
                  if (puVar8 == (uint *)0x0) {
                    fVar17 = 0.0;
                  }
                  else {
                    fVar17 = 0.0;
                    if (local_48 != (int *)0x0) {
                      piVar2 = (int *)((long)puVar8 + (ulong)*puVar8);
                      puVar11 = (ushort *)((long)piVar2 - (long)*piVar2);
                      uVar3 = *puVar11;
                      if (uVar3 < 7) {
                        piVar14 = (int *)0x0;
                      }
                      else {
                        piVar14 = (int *)0x0;
                        if ((ulong)puVar11[3] != 0) {
                          puVar8 = (uint *)((long)piVar2 + (ulong)puVar11[3]);
                          piVar14 = (int *)((long)puVar8 + (ulong)*puVar8);
                        }
                      }
                      if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
                         (uVar10 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2],
                         uVar10 == 0)) {
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = (long)*(char *)((long)piVar14 + uVar10) & 0xffffffff;
                      }
                      if (*(long *)(puVar7 + uVar10 * 8) == 4) {
                        fVar17 = 0.0;
                        if (uVar3 < 0xb) {
                          uVar13 = 0;
                        }
                        else {
                          uVar13 = 0;
                          if ((ulong)puVar11[5] != 0) {
                            uVar13 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar11[5]);
                          }
                          if ((0xe < uVar3) && ((ulong)puVar11[7] != 0)) {
                            fVar17 = (float)*(double *)((long)piVar2 + (ulong)puVar11[7]);
                          }
                        }
                        if ((uVar13 < *(ushort *)((long)local_48 - (long)*local_48)) &&
                           (uVar10 = (ulong)*(ushort *)
                                             (((long)local_48 - (long)*local_48) + (ulong)uVar13),
                           uVar10 != 0)) {
                          fVar17 = *(float *)((long)local_48 + uVar10);
                        }
                      }
                      else {
                        fVar17 = 0.0;
                        if (0xe < uVar3) {
                          fVar17 = 0.0;
                          if ((ulong)puVar11[7] != 0) {
                            fVar17 = (float)*(double *)((long)piVar2 + (ulong)puVar11[7]);
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (((local_40 != (int *)0x0) && (6 < *(ushort *)((long)local_40 - (long)*local_40)))
                 && (uVar10 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3], uVar10 != 0)
                 ) {
                puVar8 = (uint *)((long)local_40 + uVar10);
                puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                local_60 = &DAT_03c9820a;
                puVar8 = bsearch(&local_60,puVar8 + 1,(ulong)*puVar8,4,
                                 (__compar_fn_t)PTR_LAB_047d5600);
                if ((puVar8 != (uint *)0x0) && (local_48 != (int *)0x0)) {
                  piVar2 = (int *)((long)puVar8 + (ulong)*puVar8);
                  puVar11 = (ushort *)((long)piVar2 - (long)*piVar2);
                  uVar3 = *puVar11;
                  if (uVar3 < 7) {
                    piVar14 = (int *)0x0;
                  }
                  else {
                    piVar14 = (int *)0x0;
                    if ((ulong)puVar11[3] != 0) {
                      puVar8 = (uint *)((long)piVar2 + (ulong)puVar11[3]);
                      piVar14 = (int *)((long)puVar8 + (ulong)*puVar8);
                    }
                  }
                  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
                     (uVar10 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar10 == 0))
                  {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = (long)*(char *)((long)piVar14 + uVar10) & 0xffffffff;
                  }
                  if (*(long *)(puVar7 + uVar10 * 8) == 4) {
                    local_b0 = 0;
                    if (uVar3 < 0xb) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = 0;
                      if ((ulong)puVar11[5] != 0) {
                        uVar13 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar11[5]);
                      }
                      if ((0xe < uVar3) && ((ulong)puVar11[7] != 0)) {
                        local_b0 = (ulong)(uint)(float)*(double *)((long)piVar2 + (ulong)puVar11[7])
                        ;
                      }
                    }
                    if ((uVar13 < *(ushort *)((long)local_48 - (long)*local_48)) &&
                       (uVar10 = (ulong)*(ushort *)
                                         (((long)local_48 - (long)*local_48) + (ulong)uVar13),
                       uVar10 != 0)) {
                      local_b0 = (ulong)*(uint *)((long)local_48 + uVar10);
                    }
                  }
                  else if ((0xe < uVar3) && ((ulong)puVar11[7] != 0)) {
                    local_b0 = (ulong)(uint)(float)*(double *)((long)piVar2 + (ulong)puVar11[7]);
                  }
                }
              }
            }
          }
          uVar18 = CONCAT44(fVar17,fVar16);
          goto LAB_01bca134;
        }
        break;
      }
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  uVar18 = 0;
  local_b0 = 0;
LAB_01bca134:
  auVar19._8_8_ = local_b0;
  auVar19._0_8_ = uVar18;
  return auVar19;
}


