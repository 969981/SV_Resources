/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353aa80; name: FUN_0353aa80
 */


void * FUN_0353aa80(int param_1,undefined8 param_2,void *param_3,ulong param_4,ulong param_5,
                   ulong param_6,uint param_7)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_4 < 0x11) {
    pvVar1 = (void *)FUN_0353a7c0(param_1,param_2,param_3,param_5,param_6,param_7);
    return pvVar1;
  }
  if (param_3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(ulong *)(&DAT_048d2178 + (long)param_1 * 0x638) & (ulong)param_3;
    if (*(uint *)(uVar2 + 0xc) < 0x7e) {
      uVar4 = (ulong)*(uint *)(uVar2 + 0x24);
      uVar3 = (long)param_3 + (-0x80 - uVar2);
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar3 / uVar4;
      }
      uVar4 = uVar4 + (uVar2 * uVar4 - uVar3);
    }
    else {
      if (*(uint *)(uVar2 + 0xc) == 0x7e) {
        lVar5 = (&DAT_048d2168)[(long)param_1 * 199];
      }
      else {
        lVar5 = *(long *)(&DAT_048d2150 + (long)param_1 * 0x638);
      }
      uVar4 = (uVar2 - (long)param_3) + lVar5 * (ulong)*(uint *)(uVar2 + 0x2c);
    }
  }
  if ((uVar4 < param_5) || ((param_4 - 1 & (ulong)param_3) != 0)) {
    if ((param_7 >> 1 & 1) != 0) {
      return (void *)0x0;
    }
  }
  else if (((param_7 >> 1 & 1) != 0) || (uVar4 >> 1 <= param_5)) {
    return param_3;
  }
  pvVar1 = (void *)FUN_0353ace0(param_1,param_2,param_4,param_5);
  if (pvVar1 != (void *)0x0) {
    if ((param_3 != (void *)0x0) && ((param_7 & 1) == 0)) {
      if (param_6 != 0) {
        uVar4 = param_6;
      }
      if (param_5 <= uVar4) {
        uVar4 = param_5;
      }
      memcpy(pvVar1,param_3,uVar4);
    }
    FUN_0353a2d0(param_1,param_3);
  }
  return pvVar1;
}


