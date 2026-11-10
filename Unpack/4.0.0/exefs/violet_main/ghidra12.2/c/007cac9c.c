/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cac9c; name: FUN_007cac9c
 */


ulong FUN_007cac9c(byte *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar4 = PTR_DAT_047d1168;
  puVar3 = PTR_DAT_047d1160;
  if (*PTR_DAT_047d1160 == '\0') {
    uVar5 = 0;
    do {
      uVar1 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 >> 1 ^ 0xc96c5795d7870f42;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar2 = uVar1 >> 1 ^ 0xc96c5795d7870f42;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 & 1) != 0) {
        uVar1 = uVar2 >> 1 ^ 0xc96c5795d7870f42;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar2 = uVar1 >> 1 ^ 0xc96c5795d7870f42;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 & 1) != 0) {
        uVar1 = uVar2 >> 1 ^ 0xc96c5795d7870f42;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar2 = uVar1 >> 1 ^ 0xc96c5795d7870f42;
      }
      uVar1 = uVar2 >> 1;
      if ((uVar2 & 1) != 0) {
        uVar1 = uVar2 >> 1 ^ 0xc96c5795d7870f42;
      }
      uVar2 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar2 = uVar1 >> 1 ^ 0xc96c5795d7870f42;
      }
      *(ulong *)(puVar4 + uVar5 * 8) = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x100);
    *puVar3 = 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = *(ulong *)(puVar4 + (uVar5 & 0xff ^ (ulong)*param_1) * 8) ^ uVar5 >> 8;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return ~uVar5;
}


