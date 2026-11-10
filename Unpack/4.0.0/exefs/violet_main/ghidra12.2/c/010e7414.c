/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e7414; name: FUN_010e7414
 */


void FUN_010e7414(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  short sVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  void *__dest;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined1 *puVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  void *__src;
  long *local_290 [2];
  long *local_280;
  long local_278;
  long local_270;
  long local_268;
  long *local_260;
  long *local_258;
  long *local_250;
  long *local_248;
  long *local_240;
  ulong local_238;
  long local_230;
  long lStack_228;
  long *local_220;
  long *local_218;
  undefined8 local_210;
  long *plStack_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  long *local_1e8;
  ulong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  void *local_1c0;
  void *local_1b8;
  long *local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 auStack_188 [56];
  undefined1 auStack_150 [56];
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [16];
  
  if ((*(int *)(param_1 + 0x128) == 0xc) &&
     (*(long *)(*(long *)(param_2 + 8) + 0x218) != *(long *)(*(long *)(param_2 + 8) + 0x210))) {
    FUN_00c9e664(&local_220,param_1 + 0xe8);
    lVar23 = 0;
    if (local_218 != (long *)0x0) {
      lVar23 = local_218[9];
    }
    lVar23 = FUN_01086108(lVar23 + 0x108,&local_258);
    if (local_218 != (long *)0x0) {
      plVar1 = local_218 + 5;
      do {
        lVar13 = *plVar1;
        iVar11 = (int)lVar13 + -1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = iVar11;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_218 + 0x10))();
      }
      else if ((int)lVar13 == 0) goto LAB_010e7e74;
    }
    if (local_220 != (long *)0x0) {
      (**(code **)(*local_220 + 0x60))();
    }
    plVar1 = DAT_0485a0a0;
    if (lVar23 != 0) {
      if (DAT_0485a0a0 != (long *)0x0) {
        plVar14 = DAT_0485a0a0 + 5;
        do {
          lVar13 = *plVar14;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar10) {
            *(int *)plVar14 = (int)lVar13 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if ((int)lVar13 == -1) {
LAB_010e7eb0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      puVar25 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x210);
      local_220 = (long *)*puVar25;
      local_218 = (long *)puVar25[1];
      local_210 = puVar25[2];
      plStack_208 = (long *)puVar25[3];
      if (plStack_208 != (long *)0x0) {
        (**(code **)(*plStack_208 + 0x18))();
      }
      local_1f8 = (undefined8 *)0x0;
      local_1f0 = (undefined8 *)0x0;
      local_200 = (undefined8 *)0x0;
      local_1e8 = (long *)puVar25[7];
      local_1e0 = puVar25[8];
      local_1d8 = puVar25[9];
      uStack_1d0 = puVar25[10];
      lVar13 = puVar25[5] - puVar25[4];
      if (lVar13 != 0) {
        uVar29 = local_1e0;
        if (0x7ffffffffffffffe < local_1e0) {
          uVar29 = 0x7fffffffffffffff;
        }
        if (uVar29 < (ulong)((lVar13 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        puVar12 = (undefined8 *)(**(code **)(*local_1e8 + 0x10))(local_1e8,lVar13,8);
        if (puVar12 == (undefined8 *)0x0) {
          (**(code **)(*local_1e8 + 0xe8))();
        }
        local_1f0 = puVar12 + (lVar13 >> 3);
        puVar27 = (undefined8 *)puVar25[4];
        puVar6 = (undefined8 *)puVar25[5];
        local_200 = puVar12;
        local_1f8 = puVar12;
        if (puVar27 != puVar6) {
          do {
            plVar14 = local_1e8;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar13 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar13 != 0) {
              if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_010e7e70;
              *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar14;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
            }
            *puVar12 = *puVar27;
            puVar12[1] = puVar27[1];
            puVar12[2] = puVar27[2];
            plVar14 = (long *)puVar27[3];
            puVar12[3] = plVar14;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))();
            }
            *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar27 + 4);
            if (lVar13 != 0) {
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            }
            puVar27 = puVar27 + 5;
            puVar12 = puVar12 + 5;
          } while (puVar27 != puVar6);
        }
        local_1f8 = puVar12;
      }
      local_1c0 = (void *)0x0;
      local_1b8 = (void *)0x0;
      local_1c8 = (void *)0x0;
      local_1b0 = (long *)puVar25[0xe];
      local_1a8 = puVar25[0xf];
      local_1a0 = puVar25[0x10];
      uStack_198 = puVar25[0x11];
      lVar13 = puVar25[0xc] - puVar25[0xb];
      if (lVar13 != 0) {
        uVar29 = local_1a8;
        if (0x7ffffffffffffffe < local_1a8) {
          uVar29 = 0x7fffffffffffffff;
        }
        if (uVar29 < (ulong)((lVar13 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        __dest = (void *)(**(code **)(*local_1b0 + 0x10))(local_1b0,lVar13,4);
        if (__dest == (void *)0x0) {
          (**(code **)(*local_1b0 + 0xe8))();
        }
        local_1b8 = (void *)((long)__dest + (lVar13 >> 3) * 8);
        __src = (void *)puVar25[0xb];
        pvVar7 = (void *)puVar25[0xc];
        local_1c8 = __dest;
        local_1c0 = __dest;
        if (__src != pvVar7) {
          do {
            plVar14 = local_1b0;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar13 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar13 == 0) {
              memcpy(__dest,__src,0x48);
            }
            else {
              if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_010e7e70;
              *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar14;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
              memcpy(__dest,__src,0x48);
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            }
            __src = (void *)((long)__src + 0x48);
            __dest = (void *)((long)__dest + 0x48);
          } while (pvVar7 != __src);
        }
        local_1c0 = __dest;
      }
      local_190 = puVar25[0x12];
      FUN_010e84b0(auStack_188,puVar25 + 0x13);
      FUN_010e84b0(auStack_150,puVar25 + 0x1a);
      FUN_010e84b0(auStack_118,puVar25 + 0x21);
      FUN_010e84b0(auStack_e0,puVar25 + 0x28);
      FUN_010e84b0(auStack_a8,puVar25 + 0x2f);
      plVar14 = *(long **)(*(long *)(param_2 + 8) + 0x248);
      local_258 = (long *)0x0;
      local_250 = (long *)0x0;
      local_248 = (long *)0x0;
      local_240 = (long *)plVar14[3];
      local_238 = plVar14[4];
      local_230 = plVar14[5];
      lStack_228 = plVar14[6];
      lVar13 = plVar14[1] - *plVar14;
      if (lVar13 != 0) {
        uVar29 = local_238;
        if (0x7ffffffffffffffe < local_238) {
          uVar29 = 0x7fffffffffffffff;
        }
        if (uVar29 < (ulong)(lVar13 >> 6)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        plVar15 = (long *)(**(code **)(*local_240 + 0x10))(local_240,lVar13,8);
        if (plVar15 == (long *)0x0) {
          (**(code **)(*local_240 + 0xe8))();
        }
        local_248 = plVar15 + (lVar13 >> 6) * 8;
        lVar13 = *plVar14;
        lVar8 = plVar14[1];
        local_258 = plVar15;
        if (lVar13 != lVar8) {
          puVar2 = PTR_DAT_047dd4d8 + 0x10;
          puVar3 = PTR_DAT_047dd330 + 0x10;
          local_250 = plVar15;
          do {
            plVar14 = local_240;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar16 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar16 != 0) {
              if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_010e7e70:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar14;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
            }
            *plVar15 = (long)puVar2;
            plVar15[5] = 0;
            plVar15[4] = 0;
            plVar15[6] = 0;
            plVar15[2] = 0;
            plVar15[3] = 0;
            plVar15[1] = 0;
            plVar15[7] = 0;
            FUN_010e8680(plVar15 + 1,lVar13 + 8);
            lVar28 = *(long *)(lVar13 + 0x18);
            if (lVar28 != 0) {
              lVar24 = *(long *)(lVar28 + 0x30);
              if (*(long *)(lVar24 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar4 = (short *)(lVar24 + 0x1a);
              do {
                sVar5 = *psVar4;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                if (bVar10) {
                  *psVar4 = sVar5 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (sVar5 == 0) {
                uVar17 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
                *(undefined8 *)(lVar24 + 8) = uVar17;
                *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
              }
              else if (sVar5 == -1) {
                pcVar18 = "count != 0";
                pcVar20 = "AddReference";
                pcVar21 = 
                "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                ;
                pcVar22 = "Reference counter overflows.";
                goto LAB_010e7e94;
              }
            }
            plVar14 = (long *)plVar15[3];
            plVar15[3] = lVar28;
            if (plVar14 != (long *)0x0) {
              lVar28 = plVar14[6];
              psVar4 = (short *)(lVar28 + 0x1a);
              do {
                sVar5 = *psVar4;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                if (bVar10) {
                  *psVar4 = sVar5 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar28 + 0x10) = 0;
                (**(code **)(*plVar14 + 0x50))();
              }
              else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            FUN_00cef9d0(plVar15 + 4,lVar13 + 0x20);
            FUN_00ceffd4(plVar15 + 6,lVar13 + 0x30);
            *plVar15 = (long)puVar3;
            if (lVar16 != 0) {
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
            }
            lVar13 = lVar13 + 0x40;
            plVar15 = plVar15 + 8;
          } while (lVar13 != lVar8);
        }
        local_250 = plVar15;
      }
      if ((int)((ulong)((long)local_1f8 - (long)local_200) >> 3) * -0x33333333 != 0) {
        uVar29 = 0;
        do {
          plVar14 = local_200 + uVar29 * 5;
          local_278 = *plVar14;
          local_270 = plVar14[1];
          local_268 = plVar14[2];
          local_260 = (long *)plVar14[3];
          if (local_260 != (long *)0x0) {
            (**(code **)(*local_260 + 0x18))();
          }
          lVar13 = *(long *)(*(long *)(local_258[uVar29 * 8 + 1] + 0x1f8) + 0x58);
          if (lVar13 == 0) {
            puVar19 = &DAT_03c886bc;
          }
          else {
            puVar19 = (undefined1 *)(*(long *)(**(long **)(lVar13 + 0x28) + 0x60) + 2);
          }
          uVar17 = FUN_00ec0c08(local_258[uVar29 * 8 + 1],puVar19);
          local_290[0] = plVar1;
          local_280 = (long *)FUN_00cf3764(auStack_70,plVar1[1],local_290);
          if (local_280 != (long *)0x0) {
            plVar14 = local_280 + 5;
            do {
              lVar13 = *plVar14;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar10) {
                *(int *)plVar14 = (int)lVar13 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if ((int)lVar13 == -1) goto LAB_010e7eb0;
          }
          FUN_00ec0d30(local_280,uVar17,1);
          if (local_280 != (long *)0x0) {
            local_290[0] = (long *)((ulong)local_290[0] & 0xffffffffffffff00);
            FUN_010e7f18(*(undefined8 *)(lVar23 + 0x130),&local_278,&local_280,local_290);
            if ((local_278 == 0x4292f1208598d1cc) && (*(int *)(param_1 + 0x128) == 0xc)) {
              FUN_010e8ce0(*(undefined8 *)(param_1 + 0x130),&local_280);
              plVar15 = *(long **)(param_1 + 0x180);
              for (plVar14 = *(long **)(param_1 + 0x178); plVar14 != plVar15; plVar14 = plVar14 + 1)
              {
                lVar13 = *plVar14;
                if (*(int *)(lVar13 + 0x128) == 4) {
                  puVar12 = *(undefined8 **)(lVar13 + 0x1b0);
                  for (puVar25 = *(undefined8 **)(lVar13 + 0x1a8); puVar25 != puVar12;
                      puVar25 = puVar25 + 1) {
                    FUN_010e801c(*puVar25,&local_280);
                  }
                }
              }
            }
            if (local_280 != (long *)0x0) {
              plVar14 = local_280 + 5;
              do {
                lVar13 = *plVar14;
                iVar11 = (int)lVar13 + -1;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar10) {
                  *(int *)plVar14 = iVar11;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_280 + 0x10))();
              }
              else if ((int)lVar13 == 0) goto LAB_010e7e74;
            }
          }
          if (local_260 != (long *)0x0) {
            (**(code **)(*local_260 + 0x20))();
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 < (uint)((int)((ulong)((long)local_1f8 - (long)local_200) >> 3) *
                                -0x33333333));
      }
      plVar15 = local_250;
      plVar14 = local_258;
      if (local_258 != (long *)0x0) {
        if (((((local_250 != local_258) &&
              (plVar26 = local_250 + -8, FUN_00faeeac(plVar26), plVar26 != plVar14)) &&
             (FUN_00faeeac(plVar15 + -0x10), plVar15 + -0x10 != plVar14)) &&
            ((FUN_00faeeac(plVar15 + -0x18), plVar15 + -0x18 != plVar14 &&
             (FUN_00faeeac(plVar15 + -0x20), plVar15 + -0x20 != plVar14)))) &&
           ((FUN_00faeeac(plVar15 + -0x28), plVar15 + -0x28 != plVar14 &&
            (FUN_00faeeac(plVar15 + -0x30), plVar15 + -0x30 != plVar14)))) {
          do {
            FUN_00faeeac(plVar15 + -0x38);
            plVar15 = plVar15 + -8;
          } while (plVar14 + 0x30 != plVar15);
        }
        plVar26 = local_240;
        plVar15 = local_258;
        local_250 = plVar14;
        lVar23 = (long)local_248 - (long)local_258;
        uVar29 = (**(code **)(*local_240 + 0xf8))(local_240);
        if (((uVar29 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar26 + 0x18))(plVar26,plVar15,lVar23,8);
        }
        else {
          FUN_00c48fe8(plVar26,plVar15,lVar23,8);
        }
      }
      FUN_010e0b2c(&local_220);
      if (plVar1 != (long *)0x0) {
        plVar14 = plVar1 + 5;
        do {
          lVar23 = *plVar14;
          iVar11 = (int)lVar23 + -1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar10) {
            *(int *)plVar14 = iVar11;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        else if ((int)lVar23 == 0) {
LAB_010e7e74:
          pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar20 = "DecrementReferenceInternal";
          pcVar21 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar22 = "Reference counter underflows.";
LAB_010e7e94:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar18,pcVar20,pcVar21,0x58,pcVar22);
        }
      }
    }
  }
  return;
}


