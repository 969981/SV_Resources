/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ed2d0; name: FUN_007ed2d0
 */


void FUN_007ed2d0(undefined8 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  int local_50 [4];
  
  uVar1 = 0;
  if (*(byte *)(param_2 + 0x14) + 0x1c <= *(uint *)(param_2 + 0x5f8)) {
    uVar1 = (*(uint *)(param_2 + 0x5f8) - (uint)*(byte *)(param_2 + 0x14)) - 0x1c;
  }
  if (uVar1 <= param_3) {
LAB_007ed3b8:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    return;
  }
  pcVar3 = (char *)FUN_00797034(param_2,param_3);
  if (*pcVar3 == -1) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  uVar4 = FUN_00797034(param_2,param_3);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0x2c);
  param_1[3] = param_1[6];
  FUN_007ed4b4(local_50,param_1 + 4,uVar4,0x10);
  if (local_50[0] != 0) goto LAB_007ed3b8;
  local_78 = PTR_DAT_047d14f0 + 0x10;
  uStack_70 = param_1[2];
  local_68 = param_1[3];
  FUN_007ed56c(auStack_60,param_1 + 4,&local_78);
  FUN_018ff39c(local_50,auStack_60);
  if (local_50[0] != 0) goto LAB_007ed3b8;
  if (*(char *)(param_2 + 0x648) == '\0') {
LAB_007ed440:
    *param_1 = 0;
    return;
  }
  bVar2 = *(byte *)(param_1 + 5);
  iVar6 = 1;
  if ((bVar2 & 1) != 0) {
    iVar6 = 2;
  }
  if ((bVar2 & 2) != 0) {
    iVar6 = iVar6 + 2;
  }
  if ((bVar2 & 4) != 0) {
    iVar6 = iVar6 + 4;
  }
  if ((bVar2 & 8) != 0) {
    iVar6 = iVar6 + 8;
  }
  if ((uVar1 < iVar6 + param_3) ||
     (uVar1 < iVar6 + param_3 + (uint)*(ushort *)((long)param_1 + 0x2a))) goto LAB_007ed440;
  bVar2 = *(byte *)((long)param_1 + 0x29);
  *param_1 = uVar4;
  if ((bVar2 >> 6 & 1) == 0) {
    if (-1 < (char)bVar2) {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      goto LAB_007ed470;
    }
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x39) = uVar5;
LAB_007ed470:
  if ((bVar2 >> 3 & 1) == 0) {
    FUN_00796828(param_1 + 8,param_2 + 0x628);
    uVar5 = *(undefined1 *)(param_2 + 0x620);
  }
  else {
    FUN_007965d8(param_1 + 8);
    uVar5 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x62) = uVar5;
  memcpy((void *)((long)param_1 + 100),(void *)(param_2 + 0x5fc),4);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0x10);
  return;
}


