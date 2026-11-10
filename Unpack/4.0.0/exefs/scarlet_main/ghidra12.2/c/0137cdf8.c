/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0137cdf8; name: FUN_0137cdf8
 */


void FUN_0137cdf8(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  
  uVar1 = *(ushort *)(param_1 + 0x12);
  uVar3 = (ulong)uVar1;
  lVar6 = *(long *)(param_1 + 8);
  if ((uVar3 != 0xee) && (uVar8 = *(ulong *)(lVar6 + 0x10), uVar8 != 0)) {
    uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar9 = (int)uVar8 - 1 & uVar3;
    }
    else {
      uVar9 = uVar3;
      if (uVar8 <= uVar3) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar3 / uVar8;
        }
        uVar9 = uVar3 - uVar9 * uVar8;
      }
    }
    plVar10 = *(long **)(*(long *)(lVar6 + 8) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar10[1] == uVar3) {
            if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_0137ce88;
          }
          else if ((plVar10[1] & uVar8 - 1) != uVar9) goto LAB_0137d1ec;
          plVar10 = (long *)*plVar10;
          plVar7 = (long *)0x0;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar10[1];
          if (uVar4 == uVar3) {
            if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_0137ce88;
          }
          else {
            if (uVar8 <= uVar4) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar4 / uVar8;
              }
              uVar4 = uVar4 - uVar2 * uVar8;
            }
            if (uVar4 != uVar9) goto LAB_0137d1ec;
          }
          plVar10 = (long *)*plVar10;
          plVar7 = (long *)0x0;
        } while (plVar10 != (long *)0x0);
      }
      goto LAB_0137ce8c;
    }
  }
LAB_0137d1ec:
  plVar7 = (long *)0x0;
LAB_0137ce8c:
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar3 = (ulong)uVar1;
  if ((uVar3 == 0xee) || (uVar8 = *(ulong *)(lVar6 + 0x10), uVar8 == 0)) {
    if (plVar7 == (long *)0x0) goto LAB_0137cf24;
    plVar10 = (long *)0x0;
    goto LAB_0137cf3c;
  }
  uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar9 = (int)uVar8 - 1 & uVar3;
  }
  else {
    uVar9 = uVar3;
    if (uVar8 <= uVar3) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar3 / uVar8;
      }
      uVar9 = uVar3 - uVar9 * uVar8;
    }
  }
  plVar11 = *(long **)(*(long *)(lVar6 + 8) + uVar9 * 8);
  if ((plVar11 == (long *)0x0) || (plVar11 = (long *)*plVar11, plVar11 == (long *)0x0)) {
LAB_0137d210:
    plVar10 = (long *)0x0;
  }
  else if (uVar4 < 2) {
    do {
      if (plVar11[1] == uVar3) {
        if (*(ushort *)(plVar11 + 2) == uVar1) goto LAB_0137cf18;
      }
      else if ((plVar11[1] & uVar8 - 1) != uVar9) goto LAB_0137d210;
      plVar11 = (long *)*plVar11;
      plVar10 = (long *)0x0;
    } while (plVar11 != (long *)0x0);
  }
  else {
    do {
      uVar4 = plVar11[1];
      if (uVar4 == uVar3) {
        if (*(ushort *)(plVar11 + 2) == uVar1) goto LAB_0137cf18;
      }
      else {
        if (uVar8 <= uVar4) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar4 / uVar8;
          }
          uVar4 = uVar4 - uVar2 * uVar8;
        }
        if (uVar4 != uVar9) goto LAB_0137d210;
      }
      plVar11 = (long *)*plVar11;
      plVar10 = (long *)0x0;
    } while (plVar11 != (long *)0x0);
  }
LAB_0137cf1c:
  if (plVar7 != (long *)0x0) {
    if (uVar8 == 0) {
LAB_0137cf3c:
      uVar5 = 0xee;
    }
    else {
      uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
        uVar9 = (int)uVar8 - 1 & uVar3;
      }
      else {
        uVar9 = uVar3;
        if (uVar8 <= uVar3) {
          uVar9 = 0;
          if (uVar8 != 0) {
            uVar9 = uVar3 / uVar8;
          }
          uVar9 = uVar3 - uVar9 * uVar8;
        }
      }
      plVar11 = *(long **)(*(long *)(lVar6 + 8) + uVar9 * 8);
      if ((plVar11 == (long *)0x0) || (plVar11 = (long *)*plVar11, plVar11 == (long *)0x0))
      goto LAB_0137cf3c;
      if (uVar4 < 2) {
        uVar5 = 0xee;
        do {
          if (plVar11[1] == uVar3) {
            if (*(ushort *)(plVar11 + 2) == uVar1) goto LAB_0137d0d8;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        uVar5 = 0xee;
        do {
          uVar4 = plVar11[1];
          if (uVar4 == uVar3) {
            if (*(ushort *)(plVar11 + 2) == uVar1) goto LAB_0137d0d8;
          }
          else {
            if (uVar8 <= uVar4) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar4 / uVar8;
              }
              uVar4 = uVar4 - uVar2 * uVar8;
            }
            if (uVar4 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
LAB_0137d0dc:
    *(undefined2 *)((long)plVar7 + 0x14) = uVar5;
  }
  if (plVar10 == (long *)0x0) goto LAB_0137cf24;
  uVar1 = *(ushort *)(param_1 + 0x12);
  uVar3 = (ulong)uVar1;
  if (uVar3 == 0xee) {
LAB_0137cfe4:
    uVar5 = 0xee;
  }
  else {
    uVar8 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    if (uVar8 == 0) goto LAB_0137cfe4;
    uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar9 = (int)uVar8 - 1 & uVar3;
    }
    else {
      uVar9 = uVar3;
      if (uVar8 <= uVar3) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar3 / uVar8;
        }
        uVar9 = uVar3 - uVar9 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 8) + uVar9 * 8);
    if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
    goto LAB_0137cfe4;
    if (uVar4 < 2) {
      uVar5 = 0xee;
      do {
        if (plVar7[1] == uVar3) {
          if (*(ushort *)(plVar7 + 2) == uVar1) goto LAB_0137cfd8;
        }
        else if ((plVar7[1] & uVar8 - 1) != uVar9) break;
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else {
      uVar5 = 0xee;
      do {
        uVar4 = plVar7[1];
        if (uVar4 == uVar3) {
          if (*(ushort *)(plVar7 + 2) == uVar1) goto LAB_0137cfd8;
        }
        else {
          if (uVar8 <= uVar4) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar4 / uVar8;
            }
            uVar4 = uVar4 - uVar2 * uVar8;
          }
          if (uVar4 != uVar9) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_0137cfdc:
  *(undefined2 *)((long)plVar10 + 0x12) = uVar5;
LAB_0137cf24:
  *(undefined4 *)(param_1 + 0x12) = 0xee00ee;
  return;
LAB_0137ce88:
  plVar7 = plVar10 + 3;
  goto LAB_0137ce8c;
LAB_0137cf18:
  plVar10 = plVar11 + 3;
  goto LAB_0137cf1c;
LAB_0137d0d8:
  uVar5 = (undefined2)plVar11[5];
  goto LAB_0137d0dc;
LAB_0137cfd8:
  uVar5 = (undefined2)plVar7[5];
  goto LAB_0137cfdc;
}


