/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00efd150; name: FUN_00efd150
 */


undefined8 FUN_00efd150(long *param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  void *__s;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  byte *pbVar20;
  ulong uVar21;
  byte *__s_00;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  ulong uVar30;
  ulong unaff_x26;
  long *plVar31;
  long *plVar32;
  undefined8 *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  void *local_f0;
  long *local_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  plVar29 = param_1 + 0xc;
  lVar25 = *plVar29;
  lVar14 = nn::os::GetCurrentThread();
  if (lVar14 != lVar25) {
    lVar14 = nn::os::GetCurrentThread();
LAB_00efe010:
    if (*plVar29 == 0) goto code_r0x00efe018;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd));
    do {
      if (*plVar29 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd));
          while (*plVar29 == 0) {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar8) {
              *plVar29 = lVar14;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00efe0cc;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar8) {
        *plVar29 = lVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00efe0cc:
    bVar8 = false;
    goto LAB_00efd1a4;
  }
  plVar29 = (long *)0x0;
  bVar8 = true;
LAB_00efd1a4:
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("parent == nullptr","Register",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/streaming_group.cpp"
               ,0x1b);
  }
  lVar26 = param_2[0xf5];
  lVar25 = param_2[0xf4];
  fVar34 = *(float *)(param_2 + 0xf6);
  lVar14 = (**(code **)(*param_2 + 0x68))(param_2);
  fVar35 = (float)lVar25 + (float)*(undefined8 *)(lVar14 + 0x30);
  fVar36 = (float)((ulong)lVar25 >> 0x20) + (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20);
  fVar37 = (float)lVar26 + (float)*(undefined8 *)(lVar14 + 0x38);
  local_e0 = CONCAT44(fVar36 - fVar34,fVar35 - fVar34);
  uStack_d0 = CONCAT44(fVar34 + fVar36,fVar34 + fVar35);
  uStack_d8 = (ulong)(uint)(fVar37 - fVar34);
  uStack_c8 = (ulong)(uint)(fVar34 + fVar37);
  plVar28 = (long *)param_1[1];
  lVar14 = tpidr_el0;
  if (*(long *)(lVar14 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04859438), iVar13 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar14 + 0x30) = DAT_04859430;
  }
  local_b8 = *(undefined8 **)(lVar14 + 0x30);
  local_b0 = *(undefined8 *)(lVar14 + 0x38);
  *(long **)(lVar14 + 0x30) = plVar28;
  *(undefined2 *)(lVar14 + 0x38) = 1;
  if (plVar28 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04859438), iVar13 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar28 = DAT_04859430;
    *(long **)(lVar14 + 0x30) = DAT_04859430;
  }
  __s = (void *)(**(code **)(*plVar28 + 0x10))(plVar28,0x48,8);
  memset(__s,0,0x48);
  FUN_00efe6d0(param_5,__s);
  plVar28 = *(long **)(lVar14 + 0x30);
  local_f0 = __s;
  if (plVar28 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04859438), iVar13 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar28 = DAT_04859430;
    *(long **)(lVar14 + 0x30) = DAT_04859430;
  }
  local_e8 = (long *)(**(code **)(*plVar28 + 0x10))(plVar28,0x20,8);
  *local_e8 = (long)&PTR____shared_weak_count_045a5940;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = (long)__s;
  *(undefined2 *)(lVar14 + 0x38) = (undefined2)local_b0;
  *(undefined8 **)(lVar14 + 0x30) = local_b8;
  (**(code **)(*param_2 + 0x120))(param_2,0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("scene","Register",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/streaming_group.cpp"
               ,0x2b);
  }
  plVar28 = param_1 + 0xf;
  lVar26 = *plVar28;
  lVar25 = nn::os::GetCurrentThread();
  if (lVar25 != lVar26) {
    lVar25 = nn::os::GetCurrentThread();
LAB_00efd334:
    if (*plVar28 == 0) goto code_r0x00efd33c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar28 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar28 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = lVar25;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00efd344;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar7) {
        *plVar28 = lVar25;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00efd344:
    bVar7 = false;
    goto LAB_00efd348;
  }
  plVar28 = (long *)0x0;
  bVar7 = true;
