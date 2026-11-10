/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c19114; name: FUN_00c19114
 */


void FUN_00c19114(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if ((lVar2 != 0) && (param_1[2] == 0)) {
      lVar7 = tpidr_el0;
      plVar8 = *(long **)(lVar7 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar8,lVar2,0,8);
      }
    }
    param_1[1] = 0;
  }
  else {
    if (param_1[2] == 0) {
      lVar2 = tpidr_el0;
      plVar8 = *(long **)(lVar2 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar2 + 0x30) = DAT_04859430;
      }
      lVar2 = (**(code **)(*plVar8 + 0x10))(plVar8,param_2 << 3,8);
    }
    else {
      lVar2 = FUN_00c0e238(param_1[2],0,param_2 << 3);
    }
    lVar7 = *param_1;
    *param_1 = lVar2;
    if ((lVar7 != 0) && (param_1[2] == 0)) {
      lVar2 = tpidr_el0;
      plVar8 = *(long **)(lVar2 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar2 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,0,8);
      }
      else {
        FUN_00c48fe8(plVar8,lVar7,0,8);
      }
    }
    uVar4 = param_2 - 1;
    uVar3 = param_2;
    if (param_2 == 0 || uVar4 == 0) {
      uVar3 = 1;
    }
    uVar5 = uVar3 & 3;
    param_1[1] = param_2;
    if (uVar3 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar6 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar6 * 8 + 0x10) = 0;
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 + 4;
        *(undefined8 *)(*param_1 + lVar2 + 0x18) = 0;
      } while ((uVar3 & 0xfffffffffffffffc) != uVar6);
    }
    if (uVar5 != 0) {
      lVar2 = uVar6 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar2) = 0;
        uVar5 = uVar5 - 1;
        lVar2 = lVar2 + 8;
      } while (uVar5 != 0);
    }
    plVar8 = (long *)param_1[3];
    if (plVar8 != (long *)0x0) {
      uVar3 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
      uVar5 = plVar8[1];
      uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar3 < 2) {
        uVar5 = uVar5 & uVar4;
      }
      else if (param_2 <= uVar5) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar6 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 3;
      plVar9 = (long *)*plVar8;
      if (plVar9 != (long *)0x0) {
        if (uVar3 < 2) {
          do {
            uVar3 = plVar9[1] & uVar4;
            if (uVar3 == uVar5) {
              uVar3 = uVar5;
            }
            else if (*(long *)(*param_1 + uVar3 * 8) == 0) {
              *(long **)(*param_1 + uVar3 * 8) = plVar8;
            }
            else {
              plVar10 = plVar9;
              if (*plVar9 != 0) {
                uVar6 = FUN_00c19624(plVar9 + 2,*plVar9 + 0x10);
                if ((uVar6 & 1) != 0) {
                  do {
                    plVar10 = (long *)*plVar10;
                    if (*plVar10 == 0) break;
                    uVar6 = FUN_00c19624(plVar9 + 2,*plVar10 + 0x10);
                  } while ((uVar6 & 1) != 0);
                }
              }
              *plVar8 = *plVar10;
              *plVar10 = **(long **)(*param_1 + uVar3 * 8);
              **(undefined8 **)(*param_1 + uVar3 * 8) = plVar9;
              plVar9 = plVar8;
              uVar3 = uVar5;
            }
            plVar10 = (long *)*plVar9;
            plVar8 = plVar9;
            uVar5 = uVar3;
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar3 = plVar9[1];
            if (param_2 <= uVar3) {
              uVar4 = 0;
              if (param_2 != 0) {
                uVar4 = uVar3 / param_2;
              }
              uVar3 = uVar3 - uVar4 * param_2;
            }
            if (uVar3 == uVar5) {
              uVar3 = uVar5;
            }
            else if (*(long *)(*param_1 + uVar3 * 8) == 0) {
              *(long **)(*param_1 + uVar3 * 8) = plVar8;
            }
            else {
              plVar10 = plVar9;
              if (*plVar9 != 0) {
                uVar4 = FUN_00c19624(plVar9 + 2,*plVar9 + 0x10);
                if ((uVar4 & 1) != 0) {
                  do {
                    plVar10 = (long *)*plVar10;
                    if (*plVar10 == 0) break;
                    uVar4 = FUN_00c19624(plVar9 + 2,*plVar10 + 0x10);
                  } while ((uVar4 & 1) != 0);
                }
              }
              *plVar8 = *plVar10;
              *plVar10 = **(long **)(*param_1 + uVar3 * 8);
              **(undefined8 **)(*param_1 + uVar3 * 8) = plVar9;
              plVar9 = plVar8;
              uVar3 = uVar5;
            }
            plVar10 = (long *)*plVar9;
            plVar8 = plVar9;
            uVar5 = uVar3;
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
  return;
}


