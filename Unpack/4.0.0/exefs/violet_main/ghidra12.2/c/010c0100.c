/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010c0100; name: FUN_010c0100
 */


void FUN_010c0100(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  char *pcVar13;
  void *__s;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 local_a8 [8];
  char *local_a0;
  undefined8 local_98;
  long *local_90;
  size_t local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  undefined1 auStack_68 [8];
  
  param_1[2] = 0;
  puVar8 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar8 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar11 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar18 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d6e70;
  param_1[1] = lVar18;
  param_1[4] = (long)&PTR_LAB_045d6f08;
  *(undefined4 *)(param_1 + 9) = 7;
  param_1[8] = 0;
  *(undefined2 *)((long)param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[6] = (long)&PTR_LAB_045d6f38;
  param_1[7] = 0;
  param_1[0xb] = 0;
  FUN_010c0dfc(param_1 + 0xd);
  plVar14 = param_1 + 0x12;
  *plVar14 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  lVar11 = param_1[1];
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = lVar11;
  param_1[0x17] = 0;
  param_1[0x18] = lVar11;
  param_1[0x19] = 0x38e38e38e38e38e;
  param_1[0x1a] = 0;
  param_1[0x1c] = lVar11;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = lVar11;
  param_1[0x21] = 0x38e38e38e38e38e;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
     (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) {
    lVar18 = tpidr_el0;
    lVar11 = *(long *)(lVar18 + 0x30);
    if (lVar11 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar11 = DAT_04859430;
      *(long *)(lVar18 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x29] = lVar11;
  param_1[0x2a] = 0x1fffffffffffffff;
  param_1[0x2b] = 0;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  local_c8 = DAT_0485a0a0;
  local_a8 = (undefined1  [8])0x20;
  local_a0 = (char *)0x4;
  lVar18 = FUN_00cf3764(&local_88,DAT_0485a0a0[1],&local_c8);
  lVar11 = 0;
  if (lVar18 != 0) {
    piVar1 = (int *)(lVar18 + 0x28);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 != -1) {
      lVar11 = lVar18;
      goto LAB_010c02a4;
    }
LAB_010c0b70:
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
    ;
LAB_010c0b90:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",pcVar13,0x53,"Reference counter overflows."
              );
  }
LAB_010c02a4:
  FUN_00d560a0(lVar11,local_a8,2,0,0);
  plVar12 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar12 != (long *)0x0) {
    plVar16 = plVar12 + 5;
    do {
      lVar11 = *plVar16;
      iVar10 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_010c0c64;
  }
  param_1[0x14] = lVar18;
  uVar4 = *(uint *)(param_2 + 0x158) | 3;
  *(uint *)(param_2 + 0x158) = uVar4;
  if (*(long *)(param_2 + 0x110) == *(long *)(param_2 + 0x108)) {
    local_88 = 0;
  }
  else {
    *(uint *)(param_2 + 0x158) = uVar4;
    local_88 = (long)*(int *)(*(long *)(param_2 + 0x108) + 0x44) * 0x30;
  }
  uStack_80 = 0x20;
  local_78 = 0;
  local_c8 = DAT_0485a0a0;
  lVar11 = FUN_00cf3764(local_a8,DAT_0485a0a0[1],&local_c8);
  if (lVar11 == 0) {
    lVar18 = 0;
  }
  else {
    piVar1 = (int *)(lVar11 + 0x28);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == -1) goto LAB_010c0b70;
    lVar18 = lVar11;
  }
  lVar19 = *(long *)(*(long *)(lVar18 + 0x70) + 0x30);
  local_a8 = *(undefined1 (*) [8])(lVar19 + 8);
  local_a0 = *(char **)(lVar19 + 0x6098);
  local_98 = lVar19 + 0x10;
  _local_a8 = FUN_00d56874(*(undefined8 *)(lVar19 + 0x6140),local_a8,&local_88,0,0);
  local_98 = local_98 & 0xffffffffffffff00;
  FUN_00d56380(lVar18 + 0x30,local_a8);
  uVar9 = FUN_00d56320(lVar18 + 0x30);
  *(undefined4 *)(lVar18 + 0x78) = uVar9;
  plVar12 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar12 != (long *)0x0) {
    plVar16 = plVar12 + 5;
    do {
      lVar18 = *plVar16;
      iVar10 = (int)lVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar18 == 0) goto LAB_010c0c64;
  }
  *plVar14 = lVar11;
  pcVar13 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar11 + 0x70) + 0x110),lVar11 + 0x30);
  if (*pcVar13 == '\0' || *(long *)(pcVar13 + 8) == 0) {
    __s = (void *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar13 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    __s = (void *)(**(code **)PTR_DAT_047d8da8)();
  }
  memset(__s,0,local_88);
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar11 + 0x70) + 0x110),lVar11 + 0x30);
  local_a8 = (undefined1  [8])0x549805a32bfb5454;
  local_a0 = PTR_s_Morphing2Pass2_047e1220;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  local_c8 = (long *)&DAT_e3e3db16bb7514c;
  pcStack_c0 = "[PartialBlendShape_Pass2]";
  local_b8 = 0x19;
  local_b0 = (long *)0x0;
  lVar11 = param_1[1];
  if (lVar11 == 0) {
    lVar11 = *(long *)(DAT_0485a0d0 + 8);
  }
  local_70 = DAT_0485a0d0;
  lVar11 = FUN_00dfee60(auStack_68,lVar11,&local_70,&local_c8);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x28);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == -1) {
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      goto LAB_010c0b90;
    }
  }
  if (*local_a0 != '\0') {
    FUN_00eac828(lVar11,local_a8);
  }
  plVar14 = (long *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 5;
    do {
      lVar18 = *plVar12;
      iVar10 = (int)lVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    else if ((int)lVar18 == 0) goto LAB_010c0c64;
  }
  param_1[0x13] = lVar11;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  *(undefined4 *)(param_1[0x13] + 0x100) = 4;
  FUN_00c973e4(*(undefined8 *)(param_1[0x13] + 200),0);
  lVar11 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x20) + 0x10))();
  }
  local_a8 = (undefined1  [8])0x16225c9fc77581d8;
  local_a0 = PTR_s_PartialBlendShape_Pass2_047e1228;
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  FUN_00eb0610(&local_c8,*(undefined8 *)(lVar11 + 0x40),local_a8);
  lVar18 = FUN_010bf4b8(local_a8,param_1[1],&local_c8);
  if (lVar18 != 0) {
    piVar1 = (int *)(lVar18 + 0x28);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == -1) goto LAB_010c0b70;
  }
  plVar14 = (long *)param_1[0x25];
  param_1[0x25] = 0;
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 5;
    do {
      lVar19 = *plVar12;
      iVar10 = (int)lVar19 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    else if ((int)lVar19 == 0) goto LAB_010c0c64;
  }
  param_1[0x25] = lVar18;
  *(uint *)(param_2 + 0x158) = *(uint *)(param_2 + 0x158) | 0x20;
  FUN_00e51788(param_1 + 0xb,param_2 + 0x208);
  uVar24 = param_1[0xc] - param_1[0xb] >> 3;
  lVar18 = param_1[0x26];
  plVar14 = (long *)param_1[0x27];
  uVar26 = (long)plVar14 - lVar18 >> 3;
  if (uVar26 < uVar24) {
    if ((ulong)(param_1[0x28] - (long)plVar14 >> 3) < uVar24 - uVar26) {
      uVar21 = param_1[0x2a];
      if (0x7ffffffffffffffe < uVar21) {
        uVar21 = 0x7fffffffffffffff;
      }
      if (uVar21 < uVar24) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar18 = param_1[0x28] - lVar18;
      uVar20 = lVar18 >> 2;
      uVar3 = uVar24;
      if (uVar24 <= uVar20) {
        uVar3 = uVar20;
      }
      plVar14 = param_1 + 0x29;
      if (uVar21 >> 1 <= (ulong)(lVar18 >> 3)) {
        uVar3 = uVar21;
      }
      if (uVar3 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar3 << 3,8);
        if (lVar18 == 0) {
          (**(code **)(*(long *)*plVar14 + 0xe8))();
        }
      }
      puVar23 = (undefined8 *)(lVar18 + uVar26 * 8);
      lVar19 = uVar24 * 8 + uVar26 * -8;
      puVar22 = puVar23;
      do {
        lVar25 = *plVar14;
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar15 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar15 == 0) {
          *puVar22 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = lVar25;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          *puVar22 = 0;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        }
        puVar22 = puVar22 + 1;
        lVar19 = lVar19 + -8;
      } while (lVar19 != 0);
      plVar12 = (long *)param_1[0x26];
      plVar16 = (long *)param_1[0x27];
      if (plVar16 == plVar12) {
        plVar16 = plVar12;
      }
      else {
        do {
          puVar23 = puVar23 + -1;
          plVar16 = plVar16 + -1;
          FUN_010c18b4(plVar14,puVar23,plVar16);
        } while (plVar12 != plVar16);
        plVar12 = (long *)param_1[0x26];
        plVar16 = (long *)param_1[0x27];
      }
      lVar19 = param_1[0x28];
      param_1[0x28] = lVar18 + uVar3 * 8;
      param_1[0x26] = (long)puVar23;
      param_1[0x27] = lVar18 + uVar24 * 8;
      do {
        while( true ) {
          do {
            if (plVar16 == plVar12) {
              if (plVar12 != (long *)0x0) {
                plVar14 = (long *)*plVar14;
                uVar24 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                if (((uVar24 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar14 + 0x18))(plVar14,plVar12,lVar19 - (long)plVar12,8);
                }
                else {
                  FUN_00c48fe8(plVar14,plVar12,lVar19 - (long)plVar12,8);
                }
              }
              goto LAB_010c0740;
            }
            plVar16 = plVar16 + -1;
            plVar17 = (long *)*plVar16;
          } while (plVar17 == (long *)0x0);
          plVar2 = plVar17 + 5;
          do {
            lVar18 = *plVar2;
            iVar10 = (int)lVar18 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != 0) break;
          (**(code **)(*plVar17 + 0x10))();
        }
      } while ((int)lVar18 != 0);
      goto LAB_010c0c64;
    }
    FUN_010c1ba0(param_1 + 0x26);
  }
  else if (uVar24 < uVar26) {
    plVar12 = (long *)(lVar18 + uVar24 * 8);
    do {
      while( true ) {
        do {
          if (plVar12 == plVar14) {
            param_1[0x27] = (long)plVar12;
            goto LAB_010c0740;
          }
          plVar14 = plVar14 + -1;
          plVar16 = (long *)*plVar14;
        } while (plVar16 == (long *)0x0);
        plVar17 = plVar16 + 5;
        do {
          lVar18 = *plVar17;
          iVar10 = (int)lVar18 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != 0) break;
        (**(code **)(*plVar16 + 0x10))();
      }
    } while ((int)lVar18 != 0);
    goto LAB_010c0c64;
  }
