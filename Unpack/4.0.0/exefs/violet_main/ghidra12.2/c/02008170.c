/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02008170; name: FUN_02008170
 */


ulong FUN_02008170(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  uint param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  float fVar5;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  char *local_88;
  long *local_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  char *local_58;
  long *local_48;
  long local_28;
  
  bVar2 = *(byte *)((long)param_1 + 0x25);
  bVar1 = bVar2 & 1 | (param_3 != (undefined8 *)0x0) << 1;
  *(byte *)((long)param_1 + 0x25) = bVar2 & 0xfc | bVar1;
  if (param_3 != (undefined8 *)0x0) {
    param_1[1] = param_3[1];
    *param_1 = *param_3;
  }
  *(undefined4 *)(param_1 + 4) = 0xff7fffff;
  *(byte *)((long)param_1 + 0x25) = bVar2 & 0xf8 | bVar1 | (param_4 != 0) << 2;
  if ((param_4 == 0) ||
     (fVar5 = *(float *)(param_4 + 4), *(float *)(param_1 + 4) = fVar5,
     fVar5 <= *(float *)((long)param_1 + 4))) {
    local_28 = 0;
    uVar4 = 0xffffffff;
    goto LAB_02008298;
  }
  FUN_00ceecf8(auStack_60,param_4 + 0x38);
  if (*local_58 == '\0') {
LAB_020082d4:
    uVar4 = 0xffffffff;
  }
  else {
    FUN_00cef088(auStack_70,auStack_60);
    FUN_01f9d098(auStack_90,auStack_70);
    cVar3 = *local_88;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (cVar3 == '\0') goto LAB_020082d4;
    local_a8 = 0xff8f4b5e6204ca59;
    pcStack_a0 = "AttrKey";
    local_98 = 7;
    FUN_00d8fb98(auStack_90,&local_a8);
    uVar4 = FUN_01e1f6e8(auStack_70,auStack_90);
    uVar4 = uVar4 & 0xffffffff;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((int)uVar4 < 0) {
    local_28 = 0;
  }
  else {
    local_28 = 1L << (uVar4 & 0x3f);
  }
LAB_02008298:
  FUN_02007dd4(param_1,param_2,&local_28,0,param_5 & 1,param_6 & 1);
  return uVar4;
}


