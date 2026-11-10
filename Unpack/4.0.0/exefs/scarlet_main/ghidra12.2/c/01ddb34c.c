/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddb34c; name: FUN_01ddb34c
 */


undefined8 FUN_01ddb34c(long param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  code *pcVar11;
  char *pcVar12;
  bool bVar13;
  short sVar14;
  undefined2 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  
  if (*(int *)(param_1 + 0x298) != 2) {
    if (*(int *)(param_1 + 0x298) != 0) {
      return 0;
    }
    uVar21 = FUN_01195974();
    iVar16 = *(int *)(param_1 + 0x108);
    iVar28 = (int)((ulong)uVar21 >> 0x20);
    if (iVar16 == 0) {
      lVar22 = FUN_01195854();
      uVar30 = (uint)*(byte *)(lVar22 + 0x570);
      iVar29 = 0;
      iVar16 = *(int *)(param_1 + 0x108);
    }
    else {
      iVar29 = 1;
      if (iVar16 != 1) {
        if (iVar16 != 2) {
          uVar30 = 0xffffffff;
          iVar29 = 3;
          goto LAB_01ddb3ac;
        }
        iVar29 = 2;
      }
      uVar30 = *(uint *)(param_1 + 0x2a4);
    }
LAB_01ddb3ac:
    if (iVar16 == 0) {
      iVar28 = (int)uVar21 + iVar28 * 6;
    }
    else if ((iVar16 != 1) && (iVar16 != 2)) {
      iVar28 = 1;
    }
    if (iVar29 == 3) {
      return 0;
    }
    uVar23 = FUN_01dd6bcc(param_1);
    if ((uVar23 & 1) != 0) {
      FUN_01ddc158(param_1);
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar16 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar22 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar22;
      local_e0 = 0x9361c9d60afa3753;
      local_d8 = "PLAY_UI_COMMON_BEEP";
      local_d0 = 0x13;
      local_c8 = (long *)0x0;
      if (*(long *)(lVar22 + 0x48) == 0) {
        uVar21 = 0xffffffffffffffff;
      }
      else {
        uVar21 = FUN_00cf8198();
      }
      memset(&local_c0,0,0x80);
      plVar24 = *(long **)(*(long *)(lVar22 + 0x200) + 0x60);
      local_f0 = (ulong)local_f0._4_4_ << 0x20;
      iVar16 = (**(code **)(*plVar24 + 0xd0))
                         (plVar24,"PLAY_UI_COMMON_BEEP",uVar21,1,&LAB_01080c70,lVar22,0,0);
      if (iVar16 != 0) {
        FUN_0104f218(*(undefined8 *)(lVar22 + 0x220),&local_e0,iVar16,uVar21,0,&local_c0,0);
        pcVar11 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = (long *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar11)(auStack_a0);
        }
      }
      if (local_c8 == (long *)0x0) {
        return 0;
      }
      (**(code **)(*local_c8 + 0x20))();
      return 0;
    }
    *(short *)(param_1 + 0x1e4) = (short)iVar28;
    uVar23 = FUN_01dd9ffc(param_1);
    if ((uVar23 & 1) != 0) {
      bVar13 = false;
      goto LAB_01ddb56c;
    }
    lVar22 = *(long *)(param_1 + 0x1a8);
    piVar1 = (int *)(lVar22 + 0x6c38);
    lVar25 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar29,uVar30,iVar28);
    if (lVar25 == 0) {
      if (*piVar1 - 1U < 2) {
        FUN_0174fbdc(&local_c0);
        if (iVar29 == 0) {
          uVar30 = *(uint *)(lVar22 + 0x6c3c);
          iVar16 = FUN_014c0588(local_c0);
          if ((uVar30 >> 0xe & 0x3f) < iVar16 - 1U) {
            FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),*(uint *)(lVar22 + 0x6c3c) >> 0xe & 0x3f,3
                         ,0);
          }
          bVar13 = false;
        }
        else {
          FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),*(uint *)(lVar22 + 0x6c3c) >> 0xe & 0x3f,3,0
                      );
          uVar21 = *(undefined8 *)(param_1 + 0x1a8);
          uVar17 = FUN_014c0588(local_c0);
          FUN_01dc4ca8(uVar21,0,0,iVar28,uVar17,3);
          sVar14 = FUN_014c0588(local_c0);
          bVar13 = true;
          *(ushort *)(param_1 + 0x1e4) =
               sVar14 - (ushort)((uint)*(undefined4 *)(lVar22 + 0x6c3c) >> 0x1a);
        }
        if (local_c0 != (long *)0x0) {
          plVar24 = local_c0 + 5;
          do {
            iVar16 = (int)*plVar24;
            iVar28 = iVar16 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar7) {
              *(int *)plVar24 = iVar28;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
joined_r0x01ddb898:
          if (iVar28 == 0) {
            (**(code **)(*local_c0 + 0x10))();
          }
          else if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      else {
        if (1 < iVar29 - 1U) goto LAB_01ddb560;
        FUN_0174fbdc(&local_c0);
        iVar16 = FUN_014c0588(local_c0);
        bVar13 = iVar28 != iVar16;
        if (bVar13) {
          uVar21 = *(undefined8 *)(param_1 + 0x1a8);
          uVar17 = FUN_014c0588(local_c0);
          uVar19 = FUN_01ddc4b0(*(undefined8 *)(param_1 + 0x1a8),iVar29);
          FUN_01dc4ca8(uVar21,0,0,iVar28,uVar17,uVar19);
          uVar15 = FUN_014c0588(local_c0);
          *(undefined2 *)(param_1 + 0x1e4) = uVar15;
        }
        if (local_c0 != (long *)0x0) {
          plVar24 = local_c0 + 5;
          do {
            iVar16 = (int)*plVar24;
            iVar28 = iVar16 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar7) {
              *(int *)plVar24 = iVar28;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          goto joined_r0x01ddb898;
        }
      }
    }
    else {
      lVar25 = FUN_01195854();
      uVar18 = *(uint *)(lVar22 + 0x6c3c);
      uVar30 = uVar18 >> 0xe & 0x3f;
      if (*piVar1 == 0) {
        bVar3 = *(byte *)(lVar25 + 0x570);
        uVar31 = (uint)bVar3;
        uVar20 = uVar18 & 0xff;
        if (uVar20 == bVar3) {
          uVar30 = (uVar18 >> 8 & 0x3f) + uVar30 * 6;
          uVar21 = 0;
        }
        else {
          uVar18 = FUN_019aeb9c(uVar30,lVar25,0);
          if ((int)uVar18 < 1) {
LAB_01ddb7e4:
            uVar21 = 1;
            uVar30 = 1;
          }
          else {
            iVar16 = 1;
            uVar21 = 1;
            uVar30 = 1;
            uVar27 = (uint)bVar3;
            do {
              if (uVar31 == uVar20) {
                uVar21 = 1;
                uVar30 = 0xffffffff;
                break;
              }
              uVar2 = 0;
              if ((int)(uVar27 + 1) < (int)uVar18) {
                uVar2 = uVar27 + 1;
              }
              uVar27 = uVar18;
              if (0 < (int)uVar31) {
                uVar27 = uVar31;
              }
              if ((int)uVar18 <= iVar16) goto LAB_01ddb7e4;
              uVar31 = uVar27 - 1;
              iVar16 = iVar16 + 1;
              uVar27 = uVar2;
            } while (uVar2 != uVar20);
          }
        }
      }
      else {
        uVar21 = 0;
        if (1 < *piVar1 - 1U) {
          uVar30 = 0;
        }
      }
      FUN_01dc3390(*(undefined8 *)(param_1 + 0x1a8),uVar21,iVar29,iVar28,*piVar1,uVar30,
                   *(undefined4 *)(param_1 + 0x2a4));
LAB_01ddb560:
      bVar13 = false;
    }
    FUN_01dd67ac(param_1);
LAB_01ddb56c:
    FUN_01dc2574(*(undefined8 *)(param_1 + 0x1a8),bVar13);
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar22 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar22;
    local_e0 = 0x1f7e1ba02170001c;
    local_d8 = "PLAY_UI_COMMON_RELEASE";
    local_d0 = 0x16;
    local_c8 = (long *)0x0;
    if (*(long *)(lVar22 + 0x48) == 0) {
      uVar21 = 0xffffffffffffffff;
    }
    else {
      uVar21 = FUN_00cf8198();
    }
    pcVar12 = local_d8;
    memset(&local_c0,0,0x80);
    plVar24 = *(long **)(*(long *)(lVar22 + 0x200) + 0x60);
    local_f0 = (ulong)local_f0._4_4_ << 0x20;
    iVar16 = (**(code **)(*plVar24 + 0xd0))(plVar24,pcVar12,uVar21,1,&LAB_01080c70,lVar22,0,0);
    if (iVar16 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar22 + 0x220),&local_e0,iVar16,uVar21,0,&local_c0,0);
      pcVar11 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = (long *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar11)(auStack_a0);
      }
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    return 1;
  }
  uVar21 = FUN_01195974();
  iVar16 = *(int *)(param_1 + 0x108);
  uVar30 = (uint)((ulong)uVar21 >> 0x20);
  if (iVar16 == 0) {
    lVar22 = FUN_01195854();
    uVar18 = (uint)*(byte *)(lVar22 + 0x570);
    iVar28 = 0;
    iVar16 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar28 = 1;
    if (iVar16 != 1) {
      if (iVar16 != 2) {
        uVar18 = 0xffffffff;
        iVar28 = 3;
        goto LAB_01ddb9d4;
      }
      iVar28 = 2;
    }
    uVar18 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01ddb9d4:
  if (iVar16 == 0) {
    uVar30 = (int)uVar21 + uVar30 * 6;
  }
  else if ((iVar16 != 1) && (iVar16 != 2)) {
    uVar30 = 1;
  }
  if (iVar28 == 3) {
    return 0;
  }
  uVar23 = FUN_01dd6ce0(param_1);
  if ((uVar23 & 1) != 0) {
    FUN_01ddc158(param_1);
LAB_01ddba20:
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar22 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar22;
    local_110 = 0x9361c9d60afa3753;
    pcStack_108 = "PLAY_UI_COMMON_BEEP";
    local_100 = 0x13;
    local_f8 = (long *)0x0;
    if (*(long *)(lVar22 + 0x48) == 0) {
      uVar21 = 0xffffffffffffffff;
    }
    else {
      uVar21 = FUN_00cf8198();
    }
    memset(&local_f0,0,0x80);
    plVar24 = *(long **)(*(long *)(lVar22 + 0x200) + 0x60);
    iVar16 = (**(code **)(*plVar24 + 0xd0))
                       (plVar24,"PLAY_UI_COMMON_BEEP",uVar21,1,&LAB_01080c70,lVar22,0,0,0);
    if (iVar16 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar22 + 0x220),&local_110,iVar16,uVar21,0,&local_f0,0);
      pcVar11 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = 0;
        local_d8 = (char *)0x0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        (*pcVar11)(&local_d0);
      }
    }
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    return 0;
  }
  sVar14 = (short)uVar30;
  *(short *)(param_1 + 0x1e4) = sVar14;
  lVar22 = FUN_01195854();
  lVar25 = *(long *)(param_1 + 0x1a8);
  piVar1 = (int *)(lVar25 + 0x6c38);
  if (iVar28 == 0) {
    if (*piVar1 == 0) goto LAB_01ddba20;
    FUN_01dc2a18(lVar25,0);
    FUN_01ddc4d0(param_1,*(uint *)(lVar25 + 0x6c3c) & 0xff,*(uint *)(lVar25 + 0x6c3c) >> 0xe & 0x3f)
    ;
    goto LAB_01ddbc24;
  }
  if (*piVar1 == 0) {
    iVar16 = uVar18 - 1;
    uVar31 = FUN_01ddc58c(lVar22,iVar16);
    uVar20 = *(uint *)(lVar25 + 0x6c3c);
    uVar18 = uVar20 >> 0xe & 0x3f;
    if (*piVar1 == 0) {
      uVar18 = (uVar20 >> 8 & 0x3f) + uVar18 * 6;
    }
    else if (1 < *piVar1 - 1U) {
      uVar18 = 0;
    }
    uVar18 = FUN_01ddc5e8(lVar22,iVar16,uVar30,uVar20 & 0xff,uVar18);
    FUN_01dc6c18(lVar22,iVar16);
    if (uVar18 == 6) {
      uVar21 = *(undefined8 *)(param_1 + 0x1a8);
      if (uVar30 <= uVar31) goto LAB_01ddbf1c;
      FUN_01dc4ca8(uVar21,0,0,uVar30,uVar31,5);
      *(short *)(param_1 + 0x1e4) = (short)uVar31;
    }
    else {
      if (uVar30 == uVar18) {
        return 0;
      }
      if (uVar31 <= uVar30) {
        FUN_01dc1f58(*(undefined8 *)(param_1 + 0x1a8),1,uVar18,0);
        FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),uVar18,5,0xffffffff);
        FUN_01dc4ca8(*(undefined8 *)(param_1 + 0x1a8),0,0,uVar30,uVar31,5);
        FUN_01dc1f58(*(undefined8 *)(param_1 + 0x1a8),2,uVar18,0);
        goto LAB_01ddbc10;
      }
      FUN_01dc1f58(*(undefined8 *)(param_1 + 0x1a8),1,uVar18,0);
      if (uVar18 < uVar30) {
        FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),uVar18,5,0xffffffff);
        FUN_01dc4ca8(*(undefined8 *)(param_1 + 0x1a8),0,0,uVar30,uVar31,5);
        FUN_01dc1f58(*(undefined8 *)(param_1 + 0x1a8),2,uVar18,0);
        goto LAB_01ddbc14;
      }
      FUN_01dc1f58(*(undefined8 *)(param_1 + 0x1a8),2,uVar30,0);
      FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),uVar18,5,0xffffffff);
    }
