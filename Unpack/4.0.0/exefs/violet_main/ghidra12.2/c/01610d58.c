/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01610d58; name: FUN_01610d58
 */


void FUN_01610d58(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar4 = param_1[1];
  if (!(param_2 >= uVar4 && param_2 != uVar4)) {
    if (param_2 < uVar4) {
      uVar1 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar4 < 3) ||
         (uVar7 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar1 = std::__next_prime(uVar1);
      }
      else if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (uVar1 <= param_2) {
        uVar1 = param_2;
      }
      if (uVar1 < uVar4) goto LAB_01610d8c;
    }
    return;
  }
  uVar1 = param_2;
LAB_01610d8c:
  if (uVar1 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      lVar12 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar2,lVar12 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar2,lVar12 << 3,8);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar1 << 3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar12 = *param_1;
    *param_1 = lVar2;
    if (lVar12 != 0) {
      lVar2 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar12,lVar2 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar12,lVar2 << 3,8);
      }
    }
    uVar7 = uVar1 - 1;
    uVar4 = uVar1;
    if (uVar1 == 0 || uVar7 == 0) {
      uVar4 = 1;
    }
    uVar5 = uVar4 & 3;
    param_1[1] = uVar1;
    if (uVar4 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar8 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar8 * 8 + 0x10) = 0;
        lVar2 = uVar8 * 8;
        uVar8 = uVar8 + 4;
        *(undefined8 *)(*param_1 + lVar2 + 0x18) = 0;
      } while ((uVar4 & 0xfffffffffffffffc) != uVar8);
    }
    if (uVar5 != 0) {
      lVar2 = uVar8 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar2) = 0;
        uVar5 = uVar5 - 1;
        lVar2 = lVar2 + 8;
      } while (uVar5 != 0);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar4 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar5 = plVar6[1];
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
        uVar5 = uVar5 & uVar7;
      }
      else if (uVar1 <= uVar5) {
        uVar8 = 0;
        if (uVar1 != 0) {
          uVar8 = uVar5 / uVar1;
        }
        uVar5 = uVar5 - uVar8 * uVar1;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 6;
      plVar9 = (long *)*plVar6;
      if (plVar9 != (long *)0x0) {
        if (uVar4 < 2) {
          do {
            uVar4 = plVar9[1] & uVar7;
            if (uVar4 != uVar5) {
              if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                *(long **)(*param_1 + uVar4 * 8) = plVar6;
                uVar5 = uVar4;
              }
              else {
                plVar10 = plVar9;
                do {
                  plVar11 = plVar10;
                  plVar10 = (long *)*plVar11;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar9[2] == plVar10[2]);
                *plVar6 = (long)plVar10;
                *plVar11 = **(long **)(*param_1 + uVar4 * 8);
                **(undefined8 **)(*param_1 + uVar4 * 8) = plVar9;
                plVar9 = plVar6;
              }
            }
            plVar10 = (long *)*plVar9;
            plVar6 = plVar9;
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar4 = plVar9[1];
            if (uVar1 <= uVar4) {
              uVar7 = 0;
              if (uVar1 != 0) {
                uVar7 = uVar4 / uVar1;
              }
              uVar4 = uVar4 - uVar7 * uVar1;
            }
            if (uVar4 != uVar5) {
              plVar10 = plVar9;
              if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                *(long **)(*param_1 + uVar4 * 8) = plVar6;
                uVar5 = uVar4;
              }
              else {
                do {
                  plVar11 = plVar10;
                  plVar10 = (long *)*plVar11;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar9[2] == plVar10[2]);
                *plVar6 = (long)plVar10;
                *plVar11 = **(long **)(*param_1 + uVar4 * 8);
                **(undefined8 **)(*param_1 + uVar4 * 8) = plVar9;
                plVar9 = plVar6;
              }
            }
            plVar10 = (long *)*plVar9;
            plVar6 = plVar9;
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
  return;
}


