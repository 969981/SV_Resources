/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddcd2c; name: FUN_01ddcd2c
 */


undefined8 FUN_01ddcd2c(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  short sVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  char *pcVar23;
  uint uVar24;
  code *pcVar25;
  long lVar26;
  ushort *puVar27;
  int iVar28;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  if (*(int *)(param_1 + 0x29c) == 0) {
    uVar19 = FUN_01ddb34c(param_1);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x1b8) != 0) {
      *(undefined4 *)(param_1 + 0x170) = 7;
      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 7;
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x298) != 2) {
    if (*(int *)(param_1 + 0x298) != 0) {
      return 0;
    }
    uVar18 = FUN_01195974();
    iVar12 = *(int *)(param_1 + 0x108);
    iVar28 = (int)((ulong)uVar18 >> 0x20);
    if (iVar12 == 0) {
      bVar7 = false;
      iVar28 = (int)uVar18 + iVar28 * 6;
      bVar8 = true;
    }
    else {
      bVar8 = false;
      if (iVar12 == 1) {
        bVar7 = true;
      }
      else {
        if (iVar12 != 2) {
          return 0;
        }
        bVar7 = false;
        bVar8 = false;
      }
    }
    uVar19 = FUN_01dd6bcc(param_1);
    if ((uVar19 & 1) != 0) {
      uVar11 = FUN_01dcddf4(*(undefined8 *)(param_1 + 0x1a0));
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar26 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar26;
      local_f0 = 0x9361c9d60afa3753;
      local_e8 = (code *)0x3c84acb;
      local_e0 = 0x13;
      local_d8 = (long *)0x0;
      if (*(long *)(lVar26 + 0x48) == 0) {
        uVar18 = 0xffffffffffffffff;
      }
      else {
        uVar18 = FUN_00cf8198();
      }
      memset(&local_d0,0,0x80);
      plVar20 = *(long **)(*(long *)(lVar26 + 0x200) + 0x60);
      local_100 = (ulong)local_100._4_4_ << 0x20;
      iVar12 = (**(code **)(*plVar20 + 0xd0))
                         (plVar20,"PLAY_UI_COMMON_BEEP",uVar18,1,&LAB_01080c70,lVar26,0,0);
      if ((iVar12 != 0) &&
         (FUN_0104f218(*(undefined8 *)(lVar26 + 0x220),&local_f0,iVar12,uVar18,0,&local_d0,0),
         pcVar25 = local_c8, local_c8 != (code *)0x0)) {
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = (long *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar25)(auStack_b0);
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if ((uVar11 & 0xfffffffe) != 2) {
        FUN_01ddc158(param_1);
      }
      return 0;
    }
    *(short *)(param_1 + 0x1e4) = (short)iVar28;
    uVar19 = FUN_01dd9ffc(param_1);
    if ((uVar19 & 1) != 0) {
      uVar18 = 0;
      goto LAB_01ddd054;
    }
    lVar26 = *(long *)(param_1 + 0x1a8);
    piVar1 = (int *)(lVar26 + 0x6c38);
    iVar12 = *piVar1;
    if (iVar12 == 1) {
      FUN_0174fbdc(&local_d0);
      if (bVar8) {
        uVar11 = *(uint *)(lVar26 + 0x6c3c);
        uVar13 = FUN_014c0588(local_d0);
        if ((uVar11 >> 0xe & 0x3f) + (uVar11 >> 0x1a) < uVar13) {
          FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),*(uint *)(lVar26 + 0x6c3c) >> 0xe & 0x3f,3,0
                      );
        }
        uVar18 = 0;
      }
      else {
        FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),*(uint *)(lVar26 + 0x6c3c) >> 0xe & 0x3f,3,0);
        if (*(uint *)(lVar26 + 0x6c3c) >> 0x1a != 0) {
          uVar11 = 0;
          do {
            uVar18 = *(undefined8 *)(param_1 + 0x1a8);
            iVar12 = FUN_014c0588(local_d0);
            FUN_01dc4ca8(uVar18,uVar11,uVar11,iVar28 + uVar11,iVar12 + uVar11,3);
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(lVar26 + 0x6c3c) >> 0x1a);
        }
        sVar9 = FUN_014c0588(local_d0);
        uVar18 = 1;
        *(ushort *)(param_1 + 0x1e4) =
             sVar9 - (ushort)((uint)*(undefined4 *)(lVar26 + 0x6c3c) >> 0x1a);
      }
      if (local_d0 != (long *)0x0) {
        plVar20 = local_d0 + 5;
        do {
          iVar12 = (int)*plVar20;
          iVar28 = iVar12 + -1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *(int *)plVar20 = iVar28;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
joined_r0x01ddd2b4:
        if (iVar28 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
        else if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    else if (bVar7) {
      uVar11 = *(uint *)(lVar26 + 0x6c3c);
      if (uVar11 >> 0x1a == 1) {
        bVar8 = false;
      }
      else {
        uVar13 = 0;
        bVar8 = false;
        while( true ) {
          iVar14 = uVar13 + (uVar11 >> 0xe & 0x3f);
          iVar15 = iVar14 * 6;
          if (1 < iVar12 - 1U) {
            iVar14 = 0;
          }
          if (iVar12 == 0) {
            iVar14 = (uVar11 >> 8 & 0x3f) + iVar15;
          }
          lVar21 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar12,uVar11 & 0xff,iVar14);
          if (lVar21 == 0) break;
          bVar8 = (bool)(bVar8 | lVar21 == 0);
          uVar11 = *(uint *)(lVar26 + 0x6c3c);
          uVar13 = uVar13 + 1;
          if ((uVar11 >> 0x1a) - 1 <= uVar13) goto LAB_01ddcf90;
          iVar12 = *piVar1;
        }
        bVar8 = true;
      }
LAB_01ddcf90:
      FUN_0174fbdc(&local_d0);
      iVar12 = FUN_014c0588(local_d0);
      if ((bVar8) || (iVar28 != iVar12)) {
        uVar11 = *(uint *)(lVar26 + 0x6c3c);
        if (uVar11 >> 0x1a != 0) {
          uVar13 = 0;
          iVar12 = 0;
          do {
            iVar15 = *piVar1;
            iVar14 = uVar13 + (uVar11 >> 0xe & 0x3f);
            iVar17 = iVar14 * 6;
            if (1 < iVar15 - 1U) {
              iVar14 = 0;
            }
            if (iVar15 == 0) {
              iVar14 = (uVar11 >> 8 & 0x3f) + iVar17;
            }
            lVar21 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar15,uVar11 & 0xff,iVar14);
            if (lVar21 != 0) {
              uVar18 = *(undefined8 *)(param_1 + 0x1a8);
              iVar14 = FUN_014c0588(local_d0);
              FUN_01dc4ca8(uVar18,uVar13,iVar12,iVar28 + uVar13,iVar14 + iVar12,3);
              iVar12 = iVar12 + 1;
            }
            uVar11 = *(uint *)(lVar26 + 0x6c3c);
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar11 >> 0x1a);
        }
        uVar10 = FUN_014c0588(local_d0);
        uVar18 = 1;
        *(undefined2 *)(param_1 + 0x1e4) = uVar10;
      }
      else {
        uVar18 = 0;
      }
      if (local_d0 != (long *)0x0) {
        plVar20 = local_d0 + 5;
        do {
          iVar12 = (int)*plVar20;
          iVar28 = iVar12 + -1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *(int *)plVar20 = iVar28;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto joined_r0x01ddd2b4;
      }
    }
    else {
      uVar18 = 0;
    }
    FUN_01dd67ac(param_1);
LAB_01ddd054:
    FUN_01dc2574(*(undefined8 *)(param_1 + 0x1a8),uVar18);
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar26 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar26;
    local_f0 = 0x1f7e1ba02170001c;
    local_e8 = (code *)0x3c91dea;
    local_e0 = 0x16;
    local_d8 = (long *)0x0;
    if (*(long *)(lVar26 + 0x48) == 0) {
      uVar18 = 0xffffffffffffffff;
    }
    else {
      uVar18 = FUN_00cf8198();
    }
    pcVar25 = local_e8;
    memset(&local_d0,0,0x80);
    plVar20 = *(long **)(*(long *)(lVar26 + 0x200) + 0x60);
    local_100 = (ulong)local_100._4_4_ << 0x20;
    iVar12 = (**(code **)(*plVar20 + 0xd0))(plVar20,pcVar25,uVar18,1,&LAB_01080c70,lVar26,0,0);
    if ((iVar12 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar26 + 0x220),&local_f0,iVar12,uVar18,0,&local_d0,0),
       pcVar25 = local_c8, local_c8 != (code *)0x0)) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = (long *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar25)(auStack_b0);
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (*(long *)(param_1 + 0x1b8) != 0) {
      *(undefined4 *)(param_1 + 0x170) = 7;
      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 7;
    }
    return 1;
  }
  uVar18 = FUN_01195974();
  iVar12 = *(int *)(param_1 + 0x108);
  iVar28 = (int)((ulong)uVar18 >> 0x20);
  if (iVar12 == 0) {
    lVar26 = FUN_01195854();
    uVar11 = (uint)*(byte *)(lVar26 + 0x570);
    iVar14 = 0;
    iVar12 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar14 = 1;
    if (iVar12 != 1) {
      if (iVar12 != 2) {
        uVar11 = 0xffffffff;
        iVar14 = 3;
        goto LAB_01ddd434;
      }
      iVar14 = 2;
    }
    uVar11 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01ddd434:
  if (iVar12 == 0) {
    iVar28 = (int)uVar18 + iVar28 * 6;
  }
  else if ((iVar12 != 1) && (iVar12 != 2)) {
    iVar28 = 1;
  }
  if (iVar14 == 3) {
    return 0;
  }
  uVar19 = FUN_01dd6ce0(param_1);
  if ((uVar19 & 1) != 0) {
    FUN_01ddc158(param_1);
LAB_01ddd480:
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar26 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar26;
    local_110 = 0x9361c9d60afa3753;
    local_108 = "PLAY_UI_COMMON_BEEP";
    local_100 = 0x13;
    local_f8 = (long *)0x0;
    if (*(long *)(lVar26 + 0x48) == 0) {
      uVar18 = 0xffffffffffffffff;
    }
    else {
      uVar18 = FUN_00cf8198();
    }
    memset(&local_f0,0,0x80);
    plVar20 = *(long **)(*(long *)(lVar26 + 0x200) + 0x60);
    iVar12 = (**(code **)(*plVar20 + 0xd0))
                       (plVar20,"PLAY_UI_COMMON_BEEP",uVar18,1,&LAB_01080c70,lVar26,0,0,0);
    if ((iVar12 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar26 + 0x220),&local_110,iVar12,uVar18,0,&local_f0,0),
       pcVar25 = local_e8, local_e8 != (code *)0x0)) {
      local_e0 = 0;
      local_d8 = (long *)0x0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar25)(&local_d0);
    }
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    return 0;
  }
  *(short *)(param_1 + 0x1e4) = (short)iVar28;
  lVar26 = FUN_01195854();
  lVar21 = *(long *)(param_1 + 0x1a8);
  piVar1 = (int *)(lVar21 + 0x6c38);
  if (iVar14 != 0) {
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar13 = uVar11 - 1;
    }
    iVar15 = FUN_01ddc58c(lVar26,uVar13);
    iVar12 = *piVar1;
    if (iVar12 == 0) {
      uVar11 = *(uint *)(lVar21 + 0x6c3c);
      if (uVar11 >> 0x1a == 0) goto LAB_01ddd5bc;
      iVar17 = 0;
      iVar12 = 0;
      uVar16 = 0;
      while( true ) {
        iVar3 = uVar16 + (uVar11 >> 0xe & 0x3f);
        iVar5 = iVar3 * 6;
        if (1 < iVar17 - 1U) {
          iVar3 = 0;
        }
        if (iVar17 == 0) {
          iVar3 = (uVar11 >> 8 & 0x3f) + iVar5;
        }
        lVar22 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar17,uVar11 & 0xff,iVar3);
        if (lVar22 != 0) {
          uVar11 = *(uint *)(lVar21 + 0x6c3c);
          iVar17 = uVar16 + (uVar11 >> 0xe & 0x3f);
          iVar3 = iVar17 * 6;
          if (1 < *piVar1 - 1U) {
            iVar17 = 0;
          }
          if (*piVar1 == 0) {
            iVar17 = (uVar11 >> 8 & 0x3f) + iVar3;
          }
          iVar17 = FUN_01ddc5e8(lVar26,uVar13,iVar28 + uVar16,uVar11 & 0xff,iVar17);
          if (iVar17 != 6) {
            FUN_01dc1f58(*(undefined8 *)(param_1 + 0x1a8),2,iVar17,0);
            iVar12 = iVar12 + 1;
          }
        }
        uVar11 = *(uint *)(lVar21 + 0x6c3c);
        uVar16 = uVar16 + 1;
        if (uVar11 >> 0x1a <= uVar16) break;
        iVar17 = *piVar1;
      }
    }
    else {
      uVar11 = *(uint *)(lVar21 + 0x6c3c);
      if (uVar11 >> 0x1a == 0) {
LAB_01ddd5bc:
        iVar12 = 0;
      }
      else {
        uVar24 = (uVar11 & 0xff) - 1;
        uVar16 = 0;
        if (uVar24 < 6) {
          uVar16 = uVar24;
        }
        uVar19 = 0;
        puVar27 = (ushort *)((ulong)&local_f0 | 2);
        do {
          uVar24 = (uVar11 >> 0xe & 0x3f) + (int)uVar19;
          if (1 < iVar12 - 1U) {
            uVar24 = 0;
          }
          uVar2 = 0;
          if (uVar24 < 6) {
            uVar2 = uVar24;
          }
          uVar4 = *(ushort *)(lVar26 + (ulong)uVar16 * 0xc + (ulong)uVar2 * 2 + 0x526);
          uVar19 = uVar19 + 1;
          puVar27[-1] = uVar4 >> 8;
          *puVar27 = uVar4 & 0xff;
          puVar27 = puVar27 + 2;
        } while (uVar19 < uVar11 >> 0x1a);
        uVar19 = 0;
        iVar12 = 0;
        puVar27 = (ushort *)((ulong)&local_f0 | 2);
        do {
          if (((puVar27[-1] < 0x21) && (*puVar27 < 0x1e)) &&
             (iVar17 = FUN_01ddc5e8(lVar26,uVar13,iVar28 + (int)uVar19), iVar17 != 6)) {
            FUN_01dc1f58(*(undefined8 *)(param_1 + 0x1a8),2,iVar17,0);
            iVar12 = iVar12 + 1;
          }
          uVar19 = uVar19 + 1;
          puVar27 = puVar27 + 2;
        } while (uVar19 < *(uint *)(lVar21 + 0x6c3c) >> 0x1a);
      }
    }
    uVar11 = FUN_01ddc58c(lVar26,uVar13);
    if (uVar11 != 0) {
      uVar16 = 0;
      if (uVar13 < 6) {
        uVar16 = uVar13;
      }
      uVar24 = 0;
      do {
        if ((5 < uVar13) && (5 < uVar24)) {
LAB_01ddd7cc:
          FUN_01dc6c18(lVar26,uVar13);
          FUN_01dc2574(*(undefined8 *)(param_1 + 0x1a8),1);
          local_f0 = (ulong)local_f0._4_4_ << 0x20;
          local_110 = (ulong)local_110._4_4_ << 0x20;
          FUN_014e2aa0(iVar14,iVar28,&local_f0,&local_110);
          if (iVar12 != 0) {
            FUN_01dc5290(*(undefined8 *)(param_1 + 0x1a8),5);
          }
          uVar13 = *(uint *)(lVar21 + 0x6c3c);
          if (uVar13 >> 0x1b == 0) {
            FUN_01dc4ca8(*(undefined8 *)(param_1 + 0x1a8),0,0,iVar28,uVar11 - 1,5);
          }
          else {
            uVar11 = 0;
            iVar14 = 0;
            do {
              iVar3 = *piVar1;
              iVar17 = uVar11 + (uVar13 >> 0xe & 0x3f);
              iVar5 = iVar17 * 6;
              if (1 < iVar3 - 1U) {
                iVar17 = 0;
              }
              if (iVar3 == 0) {
                iVar17 = (uVar13 >> 8 & 0x3f) + iVar5;
              }
              lVar26 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar3,uVar13 & 0xff,iVar17);
              if (lVar26 != 0) {
                FUN_01dc4ca8(*(undefined8 *)(param_1 + 0x1a8),uVar11,uVar11,iVar28 + uVar11,
                             (iVar15 - iVar12) + iVar14,5);
                iVar14 = iVar14 + 1;
              }
              uVar13 = *(uint *)(lVar21 + 0x6c3c);
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar13 >> 0x1a);
          }
          goto LAB_01ddd640;
        }
        uVar2 = 0;
        if (uVar24 < 6) {
          uVar2 = uVar24;
        }
        uVar4 = *(ushort *)(lVar26 + (ulong)uVar16 * 0xc + (ulong)uVar2 * 2 + 0x526);
        if (0x20 < (byte)(uVar4 >> 8) || 0x1d < (uVar4 & 0xfe)) goto LAB_01ddd7cc;
        uVar24 = uVar24 + 1;
      } while (uVar11 != uVar24);
    }
    FUN_01dc6c18(lVar26,uVar13);
    FUN_01dc2574(*(undefined8 *)(param_1 + 0x1a8),0);
