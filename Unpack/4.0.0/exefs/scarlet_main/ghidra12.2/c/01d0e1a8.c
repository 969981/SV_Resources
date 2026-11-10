/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d0e1a8; name: FUN_01d0e1a8
 */


ulong * FUN_01d0e1a8(ulong *param_1,ulong *param_2)

{
  size_t __n;
  byte *__src;
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  
  if (param_1 != param_2) {
    bVar1 = (byte)*param_2;
    if ((*param_1 & 1) != 0) {
      __n = param_2[1];
      __src = (byte *)param_2[2];
      if ((bVar1 & 1) == 0) {
        __src = (byte *)((long)param_2 + 1);
        __n = (ulong)(bVar1 >> 1);
      }
      uVar2 = *param_1 & 0xfffffffffffffffe;
      if (__n < uVar2) {
        pvVar4 = (void *)param_1[2];
        param_1[1] = __n;
        if (__n != 0) {
          memcpy(pvVar4,__src,__n);
        }
        *(undefined1 *)((long)pvVar4 + __n) = 0;
      }
      else {
        FUN_01d0e2f8(param_1,uVar2 - 1,(__n - uVar2) + 1,param_1[1],0,param_1[1],__n);
      }
      return param_1;
    }
    if ((bVar1 & 1) != 0) {
      uVar2 = param_2[1];
      pvVar4 = (void *)param_2[2];
      if (uVar2 < 0x16 || uVar2 - 0x16 == 0) {
        *(byte *)param_1 = (byte)((int)uVar2 << 1);
        if (uVar2 != 0) {
          memcpy((byte *)((long)param_1 + 1),pvVar4,uVar2);
        }
        *(byte *)((long)param_1 + uVar2 + 1) = 0;
      }
      else {
        bVar1 = (byte)*param_1 >> 1;
        FUN_01d0e2f8(param_1,0x16,uVar2 - 0x16,bVar1,0,bVar1,uVar2);
      }
      return param_1;
    }
    uVar2 = *param_2;
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar3;
    *param_1 = uVar2;
  }
  return param_1;
}


