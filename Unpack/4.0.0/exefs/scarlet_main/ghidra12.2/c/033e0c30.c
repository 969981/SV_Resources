/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e0c30; name: FUN_033e0c30
 */


void FUN_033e0c30(long param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      uVar4 = (uint)((float)param_2 * 0.001 * *(float *)(param_1 + uVar3 * 4));
      param_4[uVar3] = uVar4;
      if (uVar3 == 0) {
        if ((uVar4 & 1) == 0) {
          uVar4 = uVar4 + 1;
          *param_4 = uVar4;
        }
        uVar2 = (ulong)uVar4;
        if ((int)SQRT((double)uVar2) < 3) {
          if (uVar4 == 0) {
            *param_4 = 2;
          }
        }
        else {
          while( true ) {
            uVar5 = 3;
            do {
              uVar6 = 0;
              if (uVar5 != 0) {
                uVar6 = uVar4 / uVar5;
              }
              uVar6 = uVar6 * uVar5;
              uVar5 = uVar5 + 2;
              if (uVar4 == uVar6) goto LAB_033e0d2c;
            } while ((int)uVar5 <= (int)SQRT((double)uVar2));
            if (uVar4 != 0) break;
LAB_033e0d2c:
            uVar4 = uVar4 + 2;
            *param_4 = uVar4;
          }
        }
      }
      else {
        uVar5 = param_4[(int)uVar3 - 1];
        if ((uVar4 & 1) == 0) {
          uVar4 = uVar4 + 1;
          param_4[uVar3] = uVar4;
        }
        uVar2 = (ulong)uVar4;
        if ((int)SQRT((double)uVar2) < 3) {
          if (uVar4 == uVar5) {
            param_4[uVar3] = uVar5 + 2;
          }
        }
        else {
          while( true ) {
            uVar6 = 3;
            do {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar4 / uVar6;
              }
              uVar1 = uVar1 * uVar6;
              uVar6 = uVar6 + 2;
              if (uVar4 == uVar1) goto LAB_033e0cc8;
            } while ((int)uVar6 <= (int)SQRT((double)uVar2));
            if (uVar4 != uVar5) break;
LAB_033e0cc8:
            uVar4 = uVar4 + 2;
            param_4[uVar3] = uVar4;
          }
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_3);
  }
  return;
}


