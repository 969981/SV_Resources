/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f25b3c; name: FUN_00f25b3c
 */


void FUN_00f25b3c(long *param_1,long *param_2,int param_3,int param_4,int param_5,int param_6,
                 ulong *param_7)

{
  short *psVar1;
  long *plVar2;
  ulong *puVar3;
  int *piVar4;
  uint uVar5;
  short sVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  short sVar20;
  ulong uVar21;
  char *pcVar22;
  bool bVar23;
  long *plVar24;
  char *pcVar25;
  long *plVar26;
  char *pcVar27;
  ulong unaff_x27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  long local_1d0;
  ulong uStack_1c8;
  undefined8 local_198;
  char *pcStack_190;
  undefined8 local_188;
  long *local_180;
  ulong local_178;
  char *local_170;
  undefined8 local_168;
  long *local_160;
  ulong *local_158 [2];
  long *local_148;
  long local_140;
  ulong local_138;
  long *local_110;
  long *local_108;
  long local_e8;
  float local_e0;
  undefined1 auStack_d8 [104];
  int local_70;
  int local_6c [3];
  
  local_70 = param_5;
  local_6c[0] = param_4;
  uVar11 = FUN_00f25300(param_2 + (long)param_3 * 0xd + 0x19e,local_6c);
  FUN_00ff0754(auStack_d8,uVar11);
  uVar11 = FUN_01499e84(auStack_d8,&local_70);
  FUN_00ff0bd4(&local_140,uVar11);
  uVar16 = local_138;
  if (param_6 < 0) {
    if ((uint)local_e8 == 1) {
      uVar17 = 0;
    }
    else if ((uint)local_e8 == 0) {
      uVar19 = *param_7;
      uVar17 = (int)param_7[1] + (int)uVar19;
      uVar18 = param_7[1] ^ uVar19;
      *param_7 = uVar18 ^ (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar18 << 0x10;
      param_7[1] = uVar18 >> 0x1b | uVar18 << 0x25;
    }
    else {
      lVar14 = 0x1f;
      if (((uint)local_e8 << (ulong)((uint)LZCOUNT((uint)local_e8) & 0x1f) & 0x7fffffff) != 0) {
        lVar14 = 0x20;
      }
      uVar18 = lVar14 - LZCOUNT((uint)local_e8);
      uVar19 = uVar18 >> 6;
      if ((uVar18 & 0x3f) != 0) {
        uVar19 = uVar19 + 1;
      }
      uVar21 = 0;
      if (uVar19 != 0) {
        uVar21 = uVar18 / uVar19;
      }
      uVar5 = 0;
      if (uVar19 <= uVar18) {
        uVar5 = (uint)(0xffffffffffffffff >> (-uVar21 & 0x3f));
      }
      uVar19 = *param_7;
      uVar18 = param_7[1];
      do {
        uVar21 = uVar19 ^ uVar18;
        iVar10 = (int)uVar18;
        uVar18 = uVar21 >> 0x1b | uVar21 << 0x25;
        uVar17 = (int)uVar19 + iVar10 & uVar5;
        uVar19 = uVar21 ^ (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar21 << 0x10;
      } while ((uint)local_e8 <= uVar17);
      *param_7 = uVar19;
      param_7[1] = uVar18;
    }
    param_6 = uVar17 + 1;
  }
  uVar19 = (ulong)param_6;
  if (local_138 == 0) {
LAB_00f25ca8:
    plVar24 = (long *)(**(code **)(*local_108 + 0x10))(local_108,0x20,8);
    if (plVar24 == (long *)0x0) {
      (**(code **)(*local_108 + 0xe8))();
    }
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 == 0) {
      *(int *)(plVar24 + 2) = param_6;
      plVar24[3] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = local_108;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *(int *)(plVar24 + 2) = param_6;
      plVar24[3] = 0;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    *plVar24 = 0;
    plVar24[1] = uVar19;
    if (uVar16 == 0) {
LAB_00f25d44:
      uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
      uVar18 = (ulong)((float)(local_e8 + 1) / local_e0);
      if (uVar18 <= uVar16) {
        uVar18 = uVar16;
      }
      FUN_00ff1010(&local_140,uVar18);
      uVar16 = local_138;
      if ((local_138 & local_138 - 1) == 0) {
        unaff_x27 = local_138 - 1 & uVar19;
      }
      else if (uVar19 < local_138) {
        unaff_x27 = uVar19;
      }
      else {
        uVar18 = 0;
        if (local_138 != 0) {
          uVar18 = uVar19 / local_138;
        }
        unaff_x27 = uVar19 - uVar18 * local_138;
      }
    }
    else if (local_e0 * (float)uVar16 < (float)(local_e8 + 1)) goto LAB_00f25d44;
    plVar26 = *(long **)(local_140 + unaff_x27 * 8);
    if (plVar26 == (long *)0x0) {
      *plVar24 = (long)local_110;
      *(long ***)(local_140 + unaff_x27 * 8) = &local_110;
      local_110 = plVar24;
      if (*plVar24 != 0) {
        uVar19 = *(ulong *)(*plVar24 + 8);
        if ((uVar16 & uVar16 - 1) == 0) {
          uVar19 = uVar19 & uVar16 - 1;
        }
        else if (uVar16 <= uVar19) {
          uVar18 = 0;
          if (uVar16 != 0) {
            uVar18 = uVar19 / uVar16;
          }
          uVar19 = uVar19 - uVar18 * uVar16;
        }
        plVar26 = (long *)(local_140 + uVar19 * 8);
        goto LAB_00f26384;
      }
    }
    else {
      *plVar24 = *plVar26;
LAB_00f26384:
      *plVar26 = (long)plVar24;
    }
    local_e8 = local_e8 + 1;
  }
  else {
    uVar18 = local_138 - 1;
    if ((local_138 & uVar18) == 0) {
      unaff_x27 = uVar18 & uVar19;
      plVar24 = *(long **)(local_140 + unaff_x27 * 8);
      if (plVar24 == (long *)0x0) goto LAB_00f25ca8;
      do {
        plVar24 = (long *)*plVar24;
        if ((plVar24 == (long *)0x0) || (plVar24[1] != uVar19 && (plVar24[1] & uVar18) != unaff_x27)
           ) goto LAB_00f25ca8;
      } while ((int)plVar24[2] != param_6);
    }
    else {
      unaff_x27 = uVar19;
      if (local_138 <= uVar19) {
        uVar18 = 0;
        if (local_138 != 0) {
          uVar18 = uVar19 / local_138;
        }
        unaff_x27 = uVar19 - uVar18 * local_138;
      }
      plVar24 = *(long **)(local_140 + unaff_x27 * 8);
      if (plVar24 == (long *)0x0) goto LAB_00f25ca8;
      do {
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) goto LAB_00f25ca8;
        uVar18 = plVar24[1];
        if (uVar18 != uVar19) {
          if (local_138 <= uVar18) {
            uVar21 = 0;
            if (local_138 != 0) {
              uVar21 = uVar18 / local_138;
            }
            uVar18 = uVar18 - uVar21 * local_138;
          }
          if (uVar18 != unaff_x27) goto LAB_00f25ca8;
        }
      } while ((int)plVar24[2] != param_6);
    }
  }
  plVar26 = (long *)plVar24[3];
  if (plVar26 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    goto LAB_00f26198;
  }
  pcVar22 = (char *)plVar26[6];
  if (*(long *)(pcVar22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(pcVar22 + 0x1a);
  do {
    sVar20 = *psVar1;
    cVar8 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar23) {
      *psVar1 = sVar20 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar20 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(pcVar22 + 0x10))();
    *(undefined8 *)(pcVar22 + 8) = uVar11;
    pcVar22[0x1c] = -2;
    pcVar22[0x1d] = -1;
    pcVar22[0x1e] = -1;
    pcVar22[0x1f] = -1;
  }
  else if (sVar20 == -1) {
    pcVar22 = "count != 0";
    pcVar25 = "AddReference";
    pcVar27 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
    ;
    pcVar13 = "Reference counter overflows.";
LAB_00f269f0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar22,pcVar25,pcVar27,0x58,pcVar13);
  }
  FUN_00e28240(local_158,plVar26);
  if (local_158[0] == (ulong *)0x0) goto LAB_00f25e68;
  if (*(short *)((long)local_158[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_158[0] + 0x1a);
    sVar20 = *(short *)((long)local_158[0] + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar20) {
        cVar8 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar20 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_00f26480;
        bVar23 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f26480:
        bVar23 = false;
      }
      if (bVar23) {
        if (local_158[0][2] != 0) {
          plVar24 = (long *)*local_148;
          if (plVar24 != (long *)local_148[1]) goto LAB_00f264c8;
          goto LAB_00f264f0;
        }
        break;
      }
      sVar20 = sVar6;
    } while (sVar6 != 0);
  }
  goto LAB_00f267d0;
  while (plVar15 = plVar12, (long *)local_148[1] != plVar12) {
LAB_00f26aec:
    plVar12 = plVar15 + 1;
    lVar14 = *plVar15;
    plVar15 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar14 + 8) != 0) {
      plVar15 = (long *)(*(long *)(lVar14 + 8) + 0x30);
    }
    if (*plVar15 == 0x46bfc6bf3eadf8f6) {
      if ((*(char *)(lVar14 + 0x10) == '\x01') && (*(long **)(lVar14 + 0x18) != (long *)0x0)) {
        bVar23 = false;
        pcVar22 = (char *)((ulong)(**(long **)(lVar14 + 0x18) != 0) << 8);
        goto LAB_00f26b4c;
      }
      break;
    }
  }
