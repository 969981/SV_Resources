/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014903f8; name: FUN_014903f8
 */


void FUN_014903f8(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *unaff_x26;
  float fVar21;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long lStack_c8;
  long *local_c0;
  undefined4 local_b8;
  long *local_b0;
  long *plStack_a8;
  long *local_a0;
  long lStack_98;
  long *local_90;
  undefined4 local_88;
  long *local_80;
  long *plStack_78;
  long local_70;
  long *plStack_68;
  
  plVar20 = *(long **)(param_1 + 8);
  plVar8 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x40,8);
  if (plVar8 == (long *)0x0) {
    local_70 = 0;
    plStack_68 = (long *)0x0;
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      unaff_x26 = (long *)0x4865000;
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_01490b44;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar20;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar8[6] = 0;
    plVar8[7] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = (long)(PTR_DAT_047d8e88 + 0x10);
    plVar8[1] = 0;
    local_70 = 0x40;
    plStack_68 = (long *)&DAT_00000008;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    local_80 = plVar8;
    plStack_78 = plVar20;
  }
  FUN_00cbf4c0(&local_b0,param_2);
  if ((param_3 & 1) != 0) {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047d4e00;
    *(undefined8 *)PTR_DAT_047d4e08 = uVar10;
    FUN_00e55738(&local_e0,uVar10,&local_b0);
    plVar8 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    plVar8 = local_90;
    local_b0 = local_e0;
    local_e0 = (long *)0x0;
    plStack_a8 = local_d8;
    local_a0 = local_d0;
    lStack_98 = lStack_c8;
    local_90 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    local_90 = local_c0;
    local_c0 = (long *)0x0;
    local_88 = local_b8;
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    plVar8 = local_80;
  }
  uVar11 = FUN_00dc5c18(plVar8,1,&local_b0,0,*(undefined8 *)(param_1 + 8));
  if (((uVar11 & 1) != 0) && (plVar8 = (long *)plVar8[4], plVar8 != (long *)0x0)) {
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar10;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar9 = plVar8[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar20 = local_80;
  pbVar13 = *(byte **)(param_2 + 8);
  plVar8 = (long *)&DAT_cbf29ce484222645;
  bVar4 = *pbVar13;
  while (bVar4 != 0) {
    pbVar13 = pbVar13 + 1;
    plVar8 = (long *)(((ulong)plVar8 ^ (ulong)bVar4) * 0x100000001b3);
    bVar4 = *pbVar13;
  }
  local_80 = (long *)0x0;
  local_c0 = plStack_68;
  local_d8 = plVar20;
  plVar1 = (long *)(param_1 + 0x28);
  local_d0 = plStack_78;
  lStack_c8 = local_70;
  plVar19 = *(long **)(param_1 + 0x30);
  local_e0 = plVar8;
  if (plVar19 != (long *)0x0) {
    puVar14 = (undefined1 *)((long)plVar19 + -1);
    if (((ulong)plVar19 & (ulong)puVar14) == 0) {
      unaff_x26 = (long *)((ulong)puVar14 & (ulong)plVar8);
      plVar15 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          plVar15 = (long *)*plVar15;
          if ((plVar15 == (long *)0x0) ||
             ((long *)plVar15[1] != plVar8 &&
              (long *)((ulong)plVar15[1] & (ulong)puVar14) != unaff_x26)) goto LAB_01490738;
        } while ((long *)plVar15[2] != plVar8);
        goto LAB_01490630;
      }
    }
    else {
      unaff_x26 = plVar8;
      if (plVar19 <= plVar8) {
        uVar11 = 0;
        if (plVar19 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)plVar19;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar11 * (long)plVar19);
      }
      plVar15 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_01490738;
          plVar17 = (long *)plVar15[1];
          if (plVar17 != plVar8) {
            if (plVar19 <= plVar17) {
              uVar11 = 0;
              if (plVar19 != (long *)0x0) {
                uVar11 = (ulong)plVar17 / (ulong)plVar19;
              }
              plVar17 = (long *)((long)plVar17 - uVar11 * (long)plVar19);
            }
            if (plVar17 != unaff_x26) goto LAB_01490738;
          }
        } while ((long *)plVar15[2] != plVar8);
