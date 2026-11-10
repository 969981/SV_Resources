/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018a2c1c; name: FUN_018a2c1c
 */


undefined8 FUN_018a2c1c(void)

{
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90 [4];
  long *local_70;
  undefined **local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_60 = &PTR_FUN_045ab600;
  local_58 = (long *)0x0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_018a2dcc(local_90);
  FUN_00dc5c18(&local_60,0,local_90,0,0);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90[0] != (long *)0x0) {
    (**(code **)(*local_90[0] + 0x20))();
  }
  if ((local_58 == (long *)0x0) || ((*(byte *)(local_58 + 0x3d) & 1) == 0)) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar3 = (uint *)(**(code **)(*local_58 + 0x70))();
    piVar6 = (int *)((long)puVar3 + (ulong)*puVar3);
  }
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
    lVar5 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2];
    lVar5 = 0;
    if (uVar4 != 0) {
      puVar3 = (uint *)((long)piVar6 + uVar4);
      lVar5 = (long)puVar3 + (ulong)*puVar3;
    }
  }
  FUN_018a2d8c(&local_a0,lVar5 + 4);
  iVar2 = FUN_018a2fb4(0,local_a0,uStack_98);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
    lVar5 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    lVar5 = 0;
    if (uVar4 != 0) {
      puVar3 = (uint *)((long)piVar6 + uVar4);
      lVar5 = (long)puVar3 + (ulong)*puVar3;
    }
  }
  uVar1 = 0x80040200;
  if (-1 < iVar2) {
    uVar1 = 0;
  }
  FUN_018a2d8c(&local_b0,lVar5 + 4);
  iVar2 = FUN_018a2fb4(2,local_b0,uStack_a8);
  if (iVar2 < 0) {
    uVar1 = 0x80040200;
  }
  FUN_00db239c(&local_60);
  return uVar1;
}


