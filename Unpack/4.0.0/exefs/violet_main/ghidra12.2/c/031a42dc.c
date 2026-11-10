/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a42dc; name: FUN_031a42dc
 */


void FUN_031a42dc(void *param_1,uint param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  size_t __n;
  size_t sVar2;
  
  if (param_3 == 0) {
    return;
  }
  param_4 = param_4 * param_3;
  __n = (size_t)param_4;
  if (param_2 == param_3) {
    memset(param_1,0,__n);
    return;
  }
  if ((param_3 & 3) == 0) {
    switch((int)param_3 >> 2) {
    case 1:
      if (param_4 != 0) {
        sVar2 = 0;
        do {
          *(undefined4 *)((long)param_1 + sVar2) = 0;
          sVar2 = sVar2 + (long)(int)param_2;
        } while (__n != sVar2);
      }
      break;
    case 2:
      if (param_4 != 0) {
        sVar2 = 0;
        do {
          *(undefined8 *)((long)param_1 + sVar2) = 0;
          sVar2 = sVar2 + (long)(int)param_2;
        } while (__n != sVar2);
      }
      break;
    case 3:
      if (param_4 != 0) {
        sVar2 = 0;
        do {
          puVar1 = (undefined8 *)((long)param_1 + sVar2);
          sVar2 = sVar2 + (long)(int)param_2;
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
        } while (__n != sVar2);
      }
      break;
    case 4:
      if (param_4 != 0) {
        sVar2 = 0;
        do {
          puVar1 = (undefined8 *)((long)param_1 + sVar2);
          sVar2 = sVar2 + (long)(int)param_2;
          *puVar1 = 0;
          puVar1[1] = 0;
        } while (__n != sVar2);
      }
      break;
    default:
      goto switchD_031a4394_default;
    }
  }
  else {
switchD_031a4394_default:
    if (param_4 != 0) {
      sVar2 = 0;
      do {
        memset((void *)((long)param_1 + sVar2),0,(long)(int)param_3);
        sVar2 = sVar2 + (long)(int)param_2;
      } while (__n != sVar2);
    }
  }
  return;
}


