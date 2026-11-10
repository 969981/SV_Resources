/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01076c7c; name: FUN_01076c7c
 */


undefined8 FUN_01076c7c(long param_1,long *param_2)

{
  int *piVar1;
  short *psVar2;
  undefined1 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  short sVar16;
  ulong uVar17;
  byte *pbVar18;
  char *pcVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  long *plVar25;
  char *pcVar26;
  char local_98 [2];
  undefined2 local_96;
  undefined8 *local_90;
  undefined8 uStack_88;
  ushort local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  if (*param_2 == 0) {
    return 0;
  }
  lVar20 = *(long *)(param_1 + 0xd0);
  lVar23 = *(long *)(param_1 + 0xd8);
  if (lVar20 == lVar23) {
    lVar10 = lVar20;
  }
  else {
    do {
      if ((*(long *)(lVar20 + 8) != 0) && (*(short *)(*(long *)(lVar20 + 8) + 0x1a) != 0)) {
        lVar13 = *(long *)(lVar20 + 8);
        lVar10 = lVar20;
        if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
          psVar2 = (short *)(lVar13 + 0x1a);
          sVar16 = *(short *)(lVar13 + 0x1a);
LAB_010774b8:
          sVar4 = *psVar2;
          if (sVar4 == sVar16) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_010774dc;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_010774dc:
            bVar6 = false;
          }
          if (!bVar6) goto code_r0x010774e4;
          lVar13 = *(long *)(lVar13 + 0x10);
          if (lVar13 != 0) {
            plVar25 = (long *)(lVar13 + -0x28);
            lVar13 = *(long *)(lVar13 + 8);
            psVar2 = (short *)(lVar13 + 0x1a);
            plVar21 = (long *)*param_2;
            do {
              sVar16 = *psVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar6) {
                *psVar2 = sVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar16 == 1) {
              *(undefined8 *)(lVar13 + 0x10) = 0;
              (**(code **)(*plVar25 + 0x50))(plVar25);
            }
            else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            if (plVar21 != plVar25) goto LAB_01076cec;
            break;
          }
        }
LAB_01076ce4:
        if (*param_2 == 0) break;
      }
LAB_01076cec:
      lVar20 = lVar20 + 0x20;
      lVar10 = lVar23;
    } while (lVar20 != lVar23);
    lVar20 = *(long *)(param_1 + 0xd8);
  }
  if (lVar20 != lVar10) {
    return 0;
  }
  lVar20 = FUN_010777c0(*param_2 + 0x108,local_98);
  if (lVar20 == 0) {
    return 0;
  }
  FUN_01077654(local_98);
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0x18))(local_78,param_2);
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  plVar25 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar25 = param_2 + 5;
  }
  if ((long *)local_78[0][2] == plVar25) {
    FUN_00cbc6dc(&local_90,local_78);
  }
  puVar22 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78[0] + 3);
    do {
      sVar16 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar1 = (int *)((long)local_78[0] + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_68 = *puVar22;
        FUN_00c44438(lVar23 + 0x8040,&local_68);
      }
    }
    else if (sVar16 == 0) goto LAB_01077298;
  }
  lVar23 = *(long *)(lVar20 + 0x218);
  uVar24 = *(undefined8 *)(lVar20 + 0x220);
  plVar25 = *(long **)(lVar20 + 0x230);
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  if (lVar23 < 0x64ad7574cb75ff2) {
    if (lVar23 < -0x34714b95fff208ca) {
      if (lVar23 == -0x7c31edf616fc008a) {
        bVar12 = 4;
      }
      else {
        if (lVar23 != -0x6be7220da16dde4e) {
LAB_01077610:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("false","GetObjectTemplateIndex",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/mo/network_player_manager.cpp"
                     ,0x76,"InvalidObjectTemplatePath: %s",uVar24);
        }
        bVar12 = 0;
      }
    }
    else if (lVar23 == -0x34714b95fff208ca) {
      bVar12 = 5;
    }
    else if (lVar23 == -0x272290b64a469466) {
      bVar12 = 1;
    }
    else {
      if (lVar23 != -0x356c8ab589039f6) goto LAB_01077610;
      bVar12 = 8;
    }
  }
  else if (lVar23 < 0x6c9e97293ebea856) {
    if (lVar23 == 0x64ad7574cb75ff2) {
      bVar12 = 7;
    }
    else if (lVar23 == 0x232d29d600f80c09) {
      bVar12 = 3;
    }
    else {
      if (lVar23 != 0x542fdd7f1bf27e83) goto LAB_01077610;
      bVar12 = 10;
    }
  }
  else if (lVar23 == 0x6c9e97293ebea856) {
    bVar12 = 6;
  }
  else if (lVar23 == 0x70f5e7e7b88e5076) {
    bVar12 = 9;
  }
  else {
    if (lVar23 != 0x7816df407077be16) goto LAB_01077610;
    bVar12 = 2;
  }
  local_80 = (ushort)bVar12;
  if (*(ulong *)(param_1 + 0xd8) < *(ulong *)(param_1 + 0xe0)) {
    FUN_01077a18((long *)(param_1 + 0xd0),local_98);
  }
  else {
    uVar17 = *(ulong *)(param_1 + 0xf0);
    lVar20 = (long)(*(ulong *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0)) >> 5;
    uVar11 = lVar20 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar23 = *(ulong *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd0);
    uVar14 = lVar23 >> 4;
    if (uVar11 <= uVar14) {
      uVar11 = uVar14;
    }
    if (uVar17 >> 1 <= (ulong)(lVar23 >> 5)) {
      uVar11 = uVar17;
    }
    if (uVar11 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = (**(code **)(**(long **)(param_1 + 0xe8) + 0x10))
                         (*(long **)(param_1 + 0xe8),uVar11 << 5,8);
      if (lVar23 == 0) {
        (**(code **)(**(long **)(param_1 + 0xe8) + 0xe8))();
      }
    }
    uVar24 = *(undefined8 *)(param_1 + 0xe8);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 != 0) {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_010775dc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar24;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    }
    puVar3 = (undefined1 *)(lVar23 + lVar20 * 0x20);
    *puVar3 = 0;
    if (local_98[0] != '\0') {
      *(undefined2 *)(puVar3 + 2) = local_96;
      *puVar3 = 1;
    }
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    FUN_00ca1ea4(puVar3 + 8,&local_90);
    *(ushort *)(puVar3 + 0x18) = local_80;
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    pcVar19 = *(char **)(param_1 + 0xd0);
    pcVar26 = *(char **)(param_1 + 0xd8);
    if (pcVar26 == pcVar19) {
      puVar15 = puVar3;
      pcVar26 = pcVar19;
    }
    else {
      lVar20 = 0;
      do {
        uVar24 = *(undefined8 *)(param_1 + 0xe8);
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_010775dc;
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar24;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        puVar3[lVar20 + -0x20] = 0;
        if (pcVar26[lVar20 + -0x20] != '\0') {
          *(undefined2 *)(puVar3 + lVar20 + -0x1e) = *(undefined2 *)(pcVar26 + lVar20 + -0x1e);
          puVar3[lVar20 + -0x20] = 1;
        }
        *(undefined8 *)(puVar3 + lVar20 + -0x18) = 0;
        *(undefined8 *)(puVar3 + lVar20 + -0x10) = 0;
        FUN_00ca1ea4(puVar3 + lVar20 + -0x18,pcVar26 + lVar20 + -0x18);
        *(undefined2 *)(puVar3 + lVar20 + -8) = *(undefined2 *)(pcVar26 + lVar20 + -8);
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        lVar20 = lVar20 + -0x20;
      } while ((long)pcVar19 - (long)pcVar26 != lVar20);
      pcVar19 = *(char **)(param_1 + 0xd0);
      pcVar26 = *(char **)(param_1 + 0xd8);
      puVar15 = puVar3 + lVar20;
    }
    lVar20 = *(long *)(param_1 + 0xe0);
    *(undefined1 **)(param_1 + 0xd0) = puVar15;
    *(undefined1 **)(param_1 + 0xd8) = puVar3 + 0x20;
    *(ulong *)(param_1 + 0xe0) = lVar23 + uVar11 * 0x20;
    puVar8 = PTR_DAT_047d3918;
    puVar7 = PTR_DAT_047d3910;
    if (pcVar26 != pcVar19) {
      pbVar18 = PTR_DAT_047d3908;
      do {
        puVar22 = *(undefined8 **)(pcVar26 + -0x18);
        if (puVar22 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar22 + 3);
          do {
            sVar16 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            piVar1 = (int *)((long)puVar22 + 0x1c);
            do {
              iVar9 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 != -1) {
              if (((*pbVar18 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar23 = *(long *)puVar7;
              *(long *)puVar8 = lVar23;
              local_78[0] = (undefined8 *)*puVar22;
              FUN_00c44438(lVar23 + 0x8040,local_78);
              pbVar18 = PTR_DAT_047d3908;
            }
          }
          else if (sVar16 == 0) goto LAB_01077298;
        }
        pcVar26 = pcVar26 + -0x20;
        if (*pcVar26 != '\0') {
          *pcVar26 = '\0';
        }
      } while (pcVar26 != pcVar19);
    }
    if (pcVar19 != (char *)0x0) {
      plVar21 = *(long **)(param_1 + 0xe8);
      lVar20 = lVar20 - (long)pcVar19;
      uVar11 = FUN_00c4e564(plVar21);
      if ((uVar11 & 1) == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21,pcVar19,lVar20,8);
      }
      else {
        FUN_00c48fe8(plVar21,pcVar19,lVar20,8);
      }
    }
  }
  puVar22 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_90 + 3);
    do {
      sVar16 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar1 = (int *)((long)local_90 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar20;
        local_78[0] = (undefined8 *)*puVar22;
        FUN_00c44438(lVar20 + 0x8040,local_78);
      }
    }
    else if (sVar16 == 0) {
LAB_01077298:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_98[0] != '\0') {
    local_98[0] = '\0';
  }
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  FUN_015b99ac(param_1);
  return 1;
code_r0x010774e4:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_01076ce4;
  goto LAB_010774b8;
}


