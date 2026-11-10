/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00391340; name: FUN_00391340
 */


void FUN_00391340(undefined1 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong __n;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong __n_00;
  undefined8 *puVar4;
  ulong __n_01;
  
  uVar2 = param_2 >> 0x20;
  if ((long)param_2 < 0) {
    uVar2 = 0;
  }
  __n_00 = 0;
  if (uVar2 != 0) {
    __n_00 = uVar2 - 1;
  }
  if (uVar2 < 2 || (param_2 & 0x200) != 0) {
    puVar4 = (undefined8 *)param_4[3];
  }
  else {
    puVar1 = (undefined8 *)param_4[3];
    __n = (long)param_4 + (0x420 - (long)puVar1);
    param_4[2] = param_4[2] + __n_00;
    puVar4 = puVar1;
    __n_01 = __n_00;
    if (__n <= __n_00 && __n_00 - __n != 0) {
      puVar4 = param_4 + 4;
      if (__n != 0) {
        memset(puVar1,0x20,__n);
        puVar1 = (undefined8 *)(param_4[3] + __n);
        param_4[3] = puVar1;
      }
      (*(code *)param_4[1])(*param_4,puVar4,(long)puVar1 - (long)puVar4);
      param_4[3] = puVar4;
      for (__n_01 = __n_00 - __n; 0x400 < __n_01; __n_01 = __n_01 - 0x400) {
        memset(puVar4,0x20,0x400);
        lVar3 = param_4[3];
        param_4[3] = lVar3 + 0x400;
        (*(code *)param_4[1])(*param_4,puVar4,(lVar3 + 0x400) - (long)puVar4);
        param_4[3] = puVar4;
      }
    }
    memset(puVar4,0x20,__n_01);
    puVar4 = (undefined8 *)(param_4[3] + __n_01);
    param_4[3] = puVar4;
  }
  param_4[2] = param_4[2] + 1;
  if (puVar4 == param_4 + 0x84) {
    puVar4 = param_4 + 4;
    (*(code *)param_4[1])(*param_4,puVar4,0x400);
    param_4[3] = puVar4;
  }
  *(undefined1 *)puVar4 = param_1;
  puVar4 = (undefined8 *)(param_4[3] + 1);
  param_4[3] = puVar4;
  if ((((uint)param_2 >> 9 & 1) != 0) && (1 < uVar2)) {
    uVar2 = (long)(param_4 + 0x84) - (long)puVar4;
    param_4[2] = param_4[2] + __n_00;
    puVar1 = puVar4;
    if (uVar2 <= __n_00 && __n_00 - uVar2 != 0) {
      puVar1 = param_4 + 4;
      if (uVar2 != 0) {
        memset(puVar4,0x20,uVar2);
        puVar4 = (undefined8 *)(param_4[3] + uVar2);
        param_4[3] = puVar4;
      }
      (*(code *)param_4[1])(*param_4,puVar1,(long)puVar4 - (long)puVar1);
      param_4[3] = puVar1;
      for (__n_00 = __n_00 - uVar2; 0x400 < __n_00; __n_00 = __n_00 - 0x400) {
        memset(puVar1,0x20,0x400);
        lVar3 = param_4[3];
        param_4[3] = lVar3 + 0x400;
        (*(code *)param_4[1])(*param_4,puVar1,(lVar3 + 0x400) - (long)puVar1);
        param_4[3] = puVar1;
      }
    }
    memset(puVar1,0x20,__n_00);
    param_4[3] = param_4[3] + __n_00;
  }
  return;
}


