/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004745d0; name: thunk_FUN_00474310
 */


undefined8 thunk_FUN_00474310(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = param_2[0x1a];
  uVar4 = (ulong)uVar2;
  puVar1 = param_2 + 10;
  *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
  lVar5 = uVar4 + 1;
  if (0x37 < uVar2) {
    memset((void *)((long)puVar1 + lVar5),0,0x3f - uVar4);
    FUN_004745e0(param_2,puVar1,1);
    lVar5 = 0;
  }
  memset((void *)((long)puVar1 + lVar5),0,0x38 - lVar5);
  uVar2 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
  uVar3 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
  param_2[0x18] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x19] = uVar3 >> 0x10 | uVar3 << 0x10;
  FUN_004745e0(param_2,puVar1,1);
  param_2[0x1a] = 0;
  FUN_00453300(puVar1,0x40);
  uVar2 = param_2[0x1b];
  if (uVar2 == 0x1c) {
    uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
    param_1[1] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    param_1[2] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    param_1[3] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    param_1[4] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    param_1[5] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
    param_1[6] = uVar2 >> 0x10 | uVar2 << 0x10;
  }
  else if (uVar2 == 0x20) {
    uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
    param_1[1] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    param_1[2] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    param_1[3] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    param_1[4] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    param_1[5] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
    param_1[6] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
    param_1[7] = uVar2 >> 0x10 | uVar2 << 0x10;
  }
  else {
    if (0x20 < uVar2) {
      return 0;
    }
    if (3 < uVar2) {
      uVar4 = 0;
      do {
        puVar1 = param_2 + uVar4;
        uVar4 = uVar4 + 1;
        uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
        *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
        param_1 = param_1 + 1;
      } while (uVar4 < param_2[0x1b] >> 2);
    }
  }
  return 1;
}


