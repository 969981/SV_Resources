/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01170e48; name: FUN_01170e48
 */


void FUN_01170e48(long *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  byte bVar13;
  ulong uVar14;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar14 = param_1[1];
  if (!(param_2 >= uVar14 && param_2 != uVar14)) {
    if (param_2 < uVar14) {
      uVar3 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xd));
      if ((uVar14 < 3) ||
         (uVar6 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar3 = std::__next_prime(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
      }
      if (uVar3 <= param_2) {
        uVar3 = param_2;
      }
      if (uVar3 < uVar14) goto LAB_01170e7c;
    }
    return;
  }
  uVar3 = param_2;
LAB_01170e7c:
  plVar7 = param_1 + 1;
  if (uVar3 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      FUN_01171c80(plVar7);
    }
    *plVar7 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar3 << 3,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      FUN_01171c80(plVar7);
    }
    uVar6 = uVar3 - 1;
    uVar14 = uVar3;
    if (uVar3 == 0 || uVar6 == 0) {
      uVar14 = 1;
    }
    param_1[1] = uVar3;
    *(undefined8 *)*param_1 = 0;
    if (((1 < uVar3) && (*(undefined8 *)(*param_1 + 8) = 0, uVar14 != 2)) &&
       (*(undefined8 *)(*param_1 + 0x10) = 0, uVar14 != 3)) {
      uVar9 = 3;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar14 != uVar9);
    }
    plVar7 = (long *)param_1[6];
    if (plVar7 != (long *)0x0) {
      uVar14 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar9 = plVar7[1];
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar9 = uVar9 & uVar6;
      }
      else if (uVar3 <= uVar9) {
        uVar10 = 0;
        if (uVar3 != 0) {
          uVar10 = uVar9 / uVar3;
        }
        uVar9 = uVar9 - uVar10 * uVar3;
      }
      *(long **)(*param_1 + uVar9 * 8) = param_1 + 6;
      for (plVar8 = (long *)*plVar7; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar10 = plVar8[1];
        if (uVar14 < 2) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar3 <= uVar10) {
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = uVar10 / uVar3;
          }
          uVar10 = uVar10 - uVar2 * uVar3;
        }
        if (uVar10 == uVar9) {
          uVar10 = uVar9;
        }
        else {
          plVar12 = plVar8;
          if (*(long *)(*param_1 + uVar10 * 8) == 0) {
            *(long **)(*param_1 + uVar10 * 8) = plVar7;
          }
          else {
            while( true ) {
              plVar11 = plVar12;
              plVar12 = (long *)*plVar11;
              if (plVar12 == (long *)0x0) break;
              bVar13 = 1;
              if ((float)((ulong)plVar8[2] >> 0x20) == (float)((ulong)plVar12[2] >> 0x20)) {
                bVar13 = ~((float)plVar8[3] == (float)plVar12[3]);
              }
              bVar1 = 1;
              if ((float)plVar8[2] == (float)plVar12[2]) {
                bVar1 = bVar13;
              }
              if ((((float)plVar8[4] == (float)plVar12[4]) &&
                  ((float)((ulong)plVar8[4] >> 0x20) == (float)((ulong)plVar12[4] >> 0x20))) &&
                 ((float)plVar8[5] == (float)plVar12[5])) {
                bVar13 = ~((float)((ulong)plVar8[5] >> 0x20) == (float)((ulong)plVar12[5] >> 0x20));
              }
              else {
                bVar13 = 1;
              }
              if (((*(int *)((long)plVar8 + 0x3c) != *(int *)((long)plVar12 + 0x3c)) ||
                  ((bool)((bVar1 | bVar13) & 1))) ||
                 ((*(float *)(plVar8 + 6) != *(float *)(plVar12 + 6) ||
                  ((*(float *)((long)plVar8 + 0x34) != *(float *)((long)plVar12 + 0x34) ||
                   (*(float *)(plVar8 + 7) != *(float *)(plVar12 + 7))))))) break;
            }
            *plVar7 = (long)plVar12;
            *plVar11 = **(long **)(*param_1 + uVar10 * 8);
            **(long **)(*param_1 + uVar10 * 8) = (long)plVar8;
            plVar8 = plVar7;
            uVar10 = uVar9;
          }
        }
        plVar7 = plVar8;
        uVar9 = uVar10;
      }
    }
  }
  return;
}


