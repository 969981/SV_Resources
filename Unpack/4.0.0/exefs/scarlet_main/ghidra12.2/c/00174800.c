/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00174800; name: FUN_00174800
 */


undefined1 *
FUN_00174800(float param_1,undefined1 *param_2,long param_3,byte *param_4,size_t param_5,
            uint param_6,long param_7,float *param_8)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  
  if ((long)param_5 < 6) {
    *param_8 = (float)(long)param_5 + 3.0;
    if ((long)(param_5 + 3) <= param_3 - (long)param_2) {
      param_2[2] = (char)param_5;
      *param_2 = (char)(param_5 >> 0x10);
      param_2[1] = (char)(param_5 >> 8);
      memcpy(param_2 + 3,param_4,param_5);
      return param_2 + 3 + (param_5 - (long)param_2);
    }
  }
  else if ((param_6 >> 7 & 1) == 0) {
    if (7 < param_3 - (long)param_2) {
      fVar4 = (float)(**(code **)(param_7 + 8))(param_5);
      fVar4 = fVar4 * param_1 + 8.0;
      if (fVar4 < *param_8) {
        *param_8 = fVar4;
        bVar2 = *param_4;
        param_2[5] = 0;
        lVar1 = param_5 * 0x40000 + 0x1ffffc0003;
        uVar3 = (uint)lVar1;
        *param_2 = (char)((ulong)lVar1 >> 0x20);
        param_2[7] = bVar2 << 6;
        *(uint *)(param_2 + 1) = ((uVar3 & 0xff00ff00) >> 8 | uVar3 << 8) >> 0x10 | uVar3 << 0x18;
        param_2[6] = bVar2 >> 2 | 0x40;
        return &DAT_00000008;
      }
    }
  }
  else if (5 < param_3 - (long)param_2) {
    fVar4 = (float)(**(code **)(param_7 + 8))(param_5);
    fVar4 = fVar4 * param_1 + 6.0;
    if (fVar4 < *param_8) {
      *param_8 = fVar4;
      bVar2 = *param_4;
      lVar1 = param_5 * 0x40000 + 0x2ffffc0001;
      uVar3 = (uint)lVar1;
      *param_2 = (char)((ulong)lVar1 >> 0x20);
      param_2[5] = bVar2;
      *(uint *)(param_2 + 1) = ((uVar3 & 0xff00ff00) >> 8 | uVar3 << 8) >> 0x10 | uVar3 << 0x18;
      return (undefined1 *)0x6;
    }
  }
  return (undefined1 *)0xffffffffffffffff;
}


