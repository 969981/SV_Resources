/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035219bc; name: FUN_035219bc
 */


undefined8 FUN_035219bc(long param_1)

{
  size_t __n;
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong __n_00;
  byte *__src;
  uint uVar5;
  
  pbVar4 = *(byte **)(param_1 + 0x28);
  uVar5 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(byte **)(param_1 + 0x38) = pbVar4;
  if (pbVar4 != (byte *)0x0) {
    __src = pbVar4 + 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(byte **)(param_1 + 0x38) = __src;
    bVar2 = *pbVar4;
    uVar5 = bVar2 & 0x7f;
    *(uint *)(param_1 + 0x40) = uVar5;
    if ((char)bVar2 < '\0') {
      __src = pbVar4 + 2;
      *(uint *)(param_1 + 0x40) = uVar5 << 7;
      *(byte **)(param_1 + 0x38) = __src;
      bVar2 = pbVar4[1];
      uVar5 = uVar5 << 7 | bVar2 & 0x7f;
      *(uint *)(param_1 + 0x40) = uVar5;
      if ((char)bVar2 < '\0') {
        __src = pbVar4 + 3;
        *(uint *)(param_1 + 0x40) = uVar5 << 7;
        *(byte **)(param_1 + 0x38) = __src;
        bVar2 = pbVar4[2];
        uVar5 = uVar5 << 7 | bVar2 & 0x7f;
        *(uint *)(param_1 + 0x40) = uVar5;
        if ((char)bVar2 < '\0') {
          __src = pbVar4 + 4;
          *(uint *)(param_1 + 0x40) = uVar5 << 7;
          *(byte **)(param_1 + 0x38) = __src;
          uVar5 = uVar5 << 7 | pbVar4[3] & 0x7f;
          uVar1 = uVar5;
          if ((pbVar4[3] & 0x80) != 0) {
            uVar1 = 0xffffffff;
          }
          *(uint *)(param_1 + 0x40) = uVar1;
          if (uVar1 == 0xffffffff) {
            uVar3 = 0;
            uVar5 = 0xffffffff;
            goto LAB_03521ad0;
          }
        }
      }
    }
    pbVar4 = *(byte **)(param_1 + 0x30);
    if (pbVar4 <= __src) {
      uVar3 = 0;
      goto LAB_03521ad0;
    }
    __n_00 = (ulong)(uint)((int)pbVar4 - (int)__src) & 0xff;
    if (__src + 6 <= pbVar4) {
      __n_00 = 6;
    }
    __n = 0;
    if (__n_00 < 6) {
      __n = 6 - __n_00;
    }
    memset((void *)(param_1 + 0x44 + __n_00),0,__n);
    memcpy((void *)(param_1 + 0x44),__src,__n_00);
  }
  uVar3 = 1;
LAB_03521ad0:
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(uint *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_1 + 100) = 0;
  return uVar3;
}


