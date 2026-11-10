/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02166aa8; name: FUN_02166aa8
 */


undefined1  [16] FUN_02166aa8(long param_1,uint param_2)

{
  uint uVar1;
  uint *__src;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  
  if (*(uint *)(param_1 + 0x10) < param_2) {
    uVar1 = *(uint *)(param_1 + 0x100);
    uVar2 = (ulong)uVar1;
    if (param_2 < *(uint *)(param_1 + (ulong)(uVar1 - 1) * 0x30 + 0x10)) {
      if (0 < (int)uVar1) {
        __src = (uint *)(param_1 + 0x10);
        lVar3 = -0x100000000;
        do {
          if (param_2 < *__src) {
            memcpy(auStack_90,__src,0x30);
            memcpy(auStack_60,(void *)(param_1 + (lVar3 >> 0x20) * 0x30 + 0x10),0x30);
            break;
          }
          lVar3 = lVar3 + 0x100000000;
          uVar2 = uVar2 - 1;
          __src = __src + 0xc;
        } while (uVar2 != 0);
      }
      auVar4 = FUN_02166c4c(auStack_60,auStack_90,param_2);
    }
    else {
      auVar4 = *(undefined1 (*) [16])(param_1 + (ulong)(uVar1 - 1) * 0x30 + 0x20);
    }
  }
  else {
    auVar4 = *(undefined1 (*) [16])(param_1 + 0x20);
  }
  return auVar4;
}


