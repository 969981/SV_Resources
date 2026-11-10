/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012037cc; name: FUN_012037cc
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_012037cc(long param_1,ulong *param_2,byte param_3)

{
  short *psVar1;
  code *pcVar2;
  ulong *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  short sVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  ulong unaff_x23;
  char *pcVar27;
  long *plVar28;
  undefined8 uVar29;
  long *plVar30;
  float fVar31;
  long *local_128;
  undefined1 auStack_118 [8];
  undefined8 local_110;
  long *local_100;
  long *local_f8;
  long *local_f0;
  code *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 auStack_d0 [112];
  
  uVar19 = *(ulong *)(param_1 + 0x450);
  plVar30 = (long *)(param_1 + 0x448);
  if (uVar19 != 0) {
    uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar17 = *param_2;
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar12 = uVar19 - 1 & uVar17;
    }
    else if (uVar17 < uVar19) {
      uVar12 = uVar17;
    }
    else {
      uVar12 = 0;
      if (uVar19 != 0) {
        uVar12 = uVar17 / uVar19;
      }
      uVar12 = uVar17 - uVar12 * uVar19;
    }
    puVar23 = *(undefined8 **)(*plVar30 + uVar12 * 8);
    if ((puVar23 != (undefined8 *)0x0) && (plVar28 = (long *)*puVar23, plVar28 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar28[1] == uVar17) {
            if (plVar28[2] == uVar17) goto LAB_012038ec;
          }
          else if ((plVar28[1] & uVar19 - 1) != uVar12) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar28[1];
          if (uVar20 == uVar17) {
            if (plVar28[2] == uVar17) goto LAB_012038ec;
          }
          else {
            if (uVar19 <= uVar20) {
              uVar16 = 0;
              if (uVar19 != 0) {
                uVar16 = uVar20 / uVar19;
              }
              uVar20 = uVar20 - uVar16 * uVar19;
            }
            if (uVar20 != uVar12) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
  lVar18 = *(long *)(param_1 + 0x418);
  if ((lVar18 == 0) || (*(short *)(lVar18 + 0x1a) == 0)) {
    return (long *)0x0;
  }
  psVar1 = (short *)(lVar18 + 0x1a);
  sVar9 = *(short *)(lVar18 + 0x1a);
LAB_0120394c:
  sVar4 = *psVar1;
  if (sVar4 == sVar9) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_01203970;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01203970:
    bVar6 = false;
  }
  if (!bVar6) goto code_r0x01203978;
  if (*(long *)(lVar18 + 0x10) == 0) {
    return (long *)0x0;
  }
  plVar28 = (long *)(*(long *)(lVar18 + 0x10) + -0x28);
  puVar23 = (undefined8 *)FUN_01df7f84(plVar28);
  plVar24 = (long *)*puVar23;
  if (plVar24 == (long *)0x0) {
    sVar9 = -1;
  }
  else {
    plVar26 = plVar24 + 5;
    do {
      lVar18 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = (int)lVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar18 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    sVar9 = FUN_00c8ea20(plVar24,param_2);
    do {
      lVar18 = *plVar26;
      iVar10 = (int)lVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 != 0) {
      if ((int)lVar18 != 0) goto LAB_012039ec;
LAB_012047f4:
      pcVar27 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar13 = "DecrementReferenceInternal";
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar15 = "Reference counter underflows.";
      goto LAB_012047c4;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
LAB_012039ec:
  (**(code **)(*plVar28 + 0x60))(plVar28);
  if (sVar9 < 0) {
    return (long *)0x0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x4b0));
  plVar24 = (long *)FUN_01233940(&local_f0,*(undefined8 *)(param_1 + 8));
  if (plVar24 == (long *)0x0) goto LAB_01203a28;
  lVar18 = plVar24[6];
  if (*(long *)(lVar18 + 0x10) == 0) goto LAB_01204784;
  psVar1 = (short *)(lVar18 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 != 0) {
    if (sVar4 != -1) goto LAB_01203a28;
LAB_012047a4:
    pcVar27 = "count != 0";
    pcVar13 = "AddReference";
    pcVar14 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar15 = "Reference counter overflows.";
LAB_012047c4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar27,pcVar13,pcVar14,0x58,pcVar15);
  }
  uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
  *(undefined8 *)(lVar18 + 8) = uVar11;
  *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
LAB_01203a28:
  uVar11 = FUN_00cf8198(plVar24);
  FUN_00c9e664(&local_f0,param_1 + 0xe8);
  lVar18 = 0;
  if (local_e8 != (code *)0x0) {
    lVar18 = *(long *)(local_e8 + 0x48);
  }
  FUN_01221800(&local_f8,lVar18 + 0x368,param_2);
  if (local_e8 != (code *)0x0) {
    pcVar2 = local_e8 + 0x28;
    do {
      iVar10 = *(int *)pcVar2;
      iVar7 = iVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar6) {
        *(int *)pcVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*(long *)local_e8 + 0x10))();
    }
    else if (iVar10 == 0) goto LAB_012047f4;
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x60))();
  }
  if (((*PTR_DAT_047d8280 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  uVar29 = *(undefined8 *)PTR_DAT_047d8288;
  *(undefined8 *)PTR_DAT_047d8290 = uVar29;
  FUN_0135d26c(&local_f0,&local_f8);
  FUN_0160c898(uVar29,uVar11,&local_f0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (plVar24 != (long *)0x0) {
    lVar18 = plVar24[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_01204784;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar29 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar29;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_012047a4;
  }
  pcVar27 = (char *)param_2[1];
  if ((pcVar27 == (char *)0x0) || (*pcVar27 == '\0')) {
    local_128 = (long *)FUN_00d44228();
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x18))();
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar29 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar29;
    FUN_00cf9884(&local_f0,uVar29,pcVar27);
    local_128 = local_f0;
  }
  if (plVar24 != (long *)0x0) {
    lVar18 = plVar24[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_01204784;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar29 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar29;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_012047a4;
    lVar18 = plVar24[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar24 + 0x50))(plVar24);
    }
    else if (sVar4 == 0) goto LAB_012047cc;
  }
  puVar3 = (ulong *)PTR_DAT_047d8b70;
  if (local_128 != (long *)0x0) {
    puVar3 = (ulong *)(local_128 + 6);
  }
  uVar20 = *puVar3;
  uVar19 = *(ulong *)(param_1 + 0x450);
  if (uVar19 == 0) {
LAB_01203c6c:
    plVar28 = (long *)(**(code **)(**(long **)(param_1 + 0x480) + 0x10))
                                (*(long **)(param_1 + 0x480),0x30,8);
    if (plVar28 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x480) + 0xe8))();
    }
    uVar29 = *(undefined8 *)(param_1 + 0x480);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar18 != 0) {
      if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar29;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    }
    plVar28[2] = *puVar3;
    plVar28[3] = (long)local_128;
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x18))();
    }
    plVar28[4] = (long)plVar24;
    if (plVar24 != (long *)0x0) {
      lVar25 = plVar24[6];
      if (*(long *)(lVar25 + 0x10) == 0) {
LAB_01204784:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar25 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar29 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
        *(undefined8 *)(lVar25 + 8) = uVar29;
        *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) goto LAB_012047a4;
    }
    *(byte *)((long)plVar28 + 0x2a) = param_3 & 1;
    *(short *)(plVar28 + 5) = sVar9;
    if (lVar18 != 0) {
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    }
    *plVar28 = 0;
    plVar28[1] = uVar20;
    fVar31 = (float)(*(long *)(param_1 + 0x4a0) + 1);
    if ((uVar19 == 0) || (*(float *)(param_1 + 0x4a8) * (float)uVar19 < fVar31)) {
      uVar19 = (ulong)(uVar19 < 3 || (uVar19 & uVar19 - 1) != 0) | uVar19 << 1;
      uVar17 = (ulong)(fVar31 / *(float *)(param_1 + 0x4a8));
      if (uVar17 <= uVar19) {
        uVar17 = uVar19;
      }
      if (uVar17 - 1 == 0) {
        uVar17 = 2;
      }
      else if ((uVar17 & uVar17 - 1) != 0) {
        uVar17 = std::__next_prime(uVar17);
      }
      uVar19 = *(ulong *)(param_1 + 0x450);
      if (uVar19 < uVar17) {
        uVar12 = uVar17;
LAB_01203e18:
        FUN_029a34ec(plVar30,uVar12);
      }
      else if (uVar17 < uVar19) {
        uVar12 = (ulong)((float)*(ulong *)(param_1 + 0x4a0) / *(float *)(param_1 + 0x4a8));
        if ((uVar19 < 3) ||
           (uVar16 = uVar19 - (uVar19 >> 1 & 0x5555555555555555),
           uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333),
           1 < (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar12 = std::__next_prime(uVar12);
        }
        else if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
        if (uVar12 <= uVar17) {
          uVar12 = uVar17;
        }
        if (uVar12 < uVar19) goto LAB_01203e18;
      }
      uVar19 = *(ulong *)(param_1 + 0x450);
      if ((uVar19 & uVar19 - 1) == 0) {
        unaff_x23 = uVar19 - 1 & uVar20;
      }
      else if (uVar20 < uVar19) {
        unaff_x23 = uVar20;
      }
      else {
        uVar17 = 0;
        if (uVar19 != 0) {
          uVar17 = uVar20 / uVar19;
        }
        unaff_x23 = uVar20 - uVar17 * uVar19;
      }
    }
    plVar26 = *(long **)(*plVar30 + unaff_x23 * 8);
    if (plVar26 == (long *)0x0) {
      *plVar28 = *(long *)(param_1 + 0x478);
      *(long **)(param_1 + 0x478) = plVar28;
      *(long *)(*(long *)(param_1 + 0x448) + unaff_x23 * 8) = param_1 + 0x478;
      if (*plVar28 != 0) {
        uVar20 = *(ulong *)(*plVar28 + 8);
        if ((uVar19 & uVar19 - 1) == 0) {
          uVar20 = uVar20 & uVar19 - 1;
        }
        else if (uVar19 <= uVar20) {
          uVar17 = 0;
          if (uVar19 != 0) {
            uVar17 = uVar20 / uVar19;
          }
          uVar20 = uVar20 - uVar17 * uVar19;
        }
        plVar26 = (long *)(*plVar30 + uVar20 * 8);
        goto LAB_01203ee8;
      }
    }
    else {
      *plVar28 = *plVar26;
LAB_01203ee8:
      *plVar26 = (long)plVar28;
    }
    *(long *)(param_1 + 0x4a0) = *(long *)(param_1 + 0x4a0) + 1;
  }
  else {
    uVar17 = uVar19 - 1;
    if ((uVar19 & uVar17) != 0) {
      unaff_x23 = uVar20;
      if (uVar19 <= uVar20) {
        uVar17 = 0;
        if (uVar19 != 0) {
          uVar17 = uVar20 / uVar19;
        }
        unaff_x23 = uVar20 - uVar17 * uVar19;
      }
      plVar28 = *(long **)(*plVar30 + unaff_x23 * 8);
      if (plVar28 != (long *)0x0) {
        while (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0) {
          uVar17 = plVar28[1];
          if (uVar17 != uVar20) {
            if (uVar19 <= uVar17) {
              uVar12 = 0;
              if (uVar19 != 0) {
                uVar12 = uVar17 / uVar19;
              }
              uVar17 = uVar17 - uVar12 * uVar19;
            }
            if (uVar17 != unaff_x23) break;
          }
          if (plVar28[2] == uVar20) goto LAB_01203efc;
        }
      }
      goto LAB_01203c6c;
    }
    unaff_x23 = uVar17 & uVar20;
    plVar28 = *(long **)(*plVar30 + unaff_x23 * 8);
    if (plVar28 == (long *)0x0) goto LAB_01203c6c;
    do {
      plVar28 = (long *)*plVar28;
      if ((plVar28 == (long *)0x0) || (plVar28[1] != uVar20 && (plVar28[1] & uVar17) != unaff_x23))
      goto LAB_01203c6c;
    } while (plVar28[2] != uVar20);
  }
