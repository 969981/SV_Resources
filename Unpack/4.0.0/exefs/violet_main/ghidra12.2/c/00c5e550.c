/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5e550; name: FUN_00c5e550
 */


undefined8 FUN_00c5e550(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(param_1 + 0x90);
  if (lVar7 != 0) {
    uVar4 = *(ulong *)(lVar7 + 0x10);
    if (uVar4 == 0) {
      return 0;
    }
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar3;
    }
    else if (uVar3 < uVar4) {
      uVar6 = uVar3;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar3 / uVar4;
      }
      uVar6 = uVar3 - uVar6 * uVar4;
    }
    plVar8 = *(long **)(*(long *)(lVar7 + 8) + uVar6 * 8);
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    if (uVar5 < 2) {
      do {
        if (plVar8[1] == uVar3) {
          if (plVar8[2] == uVar3) goto LAB_00c5e784;
        }
        else if ((plVar8[1] & uVar4 - 1) != uVar6) {
          return 0;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        uVar5 = plVar8[1];
        if (uVar5 == uVar3) {
          if (plVar8[2] == uVar3) {
LAB_00c5e784:
            if ((undefined8 *)plVar8[6] == (undefined8 *)0x0) {
              return 0;
            }
            return *(undefined8 *)plVar8[6];
          }
        }
        else {
          if (uVar4 <= uVar5) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar5 / uVar4;
            }
            uVar5 = uVar5 - uVar1 * uVar4;
          }
          if (uVar5 != uVar6) {
            return 0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x88);
  if (lVar7 == 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      return 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1e8) & 1) == 0) {
      return 0;
    }
    uVar2 = FUN_029d6144(*(undefined8 *)(param_1 + 0x50));
    return uVar2;
  }
  if (*(long *)(lVar7 + 0x48) == 0) {
    return 0;
  }
  if ((*(byte *)(*(long *)(lVar7 + 0x48) + 0x1e8) & 1) == 0) {
    return 0;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x48) + 0x220);
  if (lVar7 == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(lVar7 + 0x10);
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = *param_2;
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar6 = uVar4 - 1 & uVar3;
  }
  else if (uVar3 < uVar4) {
    uVar6 = uVar3;
  }
  else {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar3 / uVar4;
    }
    uVar6 = uVar3 - uVar6 * uVar4;
  }
  plVar8 = *(long **)(*(long *)(lVar7 + 8) + uVar6 * 8);
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  if (uVar5 < 2) {
    do {
      if (plVar8[1] == uVar3) {
        if (plVar8[2] == uVar3) goto LAB_00c5e678;
      }
      else if ((plVar8[1] & uVar4 - 1) != uVar6) {
        return 0;
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar5 = plVar8[1];
    if (uVar5 == uVar3) {
      if (plVar8[2] == uVar3) {
LAB_00c5e678:
        if ((undefined8 *)plVar8[6] == (undefined8 *)0x0) {
          return 0;
        }
        return *(undefined8 *)plVar8[6];
      }
    }
    else {
      if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar5 / uVar4;
        }
        uVar5 = uVar5 - uVar1 * uVar4;
      }
      if (uVar5 != uVar6) {
        return 0;
      }
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return 0;
    }
  } while( true );
}


