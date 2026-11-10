/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c51b1c; name: FUN_00c51b1c
 */


void FUN_00c51b1c(long param_1,long param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x194);
  fVar3 = *(float *)(param_1 + 0x198);
  fVar4 = *(float *)(param_1 + 0x19c);
  if ((((*(float *)(param_2 + 0x468) != *(float *)(param_1 + 400)) ||
       (*(float *)(param_2 + 0x46c) != fVar2)) || (*(float *)(param_2 + 0x470) != fVar3)) ||
     (*(float *)(param_2 + 0x474) != fVar4)) {
    *(float *)(param_2 + 0x468) = *(float *)(param_1 + 400);
    *(float *)(param_2 + 0x46c) = fVar2;
    *(float *)(param_2 + 0x470) = fVar3;
    *(float *)(param_2 + 0x474) = fVar4;
    (**(code **)PTR_DAT_047e0d10)(*(undefined8 *)(param_2 + 0x28),param_2 + 0x468);
  }
  if (*(float *)(param_2 + 0x478) != *(float *)(param_1 + 0xd0)) {
    *(float *)(param_2 + 0x478) = *(float *)(param_1 + 0xd0);
    (**(code **)PTR_DAT_047e0d18)(*(undefined8 *)(param_2 + 0x28));
  }
  lVar1 = param_3;
  if (*(char *)(param_1 + 0x110) != '\0') {
    lVar1 = param_1 + 0x110;
  }
  FUN_00c51cd4(param_2,0,lVar1);
  lVar1 = param_3 + 0x10;
  if (*(char *)(param_1 + 0x120) != '\0') {
    lVar1 = param_1 + 0x120;
  }
  FUN_00c51cd4(param_2,1,lVar1);
  lVar1 = param_3 + 0x20;
  if (*(char *)(param_1 + 0x130) != '\0') {
    lVar1 = param_1 + 0x130;
  }
  FUN_00c51cd4(param_2,2,lVar1);
  lVar1 = param_3 + 0x30;
  if (*(char *)(param_1 + 0x140) != '\0') {
    lVar1 = param_1 + 0x140;
  }
  FUN_00c51cd4(param_2,3,lVar1);
  lVar1 = param_3 + 0x40;
  if (*(char *)(param_1 + 0x150) != '\0') {
    lVar1 = param_1 + 0x150;
  }
  FUN_00c51cd4(param_2,4,lVar1);
  lVar1 = param_3 + 0x50;
  if (*(char *)(param_1 + 0x160) != '\0') {
    lVar1 = param_1 + 0x160;
  }
  FUN_00c51cd4(param_2,5,lVar1);
  lVar1 = param_3 + 0x60;
  if (*(char *)(param_1 + 0x170) != '\0') {
    lVar1 = param_1 + 0x170;
  }
  FUN_00c51cd4(param_2,6,lVar1);
  lVar1 = param_3 + 0x70;
  if (*(char *)(param_1 + 0x180) != '\0') {
    lVar1 = param_1 + 0x180;
  }
  FUN_00c51cd4(param_2,7,lVar1);
  return;
}