LAB_01203efc:
  if ((*(long *)(param_1 + 0x750) != 0) && (**(char **)(*(long *)(param_1 + 0x750) + 0x38) != '\0'))
  {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar18 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar18;
    FUN_0135d26c(auStack_118,param_1 + 0x750);
    memset(&local_f0,0,0x80);
    iVar10 = FUN_0177ffac(lVar18,auStack_118,uVar11,0);
    if (iVar10 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar18 + 0x220),auStack_118,iVar10,uVar11,0,&local_f0,0);
      pcVar2 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = 0;
        local_d8 = (long *)0x0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar2)(auStack_d0);
      }
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
  }
  if (*(long *)(param_1 + 600) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x168));
    puVar8 = PTR_LAB_047d89a8;
    plVar30 = *(long **)(param_1 + 0x298);
    plVar26 = *(long **)(param_1 + 0x2a0);
joined_r0x01203f34:
    if (plVar30 == plVar26) {
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x168));
      goto LAB_01204108;
    }
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
      FUN_00100190(puVar8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar18 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar18;
    FUN_0135d26c(&local_f0,plVar30);
    puVar3 = (ulong *)PTR_DAT_047d8b70;
    if (*plVar30 != 0) {
      puVar3 = (ulong *)(*plVar30 + 0x30);
    }
    uVar19 = (*(long **)(param_1 + 600))[1];
    if (uVar19 == 0) {
LAB_01204410:
      plVar22 = (long *)0x0;
    }
    else {
      uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar17 = *puVar3;
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar12 = uVar19 - 1 & uVar17;
      }
      else if (uVar17 < uVar19) {
        uVar12 = uVar17;
      }
      else {
        uVar12 = 0;
        if (uVar19 != 0) {
          uVar12 = uVar17 / uVar19;
        }
        uVar12 = uVar17 - uVar12 * uVar19;
      }
      plVar21 = *(long **)(**(long **)(param_1 + 600) + uVar12 * 8);
      if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
      goto LAB_01204410;
      if (uVar20 < 2) {
        do {
          if (plVar21[1] == uVar17) {
            if (plVar21[2] == uVar17) goto LAB_01204068;
          }
          else if ((plVar21[1] & uVar19 - 1) != uVar12) goto LAB_01204410;
          plVar21 = (long *)*plVar21;
          plVar22 = (long *)0x0;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar21[1];
          if (uVar20 == uVar17) {
            if (plVar21[2] == uVar17) goto LAB_01204068;
          }
          else {
            if (uVar19 <= uVar20) {
              uVar16 = 0;
              if (uVar19 != 0) {
                uVar16 = uVar20 / uVar19;
              }
              uVar20 = uVar20 - uVar16 * uVar19;
            }
            if (uVar20 != uVar12) goto LAB_01204410;
          }
          plVar21 = (long *)*plVar21;
          plVar22 = (long *)0x0;
        } while (plVar21 != (long *)0x0);
      }
    }
    goto LAB_0120406c;
  }
