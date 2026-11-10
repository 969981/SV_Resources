/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2b5d0; name: FUN_00d2b5d0
 */


long FUN_00d2b5d0(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  piVar3 = (int *)*param_2;
  if (((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
      (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar5 == 0)) ||
     (iVar1 = *(int *)((long)piVar3 + uVar5), iVar1 == 0)) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    if (uVar5 != 0) {
      uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar4 = param_2[1];
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar7 = uVar5 - 1 & uVar4;
      }
      else if (uVar4 < uVar5) {
        uVar7 = uVar4;
      }
      else {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar4 / uVar5;
        }
        uVar7 = uVar4 - uVar7 * uVar5;
      }
      plVar8 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        if (uVar6 < 2) {
          do {
            if (plVar8[1] == uVar4) {
              if (plVar8[2] == uVar4) goto LAB_00d2b7f4;
            }
            else if ((plVar8[1] & uVar5 - 1) != uVar7) {
              return 0;
            }
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_00d2b7f4;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) {
              return 0;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  else if (iVar1 == 1) {
    uVar5 = *(ulong *)(param_1 + 0x78);
    if (uVar5 != 0) {
      uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar4 = param_2[1];
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar7 = uVar5 - 1 & uVar4;
      }
      else if (uVar4 < uVar5) {
        uVar7 = uVar4;
      }
      else {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar4 / uVar5;
        }
        uVar7 = uVar4 - uVar7 * uVar5;
      }
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x70) + uVar7 * 8);
      if ((puVar9 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar9, plVar8 != (long *)0x0)) {
        if (uVar6 < 2) {
          do {
            if (plVar8[1] == uVar4) {
              if (plVar8[2] == uVar4) goto LAB_00d2b7f4;
            }
            else if ((plVar8[1] & uVar5 - 1) != uVar7) {
              return 0;
            }
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (plVar8[2] == uVar4) {
LAB_00d2b7f4:
              return plVar8[6];
            }
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) {
              return 0;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  else if ((iVar1 == 2) && (uVar5 = *(ulong *)(param_1 + 0xe0), uVar5 != 0)) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar4 = param_2[1];
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar7 = uVar4;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      uVar7 = uVar4 - uVar7 * uVar5;
    }
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + uVar7 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar9, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_00d2b7f4;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) {
            return 0;
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar6 = plVar8[1];
        if (uVar6 == uVar4) {
          if (plVar8[2] == uVar4) goto LAB_00d2b7f4;
        }
        else {
          if (uVar5 <= uVar6) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar6 / uVar5;
            }
            uVar6 = uVar6 - uVar2 * uVar5;
          }
          if (uVar6 != uVar7) {
            return 0;
          }
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