LAB_00f26b44:
  pcVar22 = (char *)0x0;
  bVar23 = true;
LAB_00f26b4c:
  (**(code **)(*(long *)(local_158[0][2] - 8) + 0x18))();
  if ((bVar23) || ((int)pcVar22 != 0x100)) goto LAB_00f25e68;
  local_178 = 0xd68ff27f76ff4af0;
  local_170 = "FSYS_RIDE_SWIM_ENABLE";
  local_168 = 0x15;
  local_160 = (long *)0x0;
  if (((*PTR_DAT_047d4928 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar10 != 0)) {
    FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4928);
  }
  lVar14 = *(long *)PTR_DAT_047d4930;
  *(long *)PTR_DAT_047d4938 = lVar14;
  uVar16 = FUN_00fb1cf4(&local_178,lVar14 + 0x198);
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  if ((uVar16 & 1) != 0) goto LAB_00f25e68;
  *(undefined1 *)param_1 = 0;
  goto LAB_00f2614c;
  while (plVar15 = plVar12, (long *)local_160[1] != plVar12) {
LAB_00f26624:
    plVar12 = plVar15 + 1;
    lVar14 = *plVar15;
    plVar15 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar14 + 8) != 0) {
      plVar15 = (long *)(*(long *)(lVar14 + 8) + 0x30);
    }
    if (*plVar15 == -0x50992ab379f90659) {
      if ((*(char *)(lVar14 + 0x10) == '\x02') && (*(double **)(lVar14 + 0x18) != (double *)0x0)) {
        fVar28 = (float)**(double **)(lVar14 + 0x18);
        bVar23 = true;
        goto LAB_00f26894;
      }
      break;
    }
  }
