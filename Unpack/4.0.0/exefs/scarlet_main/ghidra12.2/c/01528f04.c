/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01528f04; name: FUN_01528f04
 */


void FUN_01528f04(float param_1,float param_2,long *param_3,undefined8 *param_4,ulong param_5,
                 ulong param_6)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((10 < param_5) || (10 < param_6)) {
    return;
  }
  *(undefined1 *)((long)param_3 + 0xf9) = 2;
  uVar6 = param_4[1];
  uVar5 = *param_4;
  *(float *)(param_3 + 0x22) = param_1;
  param_3[0x21] = CONCAT44((float)((ulong)uVar6 >> 0x20) - 0.0,(float)uVar6 - param_1 * 0.5);
  param_3[0x20] =
       CONCAT44((float)((ulong)uVar5 >> 0x20) - param_2 * 0.5,(float)uVar5 - param_1 * 0.5);
  *(float *)((long)param_3 + 0x114) = param_2;
  *(char *)(param_3 + 0x24) = (char)param_5;
  *(char *)((long)param_3 + 0x121) = (char)param_6;
  *(float *)(param_3 + 0x23) = (param_1 / (float)(1 << (ulong)((uint)param_5 & 0x1f))) * 0.5;
  param_3[0x25] = 3;
  *(float *)((long)param_3 + 0x11c) = (param_2 / (float)(1 << (ulong)((uint)param_6 & 0x1f))) * 0.5;
  (**(code **)(*param_3 + 0x98))();
  cVar1 = *(char *)((long)param_3 + 0xf9);
  if (cVar1 == '\x01') {
    uVar2 = (ulong)*(byte *)(param_3 + 0x24);
    lVar3 = 1L << (uVar2 & 0x3f);
  }
  else {
    if (cVar1 == '\x02') {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x121);
      uVar2 = (ulong)*(byte *)(param_3 + 0x24);
    }
    else {
      if (cVar1 != '\0') {
        return;
      }
      uVar2 = (ulong)*(byte *)(param_3 + 0x24);
      uVar4 = uVar2;
    }
    lVar3 = (1L << (uVar4 & 0x3f)) << (uVar2 & 0x3f);
  }
  FUN_015276d4(param_3 + 0x2d,lVar3 << (uVar2 & 0x3f));
  return;
}