LAB_01ddd640:
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar26 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar26;
    local_110 = 0x1f7e1ba02170001c;
    local_108 = "PLAY_UI_COMMON_RELEASE";
    local_100 = 0x16;
    local_f8 = (long *)0x0;
    if (*(long *)(lVar26 + 0x48) == 0) {
      uVar18 = 0xffffffffffffffff;
    }
    else {
      uVar18 = FUN_00cf8198();
    }
    pcVar23 = local_108;
    memset(&local_f0,0,0x80);
    plVar20 = *(long **)(*(long *)(lVar26 + 0x200) + 0x60);
    pcVar25 = *(code **)(*plVar20 + 0xd0);
    goto LAB_01ddd6cc;
  }
  if (*piVar1 == 0) goto LAB_01ddd480;
  FUN_01dc2a18(lVar21,0);
  uVar11 = *(uint *)(lVar21 + 0x6c3c);
  uVar19 = (ulong)uVar11;
  if ((uVar11 & 0xff) == *(uint *)(param_1 + 0x2a4)) {
    uVar16 = FUN_01ddc58c(lVar26,(uVar11 & 0xff) - 1);
    uVar13 = *(uint *)(lVar21 + 0x6c3c);
    uVar19 = (ulong)uVar13;
    bVar8 = uVar16 <= (uVar11 >> 0xe & 0x3f) + (uVar11 >> 0x1a);
    uVar11 = 0;
    if (uVar13 >> 0x1a != 0) {
      uVar11 = 0;
      do {
        FUN_01dc1f58(*(undefined8 *)(param_1 + 0x1a8),*piVar1,uVar11 + ((uint)uVar19 >> 0xe & 0x3f),
                     0);
        uVar19 = (ulong)*(uint *)(lVar21 + 0x6c3c);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(lVar21 + 0x6c3c) >> 0x1a);
      goto LAB_01ddda78;
    }
  }
  else {
    bVar8 = true;
LAB_01ddda78:
    uVar13 = (uint)uVar19;
    uVar11 = (uint)(uVar19 >> 0x1a);
    if (uVar19 >> 0x1a != 0) {
      uVar11 = 0;
      do {
        FUN_01dc8488(lVar26,((uint)uVar19 & 0xff) - 1,(uint)uVar19 >> 0xe & 0x3f);
        uVar13 = *(uint *)(lVar21 + 0x6c3c);
        uVar19 = (ulong)uVar13;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13 >> 0x1a);
      uVar11 = uVar13 >> 0x1a;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 0x1a8);
  if (!bVar8) {
    FUN_01dc43e0(uVar18,uVar13 >> 0xe & 0x3f,5,-uVar11);
    uVar18 = *(undefined8 *)(param_1 + 0x1a8);
  }
  FUN_01dc2574(uVar18,bVar8);
  if (((*PTR_DAT_047d8280 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar26 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar26;
  local_110 = 0x1f7e1ba02170001c;
  local_108 = "PLAY_UI_COMMON_RELEASE";
  local_100 = 0x16;
  local_f8 = (long *)0x0;
  if (*(long *)(lVar26 + 0x48) == 0) {
    uVar18 = 0xffffffffffffffff;
  }
  else {
    uVar18 = FUN_00cf8198();
  }
  memset(&local_f0,0,0x80);
  pcVar23 = "PLAY_UI_COMMON_RELEASE";
  plVar20 = *(long **)(*(long *)(lVar26 + 0x200) + 0x60);
  pcVar25 = *(code **)(*plVar20 + 0xd0);
LAB_01ddd6cc:
  iVar12 = (*pcVar25)(plVar20,pcVar23,uVar18,1,&LAB_01080c70,lVar26,0,0,0);
  if ((iVar12 != 0) &&
     (FUN_0104f218(*(undefined8 *)(lVar26 + 0x220),&local_110,iVar12,uVar18,0,&local_f0,0),
     pcVar25 = local_e8, local_e8 != (code *)0x0)) {
    local_e0 = 0;
    local_d8 = (long *)0x0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar25)(&local_d0);
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (*(long *)(param_1 + 0x1b8) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 7;
    *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 7;
  }
  return 1;
}