LAB_00f26650:
  bVar23 = false;
  fVar28 = 0.0;
LAB_00f26894:
  (**(code **)(*(long *)(*(long *)(local_170 + 0x10) + -8) + 0x18))();
  goto LAB_00f25ec8;
  while (plVar15 = plVar12, (long *)local_160[1] != plVar12) {
LAB_00f2668c:
    plVar12 = plVar15 + 1;
    lVar14 = *plVar15;
    plVar15 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar14 + 8) != 0) {
      plVar15 = (long *)(*(long *)(lVar14 + 8) + 0x30);
    }
    if (*plVar15 == -0x50992bb379f9080c) {
      if ((*(char *)(lVar14 + 0x10) == '\x02') && (*(double **)(lVar14 + 0x18) != (double *)0x0)) {
        fVar28 = (float)**(double **)(lVar14 + 0x18);
        bVar23 = true;
        goto LAB_00f268d4;
      }
      break;
    }
  }
LAB_00f266b8:
  bVar23 = false;
  fVar28 = 0.0;
LAB_00f268d4:
  (**(code **)(*(long *)(*(long *)(local_170 + 0x10) + -8) + 0x18))();
  goto LAB_00f25ee4;
  while (plVar15 = plVar12, (long *)local_160[1] != plVar12) {
LAB_00f266f4:
    plVar12 = plVar15 + 1;
    lVar14 = *plVar15;
    plVar15 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar14 + 8) != 0) {
      plVar15 = (long *)(*(long *)(lVar14 + 8) + 0x30);
    }
    if (*plVar15 == -0x509928b379f902f3) {
      if ((*(char *)(lVar14 + 0x10) == '\x02') && (*(double **)(lVar14 + 0x18) != (double *)0x0)) {
        uVar19 = (ulong)(uint)(float)**(double **)(lVar14 + 0x18) << 0x20;
        uVar16 = 1;
        goto LAB_00f26914;
      }
      break;
    }
  }
