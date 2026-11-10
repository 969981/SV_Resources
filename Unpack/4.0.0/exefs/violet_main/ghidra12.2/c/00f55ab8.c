/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f55ab8; name: FUN_00f55ab8
 */


void FUN_00f55ab8(long param_1,long param_2)

{
  short *psVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  short sVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  float fVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  bool bVar25;
  long *plVar26;
  float extraout_s0;
  float extraout_s0_00;
  float fVar27;
  float extraout_var;
  float extraout_var_00;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  if (*(long *)(param_1 + 0x78) != *(long *)(param_1 + 0x80)) {
    plVar24 = (long *)(param_1 + 0x2a0);
    lVar22 = *plVar24;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 != lVar22) {
      lVar13 = nn::os::GetCurrentThread();
LAB_00f55b0c:
      if (*plVar24 == 0) goto code_r0x00f55b14;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
      do {
        if (*plVar24 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
            while (*plVar24 == 0) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar10) {
                *plVar24 = lVar13;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_00f55b1c;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar10) {
          *plVar24 = lVar13;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00f55b1c:
      bVar10 = false;
      goto LAB_00f55b20;
    }
    bVar10 = true;
LAB_00f55b20:
    FUN_00cbc2e4(param_2,param_2 + 0x90);
    uVar17 = *(ulong *)(param_1 + 0x70);
    uVar18 = (ulong)(((float)uVar17 * (extraout_s0 - (float)*(undefined8 *)(param_1 + 0x60))) /
                    (float)*(undefined8 *)(param_1 + 0x50));
    uVar20 = (ulong)(((float)uVar17 *
                     (extraout_var - (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20))) /
                    (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20));
    lVar13 = uVar18 + uVar17 * uVar20;
    if (uVar18 < uVar17 && uVar20 < uVar17) {
      lVar22 = FUN_00e29ce8(param_1,lVar13);
      plVar24 = *(long **)(lVar22 + 8);
      lVar23 = *plVar24;
      lVar14 = nn::os::GetCurrentThread();
      if (lVar14 != lVar23) {
        lVar14 = nn::os::GetCurrentThread();
LAB_00f55bc8:
        if (*plVar24 == 0) goto code_r0x00f55bd0;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar24 + 1));
        do {
          if (*plVar24 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar24 + 1));
              while (*plVar24 == 0) {
                cVar9 = '\x01';
                bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar25) {
                  *plVar24 = lVar14;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_00f55bd8;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar25) {
            *plVar24 = lVar14;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_00f55bd8:
        bVar25 = false;
        plVar26 = plVar24;
        goto LAB_00f55be0;
      }
      plVar26 = (long *)0x0;
      bVar25 = true;
LAB_00f55be0:
      if (param_2 != 0) {
        lVar14 = *(long *)(param_2 + 0x30);
        if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar9 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar7 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar16;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar7 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      plVar21 = (long *)plVar24[4];
      plVar19 = plVar24 + 6;
      if (plVar21 < (long *)plVar24[5]) {
        lVar14 = *plVar19;
        if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar23 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar23 == 0) {
          *plVar21 = param_2;
        }
        else {
          if (0xf < *(ulong *)(lVar23 + 0x80)) {
LAB_00f56220:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = lVar14;
          *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
          *plVar21 = param_2;
          *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
        }
        plVar24[4] = (long)(plVar21 + 1);
      }
      else {
        uVar18 = plVar24[7];
        lVar14 = (long)plVar21 - plVar24[3] >> 3;
        uVar17 = lVar14 + 1;
        if (0x7ffffffffffffffe < uVar18) {
          uVar18 = 0x7fffffffffffffff;
        }
        if (uVar18 < uVar17) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar23 = plVar24[5] - plVar24[3];
        uVar20 = lVar23 >> 2;
        local_70 = (long *)0x0;
        if (uVar17 <= uVar20) {
          uVar17 = uVar20;
        }
        if (uVar18 >> 1 <= (ulong)(lVar23 >> 3)) {
          uVar17 = uVar18;
        }
        plStack_68 = plVar19;
        if (uVar17 == 0) {
          local_88 = (long *)0x0;
        }
        else {
          local_88 = (long *)(**(code **)(*(long *)*plVar19 + 0x10))((long *)*plVar19,uVar17 << 3,8)
          ;
          if (local_88 == (long *)0x0) {
            (**(code **)(*(long *)*plVar19 + 0xe8))();
          }
        }
        plVar21 = local_88 + lVar14;
        local_70 = local_88 + uVar17;
        lVar14 = *plVar19;
        local_80 = plVar21;
        local_78 = plVar21;
        if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar23 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar23 == 0) {
          *plVar21 = param_2;
        }
        else {
          if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_00f56220;
          *(long *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = lVar14;
          *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
          *plVar21 = param_2;
          *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
          plVar21 = local_78;
        }
        local_78 = plVar21 + 1;
        FUN_00f56300(plVar19,plVar24[3],plVar24[4],&local_80);
        local_88 = (long *)plVar24[3];
        plVar21 = (long *)plVar24[4];
        plVar24[3] = (long)local_80;
        plVar24[4] = (long)local_78;
        plVar19 = (long *)plVar24[5];
        plVar24[5] = (long)local_70;
        local_80 = local_88;
        local_78 = plVar21;
        local_70 = plVar19;
        FUN_00f56254(&local_88);
        plVar24 = local_88;
        if (local_88 != (long *)0x0) {
          lVar14 = (long)local_70 - (long)local_88;
          plVar19 = (long *)*plStack_68;
          uVar17 = (**(code **)(*plVar19 + 0xf8))(plVar19);
          if (((uVar17 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,plVar24,lVar14,8);
          }
          else {
            FUN_00c48fe8(plVar19,plVar24,lVar14,8);
          }
        }
      }
      if (!bVar25) {
        *plVar26 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar26 + 1));
      }
      *(long *)(param_2 + 0x80) = lVar13;
      FUN_00cbc2e4(param_2,param_2 + 0x90);
      lVar13 = *(long *)(param_1 + 0x140);
      lVar14 = *(long *)(param_1 + 0x148);
      if (lVar13 != lVar14) {
        lVar23 = 0;
        uVar17 = 0;
        plVar24 = (long *)(long)(((float)*(ulong *)(param_1 + 0x70) *
                                 (extraout_s0_00 - (float)*(undefined8 *)(param_1 + 0x60))) /
                                (float)*(undefined8 *)(param_1 + 0x50));
        plVar26 = (long *)(long)(((float)*(ulong *)(param_1 + 0x70) *
                                 (extraout_var_00 -
                                 (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20))) /
                                (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20));
        do {
          lVar15 = *(long *)(lVar13 + 8 + lVar23);
          if (*(char *)(lVar15 + 0xd0) != '\0') {
            uVar18 = 1L << (uVar17 & 0x3f);
            fVar28 = *(float *)(lVar15 + 0x30);
            fVar27 = (float)*(undefined8 *)(lVar15 + 0xc0);
            local_98 = (long *)(*(ulong *)(param_1 + 0x70) - 1);
            fVar33 = (float)*(ulong *)(param_1 + 0x70);
            plStack_90 = (long *)0x0;
            fVar29 = (float)*(undefined8 *)(param_1 + 0x60);
            fVar30 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
            fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
            fVar31 = (float)*(undefined8 *)(param_1 + 0x50);
            local_88 = (long *)(long)((((fVar27 - fVar28) - fVar29) * fVar33) / fVar31);
            fVar11 = (float)*(undefined8 *)(lVar15 + 200);
            pplVar5 = &local_98;
            if ((long)local_88 <= (long)local_98) {
              pplVar5 = &local_88;
            }
            plVar19 = (long *)(long)((((fVar11 - fVar28) - fVar30) * fVar33) / fVar32);
            pplVar2 = &plStack_90;
            if (-1 < (long)local_88) {
              pplVar2 = pplVar5;
            }
            pplVar5 = &local_98;
            if ((long)plVar19 <= (long)local_98) {
              pplVar5 = &local_88;
            }
            local_88 = plVar19;
            plStack_90 = (long *)0x0;
            pplVar3 = &plStack_90;
            if (-1 < (long)plVar19) {
              pplVar3 = pplVar5;
            }
            local_88 = (long *)(long)((((fVar27 + fVar28) - fVar29) * fVar33) / fVar31);
            plStack_90 = (long *)0x0;
            pplVar5 = &local_98;
            if ((long)local_88 <= (long)local_98) {
              pplVar5 = &local_88;
            }
            pplVar4 = &plStack_90;
            if (-1 < (long)local_88) {
              pplVar4 = pplVar5;
            }
            local_88 = (long *)(long)((((fVar11 + fVar28) - fVar30) * fVar33) / fVar32);
            plStack_90 = (long *)0x0;
            pplVar5 = &local_98;
            if ((long)local_88 <= (long)local_98) {
              pplVar5 = &local_88;
            }
            pplVar6 = &plStack_90;
            if (-1 < (long)local_88) {
              pplVar6 = pplVar5;
            }
            if ((*(ulong *)(*(long *)(lVar22 + 8) + 0x90) & uVar18) == 0) {
              if ((((plVar26 < (long *)((long)*pplVar6 + 1U) && *pplVar3 <= plVar26) &&
                   *pplVar2 <= plVar24) && plVar24 <= (long *)((long)*pplVar4 + 1U)) &&
                  ((((long *)((long)*pplVar6 + 1U) <= plVar26 || plVar26 < *pplVar3) ||
                   plVar24 < *pplVar2) || (long *)((long)*pplVar4 + 1U) != plVar24)) {
                FUN_00e74338(lVar15,*(long *)(lVar22 + 8));
                *(ulong *)(*(long *)(lVar22 + 8) + 0x90) =
                     *(ulong *)(*(long *)(lVar22 + 8) + 0x90) | uVar18;
              }
            }
            else {
              FUN_00f56428(*(undefined8 *)(*(long *)(param_1 + 0x140) + lVar23 + 8),param_2);
            }
          }
          lVar23 = lVar23 + 0x30;
          uVar17 = uVar17 + 1;
        } while (lVar14 - lVar13 != lVar23);
      }
    }
    if (!bVar10) {
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a8));
      return;
    }
  }
  return;
code_r0x00f55b14:
  cVar9 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar10) {
    *plVar24 = lVar13;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00f55b1c;
  goto LAB_00f55b0c;
code_r0x00f55bd0:
  cVar9 = '\x01';
  bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar25) {
    *plVar24 = lVar14;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00f55bd8;
  goto LAB_00f55bc8;
}


