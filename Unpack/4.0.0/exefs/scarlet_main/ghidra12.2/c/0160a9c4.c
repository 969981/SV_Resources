/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160a9c4; name: FUN_0160a9c4
 */


void FUN_0160a9c4(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  void *__s;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_240;
  char *local_238;
  undefined8 uStack_230;
  long *local_228;
  undefined1 auStack_220 [24];
  long *local_208;
  char *local_200;
  char *local_1f8;
  undefined8 uStack_1f0;
  long *local_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  long *local_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  long *local_190;
  undefined1 auStack_158 [64];
  long *local_118;
  char *local_110;
  undefined8 uStack_108;
  long *local_100;
  long *local_f8;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,0x68,8);
  if (__s == (void *)0x0) {
    local_1a0 = 0;
    local_198 = 0;
    local_1a8 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_0160b1f0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    memset(__s,0,0x68);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    lVar7 = tpidr_el0;
    if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
        (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
       (lVar5 = *(long *)(lVar7 + 0x30), lVar5 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar7 + 0x30) = DAT_04859430;
    }
    *(undefined4 *)((long)__s + 0x28) = 0;
    *(long *)((long)__s + 0x10) = lVar5;
    *(undefined8 *)((long)__s + 0x30) = 0;
    *(undefined8 *)((long)__s + 0x18) = 0xfffffffffffffff;
    *(undefined8 *)((long)__s + 0x20) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
        (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
       (lVar5 = *(long *)(lVar7 + 0x30), lVar5 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar7 + 0x30) = DAT_04859430;
    }
    *(long *)((long)__s + 0x38) = lVar5;
    *(undefined8 *)((long)__s + 0x40) = 0xfffffffffffffff;
    *(undefined8 *)((long)__s + 0x48) = 0;
    *(undefined4 *)((long)__s + 0x60) = 0x3f800000;
    *(undefined4 *)((long)__s + 0x50) = 0;
    *(undefined8 *)((long)__s + 0x58) = 0;
    local_1a0 = 0x68;
    local_198 = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    local_1a8 = param_1;
  }
  plVar13 = (long *)&DAT_0483c8e0;
  local_1b0 = (long *)0x0;
  FUN_0160b280(&DAT_0483c8e0,__s);
  DAT_0483c8e8 = local_1a8;
  DAT_0483c8f0 = local_1a0;
  DAT_0483c8f8 = local_198;
  FUN_0160b280(&local_1b0,0);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_e8 = PTR_DAT_047d8e88 + 0x10;
  uStack_a0 = 0;
  uStack_e0 = 0;
  local_118 = (long *)0x3c57702;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = local_e8;
  FUN_00e52f24(&local_1b0,&local_118);
  uVar6 = FUN_00dc5c18(&local_a8,0,&local_1b0,0,param_1);
  if ((uVar6 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    local_200 = "audio/fb/engine/poke_type_to_audio_group/poke_type_to_audio_group_array.bfbs";
    FUN_00e52f24(&local_118,&local_200);
    uVar6 = FUN_00dc5c18(&local_e8,0,&local_118,0,param_1);
    uVar6 = uVar6 & 0xffffffff;
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  if ((uVar6 & 1) != 0) {
    FUN_00fb9e50(&local_1b0,&local_a8,&local_e8);
    FUN_00fb4dd0(auStack_1c8,&local_1b0);
    iVar2 = FUN_01557ecc(auStack_1c8);
    if (iVar2 != 0) {
      iVar12 = 0;
      do {
        local_100 = (long *)0x0;
        local_118 = (long *)&DAT_fbec41851566601b;
        local_110 = "values";
        uStack_108 = 6;
        FUN_00e90ee0(auStack_1e0,auStack_1c8,&local_118,iVar12);
        if (local_100 != (long *)0x0) {
          (**(code **)(*local_100 + 0x20))();
        }
        plVar1 = DAT_0483c8e0;
        local_200 = (char *)0xe4ca8c07696a5bf4;
        local_1f8 = "pokeType";
        uStack_1f0 = 8;
        local_1e8 = (long *)0x0;
        FUN_00cee868(&local_118,auStack_1e0,&local_200);
        local_228 = (long *)0x0;
        local_240 = 0x4f29feded1e7b24b;
        local_238 = "groupPath";
        uStack_230 = 9;
        FUN_00cee868(auStack_220,auStack_1e0,&local_240);
        plVar9 = local_118;
        plVar14 = (long *)plVar1[1];
        if (plVar14 == (long *)0x0) {
LAB_0160ad88:
          plVar8 = (long *)(**(code **)(*(long *)plVar1[7] + 0x10))((long *)plVar1[7],0x20,8);
          if (plVar8 == (long *)0x0) {
            (**(code **)(*(long *)plVar1[7] + 0xe8))();
          }
          lVar4 = plVar1[7];
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar7 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar7 == 0) {
            plVar8[2] = (long)local_118;
            FUN_00daf940(plVar8 + 3,auStack_220);
          }
          else {
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_0160b1f0;
            *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar4;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            plVar8[2] = (long)local_118;
            FUN_00daf940(plVar8 + 3,auStack_220);
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          }
          *plVar8 = 0;
          plVar8[1] = (long)plVar9;
          if ((plVar14 == (long *)0x0) ||
             (*(float *)(plVar1 + 0xc) * (float)plVar14 < (float)(plVar1[0xb] + 1))) {
            uVar6 = (ulong)(plVar14 < (long *)0x3 || ((ulong)plVar14 & (long)plVar14 - 1U) != 0) |
                    (long)plVar14 << 1;
            uVar11 = (ulong)((float)(plVar1[0xb] + 1) / *(float *)(plVar1 + 0xc));
            if (uVar11 <= uVar6) {
              uVar11 = uVar6;
            }
            FUN_01610d58(plVar1,uVar11);
            plVar14 = (long *)plVar1[1];
            if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
              plVar13 = (long *)((long)plVar14 - 1U & (ulong)plVar9);
            }
            else if (plVar9 < plVar14) {
              plVar13 = plVar9;
            }
            else {
              uVar6 = 0;
              if (plVar14 != (long *)0x0) {
                uVar6 = (ulong)plVar9 / (ulong)plVar14;
              }
              plVar13 = (long *)((long)plVar9 - uVar6 * (long)plVar14);
            }
          }
          plVar9 = *(long **)(*plVar1 + (long)plVar13 * 8);
          if (plVar9 == (long *)0x0) {
            plVar9 = plVar1 + 6;
            *plVar8 = *plVar9;
            *plVar9 = (long)plVar8;
            *(long **)(*plVar1 + (long)plVar13 * 8) = plVar9;
            if (*plVar8 != 0) {
              plVar9 = *(long **)(*plVar8 + 8);
              if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
                plVar9 = (long *)((ulong)plVar9 & (long)plVar14 - 1U);
              }
              else if (plVar14 <= plVar9) {
                uVar6 = 0;
                if (plVar14 != (long *)0x0) {
                  uVar6 = (ulong)plVar9 / (ulong)plVar14;
                }
                plVar9 = (long *)((long)plVar9 - uVar6 * (long)plVar14);
              }
              plVar9 = (long *)(*plVar1 + (long)plVar9 * 8);
              goto LAB_0160ae88;
            }
          }
          else {
            *plVar8 = *plVar9;
LAB_0160ae88:
            *plVar9 = (long)plVar8;
          }
          plVar1[0xb] = plVar1[0xb] + 1;
        }
        else {
          uVar6 = (long)plVar14 - 1;
          if (((ulong)plVar14 & uVar6) == 0) {
            plVar13 = (long *)(uVar6 & (ulong)local_118);
            plVar8 = *(long **)(*plVar1 + (long)plVar13 * 8);
            if (plVar8 == (long *)0x0) goto LAB_0160ad88;
            do {
              plVar8 = (long *)*plVar8;
              if ((plVar8 == (long *)0x0) ||
                 ((long *)plVar8[1] != local_118 && (long *)((ulong)plVar8[1] & uVar6) != plVar13))
              goto LAB_0160ad88;
            } while ((long *)plVar8[2] != local_118);
          }
          else {
            plVar13 = local_118;
            if (plVar14 <= local_118) {
              uVar6 = 0;
              if (plVar14 != (long *)0x0) {
                uVar6 = (ulong)local_118 / (ulong)plVar14;
              }
              plVar13 = (long *)((long)local_118 - uVar6 * (long)plVar14);
            }
            plVar8 = *(long **)(*plVar1 + (long)plVar13 * 8);
            if (plVar8 == (long *)0x0) goto LAB_0160ad88;
            do {
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) goto LAB_0160ad88;
              plVar10 = (long *)plVar8[1];
              if (plVar10 != local_118) {
                if (plVar14 <= plVar10) {
                  uVar6 = 0;
                  if (plVar14 != (long *)0x0) {
                    uVar6 = (ulong)plVar10 / (ulong)plVar14;
                  }
                  plVar10 = (long *)((long)plVar10 - uVar6 * (long)plVar14);
                }
                if (plVar10 != plVar13) goto LAB_0160ad88;
              }
            } while ((long *)plVar8[2] != local_118);
          }
        }
        if (local_208 != (long *)0x0) {
          (**(code **)(*local_208 + 0x20))();
        }
        if (local_228 != (long *)0x0) {
          (**(code **)(*local_228 + 0x20))();
        }
        if (local_100 != (long *)0x0) {
          (**(code **)(*local_100 + 0x20))();
        }
        if (local_1e8 != (long *)0x0) {
          (**(code **)(*local_1e8 + 0x20))();
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar2);
    }
    FUN_00db239c(auStack_158);
    FUN_00db239c(&local_198);
  }
  FUN_00db239c(&local_e8);
  FUN_00db239c(&local_a8);
  return;
}


