/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0129baac; name: FUN_0129baac
 */


long * FUN_0129baac(long param_1,uint param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined2 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  
  uVar1 = *(ushort *)(param_1 + 0x72);
  uVar6 = (ulong)uVar1;
  if ((uVar6 != 0xee) && (uVar7 = *(ulong *)(param_1 + 0x10), uVar7 != 0)) {
    uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar8 = (int)uVar7 - 1 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar7 <= uVar6) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar6 / uVar7;
        }
        uVar8 = uVar6 - uVar8 * uVar7;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 8) + uVar8 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar5[1] == uVar6) {
            if (*(ushort *)(plVar5 + 2) == uVar1) goto LAB_0129bb44;
          }
          else if ((plVar5[1] & uVar7 - 1) != uVar8) {
            return (long *)0x0;
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        uVar4 = plVar5[1];
        if (uVar4 == uVar6) {
          if (*(ushort *)(plVar5 + 2) == uVar1) goto LAB_0129bb44;
        }
        else {
          if (uVar7 <= uVar4) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar4 / uVar7;
            }
            uVar4 = uVar4 - uVar2 * uVar7;
          }
          if (uVar4 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
LAB_0129bb44:
  plVar11 = plVar5 + 3;
  if (-1 < (int)param_2) {
    if (*(ushort *)(plVar5 + 5) != param_2) {
LAB_0129bd24:
      uVar1 = *(ushort *)((long)plVar11 + 0x14);
      uVar6 = (ulong)uVar1;
      if (uVar6 == 0xee) {
        return (long *)0x0;
      }
      uVar7 = *(ulong *)(plVar11[1] + 0x10);
      if (uVar7 == 0) {
        return (long *)0x0;
      }
      uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
        uVar8 = (int)uVar7 - 1 & uVar6;
      }
      else {
        uVar8 = uVar6;
        if (uVar7 <= uVar6) {
          uVar8 = 0;
          if (uVar7 != 0) {
            uVar8 = uVar6 / uVar7;
          }
          uVar8 = uVar6 - uVar8 * uVar7;
        }
      }
      puVar9 = *(undefined8 **)(*(long *)(plVar11[1] + 8) + uVar8 * 8);
      if (puVar9 == (undefined8 *)0x0) {
        return (long *)0x0;
      }
      plVar10 = (long *)*puVar9;
      if (plVar10 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar4 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_0129bdb0;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar8) {
            return (long *)0x0;
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        uVar4 = plVar10[1];
        if (uVar4 == uVar6) {
          if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_0129bdb0;
        }
        else {
          if (uVar7 <= uVar4) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar4 / uVar7;
            }
            uVar4 = uVar4 - uVar2 * uVar7;
          }
          if (uVar4 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
    goto LAB_0129bc50;
  }
  uVar1 = *(ushort *)((long)plVar5 + 0x2c);
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0xee) {
    uVar7 = *(ulong *)(plVar5[4] + 0x10);
    if (uVar7 != 0) {
      uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
        uVar8 = (int)uVar7 - 1 & uVar6;
      }
      else {
        uVar8 = uVar6;
        if (uVar7 <= uVar6) {
          uVar8 = 0;
          if (uVar7 != 0) {
            uVar8 = uVar6 / uVar7;
          }
          uVar8 = uVar6 - uVar8 * uVar7;
        }
      }
      plVar5 = *(long **)(*(long *)(plVar5[4] + 8) + uVar8 * 8);
      if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
        if (uVar4 < 2) {
          uVar3 = 0xee;
          do {
            if (plVar5[1] == uVar6) {
              if (*(ushort *)(plVar5 + 2) == uVar1) goto LAB_0129bbe0;
            }
            else if ((plVar5[1] & uVar7 - 1) != uVar8) break;
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
        }
        else {
          uVar3 = 0xee;
          do {
            uVar4 = plVar5[1];
            if (uVar4 == uVar6) {
              if (*(ushort *)(plVar5 + 2) == uVar1) goto LAB_0129bbe0;
            }
            else {
              if (uVar7 <= uVar4) {
                uVar2 = 0;
                if (uVar7 != 0) {
                  uVar2 = uVar4 / uVar7;
                }
                uVar4 = uVar4 - uVar2 * uVar7;
              }
              if (uVar4 != uVar8) break;
            }
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
        }
        goto LAB_0129bbe4;
      }
    }
  }
  goto LAB_0129bce8;
LAB_0129bdb0:
  plVar11 = plVar10 + 3;
  if (*(ushort *)(plVar10 + 5) == param_2) goto code_r0x0129bdc0;
  goto LAB_0129bd24;
LAB_0129bbe0:
  uVar3 = (undefined2)plVar5[5];
  goto LAB_0129bbe4;
code_r0x0129bdc0:
  if (plVar10 != plVar5) goto LAB_0129bbe8;
LAB_0129bc50:
  uVar1 = *(ushort *)((long)plVar5 + 0x2c);
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0xee) {
    uVar7 = *(ulong *)(plVar5[4] + 0x10);
    if (uVar7 != 0) {
      uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
        uVar8 = (int)uVar7 - 1 & uVar6;
      }
      else {
        uVar8 = uVar6;
        if (uVar7 <= uVar6) {
          uVar8 = 0;
          if (uVar7 != 0) {
            uVar8 = uVar6 / uVar7;
          }
          uVar8 = uVar6 - uVar8 * uVar7;
        }
      }
      plVar5 = *(long **)(*(long *)(plVar5[4] + 8) + uVar8 * 8);
      if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
        if (uVar4 < 2) {
          uVar3 = 0xee;
          do {
            if (plVar5[1] == uVar6) {
              if (*(ushort *)(plVar5 + 2) == uVar1) goto LAB_0129bbe0;
            }
            else if ((plVar5[1] & uVar7 - 1) != uVar8) break;
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
        }
        else {
          uVar3 = 0xee;
          do {
            uVar4 = plVar5[1];
            if (uVar4 == uVar6) {
              if (*(ushort *)(plVar5 + 2) == uVar1) goto LAB_0129bbe0;
            }
            else {
              if (uVar7 <= uVar4) {
                uVar2 = 0;
                if (uVar7 != 0) {
                  uVar2 = uVar4 / uVar7;
                }
                uVar4 = uVar4 - uVar2 * uVar7;
              }
              if (uVar4 != uVar8) break;
            }
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
        }
        goto LAB_0129bbe4;
      }
    }
  }
LAB_0129bce8:
  uVar3 = 0xee;
LAB_0129bbe4:
  *(undefined2 *)(param_1 + 0x72) = uVar3;
LAB_0129bbe8:
  FUN_0137cdf8(plVar11);
  return plVar11;
}


