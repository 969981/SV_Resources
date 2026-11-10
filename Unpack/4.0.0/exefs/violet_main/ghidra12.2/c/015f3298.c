/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f3298; name: FUN_015f3298
 */


void FUN_015f3298(long *param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  char *__s;
  short *psVar4;
  int *piVar5;
  uint *puVar6;
  short sVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  size_t sVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ushort *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long *plVar22;
  undefined1 *puVar23;
  ulong uVar24;
  ulong uVar25;
  byte *pbVar26;
  ulong uVar27;
  int *piVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
  undefined1 *puVar31;
  undefined1 *unaff_x27;
  float fVar32;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  long *local_a0 [4];
  long *local_80;
  long local_70 [2];
  
  if ((param_3 == 0) && ((param_2 >> 0x20 & 0xff) != 0)) {
    lVar18 = *param_1;
    if ((*(long *)(lVar18 + 0x2f0) != 0) &&
       (((*(byte *)(*(long *)(lVar18 + 0x2f0) + 0x1e8) & 1) != 0 &&
        (lVar12 = (**(code **)(**(long **)(lVar18 + 0x2f0) + 0x70))(), lVar12 != 0)))) {
      if ((*(long *)(lVar18 + 0x2f0) == 0) ||
         ((*(byte *)(*(long *)(lVar18 + 0x2f0) + 0x1e8) & 1) == 0)) {
        piVar28 = (int *)0x0;
      }
      else {
        puVar13 = (uint *)(**(code **)(**(long **)(lVar18 + 0x2f0) + 0x70))();
        piVar28 = (int *)((long)puVar13 + (ulong)*puVar13);
      }
      lVar12 = (long)*piVar28;
      if ((*(ushort *)((long)piVar28 - lVar12) < 5) ||
         (uVar25 = (ulong)((ushort *)((long)piVar28 - lVar12))[2], uVar25 == 0)) {
        puVar13 = (uint *)0x0;
      }
      else {
        puVar13 = (uint *)((long)piVar28 + uVar25);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
      }
      if (*puVar13 != 0) {
        uVar25 = 0;
        plVar1 = (long *)(lVar18 + 0x88);
        plVar2 = (long *)(lVar18 + 0xb8);
        do {
          piVar5 = (int *)((long)(puVar13 + uVar25 + 1) + (ulong)puVar13[uVar25 + 1]);
          local_e0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_e8 = &PTR_FUN_045ac568;
          puVar19 = (ushort *)((long)piVar5 - (long)*piVar5);
          if (((*puVar19 < 7) || ((ulong)puVar19[3] == 0)) || (puVar19[2] == 0)) goto LAB_015f36c8;
          puVar6 = (uint *)((long)piVar5 + (ulong)puVar19[3]);
          local_70[0] = (long)puVar6 + (ulong)*puVar6 + 4;
          FUN_00e52f24(local_a0,local_70);
          FUN_015f4d8c(&local_e8,0,local_a0,0,0);
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          if (local_a0[0] != (long *)0x0) {
            (**(code **)(*local_a0[0] + 0x20))();
          }
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
             (uVar20 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar20 == 0)) {
            lVar12 = 0;
          }
          else {
            puVar6 = (uint *)((long)piVar5 + uVar20);
            lVar12 = (long)puVar6 + (ulong)*puVar6;
          }
          sVar14 = strlen((char *)(lVar12 + 4));
          bVar8 = *(byte *)(lVar12 + 4);
          puVar29 = &DAT_cbf29ce484222645;
          if (bVar8 != 0) {
            puVar29 = &DAT_cbf29ce484222645;
            pbVar26 = (byte *)(lVar12 + 5);
            do {
              puVar29 = (undefined1 *)(((ulong)puVar29 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (bVar8 != 0);
          }
          puVar31 = *(undefined1 **)(lVar18 + 0x90);
          if (puVar31 == (undefined1 *)0x0) {
LAB_015f34f0:
            plVar22 = (long *)(**(code **)(**(long **)(lVar18 + 0xc0) + 0x10))
                                        (*(long **)(lVar18 + 0xc0),0x70,8);
            if (plVar22 == (long *)0x0) {
              (**(code **)(**(long **)(lVar18 + 0xc0) + 0xe8))();
            }
            uVar30 = *(undefined8 *)(lVar18 + 0xc0);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar15 != 0) {
              if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_015f3e20;
              *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar30;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            }
            plVar22[7] = 0;
            plVar22[2] = (long)puVar29;
            plVar22[3] = lVar12 + 4;
            plVar22[6] = (long)&PTR_FUN_045ac4c8;
            plVar22[4] = sVar14;
            plVar22[5] = 0;
            plVar22[8] = 0;
            plVar22[9] = 0;
            plVar22[10] = 0;
            plVar22[0xb] = 0;
            plVar22[0xc] = 0;
            plVar22[0xd] = 0;
            FUN_015f4b2c(plVar22 + 7,&local_e0);
            if (local_d0 != 0) {
              lVar12 = *(long *)(local_d0 + 0x30);
              if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar4 = (short *)(lVar12 + 0x1a);
              do {
                sVar7 = *psVar4;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                if (bVar10) {
                  *psVar4 = sVar7 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (sVar7 == 0) {
                uVar30 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
                *(undefined8 *)(lVar12 + 8) = uVar30;
                *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
              }
              else if (sVar7 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
            }
            plVar16 = (long *)plVar22[9];
            plVar22[9] = local_d0;
            if (plVar16 != (long *)0x0) {
              lVar12 = plVar16[6];
              psVar4 = (short *)(lVar12 + 0x1a);
              do {
                sVar7 = *psVar4;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                if (bVar10) {
                  *psVar4 = sVar7 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (sVar7 == 1) {
                *(undefined8 *)(lVar12 + 0x10) = 0;
                (**(code **)(*plVar16 + 0x50))();
              }
              else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            FUN_00cef9d0(plVar22 + 10,&local_c8);
            FUN_00ceffd4(plVar22 + 0xc,&local_b8);
            plVar22[6] = (long)&PTR_FUN_045ac568;
            if (lVar15 != 0) {
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            }
            *plVar22 = 0;
            plVar22[1] = (long)puVar29;
            fVar32 = (float)(*(long *)(lVar18 + 0xe0) + 1);
            if ((puVar31 == (undefined1 *)0x0) ||
               (*(float *)(lVar18 + 0xe8) * (float)puVar31 < fVar32)) {
              uVar20 = (ulong)(puVar31 < (undefined1 *)0x3 ||
                              ((ulong)puVar31 & (ulong)(puVar31 + -1)) != 0) | (long)puVar31 << 1;
              uVar27 = (ulong)(fVar32 / *(float *)(lVar18 + 0xe8));
              if (uVar27 <= uVar20) {
                uVar27 = uVar20;
              }
              FUN_015f4230(plVar1,uVar27);
              puVar31 = *(undefined1 **)(lVar18 + 0x90);
              if (((ulong)puVar31 & (ulong)(puVar31 + -1)) == 0) {
                unaff_x27 = (undefined1 *)((ulong)(puVar31 + -1) & (ulong)puVar29);
              }
              else if (puVar29 < puVar31) {
                unaff_x27 = puVar29;
              }
              else {
                uVar20 = 0;
                if (puVar31 != (undefined1 *)0x0) {
                  uVar20 = (ulong)puVar29 / (ulong)puVar31;
                }
                unaff_x27 = puVar29 + -(uVar20 * (long)puVar31);
              }
            }
            plVar16 = *(long **)(*plVar1 + (long)unaff_x27 * 8);
            if (plVar16 == (long *)0x0) {
              *plVar22 = *plVar2;
              *plVar2 = (long)plVar22;
              *(long **)(*plVar1 + (long)unaff_x27 * 8) = plVar2;
              if (*plVar22 != 0) {
                puVar29 = *(undefined1 **)(*plVar22 + 8);
                if (((ulong)puVar31 & (ulong)(puVar31 + -1)) == 0) {
                  puVar29 = (undefined1 *)((ulong)puVar29 & (ulong)(puVar31 + -1));
                }
                else if (puVar31 <= puVar29) {
                  uVar20 = 0;
                  if (puVar31 != (undefined1 *)0x0) {
                    uVar20 = (ulong)puVar29 / (ulong)puVar31;
                  }
                  puVar29 = puVar29 + -(uVar20 * (long)puVar31);
                }
                plVar16 = (long *)(*plVar1 + (long)puVar29 * 8);
                goto LAB_015f36b4;
              }
            }
            else {
              *plVar22 = *plVar16;
LAB_015f36b4:
              *plVar16 = (long)plVar22;
            }
            *(long *)(lVar18 + 0xe0) = *(long *)(lVar18 + 0xe0) + 1;
          }
          else {
            puVar21 = puVar31 + -1;
            if (((ulong)puVar31 & (ulong)puVar21) == 0) {
              unaff_x27 = (undefined1 *)((ulong)puVar21 & (ulong)puVar29);
              plVar22 = *(long **)(*plVar1 + (long)unaff_x27 * 8);
              if (plVar22 == (long *)0x0) goto LAB_015f34f0;
              do {
                plVar22 = (long *)*plVar22;
                if ((plVar22 == (long *)0x0) ||
                   ((undefined1 *)plVar22[1] != puVar29 &&
                    (undefined1 *)((ulong)plVar22[1] & (ulong)puVar21) != unaff_x27))
                goto LAB_015f34f0;
              } while ((undefined1 *)plVar22[2] != puVar29);
            }
            else {
              unaff_x27 = puVar29;
              if (puVar31 <= puVar29) {
                uVar20 = 0;
                if (puVar31 != (undefined1 *)0x0) {
                  uVar20 = (ulong)puVar29 / (ulong)puVar31;
                }
                unaff_x27 = puVar29 + -(uVar20 * (long)puVar31);
              }
              plVar22 = *(long **)(*plVar1 + (long)unaff_x27 * 8);
              if (plVar22 == (long *)0x0) goto LAB_015f34f0;
              do {
                plVar22 = (long *)*plVar22;
                if (plVar22 == (long *)0x0) goto LAB_015f34f0;
                puVar21 = (undefined1 *)plVar22[1];
                if (puVar21 != puVar29) {
                  if (puVar31 <= puVar21) {
                    uVar20 = 0;
                    if (puVar31 != (undefined1 *)0x0) {
                      uVar20 = (ulong)puVar21 / (ulong)puVar31;
                    }
                    puVar21 = puVar21 + -(uVar20 * (long)puVar31);
                  }
                  if (puVar21 != unaff_x27) goto LAB_015f34f0;
                }
              } while ((undefined1 *)plVar22[2] != puVar29);
            }
          }
LAB_015f36c8:
          FUN_015f3e44(&local_e8);
          uVar25 = uVar25 + 1;
        } while (uVar25 < *puVar13);
        lVar12 = (long)*piVar28;
      }
      uVar25 = (ulong)*(ushort *)((long)piVar28 + (6 - lVar12));
      puVar13 = (uint *)((long)piVar28 + uVar25);
      uVar20 = (ulong)*puVar13;
      puVar13 = (uint *)((long)puVar13 + uVar20);
      if (*puVar13 != 0) {
        plVar1 = (long *)(lVar18 + 0x228);
        plVar2 = (long *)(lVar18 + 600);
        uVar27 = 0;
        lVar12 = (long)piVar28 + uVar20 + uVar25 + 9;
        ppuVar3 = (undefined **)(PTR_DAT_047d8e88 + 0x10);
        do {
          puVar29 = (undefined1 *)(ulong)puVar13[uVar27 + 1];
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_e0 = 0;
          local_d8 = 0;
          piVar28 = (int *)((long)(puVar13 + uVar27 + 1) + (long)puVar29);
          local_a8 = 0;
          local_a4 = 0;
          local_e8 = ppuVar3;
          FUN_015f3fa8(&local_e8,piVar28,*(undefined8 *)(lVar18 + 0x80));
          if ((*(ushort *)((long)piVar28 - (long)*piVar28) < 5) ||
             (uVar25 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2], uVar25 == 0))
          goto LAB_015f3a48;
          puVar6 = (uint *)((long)piVar28 + uVar25);
          uVar20 = (ulong)*puVar6;
          __s = (char *)((long)puVar6 + uVar20 + 4);
          sVar14 = strlen(__s);
          bVar8 = *(byte *)((long)puVar6 + uVar20 + 4);
          puVar31 = &DAT_cbf29ce484222645;
          if (bVar8 != 0) {
            puVar31 = &DAT_cbf29ce484222645;
            pbVar26 = puVar29 + lVar12 + uVar20 + uVar25;
            do {
              puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (bVar8 != 0);
          }
          puVar21 = *(undefined1 **)(lVar18 + 0x230);
          if (puVar21 == (undefined1 *)0x0) {
LAB_015f38dc:
            plVar22 = (long *)(**(code **)(**(long **)(lVar18 + 0x260) + 0x10))
                                        (*(long **)(lVar18 + 0x260),0x78,8);
            if (plVar22 == (long *)0x0) {
              (**(code **)(**(long **)(lVar18 + 0x260) + 0xe8))();
            }
            uVar30 = *(undefined8 *)(lVar18 + 0x260);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar15 != 0) {
              if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_015f3e20:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar30;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            }
            plVar22[2] = (long)puVar31;
            plVar22[3] = (long)__s;
            plVar22[4] = sVar14;
            plVar22[5] = 0;
            FUN_0130f258(plVar22 + 6,&local_e8);
            if (lVar15 != 0) {
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            }
            *plVar22 = 0;
            plVar22[1] = (long)puVar31;
            fVar32 = (float)(*(long *)(lVar18 + 0x280) + 1);
            if ((puVar21 == (undefined1 *)0x0) ||
               (*(float *)(lVar18 + 0x288) * (float)puVar21 < fVar32)) {
              uVar25 = (ulong)(puVar21 < (undefined1 *)0x3 ||
                              ((ulong)puVar21 & (ulong)(puVar21 + -1)) != 0) | (long)puVar21 << 1;
              uVar20 = (ulong)(fVar32 / *(float *)(lVar18 + 0x288));
              if (uVar20 <= uVar25) {
                uVar20 = uVar25;
              }
              if (uVar20 - 1 == 0) {
                uVar20 = 2;
              }
              else if ((uVar20 & uVar20 - 1) != 0) {
                uVar20 = std::__next_prime(uVar20);
              }
              uVar25 = *(ulong *)(lVar18 + 0x230);
              if (uVar25 < uVar20) {
                uVar17 = uVar20;
LAB_015f3acc:
                FUN_015f5a04(plVar1,uVar17);
              }
              else if (uVar20 < uVar25) {
                uVar17 = (ulong)((float)*(ulong *)(lVar18 + 0x280) / *(float *)(lVar18 + 0x288));
                if ((uVar25 < 3) ||
                   (uVar24 = uVar25 - (uVar25 >> 1 & 0x5555555555555555),
                   uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333),
                   1 < (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                  uVar17 = std::__next_prime(uVar17);
                }
                else if (1 < uVar17) {
                  uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
                }
                if (uVar17 <= uVar20) {
                  uVar17 = uVar20;
                }
                if (uVar17 < uVar25) goto LAB_015f3acc;
              }
              puVar21 = *(undefined1 **)(lVar18 + 0x230);
              if (((ulong)puVar21 & (ulong)(puVar21 + -1)) == 0) {
                puVar29 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)puVar31);
              }
              else if (puVar31 < puVar21) {
                puVar29 = puVar31;
              }
              else {
                uVar25 = 0;
                if (puVar21 != (undefined1 *)0x0) {
                  uVar25 = (ulong)puVar31 / (ulong)puVar21;
                }
                puVar29 = puVar31 + -(uVar25 * (long)puVar21);
              }
            }
            plVar16 = *(long **)(*plVar1 + (long)puVar29 * 8);
            if (plVar16 == (long *)0x0) {
              *plVar22 = *plVar2;
              *plVar2 = (long)plVar22;
              *(long **)(*plVar1 + (long)puVar29 * 8) = plVar2;
              if (*plVar22 != 0) {
                puVar29 = *(undefined1 **)(*plVar22 + 8);
                if (((ulong)puVar21 & (ulong)(puVar21 + -1)) == 0) {
                  puVar29 = (undefined1 *)((ulong)puVar29 & (ulong)(puVar21 + -1));
                }
                else if (puVar21 <= puVar29) {
                  uVar25 = 0;
                  if (puVar21 != (undefined1 *)0x0) {
                    uVar25 = (ulong)puVar29 / (ulong)puVar21;
                  }
                  puVar29 = puVar29 + -(uVar25 * (long)puVar21);
                }
                plVar16 = (long *)(*plVar1 + (long)puVar29 * 8);
                goto LAB_015f3a38;
              }
            }
            else {
              *plVar22 = *plVar16;
LAB_015f3a38:
              *plVar16 = (long)plVar22;
            }
            *(long *)(lVar18 + 0x280) = *(long *)(lVar18 + 0x280) + 1;
          }
          else {
            puVar23 = puVar21 + -1;
            if (((ulong)puVar21 & (ulong)puVar23) == 0) {
              puVar29 = (undefined1 *)((ulong)puVar23 & (ulong)puVar31);
              plVar22 = *(long **)(*plVar1 + (long)puVar29 * 8);
              if (plVar22 == (long *)0x0) goto LAB_015f38dc;
              do {
                plVar22 = (long *)*plVar22;
                if ((plVar22 == (long *)0x0) ||
                   ((undefined1 *)plVar22[1] != puVar31 &&
                    (undefined1 *)((ulong)plVar22[1] & (ulong)puVar23) != puVar29))
                goto LAB_015f38dc;
              } while ((undefined1 *)plVar22[2] != puVar31);
            }
            else {
              puVar29 = puVar31;
              if (puVar21 <= puVar31) {
                uVar25 = 0;
                if (puVar21 != (undefined1 *)0x0) {
                  uVar25 = (ulong)puVar31 / (ulong)puVar21;
                }
                puVar29 = puVar31 + -(uVar25 * (long)puVar21);
              }
              plVar22 = *(long **)(*plVar1 + (long)puVar29 * 8);
              if (plVar22 == (long *)0x0) goto LAB_015f38dc;
              do {
                plVar22 = (long *)*plVar22;
                if (plVar22 == (long *)0x0) goto LAB_015f38dc;
                puVar23 = (undefined1 *)plVar22[1];
                if (puVar23 != puVar31) {
                  if (puVar21 <= puVar23) {
                    uVar25 = 0;
                    if (puVar21 != (undefined1 *)0x0) {
                      uVar25 = (ulong)puVar23 / (ulong)puVar21;
                    }
                    puVar23 = puVar23 + -(uVar25 * (long)puVar21);
                  }
                  if (puVar23 != puVar29) goto LAB_015f38dc;
                }
              } while ((undefined1 *)plVar22[2] != puVar31);
            }
          }
LAB_015f3a48:
          FUN_00db239c(&local_e8);
          uVar27 = uVar27 + 1;
          lVar12 = lVar12 + 4;
        } while (uVar27 < *puVar13);
      }
      *(undefined1 *)(lVar18 + 0x360) = 1;
    }
  }
  FUN_015f5d38(param_1[1]);
  return;
}


