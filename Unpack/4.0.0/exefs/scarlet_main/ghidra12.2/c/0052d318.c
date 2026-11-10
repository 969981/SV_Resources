/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052d318; name: FUN_0052d318
 */


uint FUN_0052d318(long *param_1,byte *param_2)

{
  size_t __n;
  byte *__src;
  bool bVar1;
  uint uVar2;
  long lVar3;
  byte *__dest;
  byte *local_a0;
  byte *pbStack_98;
  byte *local_90;
  undefined4 local_84;
  undefined8 local_80;
  byte abStack_78 [32];
  long lStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (**(code **)(*param_1 + 0x28))();
  bVar1 = (*param_2 & 1) == 0;
  __src = *(byte **)(param_2 + 0x10);
  local_50 = 0;
  abStack_78[0] = 0;
  abStack_78[1] = 0;
  abStack_78[2] = 0;
  abStack_78[3] = 0;
  abStack_78[4] = 0;
  abStack_78[5] = 0;
  abStack_78[6] = 0;
  abStack_78[7] = 0;
  local_80 = 0;
  abStack_78[0x10] = 0;
  abStack_78[0x11] = 0;
  abStack_78[0x12] = 0;
  abStack_78[0x13] = 0;
  abStack_78[0x14] = 0;
  abStack_78[0x15] = 0;
  abStack_78[0x16] = 0;
  abStack_78[0x17] = 0;
  abStack_78[8] = 0;
  abStack_78[9] = 0;
  abStack_78[10] = 0;
  abStack_78[0xb] = 0;
  abStack_78[0xc] = 0;
  abStack_78[0xd] = 0;
  abStack_78[0xe] = 0;
  abStack_78[0xf] = 0;
  if (bVar1) {
    __src = param_2 + 1;
  }
  local_48 = *(undefined4 *)PTR_DAT_047cdbc8;
  __n = (ulong)(*param_2 >> 1);
  if (!bVar1) {
    __n = *(size_t *)(param_2 + 8);
  }
  local_40 = 0;
  uStack_38 = 0;
  lStack_58 = 0;
  abStack_78[0x18] = 0;
  abStack_78[0x19] = 0;
  abStack_78[0x1a] = 0;
  abStack_78[0x1b] = 0;
  abStack_78[0x1c] = 0;
  abStack_78[0x1d] = 0;
  abStack_78[0x1e] = 0;
  abStack_78[0x1f] = 0;
  uStack_44 = 0x80000000;
  if ((long)__n < 0x11) {
    __dest = abStack_78;
    memcpy(__dest,__src,__n);
    pbStack_98 = __dest + __n;
    local_84 = 0;
    local_90 = (byte *)0x0;
    if (lStack_58 == 1) {
      lStack_58 = (long)__src - (long)__dest;
    }
  }
  else {
    local_84 = 0x10;
    pbStack_98 = __src + (__n - 0x10);
    local_90 = abStack_78;
    __dest = __src;
  }
  local_a0 = pbStack_98;
  lVar3 = (**(code **)(*param_1 + 0x58))(param_1,__dest,&local_a0);
  uVar2 = 0;
  if ((lVar3 != 0) && ((int)local_50 == 0)) {
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  }
  return uVar2 & 1;
}


