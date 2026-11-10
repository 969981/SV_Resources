/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f62670; name: FUN_00f62670
 */


void FUN_00f62670(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  short *psVar1;
  ulong uVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  byte bVar6;
  short sVar7;
  char cVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  byte *pbVar21;
  short sVar22;
  long *plVar23;
  long *plVar24;
  uint *puVar25;
  long *plVar26;
  long *plVar27;
  long local_1a8;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined *local_150;
  undefined8 uStack_148;
  long local_140;
  undefined1 *local_e8;
  char *pcStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  char *pcStack_c0;
  size_t local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  undefined1 *local_88;
  char *pcStack_80;
  size_t local_78;
  long *local_70;
  
  if (param_3 == (uint *)0x0) {
    return;
  }
  lVar14 = *(long *)(param_1 + 0x50);
  if (lVar14 == 0) {
    return;
  }
  if (*(short *)(lVar14 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar14 + 0x1a);
  sVar22 = *(short *)(lVar14 + 0x1a);
  do {
    sVar7 = *psVar1;
    if (sVar7 == sVar22) {
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar22 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_00f626fc;
      bVar10 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f626fc:
      bVar10 = false;
    }
    if (bVar10) {
      lVar14 = *(long *)(lVar14 + 0x10);
      plVar20 = (long *)(lVar14 + -0x28);
      if (lVar14 == 0) {
        return;
      }
      puVar25 = param_3 + 1;
      if (*param_3 == 0) goto LAB_00f62730;
      puVar3 = puVar25 + *param_3;
      break;
    }
    sVar22 = sVar7;
    if (sVar7 == 0) {
      return;
    }
  } while( true );
LAB_00f627ac:
  piVar4 = (int *)((long)puVar25 + (ulong)*puVar25);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
     (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar15 == 0)) {
    lVar13 = 0;
  }
  else {
    puVar5 = (uint *)((long)piVar4 + uVar15);
    lVar13 = (long)puVar5 + (ulong)*puVar5;
  }
  local_78 = strlen((char *)(lVar13 + 4));
  bVar6 = *(byte *)(lVar13 + 4);
  local_88 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    local_88 = &DAT_cbf29ce484222645;
    pbVar21 = (byte *)(lVar13 + 5);
    do {
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar21;
      pbVar21 = pbVar21 + 1;
    } while (bVar6 != 0);
  }
  local_70 = (long *)0x0;
  pcStack_80 = (char *)(lVar13 + 4);
  (**(code **)(*plVar20 + 0x68))(&local_a8,plVar20,*(undefined8 *)(param_1 + 0x60),&local_88);
  lVar13 = local_a8;
  if (local_a8 != 0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar15 == 0)) {
      lVar18 = 0;
    }
    else {
      puVar5 = (uint *)((long)piVar4 + uVar15);
      lVar18 = (long)puVar5 + (ulong)*puVar5;
    }
    local_b8 = strlen((char *)(lVar18 + 4));
    bVar6 = *(byte *)(lVar18 + 4);
    local_c8 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      local_c8 = &DAT_cbf29ce484222645;
      pbVar21 = (byte *)(lVar18 + 5);
      do {
        local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (bVar6 != 0);
    }
    local_b0 = (long *)0x0;
    pcStack_c0 = (char *)(lVar18 + 4);
    FUN_029f0ca8(lVar13,&local_c8);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
       (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar15 == 0)) {
      bVar10 = false;
    }
    else {
      bVar10 = *(char *)((long)piVar4 + uVar15) != '\0';
    }
    FUN_029f0cb4(local_a8,bVar10);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
       (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar15 == 0)) {
      lVar13 = 0;
    }
    else {
      puVar5 = (uint *)((long)piVar4 + uVar15);
      lVar13 = (long)puVar5 + (ulong)*puVar5;
    }
    local_d8 = strlen((char *)(lVar13 + 4));
    bVar6 = *(byte *)(lVar13 + 4);
    local_e8 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      local_e8 = &DAT_cbf29ce484222645;
      pbVar21 = (byte *)(lVar13 + 5);
      do {
        local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (bVar6 != 0);
    }
    local_d0 = (long *)0x0;
    pcStack_e0 = (char *)(lVar13 + 4);
    FUN_029f0cc0(local_a8,&local_e8);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) ||
       (uVar15 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6], uVar15 == 0)) {
      lVar13 = 0;
    }
    else {
      puVar5 = (uint *)((long)piVar4 + uVar15);
      lVar13 = (long)puVar5 + (ulong)*puVar5;
    }
    uVar12 = FUN_029f0028(&local_c8,param_4,param_5);
    local_140 = local_a8;
    local_170 = &LAB_02e69fb8;
    local_168 = FUN_02e69fd4;
    local_150 = PTR_FUN_047e32e0;
    uStack_148 = 0;
    local_160 = &LAB_02e69fd8;
    puStack_158 = &LAB_02e69fec;
    FUN_029f01f0(lVar13,uVar12,&local_170);
    pcVar9 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar9)(&local_150);
    }
    FUN_029f0d10(param_2,local_a8);
    plVar27 = *(long **)(param_1 + 0x158);
    if (plVar27 < *(long **)(param_1 + 0x160)) {
      uVar12 = *(undefined8 *)(param_1 + 0x168);
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar13 == 0) {
        *plVar27 = local_a8;
        plVar27[2] = lStack_98;
        plVar27[3] = local_90;
        plVar27[1] = local_a0;
      }
      else {
        if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00f62e4c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar12;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        *plVar27 = local_a8;
        plVar27[1] = local_a0;
        plVar27[2] = lStack_98;
        plVar27[3] = local_90;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      }
      local_a8 = 0;
      *(long **)(param_1 + 0x158) = plVar27 + 4;
    }
    else {
      uVar15 = *(ulong *)(param_1 + 0x170);
      lVar13 = (long)plVar27 - *(long *)(param_1 + 0x150) >> 5;
      if (0x7ffffffffffffffe < uVar15) {
        uVar15 = 0x7fffffffffffffff;
      }
      uVar2 = lVar13 + 1;
      if (uVar15 < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar18 = (long)*(long **)(param_1 + 0x160) - *(long *)(param_1 + 0x150);
      uVar19 = lVar18 >> 4;
      if (uVar2 <= uVar19) {
        uVar2 = uVar19;
      }
      if (uVar15 >> 1 <= (ulong)(lVar18 >> 5)) {
        uVar2 = uVar15;
      }
      if (uVar2 == 0) {
        local_1a8 = 0;
      }
      else {
        local_1a8 = (**(code **)(**(long **)(param_1 + 0x168) + 0x10))
                              (*(long **)(param_1 + 0x168),uVar2 << 5,8);
        if (local_1a8 == 0) {
          (**(code **)(**(long **)(param_1 + 0x168) + 0xe8))();
        }
      }
      plVar27 = (long *)(local_1a8 + lVar13 * 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x168);
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar13 == 0) {
        *plVar27 = local_a8;
        plVar27[2] = lStack_98;
        plVar27[3] = local_90;
        plVar27[1] = local_a0;
      }
      else {
        if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00f62e4c;
        *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar12;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        *plVar27 = local_a8;
        plVar27[2] = lStack_98;
        plVar27[3] = local_90;
        plVar27[1] = local_a0;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      }
      local_a8 = 0;
      plVar24 = *(long **)(param_1 + 0x150);
      plVar23 = *(long **)(param_1 + 0x158);
      if (plVar23 == plVar24) {
        plVar17 = plVar27;
        plVar23 = plVar24;
      }
      else {
        plVar26 = plVar27;
        do {
          uVar12 = *(undefined8 *)(param_1 + 0x168);
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar13 != 0) {
            if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00f62e4c;
            *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar12;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          }
          lVar18 = plVar23[-4];
          plVar23[-4] = 0;
          plVar26[-4] = lVar18;
          lVar18 = plVar23[-3];
          lVar16 = plVar23[-1];
          plVar26[-2] = plVar23[-2];
          plVar26[-1] = lVar16;
          plVar17 = plVar26 + -4;
          plVar23 = plVar23 + -4;
          plVar26[-3] = lVar18;
          if (lVar13 != 0) {
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          }
          plVar26 = plVar17;
        } while (plVar24 != plVar23);
        plVar24 = *(long **)(param_1 + 0x150);
        plVar23 = *(long **)(param_1 + 0x158);
      }
      lVar13 = *(long *)(param_1 + 0x160);
      *(ulong *)(param_1 + 0x160) = local_1a8 + uVar2 * 0x20;
      *(long **)(param_1 + 0x150) = plVar17;
      *(long **)(param_1 + 0x158) = plVar27 + 4;
      if (plVar23 != plVar24) {
        do {
          plVar27 = plVar23 + -4;
          lVar18 = *plVar27;
          *plVar27 = 0;
          if (lVar18 != 0) {
            FUN_014bafe4(plVar23 + -3);
          }
          plVar23 = plVar27;
        } while (plVar24 != plVar27);
      }
      if (plVar24 != (long *)0x0) {
        plVar27 = *(long **)(param_1 + 0x168);
        lVar13 = lVar13 - (long)plVar24;
        uVar15 = (**(code **)(*plVar27 + 0xf8))(plVar27);
        if (((uVar15 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,plVar24,lVar13,8);
        }
        else {
          FUN_00c48fe8(plVar27,plVar24,lVar13,8);
        }
      }
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    lVar13 = local_a8;
    local_a8 = 0;
    if (lVar13 != 0) {
      FUN_014bafe4(&local_a0);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  puVar25 = puVar25 + 1;
  if (puVar25 == puVar3) {
LAB_00f62730:
    lVar14 = *(long *)(lVar14 + 8);
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar22 = *psVar1;
      cVar8 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar22 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  goto LAB_00f627ac;
}


