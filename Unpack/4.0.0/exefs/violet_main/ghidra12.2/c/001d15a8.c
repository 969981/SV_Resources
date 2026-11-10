/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d15a8; name: FUN_001d15a8
 */


undefined8 FUN_001d15a8(long *param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_2e0 [672];
  
  if (((int)param_1[0x2f] == 2) && (*(char *)((long)param_1 + (long)param_2 + 0x3f8) == '\0')) {
    pcVar1 = (char *)((long)param_1 + (long)param_2 + 0x3f8);
    uVar4 = FUN_001eba94(param_1,param_2,pcVar1);
    if ((int)uVar4 != 0) {
      *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 1;
      return uVar4;
    }
    if (*pcVar1 == '\0') {
      return 0;
    }
  }
  if (((*(uint *)((long)param_1 + 0x3fc) ^ 0xffffffff) & 0x4020) != 0) {
    return 0;
  }
  lVar5 = *param_1;
  uVar4 = *(undefined8 *)(lVar5 + 0x1e8);
  memset(auStack_2e0,0,0x2a0);
  *(undefined1 **)(lVar5 + 0x1e8) = auStack_2e0;
  FUN_001c6c60(param_1,0);
  if ((*(uint *)((long)param_1 + 0x3fc) >> 2 & 1) == 0) {
    if (param_2 == 1) {
      lVar5 = param_1[0x1d];
LAB_001d1640:
      uVar3 = (uint)*(ushort *)(param_1 + 0x34);
      goto LAB_001d1684;
    }
    lVar5 = param_1[0x1a];
  }
  else {
    lVar5 = param_1[0x20];
    if (param_2 == 1) goto LAB_001d1640;
  }
  if ((*(uint *)((long)param_1 + 0x3fc) >> 3 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x33);
  }
  else {
    uVar3 = *(uint *)((long)param_1 + 0x19c);
  }
LAB_001d1684:
  uVar2 = FUN_001d16d4(param_1,param_2,lVar5,uVar3);
  *(undefined8 *)(*param_1 + 0x1e8) = uVar4;
  if ((int)uVar2 == 0) {
    FUN_001ec308(param_1[0x8b]);
    param_1[0x8b] = 0;
    return 0;
  }
  return uVar2;
}


