/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f61e2c; name: FUN_00f61e2c
 */


void FUN_00f61e2c(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
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
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  byte *pbVar20;
  bool bVar21;
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
  lVar13 = *(long *)(param_1 + 0x40);
  if (lVar13 == 0) {
    return;
  }
  if (*(short *)(lVar13 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar13 + 0x1a);
  sVar22 = *(short *)(lVar13 + 0x1a);
  do {
    sVar7 = *psVar1;
    if (sVar7 == sVar22) {
      cVar8 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar21) {
        *psVar1 = sVar22 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_00f61eb8;
      bVar21 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f61eb8:
      bVar21 = false;
    }
    if (bVar21) {
      lVar13 = *(long *)(lVar13 + 0x10);
      plVar19 = (long *)(lVar13 + -0x28);
      if (lVar13 == 0) {
        return;
      }
      puVar25 = param_3 + 1;
      if (*param_3 == 0) goto LAB_00f61eec;
      puVar3 = puVar25 + *param_3;
      break;
    }
    sVar22 = sVar7;
    if (sVar7 == 0) {
      return;
    }
  } while( true );
LAB_00f61f68:
  piVar4 = (int *)((long)puVar25 + (ulong)*puVar25);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
     (uVar14 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar14 == 0)) {
    lVar12 = 0;
  }
  else {
    puVar5 = (uint *)((long)piVar4 + uVar14);
    lVar12 = (long)puVar5 + (ulong)*puVar5;
  }
  local_78 = strlen((char *)(lVar12 + 4));
  bVar6 = *(byte *)(lVar12 + 4);
  local_88 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    local_88 = &DAT_cbf29ce484222645;
    pbVar20 = (byte *)(lVar12 + 5);
    do {
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar20;
      pbVar20 = pbVar20 + 1;
    } while (bVar6 != 0);
  }
  local_70 = (long *)0x0;
  pcStack_80 = (char *)(lVar12 + 4);
  (**(code **)(*plVar19 + 0x68))(&local_a8,plVar19,*(undefined8 *)(param_1 + 0x60),&local_88);
  lVar12 = local_a8;
  if (local_a8 != 0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar14 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar14 == 0)) {
      lVar16 = 0;
    }
    else {
      puVar5 = (uint *)((long)piVar4 + uVar14);
      lVar16 = (long)puVar5 + (ulong)*puVar5;
    }
    local_b8 = strlen((char *)(lVar16 + 4));
    bVar6 = *(byte *)(lVar16 + 4);
    local_c8 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      local_c8 = &DAT_cbf29ce484222645;
      pbVar20 = (byte *)(lVar16 + 5);
      do {
        local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar20;
        pbVar20 = pbVar20 + 1;
      } while (bVar6 != 0);
    }
    local_b0 = (long *)0x0;
    pcStack_c0 = (char *)(lVar16 + 4);
    FUN_029f07fc(lVar12,&local_c8);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
       (uVar14 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar14 == 0)) {
      lVar12 = 0;
    }
    else {
      puVar5 = (uint *)((long)piVar4 + uVar14);
      lVar12 = (long)puVar5 + (ulong)*puVar5;
    }
    local_d8 = strlen((char *)(lVar12 + 4));
    bVar6 = *(byte *)(lVar12 + 4);
    local_e8 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      local_e8 = &DAT_cbf29ce484222645;
      pbVar20 = (byte *)(lVar12 + 5);
      do {
        local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar20;
        pbVar20 = pbVar20 + 1;
      } while (bVar6 != 0);
    }
    local_d0 = (long *)0x0;
    pcStack_e0 = (char *)(lVar12 + 4);
    FUN_029f0808(local_a8,&local_e8);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
       (uVar14 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar14 == 0)) {
      lVar12 = 0;
    }
    else {
      puVar5 = (uint *)((long)piVar4 + uVar14);
      lVar12 = (long)puVar5 + (ulong)*puVar5;
    }
    uVar11 = FUN_029f0028(&local_c8,param_4,param_5);
    local_140 = local_a8;
    local_170 = &LAB_02e69f70;
    local_168 = FUN_02e69f8c;
    local_150 = PTR_LAB_047e32d8;
    uStack_148 = 0;
    local_160 = &LAB_02e69f90;
    puStack_158 = &LAB_02e69fa4;
    FUN_029f01f0(lVar12,uVar11,&local_170);
    pcVar9 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar9)(&local_150);
    }
    FUN_029f08e8(param_2,local_a8);
    plVar27 = *(long **)(param_1 + 0x120);
    if (plVar27 < *(long **)(param_1 + 0x128)) {
      uVar11 = *(undefined8 *)(param_1 + 0x130);
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        *plVar27 = local_a8;
        plVar27[2] = lStack_98;
        plVar27[3] = local_90;
        plVar27[1] = local_a0;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00f625d0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar11;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *plVar27 = local_a8;
        plVar27[1] = local_a0;
        plVar27[2] = lStack_98;
        plVar27[3] = local_90;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      local_a8 = 0;
      *(long **)(param_1 + 0x120) = plVar27 + 4;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x138);
      lVar12 = (long)plVar27 - *(long *)(param_1 + 0x118) >> 5;
      if (0x7ffffffffffffffe < uVar14) {
        uVar14 = 0x7fffffffffffffff;
      }
      uVar2 = lVar12 + 1;
      if (uVar14 < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar16 = (long)*(long **)(param_1 + 0x128) - *(long *)(param_1 + 0x118);
      uVar17 = lVar16 >> 4;
      if (uVar2 <= uVar17) {
        uVar2 = uVar17;
      }
      if (uVar14 >> 1 <= (ulong)(lVar16 >> 5)) {
        uVar2 = uVar14;
      }
      if (uVar2 == 0) {
        local_1a8 = 0;
      }
      else {
        local_1a8 = (**(code **)(**(long **)(param_1 + 0x130) + 0x10))
                              (*(long **)(param_1 + 0x130),uVar2 << 5,8);
        if (local_1a8 == 0) {
          (**(code **)(**(long **)(param_1 + 0x130) + 0xe8))();
        }
      }
      plVar27 = (long *)(local_1a8 + lVar12 * 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x130);
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        *plVar27 = local_a8;
        plVar27[2] = lStack_98;
        plVar27[3] = local_90;
        plVar27[1] = local_a0;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00f625d0;
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar11;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *plVar27 = local_a8;
        plVar27[2] = lStack_98;
        plVar27[3] = local_90;
        plVar27[1] = local_a0;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      local_a8 = 0;
      plVar24 = *(long **)(param_1 + 0x118);
      plVar23 = *(long **)(param_1 + 0x120);
      if (plVar23 == plVar24) {
        plVar18 = plVar27;
        plVar23 = plVar24;
      }
      else {
        plVar26 = plVar27;
        do {
          uVar11 = *(undefined8 *)(param_1 + 0x130);
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar12 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar12 != 0) {
            if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00f625d0;
            *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar11;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          }
          lVar16 = plVar23[-4];
          plVar23[-4] = 0;
          plVar26[-4] = lVar16;
          lVar16 = plVar23[-3];
          lVar15 = plVar23[-1];
          plVar26[-2] = plVar23[-2];
          plVar26[-1] = lVar15;
          plVar18 = plVar26 + -4;
          plVar23 = plVar23 + -4;
          plVar26[-3] = lVar16;
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          }
          plVar26 = plVar18;
        } while (plVar24 != plVar23);
        plVar24 = *(long **)(param_1 + 0x118);
        plVar23 = *(long **)(param_1 + 0x120);
      }
      lVar12 = *(long *)(param_1 + 0x128);
      *(ulong *)(param_1 + 0x128) = local_1a8 + uVar2 * 0x20;
      *(long **)(param_1 + 0x118) = plVar18;
      *(long **)(param_1 + 0x120) = plVar27 + 4;
      if (plVar23 != plVar24) {
        do {
          plVar27 = plVar23 + -4;
          lVar16 = *plVar27;
          *plVar27 = 0;
          if (lVar16 != 0) {
            FUN_014bac20(plVar23 + -3);
          }
          plVar23 = plVar27;
        } while (plVar24 != plVar27);
      }
      if (plVar24 != (long *)0x0) {
        plVar27 = *(long **)(param_1 + 0x130);
        lVar12 = lVar12 - (long)plVar24;
        uVar14 = (**(code **)(*plVar27 + 0xf8))(plVar27);
        if (((uVar14 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,plVar24,lVar12,8);
        }
        else {
          FUN_00c48fe8(plVar27,plVar24,lVar12,8);
        }
      }
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    lVar12 = local_a8;
    local_a8 = 0;
    if (lVar12 != 0) {
      FUN_014bac20(&local_a0);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  puVar25 = puVar25 + 1;
  if (puVar25 == puVar3) {
LAB_00f61eec:
    lVar13 = *(long *)(lVar13 + 8);
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar22 = *psVar1;
      cVar8 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar21) {
        *psVar1 = sVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar22 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar19 + 0x50))(plVar19);
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
  goto LAB_00f61f68;
}


