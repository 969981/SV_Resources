/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003909cc; name: FUN_003909cc
 */


undefined8 FUN_003909cc(byte *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong __n;
  byte *__src;
  void *__dest;
  undefined8 uVar3;
  
  uVar2 = (uint)param_2 & 0xff;
  if (uVar2 != 0x14) {
    __n = *(ulong *)(param_1 + 8);
    __src = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      __src = param_1 + 1;
      __n = (ulong)(*param_1 >> 1);
    }
    if (uVar2 == 2) {
      if (((uint)param_2 >> 8 & 1) == 0) {
        uVar3 = FUN_00391cac(param_4,__src,__n,param_2 >> 0x20,param_3,param_2 >> 9 & 1);
        return uVar3;
      }
      if (__n != 0) {
        __dest = (void *)param_4[3];
        param_4[2] = param_4[2] + __n;
        if (__n < (ulong)((long)param_4 + (0x420 - (long)__dest))) {
          memcpy(__dest,__src,__n);
          param_4[3] = param_4[3] + __n;
        }
        else {
          puVar1 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar1,(long)__dest - (long)puVar1);
          param_4[3] = puVar1;
          (*(code *)param_4[1])(*param_4,__src,__n);
        }
      }
      return 1;
    }
  }
  return 0;
}


