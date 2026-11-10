/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a4104; name: FUN_031a4104
 */


void FUN_031a4104(void *param_1,uint param_2,undefined4 *param_3,uint param_4,uint param_5,
                 int param_6)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  
  if (param_5 == 0) {
    return;
  }
  if ((param_2 == param_4) && (param_2 == param_5)) {
    memcpy(param_3,param_1,(long)(int)(param_6 * param_5));
    return;
  }
  param_6 = param_6 * param_2;
  lVar2 = (long)param_6;
  if ((param_5 & 3) == 0) {
    switch((int)param_5 >> 2) {
    case 1:
      if (param_6 != 0) {
        lVar3 = 0;
        do {
          puVar1 = (undefined4 *)((long)param_1 + lVar3);
          lVar3 = lVar3 + (int)param_2;
          *param_3 = *puVar1;
          param_3 = (undefined4 *)((long)param_3 + (long)(int)param_4);
        } while (lVar2 != lVar3);
      }
      break;
    case 2:
      if (param_6 != 0) {
        lVar3 = 0;
        param_3 = param_3 + 1;
        do {
          puVar1 = (undefined4 *)((long)param_1 + lVar3);
          lVar3 = lVar3 + (int)param_2;
          param_3[-1] = *puVar1;
          *param_3 = puVar1[1];
          param_3 = (undefined4 *)((long)param_3 + (long)(int)param_4);
        } while (lVar2 != lVar3);
      }
      break;
    case 3:
      if (param_6 != 0) {
        lVar3 = 0;
        param_3 = param_3 + 2;
        do {
          puVar1 = (undefined4 *)((long)param_1 + lVar3);
          lVar3 = lVar3 + (int)param_2;
          param_3[-2] = *puVar1;
          param_3[-1] = puVar1[1];
          *param_3 = puVar1[2];
          param_3 = (undefined4 *)((long)param_3 + (long)(int)param_4);
        } while (lVar2 != lVar3);
      }
      break;
    case 4:
      if (param_6 != 0) {
        lVar3 = 0;
        param_3 = param_3 + 2;
        do {
          puVar1 = (undefined4 *)((long)param_1 + lVar3);
          lVar3 = lVar3 + (int)param_2;
          param_3[-2] = *puVar1;
          param_3[-1] = puVar1[1];
          *param_3 = puVar1[2];
          param_3[1] = puVar1[3];
          param_3 = (undefined4 *)((long)param_3 + (long)(int)param_4);
        } while (lVar2 != lVar3);
      }
      break;
    default:
      goto switchD_031a41e0_default;
    }
  }
  else {
switchD_031a41e0_default:
    if (param_6 != 0) {
      lVar3 = 0;
      do {
        memcpy(param_3,(void *)((long)param_1 + lVar3),(long)(int)param_5);
        lVar3 = lVar3 + (int)param_2;
        param_3 = (undefined4 *)((long)param_3 + (long)(int)param_4);
      } while (lVar2 != lVar3);
    }
  }
  return;
}


