/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6e7e8; name: FUN_00f6e7e8
 */


void FUN_00f6e7e8(long param_1,ulong param_2,ushort *param_3)

{
  ushort uVar1;
  size_t __n;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *__dest;
  ushort local_48 [4];
  long local_40;
  undefined1 local_38;
  
  uVar1 = *param_3;
  __dest = *(byte **)(param_1 + 0xb8);
  pbVar4 = *(byte **)(param_1 + 0xc0);
  if (__dest != pbVar4) {
    do {
      if (((ushort)*__dest == (uVar1 & 0xff)) && ((ushort)__dest[1] == uVar1 >> 8))
      goto LAB_00f6e844;
      __dest = __dest + 0x18;
    } while (pbVar4 != __dest);
    __dest = pbVar4;
  }
LAB_00f6e844:
  if (pbVar4 == __dest) {
    if ((char)param_3[1] != '\0') {
      local_40 = 0;
      local_38 = 0;
      local_48[0] = uVar1;
      if (7 < ((uint)param_2 & 0xff)) goto LAB_00f6e908;
      local_40 = 1L << (param_2 & 0x3f);
      FUN_00f6e90c((undefined8 *)(param_1 + 0xb8),local_48);
    }
  }
  else {
    bVar2 = 7 < ((uint)param_2 & 0xff);
    if ((char)param_3[1] == '\0') {
      if (bVar2) goto LAB_00f6e908;
      uVar3 = *(ulong *)(__dest + 8) & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
      *(ulong *)(__dest + 8) = uVar3;
      if ((uVar3 & 0xff) == 0) {
        __n = *(long *)(param_1 + 0xc0) - (long)(__dest + 0x18);
        if (__n != 0) {
          memmove(__dest,__dest + 0x18,__n);
        }
        *(byte **)(param_1 + 0xc0) = __dest + __n;
      }
    }
    else {
      if (bVar2) {
LAB_00f6e908:
                    /* WARNING: Subroutine does not return */
        FUN_028a0600();
      }
      *(ulong *)(__dest + 8) = *(ulong *)(__dest + 8) | 1L << (param_2 & 0x3f);
    }
  }
  return;
}


