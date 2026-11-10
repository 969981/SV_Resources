/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00174b80; name: FUN_00174b80
 */


long FUN_00174b80(uint *param_1,long param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  size_t __n;
  size_t local_38;
  
  if (param_2 < 0x1005) {
    uVar4 = *param_1;
    FUN_00174c80(param_1,(byte *)((long)param_1 + param_2),&local_38,0x20000);
    bVar3 = (byte)uVar4 >> 4;
    if (bVar3 == 0) {
      if ((long)local_38 < 0x1000) {
        *(ushort *)param_1 =
             (ushort)(((uint)local_38 & 0x7fff) << 8) | (ushort)(local_38 >> 8) & 0x7f | 0x80;
        memmove((byte *)((long)param_1 + 2),(byte *)((long)param_1 + 3),local_38);
        *param_3 = *param_3 + -1.0;
        param_2 = local_38 + 2;
      }
    }
    else {
      __n = param_2 - 5;
      if (((long)__n < 0x400) && (lVar1 = (local_38 - param_2) + 4, lVar1 < 0x400)) {
        uVar4 = ((uint)__n | (uint)bVar3 << 0x14 | (int)lVar1 << 10) << 8;
        uVar2 = (uVar4 & 0xff00ff00 | 0x80000000) >> 8;
        *param_1 = (uVar2 | (uVar4 & 0xff00ff) << 8) >> 0x10 | uVar2 << 0x10;
        memmove((byte *)((long)param_1 + 3),(byte *)((long)param_1 + 5),__n);
        param_2 = param_2 + -2;
        *param_3 = *param_3 + -2.0;
      }
    }
  }
  return param_2;
}