LAB_00efd348:
  uVar15 = (**(code **)(*param_1 + 0x80))(param_1,&local_e0);
  uVar30 = param_1[0x13];
  plVar32 = param_1 + 0x12;
  if (uVar30 == 0) {
    lVar25 = param_1[1];
LAB_00efd460:
    plVar27 = (long *)(**(code **)(*(long *)param_1[0x19] + 0x10))((long *)param_1[0x19],0x50,8);
    if (plVar27 == (long *)0x0) {
      (**(code **)(*(long *)param_1[0x19] + 0xe8))();
    }
    lVar26 = param_1[0x19];
    if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar16 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar16 != 0) {
      if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_00efe60c;
      *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar26;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    }
    plVar27[2] = uVar15;
    plVar27[3] = 0;
    plVar27[8] = 0;
    *(undefined4 *)(plVar27 + 9) = 0;
    plVar27[4] = 0;
    plVar27[5] = 0;
    plVar27[6] = lVar25;
    plVar27[7] = 0x1fffffffffffffff;
    if (lVar16 != 0) {
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    }
    *plVar27 = 0;
    plVar27[1] = uVar15;
    if ((uVar30 == 0) || (*(float *)(param_1 + 0x1e) * (float)uVar30 < (float)(param_1[0x1d] + 1)))
    {
      uVar30 = (ulong)(uVar30 < 3 || (uVar30 & uVar30 - 1) != 0) | uVar30 << 1;
      uVar18 = (ulong)((float)(param_1[0x1d] + 1) / *(float *)(param_1 + 0x1e));
      if (uVar18 <= uVar30) {
        uVar18 = uVar30;
      }
      if (uVar18 - 1 == 0) {
        uVar18 = 2;
      }
      else if ((uVar18 & uVar18 - 1) != 0) {
        uVar18 = std::__next_prime(uVar18);
      }
      uVar30 = param_1[0x13];
      if (uVar30 < uVar18) {
        uVar21 = uVar18;
LAB_00efd56c:
        FUN_00eff6b8(plVar32,uVar21);
      }
      else if (uVar18 < uVar30) {
        uVar21 = (ulong)((float)(ulong)param_1[0x1d] / *(float *)(param_1 + 0x1e));
        if ((uVar30 < 3) ||
           (uVar22 = uVar30 - (uVar30 >> 1 & 0x5555555555555555),
           uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333),
           1 < (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar21 = std::__next_prime(uVar21);
        }
        else if (1 < uVar21) {
          uVar21 = 1L << (-LZCOUNT(uVar21 - 1) & 0x3fU);
        }
        if (uVar21 <= uVar18) {
          uVar21 = uVar18;
        }
        if (uVar21 < uVar30) goto LAB_00efd56c;
      }
      uVar30 = param_1[0x13];
      if ((uVar30 & uVar30 - 1) == 0) {
        unaff_x26 = uVar30 - 1 & uVar15;
      }
      else if (uVar15 < uVar30) {
        unaff_x26 = uVar15;
      }
      else {
        uVar18 = 0;
        if (uVar30 != 0) {
          uVar18 = uVar15 / uVar30;
        }
        unaff_x26 = uVar15 - uVar18 * uVar30;
      }
    }
    plVar31 = *(long **)(*plVar32 + unaff_x26 * 8);
    if (plVar31 == (long *)0x0) {
      plVar31 = param_1 + 0x18;
      *plVar27 = *plVar31;
      *plVar31 = (long)plVar27;
      *(long **)(param_1[0x12] + unaff_x26 * 8) = plVar31;
      if (*plVar27 != 0) {
        uVar15 = *(ulong *)(*plVar27 + 8);
        if ((uVar30 & uVar30 - 1) == 0) {
          uVar15 = uVar15 & uVar30 - 1;
        }
        else if (uVar30 <= uVar15) {
          uVar18 = 0;
          if (uVar30 != 0) {
            uVar18 = uVar15 / uVar30;
          }
          uVar15 = uVar15 - uVar18 * uVar30;
        }
        plVar31 = (long *)(*plVar32 + uVar15 * 8);
        goto LAB_00efd5a4;
      }
    }
    else {
      *plVar27 = *plVar31;
LAB_00efd5a4:
      *plVar31 = (long)plVar27;
    }
    param_1[0x1d] = param_1[0x1d] + 1;
  }
  else {
    uVar18 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar21 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar18 = 0;
    if (uVar30 != 0) {
      uVar18 = uVar15 / uVar30;
    }
    if (uVar21 < 2) {
      uVar22 = uVar30 - 1 & uVar15;
    }
    else {
      uVar22 = uVar15;
      if (uVar30 <= uVar15) {
        uVar22 = uVar15 - uVar18 * uVar30;
      }
    }
    lVar26 = *plVar32;
    puVar23 = *(undefined8 **)(lVar26 + uVar22 * 8);
    if ((puVar23 != (undefined8 *)0x0) && (plVar27 = (long *)*puVar23, plVar27 != (long *)0x0)) {
      if (uVar21 < 2) {
        do {
          if (plVar27[1] == uVar15) {
            if (plVar27[2] == uVar15) goto LAB_00efd5b4;
          }
          else if ((plVar27[1] & uVar30 - 1) != uVar22) break;
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar27[1];
          if (uVar24 == uVar15) {
            if (plVar27[2] == uVar15) goto LAB_00efd5b4;
          }
          else {
            if (uVar30 <= uVar24) {
              uVar9 = 0;
              if (uVar30 != 0) {
                uVar9 = uVar24 / uVar30;
              }
              uVar24 = uVar24 - uVar9 * uVar30;
            }
            if (uVar24 != uVar22) break;
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
    }
    lVar25 = param_1[1];
    if (uVar21 < 2) {
      unaff_x26 = uVar30 - 1 & uVar15;
      plVar27 = *(long **)(lVar26 + unaff_x26 * 8);
      if (plVar27 == (long *)0x0) goto LAB_00efd460;
      do {
        plVar27 = (long *)*plVar27;
        if ((plVar27 == (long *)0x0) ||
           (plVar27[1] != uVar15 && (plVar27[1] & uVar30 - 1) != unaff_x26)) goto LAB_00efd460;
      } while (plVar27[2] != uVar15);
    }
    else {
      unaff_x26 = uVar15;
      if (uVar30 <= uVar15) {
        unaff_x26 = uVar15 - uVar18 * uVar30;
      }
      plVar27 = *(long **)(lVar26 + unaff_x26 * 8);
      if (plVar27 == (long *)0x0) goto LAB_00efd460;
      do {
        plVar27 = (long *)*plVar27;
        if (plVar27 == (long *)0x0) goto LAB_00efd460;
        uVar18 = plVar27[1];
        if (uVar18 != uVar15) {
          if (uVar30 <= uVar18) {
            uVar21 = 0;
            if (uVar30 != 0) {
              uVar21 = uVar18 / uVar30;
            }
            uVar18 = uVar18 - uVar21 * uVar30;
          }
          if (uVar18 != unaff_x26) goto LAB_00efd460;
        }
      } while (plVar27[2] != uVar15);
    }
  }
LAB_00efd5b4:
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_00c43ef0(&local_b8,param_3 + 0x30);
  local_90 = (long *)0x0;
  pbStack_88 = (byte *)0x0;
  if (local_b8[2] == param_3 + 0x28) {
    FUN_00e29918(&local_90,&local_b8);
  }
  puVar23 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b8 + 3);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar25 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar25;
        local_70[0] = *puVar23;
        FUN_00c44438(lVar25 + 0x8040,local_70);
      }
    }
    else if (sVar3 == 0) goto LAB_00efdaf4;
  }
  plVar32 = local_90;
  if (local_90 == (long *)0x0) {
    lVar25 = 0;
  }
  else {
    plVar31 = local_90 + 3;
    lVar25 = *local_90;
    do {
      sVar3 = (short)*plVar31;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *(short *)plVar31 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_90 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar26 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar26;
        local_b8 = (undefined8 *)*plVar32;
        FUN_00c44438(lVar26 + 0x8040,&local_b8);
      }
    }
    else if (sVar3 == 0) {
LAB_00efdaf4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  puVar11 = PTR_DAT_047dd8c0;
  puVar10 = PTR_DAT_047dd8b8;
  plVar32 = (long *)plVar27[3];
  plVar31 = (long *)plVar27[4];
  if (plVar32 != plVar31) {
    do {
      plVar19 = *(long **)(*plVar32 + 0x40);
      lVar26 = 0;
      if (plVar19 != (long *)0x0) {
        lVar26 = *plVar19;
      }
      if (lVar26 == lVar25) {
        plVar19 = (long *)(*(code *)**(undefined8 **)(*plVar32 + 0x28))();
        if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
          uVar17 = FUN_021d5edc();
          *(undefined8 *)puVar11 = uVar17;
          __cxa_guard_release(puVar10);
        }
        for (; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
          if (plVar19 == (long *)puVar11) goto LAB_00efd694;
        }
      }
      plVar32 = plVar32 + 1;
    } while (plVar32 != plVar31);
    plVar32 = plVar31;
  }