LAB_01490630:
        local_d8 = (long *)0x0;
        if (plVar20 != (long *)0x0) {
          FUN_01fb017c(&local_d0);
        }
        goto LAB_0149080c;
      }
    }
  }
LAB_01490738:
  plVar20 = (long *)(**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                              (*(long **)(param_1 + 0x60),0x38,8);
  if (plVar20 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0xe8))();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  plVar15 = local_d8;
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_01490b44:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  local_d8 = (long *)0x0;
  plVar20[2] = (long)local_e0;
  plVar20[3] = (long)plVar15;
  plVar20[4] = (long)local_d0;
  plVar20[5] = lStack_c8;
  plVar20[6] = (long)local_c0;
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *plVar20 = 0;
  plVar20[1] = (long)plVar8;
  fVar21 = (float)(*(long *)(param_1 + 0x80) + 1);
  if ((plVar19 == (long *)0x0) || (*(float *)(param_1 + 0x88) * (float)plVar19 < fVar21)) {
    uVar11 = (ulong)(plVar19 < (long *)0x3 || ((ulong)plVar19 & (ulong)((long)plVar19 + -1)) != 0) |
             (long)plVar19 << 1;
    uVar18 = (ulong)(fVar21 / *(float *)(param_1 + 0x88));
    if (uVar18 <= uVar11) {
      uVar18 = uVar11;
    }
    if (uVar18 - 1 == 0) {
      uVar18 = 2;
    }
    else if ((uVar18 & uVar18 - 1) != 0) {
      uVar18 = std::__next_prime(uVar18);
    }
    uVar11 = *(ulong *)(param_1 + 0x30);
    if (uVar11 < uVar18) {
      uVar12 = uVar18;
LAB_014908f0:
      FUN_01490b90(plVar1,uVar12);
    }
    else if (uVar18 < uVar11) {
      uVar12 = (ulong)((float)*(ulong *)(param_1 + 0x80) / *(float *)(param_1 + 0x88));
      if ((uVar11 < 3) ||
         (uVar16 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333),
         1 < (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar12 = std::__next_prime(uVar12);
      }
      else if (1 < uVar12) {
        uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
      }
      if (uVar12 <= uVar18) {
        uVar12 = uVar18;
      }
      if (uVar12 < uVar11) goto LAB_014908f0;
    }
    plVar19 = *(long **)(param_1 + 0x30);
    if (((ulong)plVar19 & (ulong)((long)plVar19 + -1)) == 0) {
      unaff_x26 = (long *)((ulong)((long)plVar19 + -1) & (ulong)plVar8);
    }
    else if (plVar8 < plVar19) {
      unaff_x26 = plVar8;
    }
    else {
      uVar11 = 0;
      if (plVar19 != (long *)0x0) {
        uVar11 = (ulong)plVar8 / (ulong)plVar19;
      }
      unaff_x26 = (long *)((long)plVar8 - uVar11 * (long)plVar19);
    }
  }
  plVar8 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(param_1 + 0x58);
    *plVar20 = *plVar8;
    *plVar8 = (long)plVar20;
    *(long **)(*(long *)(param_1 + 0x28) + (long)unaff_x26 * 8) = plVar8;
    if (*plVar20 != 0) {
      plVar8 = *(long **)(*plVar20 + 8);
      if (((ulong)plVar19 & (ulong)((long)plVar19 + -1)) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (ulong)((long)plVar19 + -1));
      }
      else if (plVar19 <= plVar8) {
        uVar11 = 0;
        if (plVar19 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)plVar19;
        }
        plVar8 = (long *)((long)plVar8 - uVar11 * (long)plVar19);
      }
      plVar8 = (long *)(*plVar1 + (long)plVar8 * 8);
      goto LAB_014907f8;
    }
  }
  else {
    *plVar20 = *plVar8;
LAB_014907f8:
    *plVar8 = (long)plVar20;
  }
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  local_d8 = (long *)0x0;
LAB_0149080c:
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  plVar8 = local_80;
  local_80 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    FUN_01fb017c(&plStack_78);
  }
  return;
}


