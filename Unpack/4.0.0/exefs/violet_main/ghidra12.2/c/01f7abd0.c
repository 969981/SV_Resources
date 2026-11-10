/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7abd0; name: FUN_01f7abd0
 */


void FUN_01f7abd0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  size_t __n;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  void *__dest;
  undefined4 *puVar6;
  
  uVar5 = (long)param_3 - (long)param_2 >> 2;
  __dest = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)__dest >> 2) < uVar5) {
    if (__dest != (void *)0x0) {
      param_1[1] = __dest;
      (**(code **)(*(long *)param_1[3] + 0x18))
                ((long *)param_1[3],__dest,param_1[2] - (long)__dest,4);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    uVar3 = FUN_01f7acf0(param_1,uVar5);
    FUN_01d01f84(param_1,uVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar4 = *param_2;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    puVar6 = (undefined4 *)((long)param_2 + (param_1[1] - (long)__dest));
    uVar1 = param_1[1] - (long)__dest >> 2;
    puVar2 = puVar6;
    if (uVar5 <= uVar1) {
      puVar2 = param_3;
    }
    __n = (long)puVar2 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar1 < uVar5) {
      puVar4 = (undefined4 *)param_1[1];
      while (puVar2 != param_3) {
        *puVar4 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
        puVar2 = puVar6;
      }
    }
    else {
      puVar4 = (undefined4 *)((long)__dest + __n);
    }
  }
  param_1[1] = puVar4;
  return;
}


