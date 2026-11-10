/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00174f30; name: FUN_00174f30
 */


byte * FUN_00174f30(undefined8 param_1,undefined8 param_2,uint *param_3,long param_4,void *param_5,
                   size_t param_6,undefined4 param_7,undefined8 param_8,float *param_9,
                   undefined8 param_10,undefined4 param_11,void *param_12)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *__n;
  byte *pbVar5;
  size_t local_478 [129];
  
  if ((long)param_6 < 0x21) {
    *param_9 = (float)(long)param_6 + 3.0;
    if (param_4 - (long)param_3 < (long)(param_6 + 3)) {
      return (byte *)0xffffffffffffffff;
    }
    *(byte *)((long)param_3 + 2) = (byte)param_6;
    *(byte *)param_3 = (byte)(param_6 >> 0x10);
    *(byte *)((long)param_3 + 1) = (byte)(param_6 >> 8);
    memcpy((byte *)((long)param_3 + 3),param_5,param_6);
    pbVar5 = (byte *)((long)param_3 + 3) + (param_6 - (long)param_3);
  }
  else {
    FUN_0015edc0(param_5,param_6,local_478,0x100,0);
    if (param_12 != (void *)0x0) {
      memcpy(param_12,local_478,0x400);
    }
    pbVar5 = (byte *)FUN_00174230(param_1,param_2,param_3,param_4,param_5,param_6,local_478,param_7,
                                  param_8,param_9,param_10,param_11);
  }
  if ((long)pbVar5 < 0) {
    return (byte *)0xffffffffffffffff;
  }
  if (0x1004 < (long)pbVar5) {
    return pbVar5;
  }
  uVar4 = *param_3;
  FUN_00174c80(param_3,(byte *)((long)param_3 + (long)pbVar5),local_478,0x20000);
  bVar3 = (byte)uVar4 >> 4;
  if (bVar3 == 0) {
    if ((long)local_478[0] < 0x1000) {
      *(ushort *)param_3 =
           (ushort)(((uint)local_478[0] & 0x7fff) << 8) | (ushort)(local_478[0] >> 8) & 0x7f | 0x80;
      memmove((byte *)((long)param_3 + 2),(byte *)((long)param_3 + 3),local_478[0]);
      *param_9 = *param_9 + -1.0;
      return (byte *)(local_478[0] + 2);
    }
    return pbVar5;
  }
  __n = pbVar5 + -5;
  if (0x3ff < (long)__n) {
    return pbVar5;
  }
  lVar1 = (local_478[0] - (long)pbVar5) + 4;
  if (lVar1 < 0x400) {
    uVar4 = ((uint)__n | (uint)bVar3 << 0x14 | (int)lVar1 << 10) << 8;
    uVar2 = (uVar4 & 0xff00ff00 | 0x80000000) >> 8;
    *param_3 = (uVar2 | (uVar4 & 0xff00ff) << 8) >> 0x10 | uVar2 << 0x10;
    memmove((byte *)((long)param_3 + 3),(byte *)((long)param_3 + 5),(size_t)__n);
    *param_9 = *param_9 + -2.0;
    return pbVar5 + -2;
  }
  return pbVar5;
}