LAB_01204108:
  if (*(long *)(param_1 + 0x278) == 0) {
LAB_012042ec:
    if (plVar24 != (long *)0x0) {
      lVar18 = plVar24[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar24 + 0x50))(plVar24);
      }
      else if (sVar9 == 0) goto LAB_012047cc;
    }
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (plVar24 != (long *)0x0) {
      lVar18 = plVar24[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar24 + 0x50))(plVar24);
      }
      else if (sVar9 == 0) {
LAB_012047cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x4b0));
    goto LAB_012038f0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  puVar8 = PTR_LAB_047d89a8;
  plVar30 = *(long **)(param_1 + 0x2d0);
  plVar26 = *(long **)(param_1 + 0x2d8);
joined_r0x0120412c:
  if (plVar30 == plVar26) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
    goto LAB_012042ec;
  }
  if (((*PTR_DAT_047d8280 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
    FUN_00100190(puVar8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar18 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar18;
  FUN_0135d26c(&local_f0,plVar30);
  puVar3 = (ulong *)PTR_DAT_047d8b70;
  if (*plVar30 != 0) {
    puVar3 = (ulong *)(*plVar30 + 0x30);
  }
  uVar19 = (*(long **)(param_1 + 0x278))[1];
  if (uVar19 == 0) {
LAB_0120443c:
    plVar22 = (long *)0x0;
  }
  else {
    uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar17 = *puVar3;
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar12 = uVar19 - 1 & uVar17;
    }
    else if (uVar17 < uVar19) {
      uVar12 = uVar17;
    }
    else {
      uVar12 = 0;
      if (uVar19 != 0) {
        uVar12 = uVar17 / uVar19;
      }
      uVar12 = uVar17 - uVar12 * uVar19;
    }
    plVar21 = *(long **)(**(long **)(param_1 + 0x278) + uVar12 * 8);
    if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
    goto LAB_0120443c;
    if (uVar20 < 2) {
      do {
        if (plVar21[1] == uVar17) {
          if (plVar21[2] == uVar17) goto LAB_0120428c;
        }
        else if ((plVar21[1] & uVar19 - 1) != uVar12) goto LAB_0120443c;
        plVar21 = (long *)*plVar21;
        plVar22 = (long *)0x0;
      } while (plVar21 != (long *)0x0);
    }
    else {
      do {
        uVar20 = plVar21[1];
        if (uVar20 == uVar17) {
          if (plVar21[2] == uVar17) goto LAB_0120428c;
        }
        else {
          if (uVar19 <= uVar20) {
            uVar16 = 0;
            if (uVar19 != 0) {
              uVar16 = uVar20 / uVar19;
            }
            uVar20 = uVar20 - uVar16 * uVar19;
          }
          if (uVar20 != uVar12) goto LAB_0120443c;
        }
        plVar21 = (long *)*plVar21;
        plVar22 = (long *)0x0;
      } while (plVar21 != (long *)0x0);
    }
  }
  goto LAB_01204290;
code_r0x01203978:
  sVar9 = sVar4;
  if (sVar4 == 0) {
    return (long *)0x0;
  }
  goto LAB_0120394c;
LAB_01204068:
  plVar22 = plVar21;
LAB_0120406c:
  FUN_0135d26c(auStack_118,plVar22 + 3);
  plVar21 = *(long **)(*(long *)(lVar18 + 0x200) + 0x60);
  (**(code **)(*plVar21 + 0xa8))(plVar21,local_e8,local_110,uVar11);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  plVar30 = plVar30 + 1;
  goto joined_r0x01203f34;
LAB_0120428c:
  plVar22 = plVar21;
LAB_01204290:
  plVar21 = *(long **)(*(long *)(lVar18 + 0x200) + 0x60);
  (**(code **)(*plVar21 + 0x98))((int)plVar22[3],plVar21,local_e8,uVar11,0,4,0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  plVar30 = plVar30 + 1;
  goto joined_r0x0120412c;
LAB_012038ec:
  if (((param_3 & 1) != 0) && (*(char *)((long)plVar28 + 0x2a) == '\0')) {
    *(undefined1 *)((long)plVar28 + 0x2a) = 1;
  }
LAB_012038f0:
  return plVar28 + 3;
}


