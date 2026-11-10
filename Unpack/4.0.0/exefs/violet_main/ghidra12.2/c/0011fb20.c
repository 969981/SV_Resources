/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011fb20; name: FUN_0011fb20
 */


undefined8 FUN_0011fb20(long param_1,uint param_2,int param_3,void *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  DAT_047ec990 = (char *)0x0;
  if ((&DAT_047ec998)[(int)param_2] != '\x02') {
    if (2 < param_2) {
      DAT_047ec990 = "Out of range thread number.";
      return 0;
    }
    if ((&DAT_047ec998)[(int)param_2] == '\0') {
      DAT_047ec990 = "Thread number not started.";
      return 0;
    }
  }
  if (*(int *)(param_1 + 400) == 0) {
    DAT_047ec990 = "Broken async queue.";
    return 0;
  }
  if (param_3 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (ulong)(param_3 + 999) / 1000;
  }
  iVar3 = FUN_00120ae0(param_1,uVar4);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_001209d0(param_1 + 0x100);
  FUN_00120240(param_1 + 0x184,0xffffffff);
  uVar1 = *(int *)(param_1 + 0x18c) - *(uint *)(param_1 + 0x188);
  if (param_5 <= uVar1) {
    uVar1 = param_5;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x188) & 0xff;
  uVar2 = 0x100 - (int)uVar4;
  uVar5 = uVar1 - uVar2;
  if (uVar1 < uVar2) {
    uVar5 = uVar1;
  }
  else {
    memcpy(param_4,(void *)(param_1 + uVar4 + 0x194),(ulong)uVar2);
    uVar4 = 0;
    param_4 = (void *)((long)param_4 + (ulong)uVar2);
  }
  memcpy(param_4,(void *)(param_1 + uVar4 + 0x194),(ulong)uVar5);
  *(uint *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + uVar1;
  iVar3 = FUN_001201c0(param_1 + 0x180);
  if (iVar3 == 0) {
    FUN_00120240(param_1 + 0x180,1);
    FUN_00120bc0(param_1 + 0x80,1);
  }
  FUN_00120750(param_1 + 0x100);
  if (uVar1 == 0) {
    return 0;
  }
  return 1;
}


