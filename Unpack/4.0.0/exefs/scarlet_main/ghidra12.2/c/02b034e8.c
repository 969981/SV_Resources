/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b034e8; name: FUN_02b034e8
 */


void FUN_02b034e8(long param_1,uint param_2,short *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  short sVar4;
  size_t sVar5;
  short *psVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *__dest;
  short *local_98;
  short *local_90;
  long local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if (param_2 == 2) {
    lVar8 = 0x8120;
  }
  else if (param_2 == 1) {
    lVar8 = 0x80d0;
  }
  else {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("false","GetRecentlyDataArray",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/cmn/game_data/savedata_accessor/pokedex_dlc_savedata_accessor.cpp"
                 ,0x151,"RecentlyTyp is Invalid.");
    }
    lVar8 = 0x8080;
  }
  psVar16 = (short *)(param_1 + lVar8);
  plStack_80 = *(long **)(param_1 + 8);
  local_68 = 0;
  local_98 = (short *)0x0;
  local_90 = (short *)0x0;
  local_88 = 0;
  local_78 = 0xfffffffffffffff;
  uStack_70 = 0;
  if (*psVar16 != 0) {
    FUN_02b03a78(&local_98,psVar16);
  }
  psVar12 = psVar16 + 8;
  if (*psVar12 != 0) {
    FUN_02b03a78(&local_98,psVar12);
  }
  psVar15 = psVar16 + 0x10;
  if (*psVar15 != 0) {
    FUN_02b03a78(&local_98,psVar15);
  }
  psVar13 = psVar16 + 0x18;
  if (*psVar13 != 0) {
    FUN_02b03a78(&local_98,psVar13);
  }
  psVar14 = psVar16 + 0x20;
  if (*psVar14 != 0) {
    FUN_02b03a78(&local_98,psVar14);
  }
  psVar6 = local_98;
  if ((long)local_90 - (long)local_98 != 0) {
    uVar11 = (long)local_90 - (long)local_98 >> 4;
    uVar9 = 0;
    uVar2 = uVar11;
    if (uVar11 < 2) {
      uVar2 = 1;
    }
    __dest = local_98;
    do {
      if (uVar11 == uVar9) goto LAB_02b03a48;
      if ((*__dest == *param_3) && ((char)__dest[2] == (char)param_3[2])) {
        sVar5 = ((long)local_90 - (long)__dest) - 0x10;
        if (sVar5 != 0) {
          memmove(__dest,__dest + 8,sVar5);
        }
        local_90 = (short *)((long)__dest + sVar5);
        goto LAB_02b03670;
      }
      uVar9 = uVar9 + 1;
      __dest = __dest + 8;
    } while (uVar2 != uVar9);
    if (4 < uVar11) {
      sVar5 = (long)local_90 - (long)(local_98 + 8);
      if (sVar5 != 0) {
        memmove(local_98,local_98 + 8,sVar5);
      }
      local_90 = (short *)((long)psVar6 + sVar5);
    }
  }
