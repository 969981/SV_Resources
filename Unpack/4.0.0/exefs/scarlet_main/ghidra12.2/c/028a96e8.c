/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a96e8; name: FUN_028a96e8
 */


char * FUN_028a96e8(long param_1,char *param_2,char *param_3,long param_4,undefined4 param_5,
                   undefined4 param_6)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  int local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined8 uStack_98;
  
  pcVar4 = (char *)FUN_028aa214();
  if (pcVar4 != param_2) {
    return pcVar4;
  }
  if (((param_2 != param_3) && (param_2 + 1 != param_3)) && (*param_2 == '\\')) {
    pcVar4 = param_2 + 2;
    if (param_2[1] != '(') {
      pcVar4 = param_2;
    }
    if (pcVar4 != param_2) {
      FUN_01469e70(param_1);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      do {
        pcVar15 = pcVar4;
        pcVar9 = param_3;
        pcVar4 = (char *)FUN_028a5a5c(param_1,pcVar15);
      } while (pcVar4 != pcVar15);
      if (((pcVar15 != param_3) && (pcVar15 + 1 != param_3)) && (*pcVar15 == '\\')) {
        pcVar4 = pcVar15 + 2;
        if (pcVar15[1] != ')') {
          pcVar4 = pcVar15;
        }
        if (pcVar4 != pcVar15) {
          FUN_01469d80(param_1,uVar2);
          return pcVar4;
        }
      }
      auVar17 = FUN_028a5c70();
      pcVar4 = auVar17._8_8_;
      lVar5 = auVar17._0_8_;
      uStack_98 = 0x28a9800;
      if (pcVar4 == pcVar9) {
        return pcVar4;
      }
      if (*pcVar4 == '*') {
        lVar1 = tpidr_el0;
        plVar10 = *(long **)(lVar1 + 0x30);
        local_a0 = (undefined1 *)((long)register0x00000008 + -0x40);
        if (plVar10 == (long *)0x0) {
          local_a0 = (undefined1 *)((long)register0x00000008 + -0x40);
          if (((DAT_04859438 & 1) == 0) &&
             (local_a0 = (undefined1 *)((long)register0x00000008 + -0x40),
             iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar10 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
        lVar11 = *(long *)(lVar5 + 0x38);
        uVar14 = *(undefined8 *)(lVar11 + 8);
        *puVar6 = &PTR_LAB_045e6220;
        puVar6[1] = uVar14;
        *(undefined8 *)(lVar11 + 8) = 0;
        plVar10 = *(long **)(lVar1 + 0x30);
        if (plVar10 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar10 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,8);
        uVar2 = *(undefined4 *)(lVar5 + 0x20);
        uVar14 = *(undefined8 *)(param_4 + 8);
        puVar7[3] = 0;
        puVar7[4] = 0xffffffffffffffff;
        *puVar7 = &PTR_FUN_045e6520;
        *(undefined4 *)(puVar7 + 5) = uVar2;
        *(undefined4 *)((long)puVar7 + 0x2c) = param_5;
        *(undefined4 *)(puVar7 + 6) = param_6;
        *(undefined1 *)((long)puVar7 + 0x34) = 1;
        puVar7[1] = uVar14;
        puVar7[2] = puVar6;
        *(undefined8 *)(param_4 + 8) = 0;
        plVar10 = *(long **)(lVar1 + 0x30);
        if (plVar10 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar10 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
        pcVar4 = pcVar4 + 1;
LAB_028a993c:
        *puVar6 = &PTR_LAB_045e6580;
        puVar6[1] = puVar7;
        *(undefined8 **)(*(long *)(lVar5 + 0x38) + 8) = puVar6;
        *(undefined8 *)(lVar5 + 0x38) = puVar7[2];
        *(undefined8 **)(param_4 + 8) = puVar7;
        *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
        return pcVar4;
      }
      if (pcVar4 + 1 == pcVar9) {
        return pcVar4;
      }
      if (*pcVar4 != '\\') {
        return pcVar4;
      }
      pcVar15 = pcVar4 + 2;
      if (pcVar4[1] != '{') {
        pcVar15 = pcVar4;
      }
      if (pcVar15 == pcVar4) {
        return pcVar4;
      }
      local_a4 = 0;
      local_a0 = (undefined1 *)((long)register0x00000008 + -0x40);
      pcVar8 = (char *)FUN_01469cd0(lVar5,pcVar15,pcVar9,&local_a4);
      if (pcVar8 != pcVar15) {
        if (pcVar8 != pcVar9) {
          if (*pcVar8 == ',') {
            local_a8 = -1;
            pcVar4 = (char *)FUN_01469cd0(lVar5,pcVar8 + 1,pcVar9,&local_a8);
            if (((pcVar4 != pcVar9) && (pcVar4 + 1 != pcVar9)) && (*pcVar4 == '\\')) {
              pcVar9 = pcVar4 + 2;
              if (pcVar4[1] != '}') {
                pcVar9 = pcVar4;
              }
              if (pcVar9 != pcVar4) {
                lVar1 = (long)local_a8;
                lVar11 = (long)local_a4;
                if (local_a8 == -1) {
                  lVar1 = tpidr_el0;
                  plVar10 = *(long **)(lVar1 + 0x30);
                  if (plVar10 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar10 = DAT_04859430;
                    *(long **)(lVar1 + 0x30) = DAT_04859430;
                  }
                  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
                  lVar13 = *(long *)(lVar5 + 0x38);
                  uVar14 = *(undefined8 *)(lVar13 + 8);
                  *puVar6 = &PTR_LAB_045e6220;
                  puVar6[1] = uVar14;
                  *(undefined8 *)(lVar13 + 8) = 0;
                  plVar10 = *(long **)(lVar1 + 0x30);
                  if (plVar10 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar10 = DAT_04859430;
                    *(long **)(lVar1 + 0x30) = DAT_04859430;
                  }
                  puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,8);
                  uVar2 = *(undefined4 *)(lVar5 + 0x20);
                  uVar14 = *(undefined8 *)(param_4 + 8);
                  plVar16 = puVar7 + 2;
                  *plVar16 = (long)puVar6;
                  *puVar7 = &PTR_FUN_045e6520;
                  puVar7[1] = uVar14;
                  *(undefined4 *)(puVar7 + 5) = uVar2;
                  *(undefined4 *)((long)puVar7 + 0x2c) = param_5;
                  puVar7[3] = lVar11;
                  puVar7[4] = 0xffffffffffffffff;
                  *(undefined4 *)(puVar7 + 6) = param_6;
                  *(undefined1 *)((long)puVar7 + 0x34) = 1;
                  *(undefined8 *)(param_4 + 8) = 0;
                  plVar10 = *(long **)(lVar1 + 0x30);
                  if (plVar10 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar10 = DAT_04859430;
                    *(long **)(lVar1 + 0x30) = DAT_04859430;
                  }
                  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
                }
                else {
                  if (local_a8 < local_a4) goto LAB_028a9fd4;
                  lVar13 = tpidr_el0;
                  plVar10 = *(long **)(lVar13 + 0x30);
                  if (plVar10 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar10 = DAT_04859430;
                    *(long **)(lVar13 + 0x30) = DAT_04859430;
                  }
                  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
                  lVar12 = *(long *)(lVar5 + 0x38);
                  uVar14 = *(undefined8 *)(lVar12 + 8);
                  *puVar6 = &PTR_LAB_045e6220;
                  puVar6[1] = uVar14;
                  *(undefined8 *)(lVar12 + 8) = 0;
                  plVar10 = *(long **)(lVar13 + 0x30);
                  if (plVar10 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar10 = DAT_04859430;
                    *(long **)(lVar13 + 0x30) = DAT_04859430;
                  }
                  puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,8);
                  uVar2 = *(undefined4 *)(lVar5 + 0x20);
                  uVar14 = *(undefined8 *)(param_4 + 8);
                  plVar16 = puVar7 + 2;
                  *plVar16 = (long)puVar6;
                  *puVar7 = &PTR_FUN_045e6520;
                  puVar7[1] = uVar14;
                  *(undefined4 *)(puVar7 + 5) = uVar2;
                  *(undefined4 *)((long)puVar7 + 0x2c) = param_5;
                  *(undefined4 *)(puVar7 + 6) = param_6;
                  puVar7[3] = lVar11;
                  puVar7[4] = lVar1;
                  *(undefined1 *)((long)puVar7 + 0x34) = 1;
                  *(undefined8 *)(param_4 + 8) = 0;
                  plVar10 = *(long **)(lVar13 + 0x30);
                  if (plVar10 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar10 = DAT_04859430;
                    *(long **)(lVar13 + 0x30) = DAT_04859430;
                  }
                  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
                }
                *puVar6 = &PTR_LAB_045e6580;
                puVar6[1] = puVar7;
                *(undefined8 **)(*(long *)(lVar5 + 0x38) + 8) = puVar6;
                *(long *)(lVar5 + 0x38) = *plVar16;
                *(undefined8 **)(param_4 + 8) = puVar7;
                *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
                return pcVar9;
              }
            }
          }
          else if ((pcVar8 + 1 != pcVar9) && (*pcVar8 == '\\')) {
            pcVar4 = pcVar8 + 2;
            if (pcVar8[1] != '}') {
              pcVar4 = pcVar8;
            }
            if (pcVar4 != pcVar8) {
              lVar11 = (long)local_a4;
              lVar1 = tpidr_el0;
              plVar10 = *(long **)(lVar1 + 0x30);
              if (plVar10 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar10 = DAT_04859430;
                *(long **)(lVar1 + 0x30) = DAT_04859430;
              }
              puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
              lVar13 = *(long *)(lVar5 + 0x38);
              uVar14 = *(undefined8 *)(lVar13 + 8);
              *puVar6 = &PTR_LAB_045e6220;
              puVar6[1] = uVar14;
              *(undefined8 *)(lVar13 + 8) = 0;
              plVar10 = *(long **)(lVar1 + 0x30);
              if (plVar10 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar10 = DAT_04859430;
                *(long **)(lVar1 + 0x30) = DAT_04859430;
              }
              puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,8);
              uVar2 = *(undefined4 *)(lVar5 + 0x20);
              uVar14 = *(undefined8 *)(param_4 + 8);
              puVar7[2] = puVar6;
              puVar7[3] = lVar11;
              puVar7[4] = lVar11;
              *(undefined4 *)(puVar7 + 6) = param_6;
              *(undefined4 *)(puVar7 + 5) = uVar2;
              *(undefined4 *)((long)puVar7 + 0x2c) = param_5;
              *(undefined1 *)((long)puVar7 + 0x34) = 1;
              *puVar7 = &PTR_FUN_045e6520;
              puVar7[1] = uVar14;
              *(undefined8 *)(param_4 + 8) = 0;
              plVar10 = *(long **)(lVar1 + 0x30);
              if (plVar10 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar10 = DAT_04859430;
                *(long **)(lVar1 + 0x30) = DAT_04859430;
              }
              puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
              goto LAB_028a993c;
            }
          }
        }
        FUN_028a5ca0();
      }
LAB_028a9fd4:
                    /* WARNING: Subroutine does not return */
      FUN_028a5c90();
    }
  }
  pcVar4 = (char *)FUN_028aa350(param_1,param_2,param_3);
  return pcVar4;
}