LAB_01ddbc18:
    uVar21 = *(undefined8 *)(param_1 + 0x1a8);
    uVar26 = 1;
  }
  else {
    uVar20 = *(uint *)(lVar25 + 0x6c3c) & 0xff;
    uVar8 = *(uint *)(lVar25 + 0x6c3c) >> 0xe & 0x3f;
    uVar27 = uVar20 - 1;
    uVar2 = uVar18 - 1;
    uVar31 = 0;
    if (uVar27 < 6) {
      uVar31 = uVar27;
    }
    uVar27 = 0;
    if (uVar8 < 6) {
      uVar27 = uVar8;
    }
    uVar4 = *(ushort *)(lVar22 + 0x526 + (ulong)uVar31 * 0xc + (ulong)uVar27 * 2);
    uVar9 = uVar4 >> 8;
    uVar4 = uVar4 & 0xff;
    uVar31 = 0;
    if (uVar2 < 6) {
      uVar31 = uVar2;
    }
    uVar27 = 0;
    if (uVar30 < 6) {
      uVar27 = uVar30;
    }
    uVar5 = *(ushort *)(lVar22 + 0x526 + (ulong)uVar31 * 0xc + (ulong)uVar27 * 2);
    uVar10 = uVar5 >> 8;
    uVar5 = uVar5 & 0xff;
    if (uVar20 != uVar18) {
      uVar18 = FUN_01ddc58c(lVar22,uVar2);
      uVar20 = FUN_01ddc5e8(lVar22,uVar2,uVar30,uVar9,uVar4);
      FUN_01dc6c18(lVar22,uVar2);
      if (uVar20 == 6) {
        if (uVar18 < uVar30) {
          uVar21 = *(undefined8 *)(param_1 + 0x1a8);
          goto LAB_01ddbe20;
        }
        if (uVar10 < 0x21) {
          FUN_01ddc5e8(lVar22,(*(uint *)(lVar25 + 0x6c3c) & 0xff) - 1,
                       *(uint *)(lVar25 + 0x6c3c) >> 0xe & 0x3f,uVar10,uVar5);
        }
        uVar21 = 0;
      }
      else {
        if (uVar30 == uVar20) goto LAB_01ddba20;
        if (uVar30 < uVar18) {
          FUN_01ddc5e8(lVar22,(*(uint *)(lVar25 + 0x6c3c) & 0xff) - 1,
                       *(uint *)(lVar25 + 0x6c3c) >> 0xe & 0x3f,uVar10,uVar5);
          FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),uVar20,5,0xffffffff);
          if (uVar20 < uVar30) {
            uVar21 = *(undefined8 *)(param_1 + 0x1a8);
            uVar18 = uVar30 - 1;
            goto LAB_01ddbe20;
          }
        }
        else {
          FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),uVar20,5,0xffffffff);
          uVar21 = *(undefined8 *)(param_1 + 0x1a8);
          uVar18 = uVar18 - 1;