LAB_02b03670:
  FUN_02b03a78(&local_98,param_3);
  plVar7 = plStack_80;
  psVar6 = local_98;
  lVar10 = (long)local_90 - (long)local_98;
  psVar16[0] = 0;
  psVar16[1] = 0;
  psVar16[2] = 0;
  psVar16[3] = 0;
  psVar16[4] = 0;
  psVar16[5] = 0;
  psVar16[6] = 0;
  psVar16[7] = 0;
  lVar8 = lVar10 * 0x10000000;
  if (lVar8 < 0x100000000) {
    psVar12[0] = 0;
    psVar12[1] = 0;
    psVar12[2] = 0;
    psVar12[3] = 0;
    psVar16[0xc] = 0;
    psVar16[0xd] = 0;
    psVar16[0xe] = 0;
    psVar16[0xf] = 0;
LAB_02b03738:
    psVar15[0] = 0;
    psVar15[1] = 0;
    psVar15[2] = 0;
    psVar15[3] = 0;
    psVar16[0x14] = 0;
    psVar16[0x15] = 0;
    psVar16[0x16] = 0;
    psVar16[0x17] = 0;
LAB_02b0373c:
    psVar13[0] = 0;
    psVar13[1] = 0;
    psVar13[2] = 0;
    psVar13[3] = 0;
    psVar16[0x1c] = 0;
    psVar16[0x1d] = 0;
    psVar16[0x1e] = 0;
    psVar16[0x1f] = 0;
LAB_02b03740:
    psVar14[0] = 0;
    psVar14[1] = 0;
    psVar14[2] = 0;
    psVar14[3] = 0;
    psVar16[0x24] = 0;
    psVar16[0x25] = 0;
    psVar16[0x26] = 0;
    psVar16[0x27] = 0;
  }
  else {
    if (lVar10 == 0) goto LAB_02b03a48;
    uVar3 = *(undefined8 *)(local_98 + 4);
    *(undefined8 *)psVar16 = *(undefined8 *)local_98;
    *(undefined8 *)(psVar16 + 4) = uVar3;
    psVar12[0] = 0;
    psVar12[1] = 0;
    psVar12[2] = 0;
    psVar12[3] = 0;
    psVar16[0xc] = 0;
    psVar16[0xd] = 0;
    psVar16[0xe] = 0;
    psVar16[0xf] = 0;
    if (lVar8 < 0x200000000) goto LAB_02b03738;
    uVar9 = lVar10 >> 4;
    if (uVar9 < 2) goto LAB_02b03a48;
    uVar3 = *(undefined8 *)(local_98 + 0xc);
    *(undefined8 *)psVar12 = *(undefined8 *)(local_98 + 8);
    *(undefined8 *)(psVar16 + 0xc) = uVar3;
    psVar15[0] = 0;
    psVar15[1] = 0;
    psVar15[2] = 0;
    psVar15[3] = 0;
    psVar16[0x14] = 0;
    psVar16[0x15] = 0;
    psVar16[0x16] = 0;
    psVar16[0x17] = 0;
    if (lVar8 < 0x300000000) goto LAB_02b0373c;
    if (uVar9 < 3) goto LAB_02b03a48;
    uVar3 = *(undefined8 *)(local_98 + 0x14);
    *(undefined8 *)psVar15 = *(undefined8 *)(local_98 + 0x10);
    *(undefined8 *)(psVar16 + 0x14) = uVar3;
    psVar13[0] = 0;
    psVar13[1] = 0;
    psVar13[2] = 0;
    psVar13[3] = 0;
    psVar16[0x1c] = 0;
    psVar16[0x1d] = 0;
    psVar16[0x1e] = 0;
    psVar16[0x1f] = 0;
    if (lVar8 < 0x400000000) goto LAB_02b03740;
    if (uVar9 < 4) goto LAB_02b03a48;
    uVar3 = *(undefined8 *)(local_98 + 0x1c);
    *(undefined8 *)psVar13 = *(undefined8 *)(local_98 + 0x18);
    *(undefined8 *)(psVar16 + 0x1c) = uVar3;
    psVar14[0] = 0;
    psVar14[1] = 0;
    psVar14[2] = 0;
    psVar14[3] = 0;
    psVar16[0x24] = 0;
    psVar16[0x25] = 0;
    psVar16[0x26] = 0;
    psVar16[0x27] = 0;
    if (0x4ffffffff < lVar8) {
      if (uVar9 < 5) goto LAB_02b03a48;
      uVar3 = *(undefined8 *)(local_98 + 0x24);
      *(undefined8 *)psVar14 = *(undefined8 *)(local_98 + 0x20);
      *(undefined8 *)(psVar16 + 0x24) = uVar3;
    }
  }
  if (local_98 != (short *)0x0) {
    local_90 = local_98;
    lVar8 = local_88 - (long)local_98;
    uVar9 = (**(code **)(*plStack_80 + 0xf8))(plStack_80);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,psVar6,lVar8,2);
    }
    else {
      FUN_00c48fe8(plVar7,psVar6,lVar8,2);
    }
  }
  if (param_2 < 2) {
    sVar4 = *param_3;
    if (*(short *)(param_1 + 0x8120) == sVar4) {
      lVar8 = 0;
    }
    else if (*(short *)(param_1 + 0x8130) == sVar4) {
      lVar8 = 1;
    }
    else if (*(short *)(param_1 + 0x8140) == sVar4) {
      lVar8 = 2;
    }
    else if (*(short *)(param_1 + 0x8150) == sVar4) {
      lVar8 = 3;
    }
    else {
      if (*(short *)(param_1 + 0x8160) != sVar4) {
        return;
      }
      lVar8 = 4;
    }
    plStack_80 = *(long **)(param_1 + 8);
    local_98 = (short *)0x0;
    local_90 = (short *)0x0;
    local_68 = 0;
    local_78 = 0xfffffffffffffff;
    uStack_70 = 0;
    local_88 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x8120);
    if (*(short *)(param_1 + 0x8120) != 0) {
      FUN_02b03a78(&local_98,puVar1);
    }
    psVar16 = (short *)(param_1 + 0x8130);
    if (*psVar16 != 0) {
      FUN_02b03a78(&local_98,psVar16);
    }
    psVar12 = (short *)(param_1 + 0x8140);
    if (*psVar12 != 0) {
      FUN_02b03a78(&local_98,psVar12);
    }
    psVar15 = (short *)(param_1 + 0x8150);
    if (*psVar15 != 0) {
      FUN_02b03a78(&local_98,psVar15);
    }
    psVar13 = (short *)(param_1 + 0x8160);
    if (*psVar13 != 0) {
      FUN_02b03a78(&local_98,psVar13);
    }
    psVar14 = local_98 + lVar8 * 8;
    sVar5 = (long)local_90 - (long)(psVar14 + 8);
    if (sVar5 != 0) {
      memmove(psVar14,psVar14 + 8,sVar5);
    }
    plVar7 = plStack_80;
    psVar6 = local_98;
    local_90 = (short *)((long)psVar14 + sVar5);
    lVar10 = (long)local_90 - (long)local_98;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x8128) = 0;
    lVar8 = lVar10 * 0x10000000;
    if (lVar8 < 0x100000000) {
      psVar16[0] = 0;
      psVar16[1] = 0;
      psVar16[2] = 0;
      psVar16[3] = 0;
      *(undefined8 *)(param_1 + 0x8138) = 0;
      *(undefined8 *)(param_1 + 0x8160) = 0;
      *(undefined8 *)(param_1 + 0x8168) = 0;
      *(undefined8 *)(param_1 + 0x8150) = 0;
      *(undefined8 *)(param_1 + 0x8158) = 0;
      psVar12[0] = 0;
      psVar12[1] = 0;
      psVar12[2] = 0;
      psVar12[3] = 0;
      *(undefined8 *)(param_1 + 0x8148) = 0;
      if (local_98 == (short *)0x0) {
        return;
      }
    }
    else {
      if (lVar10 == 0) {
LAB_02b03a48:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar3 = *(undefined8 *)(local_98 + 4);
      *puVar1 = *(undefined8 *)local_98;
      *(undefined8 *)(param_1 + 0x8128) = uVar3;
      psVar16[0] = 0;
      psVar16[1] = 0;
      psVar16[2] = 0;
      psVar16[3] = 0;
      *(undefined8 *)(param_1 + 0x8138) = 0;
      if (lVar8 < 0x200000000) {
        *(undefined8 *)(param_1 + 0x8160) = 0;
        *(undefined8 *)(param_1 + 0x8168) = 0;
        *(undefined8 *)(param_1 + 0x8150) = 0;
        *(undefined8 *)(param_1 + 0x8158) = 0;
        psVar12[0] = 0;
        psVar12[1] = 0;
        psVar12[2] = 0;
        psVar12[3] = 0;
        *(undefined8 *)(param_1 + 0x8148) = 0;
      }
      else {
        uVar9 = lVar10 >> 4;
        if (uVar9 < 2) goto LAB_02b03a48;
        uVar3 = *(undefined8 *)(local_98 + 0xc);
        *(undefined8 *)psVar16 = *(undefined8 *)(local_98 + 8);
        *(undefined8 *)(param_1 + 0x8138) = uVar3;
        psVar12[0] = 0;
        psVar12[1] = 0;
        psVar12[2] = 0;
        psVar12[3] = 0;
        *(undefined8 *)(param_1 + 0x8148) = 0;
        if (lVar8 < 0x300000000) {
          *(undefined8 *)(param_1 + 0x8160) = 0;
          *(undefined8 *)(param_1 + 0x8168) = 0;
          psVar15[0] = 0;
          psVar15[1] = 0;
          psVar15[2] = 0;
          psVar15[3] = 0;
          *(undefined8 *)(param_1 + 0x8158) = 0;
        }
        else {
          if (uVar9 < 3) goto LAB_02b03a48;
          uVar3 = *(undefined8 *)(local_98 + 0x14);
          *(undefined8 *)psVar12 = *(undefined8 *)(local_98 + 0x10);
          *(undefined8 *)(param_1 + 0x8148) = uVar3;
          psVar15[0] = 0;
          psVar15[1] = 0;
          psVar15[2] = 0;
          psVar15[3] = 0;
          *(undefined8 *)(param_1 + 0x8158) = 0;
          if (lVar8 < 0x400000000) {
            psVar13[0] = 0;
            psVar13[1] = 0;
            psVar13[2] = 0;
            psVar13[3] = 0;
            *(undefined8 *)(param_1 + 0x8168) = 0;
          }
          else {
            if (uVar9 < 4) goto LAB_02b03a48;
            uVar3 = *(undefined8 *)(local_98 + 0x1c);
            *(undefined8 *)psVar15 = *(undefined8 *)(local_98 + 0x18);
            *(undefined8 *)(param_1 + 0x8158) = uVar3;
            psVar13[0] = 0;
            psVar13[1] = 0;
            psVar13[2] = 0;
            psVar13[3] = 0;
            *(undefined8 *)(param_1 + 0x8168) = 0;
            if (0x4ffffffff < lVar8) {
              if (uVar9 < 5) goto LAB_02b03a48;
              uVar3 = *(undefined8 *)(local_98 + 0x24);
              *(undefined8 *)psVar13 = *(undefined8 *)(local_98 + 0x20);
              *(undefined8 *)(param_1 + 0x8168) = uVar3;
            }
          }
        }
      }
    }
    lVar8 = local_88 - (long)local_98;
    local_90 = local_98;
    uVar9 = (**(code **)(*plStack_80 + 0xf8))(plStack_80);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,psVar6,lVar8,2);
    }
    else {
      FUN_00c48fe8(plVar7,psVar6,lVar8,2);
    }
  }
  return;
}


