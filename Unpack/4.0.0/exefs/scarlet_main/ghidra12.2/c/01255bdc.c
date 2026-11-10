/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01255bdc; name: FUN_01255bdc
 */


long * FUN_01255bdc(undefined8 param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 != 0) {
    uVar1 = *(ushort *)(param_2 + 0x14);
    uVar3 = (ulong)uVar1;
    if (uVar3 != 0xee) {
      uVar4 = *(ulong *)(*(long *)(param_2 + 8) + 0x10);
      if (uVar4 != 0) {
        uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
        uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
        uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar5 < 2) {
          uVar7 = (int)uVar4 - 1 & uVar3;
        }
        else {
          uVar7 = uVar3;
          if (uVar4 <= uVar3) {
            uVar7 = 0;
            if (uVar4 != 0) {
              uVar7 = uVar3 / uVar4;
            }
            uVar7 = uVar3 - uVar7 * uVar4;
          }
        }
        plVar6 = *(long **)(*(long *)(*(long *)(param_2 + 8) + 8) + uVar7 * 8);
        if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
          if (uVar5 < 2) {
            do {
              if (plVar6[1] == uVar3) {
                if (*(ushort *)(plVar6 + 2) == uVar1) goto LAB_01255c78;
              }
              else if ((plVar6[1] & uVar4 - 1) != uVar7) {
                return (long *)0x0;
              }
              plVar6 = (long *)*plVar6;
            } while (plVar6 != (long *)0x0);
          }
          else {
            do {
              uVar5 = plVar6[1];
              if (uVar5 == uVar3) {
                if (*(ushort *)(plVar6 + 2) == uVar1) goto LAB_01255c78;
              }
              else {
                if (uVar4 <= uVar5) {
                  uVar2 = 0;
                  if (uVar4 != 0) {
                    uVar2 = uVar5 / uVar4;
                  }
                  uVar5 = uVar5 - uVar2 * uVar4;
                }
                if (uVar5 != uVar7) {
                  return (long *)0x0;
                }
              }
              plVar6 = (long *)*plVar6;
            } while (plVar6 != (long *)0x0);
          }
          return (long *)0x0;
        }
      }
    }
  }
  return (long *)0x0;
LAB_01255c78:
  plVar6 = plVar6 + 3;
  if ((param_3 & 1) != 0) {
LAB_01255d28:
    if (((char)plVar6[5] == *(char *)(param_2 + 0x28)) && (*(char *)((long)plVar6 + 0x41) == '\0'))
    {
      return plVar6;
    }
    uVar1 = *(ushort *)((long)plVar6 + 0x14);
    uVar3 = (ulong)uVar1;
    if (uVar3 == 0xee) {
      return (long *)0x0;
    }
    uVar4 = *(ulong *)(plVar6[1] + 0x10);
    if (uVar4 == 0) {
      return (long *)0x0;
    }
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar7 = (int)uVar4 - 1 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (uVar4 <= uVar3) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar3 / uVar4;
        }
        uVar7 = uVar3 - uVar7 * uVar4;
      }
    }
    plVar6 = *(long **)(*(long *)(plVar6[1] + 8) + uVar7 * 8);
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    if (uVar5 < 2) {
      do {
        if (plVar6[1] == uVar3) {
          if (*(ushort *)(plVar6 + 2) == uVar1) goto LAB_01255dc0;
        }
        else if ((plVar6[1] & uVar4 - 1) != uVar7) {
          return (long *)0x0;
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
    do {
      uVar5 = plVar6[1];
      if (uVar5 == uVar3) {
        if (*(ushort *)(plVar6 + 2) == uVar1) goto LAB_01255dc0;
      }
      else {
        if (uVar4 <= uVar5) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar5 / uVar4;
          }
          uVar5 = uVar5 - uVar2 * uVar4;
        }
        if (uVar5 != uVar7) {
          return (long *)0x0;
        }
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
    } while( true );
  }
LAB_01255c84:
  if ((((char)plVar6[5] == *(char *)(param_2 + 0x28)) &&
      (*(int *)((long)plVar6 + 0x34) == *(int *)(param_2 + 0x34))) &&
     (*(char *)((long)plVar6 + 0x41) == '\0')) {
    return plVar6;
  }
  uVar1 = *(ushort *)((long)plVar6 + 0x14);
  uVar3 = (ulong)uVar1;
  if (uVar3 == 0xee) {
    return (long *)0x0;
  }
  uVar4 = *(ulong *)(plVar6[1] + 0x10);
  if (uVar4 == 0) {
    return (long *)0x0;
  }
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar7 = (int)uVar4 - 1 & uVar3;
  }
  else {
    uVar7 = uVar3;
    if (uVar4 <= uVar3) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar3 / uVar4;
      }
      uVar7 = uVar3 - uVar7 * uVar4;
    }
  }
  plVar6 = *(long **)(*(long *)(plVar6[1] + 8) + uVar7 * 8);
  if (plVar6 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    return (long *)0x0;
  }
  if (uVar5 < 2) {
    do {
      if (plVar6[1] == uVar3) {
        if (*(ushort *)(plVar6 + 2) == uVar1) goto LAB_01255d1c;
      }
      else if ((plVar6[1] & uVar4 - 1) != uVar7) {
        return (long *)0x0;
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
    } while( true );
  }
  do {
    uVar5 = plVar6[1];
    if (uVar5 == uVar3) {
      if (*(ushort *)(plVar6 + 2) == uVar1) goto LAB_01255d1c;
    }
    else {
      if (uVar4 <= uVar5) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar5 / uVar4;
        }
        uVar5 = uVar5 - uVar2 * uVar4;
      }
      if (uVar5 != uVar7) {
        return (long *)0x0;
      }
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
  } while( true );
LAB_01255dc0:
  plVar6 = plVar6 + 3;
  goto LAB_01255d28;
LAB_01255d1c:
  plVar6 = plVar6 + 3;
  goto LAB_01255c84;
}


