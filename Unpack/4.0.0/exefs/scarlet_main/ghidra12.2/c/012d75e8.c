/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d75e8; name: FUN_012d75e8
 */


long FUN_012d75e8(long param_1,ulong *param_2)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong local_a8;
  ulong local_a0;
  ulong uStack_98;
  long *local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  uVar21 = *(ulong *)(param_1 + 0x108);
  if (uVar21 != 0) {
    uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    local_a8 = *param_2;
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar20 = uVar21 - 1 & local_a8;
    }
    else {
      uVar20 = local_a8;
      if (uVar21 <= local_a8) {
        uVar20 = 0;
        if (uVar21 != 0) {
          uVar20 = local_a8 / uVar21;
        }
        uVar20 = local_a8 - uVar20 * uVar21;
      }
    }
    plVar23 = *(long **)(*(long *)(param_1 + 0x100) + uVar20 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar23[1] == local_a8) {
            if (plVar23[2] == local_a8) {
LAB_012d76f0:
              local_a0 = param_2[1];
              uStack_98 = param_2[2];
              plVar23 = (long *)param_2[3];
              local_90 = plVar23;
              if (plVar23 == (long *)0x0) {
                lVar26 = FUN_00f839cc(param_1,&local_a8);
                return lVar26;
              }
              (**(code **)(*plVar23 + 0x18))(plVar23);
              lVar26 = FUN_00f839cc(param_1,&local_a8);
              (**(code **)(*plVar23 + 0x20))(plVar23);
              return lVar26;
            }
          }
          else if ((plVar23[1] & uVar21 - 1) != uVar20) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar23[1];
          if (uVar22 == local_a8) {
            if (plVar23[2] == local_a8) goto LAB_012d76f0;
          }
          else {
            if (uVar21 <= uVar22) {
              uVar8 = 0;
              if (uVar21 != 0) {
                uVar8 = uVar22 / uVar21;
              }
              uVar22 = uVar22 - uVar8 * uVar21;
            }
            if (uVar22 != uVar20) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  lVar26 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168) >> 3;
  plVar23 = (long *)FUN_00c8f0cc((long *)(param_1 + 0x100),param_2);
  *plVar23 = lVar26;
  plVar23 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_012d7e58:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar23;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0xd0,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*plVar23 + 0xe8))(plVar23);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  local_70 = (long *)param_2[3];
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  puVar9 = PTR_DAT_047d66f8;
  plVar12[2] = 0;
  *(undefined4 *)(plVar12 + 3) = 0;
  *plVar12 = (long)(puVar9 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  puVar9 = PTR_DAT_047d8c78;
  if (lVar13 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    if (*(long *)(lVar13 + 0x80) != 0) {
      lVar19 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8);
    }
  }
  *plVar12 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar12[1] = lVar19;
  plVar12[4] = (long)(puVar9 + 0x88);
  plVar14 = plVar12 + 5;
  *plVar14 = (long)(puVar9 + 0xd8);
  plVar12[7] = 0;
  plVar12[6] = 0;
  FUN_00d1a3f4(plVar12 + 6,plVar14);
  *plVar12 = (long)&PTR_FUN_045eaf08;
  plVar12[4] = (long)&PTR_LAB_045eaf80;
  *plVar14 = (long)&DAT_045eafd0;
  FUN_00daf940(plVar12 + 8,&local_88);
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[9] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
     (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) {
    lVar19 = tpidr_el0;
    lVar13 = *(long *)(lVar19 + 0x30);
    if (lVar13 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar13 = DAT_04859430;
      *(long *)(lVar19 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(plVar12 + 0xf) = 0;
  plVar12[0xc] = lVar13;
  plVar12[0xd] = 0x492492492492492;
  plVar12[0xe] = 0;
  plVar12[0x10] = 0;
  plVar12[0x11] = 0;
  FUN_012d82d8(plVar12 + 0x12);
  plVar12[0x17] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  lVar13 = FUN_012d800c(auStack_68,plVar12[1]);
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 0x28);
    do {
      iVar10 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar14 = (long *)plVar12[0x19];
  plVar12[0x19] = 0;
  if (plVar14 != (long *)0x0) {
    plVar3 = plVar14 + 5;
    do {
      lVar19 = *plVar3;
      iVar10 = (int)lVar19 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    else if ((int)lVar19 == 0) {
      pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar16 = "DecrementReferenceInternal";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar18 = "Reference counter underflows.";
      goto LAB_012d7dec;
    }
  }
  plVar12[0x19] = lVar13;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  *(undefined4 *)(plVar12 + 3) = 0x800d0;
  plVar12[1] = (long)plVar23;
  plVar12[2] = (long)plVar12;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  lVar11 = plVar12[6];
  if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar2 = (short *)(lVar11 + 0x1a);
  do {
    sVar4 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar4 == 0) {
    uVar24 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    *(undefined8 *)(lVar11 + 8) = uVar24;
    *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) {
    pcVar15 = "count != 0";
    pcVar16 = "AddReference";
    pcVar17 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar18 = "Reference counter overflows.";
LAB_012d7dec:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar15,pcVar16,pcVar17,0x58,pcVar18);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x170);
  if (puVar5 < *(undefined8 **)(param_1 + 0x178)) {
    uVar24 = *(undefined8 *)(param_1 + 0x180);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *puVar5 = plVar12;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012d7e58;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar24;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar5 = plVar12;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x170) = puVar5 + 1;
  }
  else {
    uVar22 = *(ulong *)(param_1 + 0x188);
    lVar11 = (long)puVar5 - *(long *)(param_1 + 0x168) >> 3;
    uVar21 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar22) {
      uVar22 = 0x7fffffffffffffff;
    }
    if (uVar22 < uVar21) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = (long)*(undefined8 **)(param_1 + 0x178) - *(long *)(param_1 + 0x168);
    uVar20 = lVar13 >> 2;
    if (uVar21 <= uVar20) {
      uVar21 = uVar20;
    }
    if (uVar22 >> 1 <= (ulong)(lVar13 >> 3)) {
      uVar21 = uVar22;
    }
    if (uVar21 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(**(long **)(param_1 + 0x180) + 0x10))
                         (*(long **)(param_1 + 0x180),uVar21 << 3,8);
      if (lVar13 == 0) {
        (**(code **)(**(long **)(param_1 + 0x180) + 0xe8))();
      }
    }
    puVar5 = (undefined8 *)(lVar13 + lVar11 * 8);
    uVar24 = *(undefined8 *)(param_1 + 0x180);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *puVar5 = plVar12;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012d7e58;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar24;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar5 = plVar12;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    plVar23 = *(long **)(param_1 + 0x168);
    plVar12 = *(long **)(param_1 + 0x170);
    puVar25 = puVar5;
    if (plVar12 == plVar23) {
      plVar12 = plVar23;
    }
    else {
      do {
        uVar24 = *(undefined8 *)(param_1 + 0x180);
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 == 0) {
          lVar11 = plVar12[-1];
          plVar12[-1] = 0;
          puVar25[-1] = lVar11;
        }
        else {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012d7e58;
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar24;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          lVar19 = plVar12[-1];
          plVar12[-1] = 0;
          puVar25[-1] = lVar19;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        plVar12 = plVar12 + -1;
        puVar25 = puVar25 + -1;
      } while (plVar23 != plVar12);
      plVar12 = *(long **)(param_1 + 0x168);
      plVar23 = *(long **)(param_1 + 0x170);
    }
    *(undefined8 **)(param_1 + 0x168) = puVar25;
    *(undefined8 **)(param_1 + 0x170) = puVar5 + 1;
    lVar11 = *(long *)(param_1 + 0x178);
    *(ulong *)(param_1 + 0x178) = lVar13 + uVar21 * 8;
    while (plVar23 != plVar12) {
      plVar23 = plVar23 + -1;
      plVar14 = (long *)*plVar23;
      if (plVar14 != (long *)0x0) {
        lVar13 = plVar14[6];
        psVar2 = (short *)(lVar13 + 0x1a);
        do {
          sVar4 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar23 = *(long **)(param_1 + 0x180);
      lVar11 = lVar11 - (long)plVar12;
      uVar21 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar21 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,plVar12,lVar11,8);
      }
      else {
        FUN_00c48fe8(plVar23,plVar12,lVar11,8);
      }
    }
  }
  return lVar26;
}


