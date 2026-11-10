/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a5a5c; name: FUN_028a5a5c
 */


char * FUN_028a5a5c(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  int iStack_68;
  int aiStack_64 [5];
  
  if (param_2 == param_3) {
    return param_2;
  }
  lVar16 = *(long *)(param_1 + 0x38);
  iVar6 = *(int *)(param_1 + 0x1c);
  pcVar7 = (char *)FUN_028a96e8(param_1,param_2);
  if (pcVar7 == param_2) {
    return param_2;
  }
  iVar6 = iVar6 + 1;
  iVar1 = *(int *)(param_1 + 0x1c) + 1;
  if (pcVar7 == param_3) {
    return pcVar7;
  }
  if (*pcVar7 == '*') {
    lVar3 = tpidr_el0;
    plVar11 = *(long **)(lVar3 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
    lVar12 = *(long *)(param_1 + 0x38);
    uVar15 = *(undefined8 *)(lVar12 + 8);
    *puVar8 = &PTR_LAB_045e6220;
    puVar8[1] = uVar15;
    *(undefined8 *)(lVar12 + 8) = 0;
    plVar11 = *(long **)(lVar3 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    uVar15 = *(undefined8 *)(lVar16 + 8);
    puVar9[3] = 0;
    puVar9[4] = 0xffffffffffffffff;
    *puVar9 = &PTR_FUN_045e6520;
    *(undefined4 *)(puVar9 + 5) = uVar4;
    *(int *)((long)puVar9 + 0x2c) = iVar6;
    *(int *)(puVar9 + 6) = iVar1;
    *(undefined1 *)((long)puVar9 + 0x34) = 1;
    puVar9[1] = uVar15;
    puVar9[2] = puVar8;
    *(undefined8 *)(lVar16 + 8) = 0;
    plVar11 = *(long **)(lVar3 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
    pcVar7 = pcVar7 + 1;
LAB_028a993c:
    *puVar8 = &PTR_LAB_045e6580;
    puVar8[1] = puVar9;
    *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar8;
    *(undefined8 *)(param_1 + 0x38) = puVar9[2];
    *(undefined8 **)(lVar16 + 8) = puVar9;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    return pcVar7;
  }
  if (pcVar7 + 1 == param_3) {
    return pcVar7;
  }
  if (*pcVar7 != '\\') {
    return pcVar7;
  }
  pcVar2 = pcVar7 + 2;
  if (pcVar7[1] != '{') {
    pcVar2 = pcVar7;
  }
  if (pcVar2 == pcVar7) {
    return pcVar7;
  }
  aiStack_64[0] = 0;
  pcVar10 = (char *)FUN_01469cd0(param_1,pcVar2,param_3,aiStack_64);
  if (pcVar10 != pcVar2) {
    if (pcVar10 != param_3) {
      if (*pcVar10 == ',') {
        iStack_68 = -1;
        pcVar7 = (char *)FUN_01469cd0(param_1,pcVar10 + 1,param_3,&iStack_68);
        if (((pcVar7 != param_3) && (pcVar7 + 1 != param_3)) && (*pcVar7 == '\\')) {
          pcVar2 = pcVar7 + 2;
          if (pcVar7[1] != '}') {
            pcVar2 = pcVar7;
          }
          if (pcVar2 != pcVar7) {
            lVar3 = (long)iStack_68;
            lVar12 = (long)aiStack_64[0];
            if (iStack_68 == -1) {
              lVar3 = tpidr_el0;
              plVar11 = *(long **)(lVar3 + 0x30);
              if (plVar11 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar11 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
              lVar14 = *(long *)(param_1 + 0x38);
              uVar15 = *(undefined8 *)(lVar14 + 8);
              *puVar8 = &PTR_LAB_045e6220;
              puVar8[1] = uVar15;
              *(undefined8 *)(lVar14 + 8) = 0;
              plVar11 = *(long **)(lVar3 + 0x30);
              if (plVar11 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar11 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
              uVar4 = *(undefined4 *)(param_1 + 0x20);
              uVar15 = *(undefined8 *)(lVar16 + 8);
              plVar17 = puVar9 + 2;
              *plVar17 = (long)puVar8;
              *puVar9 = &PTR_FUN_045e6520;
              puVar9[1] = uVar15;
              *(undefined4 *)(puVar9 + 5) = uVar4;
              *(int *)((long)puVar9 + 0x2c) = iVar6;
              puVar9[3] = lVar12;
              puVar9[4] = 0xffffffffffffffff;
              *(int *)(puVar9 + 6) = iVar1;
              *(undefined1 *)((long)puVar9 + 0x34) = 1;
              *(undefined8 *)(lVar16 + 8) = 0;
              plVar11 = *(long **)(lVar3 + 0x30);
              if (plVar11 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar11 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
            }
            else {
              if (iStack_68 < aiStack_64[0]) goto LAB_028a9fd4;
              lVar14 = tpidr_el0;
              plVar11 = *(long **)(lVar14 + 0x30);
              if (plVar11 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar11 = DAT_04859430;
                *(long **)(lVar14 + 0x30) = DAT_04859430;
              }
              puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
              lVar13 = *(long *)(param_1 + 0x38);
              uVar15 = *(undefined8 *)(lVar13 + 8);
              *puVar8 = &PTR_LAB_045e6220;
              puVar8[1] = uVar15;
              *(undefined8 *)(lVar13 + 8) = 0;
              plVar11 = *(long **)(lVar14 + 0x30);
              if (plVar11 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar11 = DAT_04859430;
                *(long **)(lVar14 + 0x30) = DAT_04859430;
              }
              puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
              uVar4 = *(undefined4 *)(param_1 + 0x20);
              uVar15 = *(undefined8 *)(lVar16 + 8);
              plVar17 = puVar9 + 2;
              *plVar17 = (long)puVar8;
              *puVar9 = &PTR_FUN_045e6520;
              puVar9[1] = uVar15;
              *(undefined4 *)(puVar9 + 5) = uVar4;
              *(int *)((long)puVar9 + 0x2c) = iVar6;
              *(int *)(puVar9 + 6) = iVar1;
              puVar9[3] = lVar12;
              puVar9[4] = lVar3;
              *(undefined1 *)((long)puVar9 + 0x34) = 1;
              *(undefined8 *)(lVar16 + 8) = 0;
              plVar11 = *(long **)(lVar14 + 0x30);
              if (plVar11 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar11 = DAT_04859430;
                *(long **)(lVar14 + 0x30) = DAT_04859430;
              }
              puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
            }
            *puVar8 = &PTR_LAB_045e6580;
            puVar8[1] = puVar9;
            *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar8;
            *(long *)(param_1 + 0x38) = *plVar17;
            *(undefined8 **)(lVar16 + 8) = puVar9;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            return pcVar2;
          }
        }
      }
      else if ((pcVar10 + 1 != param_3) && (*pcVar10 == '\\')) {
        pcVar7 = pcVar10 + 2;
        if (pcVar10[1] != '}') {
          pcVar7 = pcVar10;
        }
        if (pcVar7 != pcVar10) {
          lVar12 = (long)aiStack_64[0];
          lVar3 = tpidr_el0;
          plVar11 = *(long **)(lVar3 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
          lVar14 = *(long *)(param_1 + 0x38);
          uVar15 = *(undefined8 *)(lVar14 + 8);
          *puVar8 = &PTR_LAB_045e6220;
          puVar8[1] = uVar15;
          *(undefined8 *)(lVar14 + 8) = 0;
          plVar11 = *(long **)(lVar3 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
          uVar4 = *(undefined4 *)(param_1 + 0x20);
          uVar15 = *(undefined8 *)(lVar16 + 8);
          puVar9[2] = puVar8;
          puVar9[3] = lVar12;
          puVar9[4] = lVar12;
          *(int *)(puVar9 + 6) = iVar1;
          *(undefined4 *)(puVar9 + 5) = uVar4;
          *(int *)((long)puVar9 + 0x2c) = iVar6;
          *(undefined1 *)((long)puVar9 + 0x34) = 1;
          *puVar9 = &PTR_FUN_045e6520;
          puVar9[1] = uVar15;
          *(undefined8 *)(lVar16 + 8) = 0;
          plVar11 = *(long **)(lVar3 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
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