LAB_010c0740:
  plVar14 = (long *)param_1[0xb];
  plVar12 = (long *)param_1[0xc];
  if (plVar12 != plVar14) {
    uVar24 = 0;
    do {
      lVar18 = FUN_010c0ccc(local_a8,param_1[1],plVar14 + uVar24);
      if (lVar18 != 0) {
        piVar1 = (int *)(lVar18 + 0x28);
        do {
          iVar10 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 == -1) {
          pcVar13 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_010c0b90;
        }
      }
      lVar19 = param_1[0x26];
      plVar14 = *(long **)(lVar19 + uVar24 * 8);
      *(undefined8 *)(lVar19 + uVar24 * 8) = 0;
      if (plVar14 != (long *)0x0) {
        plVar12 = plVar14 + 5;
        do {
          lVar25 = *plVar12;
          iVar10 = (int)lVar25 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *(int *)plVar12 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
        else if ((int)lVar25 == 0) goto LAB_010c0c64;
      }
      *(long *)(lVar19 + uVar24 * 8) = lVar18;
      uVar24 = uVar24 + 1;
      plVar14 = (long *)param_1[0xb];
      plVar12 = (long *)param_1[0xc];
    } while (uVar24 < (ulong)((long)plVar12 - (long)plVar14 >> 3));
  }
  *(undefined4 *)(param_1 + 10) = 1;
  while( true ) {
    auVar7._8_8_ = local_a0;
    auVar7._0_8_ = local_a8;
    if (plVar14 == plVar12) break;
    plVar16 = (long *)*plVar14;
    if (plVar16 != (long *)0x0) {
      plVar17 = plVar16 + 5;
      do {
        lVar18 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)lVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar18 == -1) goto LAB_010c0b70;
    }
    if ((char)plVar16[0x19] != '\0') {
      *(undefined4 *)(param_1 + 10) = 0;
    }
    plVar17 = plVar16 + 5;
    do {
      lVar18 = *plVar17;
      iVar10 = (int)lVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else {
      _local_a8 = auVar7;
      if ((int)lVar18 == 0) goto LAB_010c0c64;
    }
    plVar14 = plVar14 + 1;
  }
  if (local_c8 != (long *)0x0) {
    plVar14 = local_c8 + 5;
    do {
      lVar18 = *plVar14;
      iVar10 = (int)lVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    else if ((int)lVar18 == 0) {
LAB_010c0c64:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x20) + 0x18))((long *)(lVar11 + 0x20));
  }
  return;
}