LAB_00f26720:
  uVar16 = 0;
  uVar19 = 0;
LAB_00f26914:
  pcVar22 = (char *)(uVar19 | uVar16);
  (**(code **)(*(long *)(*(long *)(local_170 + 0x10) + -8) + 0x18))();
  goto LAB_00f25efc;
  while (plVar24 = plVar15, (long *)local_148[1] != plVar15) {
LAB_00f264c8:
    plVar15 = plVar24 + 1;
    lVar14 = *plVar24;
    plVar24 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(lVar14 + 8) != 0) {
      plVar24 = (long *)(*(long *)(lVar14 + 8) + 0x30);
    }
    if (*plVar24 == 0x292204c8a040e8c1) {
      if ((*(char *)(lVar14 + 0x10) == '\x01') && (*(long **)(lVar14 + 0x18) != (long *)0x0)) {
        bVar23 = false;
        pcVar22 = (char *)((ulong)(**(long **)(lVar14 + 0x18) != 0) << 8);
        goto LAB_00f26750;
      }
      break;
    }
  }
LAB_00f264f0:
  pcVar22 = (char *)0x0;
  bVar23 = true;
LAB_00f26750:
  (**(code **)(*(long *)(local_158[0][2] - 8) + 0x18))();
  if ((!bVar23) && ((int)pcVar22 == 0x100)) {
    local_178 = 0x80cdcd836abb01f7;
    local_170 = "FSYS_RIDE_CLIMB_ENABLE";
    local_168 = 0x16;
    local_160 = (long *)0x0;
    if (((*PTR_DAT_047d4928 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar10 != 0)) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
    lVar14 = *(long *)PTR_DAT_047d4930;
    *(long *)PTR_DAT_047d4938 = lVar14;
    uVar16 = FUN_00fb1cf4(&local_178,lVar14 + 0x198);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    if ((uVar16 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      goto LAB_00f2614c;
    }
  }
LAB_00f267d0:
  plVar24 = param_1;
  if ((local_158[0] != (ulong *)0x0) && (*(short *)((long)local_158[0] + 0x1a) != 0)) {
    psVar1 = (short *)((long)local_158[0] + 0x1a);
    sVar20 = *(short *)((long)local_158[0] + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar20) {
        cVar8 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar20 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_00f26818;
        bVar23 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f26818:
        bVar23 = false;
      }
      if (bVar23) {
        if (local_158[0][2] != 0) {
          plVar15 = (long *)*local_148;
          if (plVar15 != (long *)local_148[1]) goto LAB_00f26aec;
          goto LAB_00f26b44;
        }
        break;
      }
      sVar20 = sVar6;
    } while (sVar6 != 0);
  }
LAB_00f25e68:
  auVar29 = FUN_00cbc2e4(plVar26,plVar26 + 0x12);
  local_198 = 0xf642f8ff2fc0abbf;
  pcStack_190 = "rotation";
  local_188 = 8;
  local_180 = (long *)0x0;
  FUN_01810848(&local_178,local_158,&local_198);
  if (local_180 != (long *)0x0) {
    (**(code **)(*local_180 + 0x20))();
  }
  if ((char)local_178 == '\0') {
    uStack_1c8 = 0;
    local_1d0 = 0;
  }
  else {
    if ((local_170 != (char *)0x0) && (*(short *)(local_170 + 0x1a) != 0)) {
      psVar1 = (short *)(local_170 + 0x1a);
      sVar20 = *(short *)(local_170 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar20) {
          cVar8 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_00f26530;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f26530:
          bVar23 = false;
        }
        if (bVar23) {
          if (*(long *)(local_170 + 0x10) != 0) {
            plVar15 = (long *)*local_160;
            if (plVar15 != (long *)local_160[1]) goto LAB_00f26624;
            goto LAB_00f26650;
          }
          break;
        }
        sVar20 = sVar6;
      } while (sVar6 != 0);
    }
    fVar28 = 0.0;
    bVar23 = false;
LAB_00f25ec8:
    fVar30 = 0.0;
    if (bVar23) {
      fVar30 = fVar28;
    }
    if (local_170 == (char *)0x0) {
      fVar28 = 0.0;
      bVar23 = false;
    }
    else {
      if (*(short *)(local_170 + 0x1a) != 0) {
        psVar1 = (short *)(local_170 + 0x1a);
        sVar20 = *(short *)(local_170 + 0x1a);
        do {
          sVar6 = *psVar1;
          if (sVar6 == sVar20) {
            cVar8 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar23) {
              *psVar1 = sVar20 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 != '\0') goto LAB_00f2657c;
            bVar23 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f2657c:
            bVar23 = false;
          }
          if (bVar23) {
            if (*(long *)(local_170 + 0x10) != 0) {
              plVar15 = (long *)*local_160;
              if (plVar15 != (long *)local_160[1]) goto LAB_00f2668c;
              goto LAB_00f266b8;
            }
            break;
          }
          sVar20 = sVar6;
        } while (sVar6 != 0);
      }
      fVar28 = 0.0;
      bVar23 = false;
    }