LAB_00efd694:
  if ((long *)plVar27[4] == plVar32) {
    plVar32 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar25 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar25 + 0x80)) {
LAB_00efe60c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = plVar32;
    *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
    plVar31 = (long *)(**(code **)(*plVar32 + 0x10))(plVar32,0xe0,8);
    if (plVar31 == (long *)0x0) {
      (**(code **)(*plVar32 + 0xe8))(plVar32);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    memset(plVar31,0,0xe0);
    FUN_00eff588(plVar31);
    plVar31[0xe] = 0;
    puVar10 = PTR_DAT_047dd8c8;
    *plVar31 = (long)(PTR_DAT_047dd8c8 + 0x10);
    plVar31[4] = (long)(puVar10 + 0xb0);
    plVar31[5] = (long)(puVar10 + 0x110);
    *(undefined4 *)((long)plVar31 + 0x84) = 1;
    nn::os::InitializeLightEvent(plVar31 + 0xf,0,1);
    plVar31[0x13] = 0;
    plVar31[0x14] = 0;
    plVar31[0x11] = 0;
    plVar31[0x12] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar26 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar26 == 0) || (*(long *)(lVar26 + 0x80) == 0)) ||
        (plVar19 = *(long **)(lVar26 + *(long *)(lVar26 + 0x80) * 8 + -8), plVar19 == (long *)0x0))
       && (plVar19 = *(long **)(lVar14 + 0x30), plVar19 == (long *)0x0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04859438), iVar13 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar19 = DAT_04859430;
      *(long **)(lVar14 + 0x30) = DAT_04859430;
    }
    plVar31[0x14] = (long)plVar19;
    plVar31[0x15] = 0;
    *(undefined4 *)((long)plVar31 + 0xbc) = 1;
    nn::os::InitializeLightEvent(plVar31 + 0x16,0,1);
    plVar31[0x1a] = 0;
    plVar31[0x1b] = 0;
    plVar31[0x18] = 0;
    plVar31[0x19] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar26 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar26 == 0) || (*(long *)(lVar26 + 0x80) == 0)) ||
        (plVar19 = *(long **)(lVar26 + *(long *)(lVar26 + 0x80) * 8 + -8), plVar19 == (long *)0x0))
       && (plVar19 = *(long **)(lVar14 + 0x30), plVar19 == (long *)0x0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04859438), iVar13 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar19 = DAT_04859430;
      *(long **)(lVar14 + 0x30) = DAT_04859430;
    }
    plVar31[0x1b] = (long)plVar19;
    plVar31[1] = (long)plVar32;
    plVar31[2] = (long)plVar31;
    *(undefined4 *)(plVar31 + 3) = 0x800e0;
    *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
    lVar14 = plVar31[6];
    if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar17;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_00e2a578(plVar31,param_3);
    uVar15 = (**(code **)(*param_1 + 0x88))(param_1,&local_e0);
    if ((uVar15 & 1) != 0) {
      FUN_00f505cc(plVar31,0);
    }
    puVar23 = (undefined8 *)plVar27[4];
    if (puVar23 < (undefined8 *)plVar27[5]) {
      lVar14 = plVar27[6];
      if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar25 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar25 == 0) {
        *puVar23 = plVar31;
      }
      else {
        if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_00efe60c;
        *(long *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = lVar14;
        *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
        *puVar23 = plVar31;
        *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
      }
      plVar27[4] = (long)(puVar23 + 1);
    }
    else {
      uVar30 = plVar27[7];
      lVar14 = (long)puVar23 - plVar27[3] >> 3;
      uVar15 = lVar14 + 1;
      if (0x7ffffffffffffffe < uVar30) {
        uVar30 = 0x7fffffffffffffff;
      }
      if (uVar30 < uVar15) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar25 = plVar27[5] - plVar27[3];
      uVar18 = lVar25 >> 2;
      if (uVar15 <= uVar18) {
        uVar15 = uVar18;
      }
      if (uVar30 >> 1 <= (ulong)(lVar25 >> 3)) {
        uVar15 = uVar30;
      }
      if (uVar15 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = (**(code **)(*(long *)plVar27[6] + 0x10))((long *)plVar27[6],uVar15 << 3,8);
        if (lVar25 == 0) {
          (**(code **)(*(long *)plVar27[6] + 0xe8))();
        }
      }
      lVar26 = plVar27[6];
      puVar23 = (undefined8 *)(lVar25 + lVar14 * 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar14 == 0) {
        *puVar23 = plVar31;
      }
      else {
        if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00efe60c;
        *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar26;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        *puVar23 = plVar31;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      }
      plVar32 = (long *)plVar27[3];
      plVar31 = (long *)plVar27[4];
      puVar33 = puVar23;
      if (plVar31 == plVar32) {
        plVar31 = plVar32;
      }
      else {
        do {
          lVar14 = plVar27[6];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar26 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar26 == 0) {
            lVar14 = plVar31[-1];
            plVar31[-1] = 0;
            puVar33[-1] = lVar14;
          }
          else {
            if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_00efe60c;
            *(long *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = lVar14;
            *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
            lVar14 = plVar31[-1];
            plVar31[-1] = 0;
            puVar33[-1] = lVar14;
            *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
          }
          plVar31 = plVar31 + -1;
          puVar33 = puVar33 + -1;
        } while (plVar32 != plVar31);
        plVar32 = (long *)plVar27[3];
        plVar31 = (long *)plVar27[4];
      }
      lVar14 = plVar27[5];
      plVar27[3] = (long)puVar33;
      plVar27[4] = (long)(puVar23 + 1);
      plVar27[5] = lVar25 + uVar15 * 8;
      while (plVar31 != plVar32) {
        plVar31 = plVar31 + -1;
        plVar19 = (long *)*plVar31;
        if (plVar19 != (long *)0x0) {
          lVar25 = plVar19[6];
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*plVar19 + 0x50))();
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      if (plVar32 != (long *)0x0) {
        plVar31 = (long *)plVar27[6];
        uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
        if (((uVar15 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
          (**(code **)(*plVar31 + 0x18))(plVar31,plVar32,lVar14 - (long)plVar32,8);
        }
        else {
          FUN_00c48fe8(plVar31,plVar32,lVar14 - (long)plVar32,8);
        }
      }
    }
    plVar32 = (long *)(plVar27[4] + -8);
  }
  puVar12 = PTR_DAT_047d4e08;
  puVar11 = PTR_DAT_047d3e30;
  puVar10 = PTR_DAT_047d3e28;
  plVar31 = *(long **)((long)local_f0 + 0x38);
  for (plVar27 = *(long **)((long)local_f0 + 0x30); plVar27 != plVar31; plVar27 = plVar27 + 1) {
    pbVar20 = (byte *)*plVar27;
    __s_00 = *(byte **)(pbVar20 + 0x10);
    if ((*pbVar20 & 1) == 0) {
      __s_00 = pbVar20 + 1;
    }
    if (__s_00 == (byte *)0x0) {
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar11,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar10);
      }
      local_90 = *(long **)puVar11;
      pbStack_88 = *(byte **)(puVar11 + 8);
      local_80 = *(size_t *)(puVar11 + 0x10);
      local_78 = *(long **)(puVar11 + 0x18);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
    }
    else {
      local_80 = strlen((char *)__s_00);
      bVar4 = *__s_00;
      if (bVar4 == 0) {
        local_90 = (long *)&DAT_cbf29ce484222645;
      }
      else {
        local_90 = (long *)&DAT_cbf29ce484222645;
        pbVar20 = __s_00;
        do {
          pbVar20 = pbVar20 + 1;
          local_90 = (long *)(((ulong)local_90 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar20;
        } while (bVar4 != 0);
      }
      local_78 = (long *)0x0;
      pbStack_88 = __s_00;
    }
    if (local_90 == (long *)0x5d950d67a31673a9) {
      if (((*PTR_DAT_047d4df8 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      local_b8 = (undefined8 *)(param_3 + 0x40);
      uVar17 = *(undefined8 *)PTR_DAT_047d4e00;
      *(undefined8 *)puVar12 = uVar17;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      lVar14 = *(long *)(*plVar27 + 0x18);
      FUN_00f01280(uVar17,&local_b8,&local_90,lVar14,*(long *)(*plVar27 + 0x20) - lVar14);
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
  }
  FUN_00effa04(*plVar32,&local_f0);
  if (!bVar7) {
    *plVar28 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar28 + 1));
  }
  if (local_e8 != (long *)0x0) {
    plVar28 = local_e8 + 1;
    do {
      lVar14 = *plVar28;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar7) {
        *plVar28 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_e8 + 0x10))(local_e8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (!bVar8) {
    *plVar29 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar29 + 1));
  }
  return 0;
code_r0x00efe018:
  cVar6 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
  if (bVar8) {
    *plVar29 = lVar14;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00efe0cc;
  goto LAB_00efe010;
code_r0x00efd33c:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar7) {
    *plVar28 = lVar25;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00efd344;
  goto LAB_00efd334;
}


