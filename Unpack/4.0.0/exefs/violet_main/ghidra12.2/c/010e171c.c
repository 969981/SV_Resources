/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e171c; name: FUN_010e171c
 */


ulong FUN_010e171c(int *param_1,int param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong __n;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  char local_6c [12];
  byte local_60 [16];
  byte local_34 [4];
  
  cVar1 = (char)param_1[1];
  if (*param_1 == 0) {
    local_6c[0] = cVar1;
    __n = (ulong)(cVar1 != '\n');
  }
  else {
    if (cVar1 == '\n') {
      return 0;
    }
    local_60[0xb] = 0;
    local_60[0] = 10;
    local_60[1] = 10;
    local_60[2] = 10;
    local_60[3] = 10;
    local_60[4] = 10;
    local_60[5] = 10;
    local_60[6] = 10;
    local_60[7] = 10;
    local_60[8] = 10;
    local_60[9] = 10;
    local_60[10] = 10;
    if (param_2 == 2) {
      FUN_012393fc(param_1,local_60);
    }
    else if (param_2 == 1) {
      FUN_01238f20(param_1,local_60);
    }
    else {
      FUN_01238d9c(param_1,local_60);
    }
    __n = (ulong)local_60[0xb];
    if (__n != 0) {
      memcpy(local_6c,local_60,__n);
    }
  }
  uVar4 = 0;
  if ((int)__n != 0) {
    pcVar6 = local_6c;
    do {
      FUN_01253868(*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x290),*pcVar6,local_60,local_34);
      uVar3 = (ulong)local_60[0];
      if ((((uVar3 != 5) && (local_34[0] < *(byte *)(param_4 + uVar3 * 0x38 + 0x58))) &&
          (plVar5 = *(long **)(param_4 + uVar3 * 0x38 + (ulong)local_34[0] * 8 + 0x28),
          plVar5 != (long *)0x0)) &&
         (uVar3 = (**(code **)(*plVar5 + 0x200))(plVar5), (uVar3 & 1) == 0)) {
        uVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
        uVar3 = uVar4 & 0xff;
        uVar4 = (ulong)((int)uVar4 + 1);
        *(undefined4 *)(param_5 + uVar3 * 4) = uVar2;
      }
      __n = __n - 1;
      pcVar6 = pcVar6 + 1;
    } while (__n != 0);
  }
  return uVar4;
}