LAB_00f25ee4:
    fVar31 = 0.0;
    if (bVar23) {
      fVar31 = fVar28;
    }
    if (local_170 == (char *)0x0) {
      pcVar22 = (char *)0x0;
    }
    else if (*(short *)(local_170 + 0x1a) == 0) {
LAB_00f26974:
      pcVar22 = (char *)0x0;
    }
    else {
      psVar1 = (short *)(local_170 + 0x1a);
      sVar20 = *(short *)(local_170 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar20) {
          cVar8 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_00f265d4;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f265d4:
          bVar23 = false;
        }
        if (bVar23) {
          if (*(long *)(local_170 + 0x10) == 0) goto LAB_00f26974;
          plVar15 = (long *)*local_160;
          if (plVar15 != (long *)local_160[1]) goto LAB_00f266f4;
          goto LAB_00f26720;
        }
        pcVar22 = (char *)0x0;
        sVar20 = sVar6;
      } while (sVar6 != 0);
    }
LAB_00f25efc:
    pcVar25 = local_170;
    uStack_1c8 = 0;
    if (((ulong)pcVar22 & 0xff) != 0) {
      uStack_1c8 = (ulong)pcVar22 >> 0x20;
    }
    local_1d0 = CONCAT44(fVar31,fVar30);
    if ((char)local_178 != '\0') {
      if (local_170 != (char *)0x0) {
        psVar1 = (short *)(local_170 + 0x18);
        do {
          sVar20 = *psVar1;
          cVar8 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar20 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar20 == 1) {
          piVar4 = (int *)(local_170 + 0x1c);
          do {
            iVar10 = *piVar4;
            cVar8 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar23) {
              *piVar4 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar14;
            local_198 = *(undefined8 *)pcVar25;
            FUN_00c44438(lVar14 + 0x8040,&local_198);
          }
        }
        else if (sVar20 == 0) goto LAB_00f26a2c;
      }
      local_178 = local_178 & 0xffffffffffffff00;
      pcVar22 = pcVar25;
    }
  }
  pcVar27 = (char *)param_2[(long)local_6c[0] * 7 + 0xfe];
  plVar15 = param_1;
  for (pcVar25 = (char *)param_2[(long)local_6c[0] * 7 + 0xfd]; pcVar25 != pcVar27;
      pcVar25 = pcVar25 + 0xa0) {
    if (*pcVar25 == '\0') {
      bVar23 = true;
    }
    else {
      param_2 = *(long **)(pcVar25 + 0x18);
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x18))(param_2);
      }
      unaff_x27 = (ulong)*(uint *)(pcVar25 + 0x44);
      plVar15 = (long *)(ulong)*(uint *)(pcVar25 + 0x48);
      bVar23 = false;
      plVar24 = (long *)(ulong)*(uint *)(pcVar25 + 0x4c);
      pcVar22 = (char *)(ulong)*(uint *)(pcVar25 + 100);
    }
    plVar12 = *(long **)(pcVar25 + 0x70);
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 5;
      do {
        lVar14 = *plVar2;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar14 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (((((int)pcVar22 == param_3) && ((int)plVar24 == param_6)) && (pcVar25[0x98] != '\0')) &&
       (((int)unaff_x27 == local_6c[0] && ((int)plVar15 == local_70)))) {
      *(undefined1 *)param_1 = 0;
      if (plVar12 != (long *)0x0) {
        plVar24 = plVar12 + 5;
        do {
          lVar14 = *plVar24;
          iVar10 = (int)lVar14 + -1;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *(int *)plVar24 = iVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar14 == 0) {
LAB_00f2625c:
          pcVar22 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar25 = "DecrementReferenceInternal";
          pcVar27 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
          ;
          pcVar13 = "Reference counter underflows.";
          goto LAB_00f269f0;
        }
      }
      if (!bVar23 && param_2 != (long *)0x0) goto LAB_00f2613c;
      goto LAB_00f2614c;
    }
    if (plVar12 == (long *)0x0) goto LAB_00f25ff4;
    plVar2 = plVar12 + 5;
    do {
      lVar14 = *plVar2;
      iVar10 = (int)lVar14 + -1;
      cVar8 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00f2625c;
LAB_00f25ff4:
    if (!bVar23 && param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x20))(param_2);
    }
  }
  plVar24 = (long *)FUN_00d44228();
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  param_2 = (long *)plVar26[0xd];
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  iVar9 = local_6c[0];
  iVar10 = local_70;
  uVar16 = *param_7;
  uVar19 = param_7[1];
  uVar18 = uVar19 ^ uVar16;
  *param_7 = uVar18 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar18 << 0x10;
  param_7[1] = uVar18 >> 0x1b | uVar18 << 0x25;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  *(int *)(param_1 + 9) = iVar10;
  *(int *)((long)param_1 + 0x4c) = param_6;
  *(undefined4 *)(param_1 + 0xc) = 0x10000;
  *(int *)((long)param_1 + 100) = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = (long)param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)((long)param_1 + 0x44) = iVar9;
  param_1[10] = 0;
  param_1[0xb] = (ulong)(uint)((int)uVar19 + (int)uVar16);
  *(undefined1 *)param_1 = 1;
  *(undefined1 (*) [16])(param_1 + 4) = auVar29;
  param_1[7] = uStack_1c8;
  param_1[6] = local_1d0;
  if (param_2 != (long *)0x0) {
LAB_00f2613c:
    (**(code **)(*param_2 + 0x20))(param_2);
  }
LAB_00f2614c:
  if (local_158[0] != (ulong *)0x0) {
    puVar3 = local_158[0] + 3;
    do {
      sVar20 = (short)*puVar3;
      cVar8 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar23) {
        *(short *)puVar3 = sVar20 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar20 == 1) {
      piVar4 = (int *)((long)local_158[0] + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar23) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_178 = *local_158[0];
        FUN_00c44438(lVar14 + 0x8040,&local_178);
      }
    }
    else if (sVar20 == 0) {
LAB_00f26a2c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar14 = plVar26[6];
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar20 = *psVar1;
    cVar8 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar23) {
      *psVar1 = sVar20 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar20 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar26 + 0x50))(plVar26);
  }
  else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00f26198:
  FUN_011a55fc(&local_140);
  FUN_011a5404(auStack_d8);
  return;
}