LAB_01ddbe20:
          FUN_01dc4ca8(uVar21,0,0,uVar30,uVar18,5);
          *(short *)(param_1 + 0x1e4) = (short)uVar18;
        }
        uVar21 = 1;
      }
      FUN_01dc2574(*(undefined8 *)(param_1 + 0x1a8),uVar21);
      FUN_01dc6c18(lVar22,*(byte *)(lVar25 + 0x6c3c) - 1);
      goto LAB_01ddbc24;
    }
    FUN_01ddc5e8(lVar22,uVar2,uVar30,uVar9,uVar4);
    if (0x20 < uVar10) {
      uVar31 = FUN_01ddc58c(lVar22,uVar2);
      FUN_01dc6c18(lVar22,uVar2);
      FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),*(uint *)(lVar25 + 0x6c3c) >> 0xe & 0x3f,5,
                   0xffffffff);
      FUN_01dc4ca8(*(undefined8 *)(param_1 + 0x1a8),0,0,uVar30,uVar31,5);
LAB_01ddbc10:
      sVar14 = (short)uVar31;
LAB_01ddbc14:
      *(short *)(param_1 + 0x1e4) = sVar14 + -1;
      goto LAB_01ddbc18;
    }
    FUN_01ddc5e8(lVar22,(*(uint *)(lVar25 + 0x6c3c) & 0xff) - 1,
                 *(uint *)(lVar25 + 0x6c3c) >> 0xe & 0x3f,uVar10,uVar5);
    FUN_01dc3390(*(undefined8 *)(param_1 + 0x1a8),0,iVar28,uVar30,*piVar1,
                 *(uint *)(lVar25 + 0x6c3c) >> 0xe & 0x3f,uVar18);
    uVar21 = *(undefined8 *)(param_1 + 0x1a8);
LAB_01ddbf1c:
    uVar26 = 0;
  }
  FUN_01dc2574(uVar21,uVar26);
LAB_01ddbc24:
  if (((*PTR_DAT_047d8280 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar16 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar22 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar22;
  local_110 = 0x1f7e1ba02170001c;
  pcStack_108 = "PLAY_UI_COMMON_RELEASE";
  local_100 = 0x16;
  local_f8 = (long *)0x0;
  if (*(long *)(lVar22 + 0x48) == 0) {
    uVar21 = 0xffffffffffffffff;
  }
  else {
    uVar21 = FUN_00cf8198();
  }
  memset(&local_f0,0,0x80);
  plVar24 = *(long **)(*(long *)(lVar22 + 0x200) + 0x60);
  iVar16 = (**(code **)(*plVar24 + 0xd0))
                     (plVar24,"PLAY_UI_COMMON_RELEASE",uVar21,1,&LAB_01080c70,lVar22,0,0,0);
  if (iVar16 != 0) {
    FUN_0104f218(*(undefined8 *)(lVar22 + 0x220),&local_110,iVar16,uVar21,0,&local_f0,0);
    pcVar11 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = (char *)0x0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar11)(&local_d0);
    }
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  return 1;
}


