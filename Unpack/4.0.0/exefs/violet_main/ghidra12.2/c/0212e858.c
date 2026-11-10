/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212e858; name: FUN_0212e858
 */


float FUN_0212e858(undefined8 param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = *(ulong *)(param_2 + 0x160);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & 0x40da82ec466e99f7;
    }
    else {
      uVar5 = 0x40da82ec466e99f7;
      if (uVar3 < 0x40da82ec466e99f8) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = 0x40da82ec466e99f7 / uVar3;
        }
        uVar5 = 0x40da82ec466e99f7 - uVar5 * uVar3;
      }
    }
    fVar9 = 0.0;
    plVar6 = *(long **)(*(long *)(param_2 + 0x158) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == 0x40da82ec466e99f7) {
            if (plVar6[2] == 0x40da82ec466e99f7) goto LAB_0212e974;
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == 0x40da82ec466e99f7) {
            if (plVar6[2] == 0x40da82ec466e99f7) goto LAB_0212e974;
          }
          else {
            if (uVar3 <= uVar7) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar7 / uVar3;
              }
              uVar7 = uVar7 - uVar1 * uVar3;
            }
            if (uVar7 != uVar5) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
    goto LAB_0212e978;
  }
  fVar10 = 0.0;
  fVar9 = 0.0;
  goto LAB_0212eaa0;
LAB_0212e974:
  fVar9 = *(float *)(plVar6 + 6);
LAB_0212e978:
  if (uVar4 < 2) {
    uVar5 = uVar3 - 1 & 0x8e9331ea9e14aab;
  }
  else {
    uVar5 = 0x8e9331ea9e14aab;
    if (uVar3 < 0x8e9331ea9e14aac) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = 0x8e9331ea9e14aab / uVar3;
      }
      uVar5 = 0x8e9331ea9e14aab - uVar5 * uVar3;
    }
  }
  plVar6 = *(long **)(*(long *)(param_2 + 0x158) + uVar5 * 8);
  fVar10 = 0.0;
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    if (uVar4 < 2) {
      do {
        if (plVar6[1] == 0x8e9331ea9e14aab) {
          if (plVar6[2] == 0x8e9331ea9e14aab) goto LAB_0212ea44;
        }
        else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar4 = plVar6[1];
        if (uVar4 == 0x8e9331ea9e14aab) {
          if (plVar6[2] == 0x8e9331ea9e14aab) goto LAB_0212ea44;
        }
        else {
          if (uVar3 <= uVar4) {
            uVar7 = 0;
            if (uVar3 != 0) {
              uVar7 = uVar4 / uVar3;
            }
            uVar4 = uVar4 - uVar7 * uVar3;
          }
          if (uVar4 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  goto LAB_0212ea48;
LAB_0212ea44:
  fVar10 = *(float *)(plVar6 + 6);
LAB_0212ea48:
  if (fVar9 <= fVar10) {
LAB_0212eaa0:
    uVar2 = FUN_0212f3e8();
    fVar8 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)uVar2 * 8))(param_1);
    fVar10 = fVar9 + (fVar10 - fVar9) * fVar8;
  }
  else {
    uVar2 = FUN_0212f3e8();
    fVar8 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)uVar2 * 8))(param_1);
    fVar9 = fVar9 + ((24.0 - fVar9) + fVar10) * fVar8 + 0.0;
    fVar10 = fVar9 + -24.0;
    if (fVar9 <= 24.0) {
      fVar10 = fVar9;
    }
  }
  return fVar10;
}


