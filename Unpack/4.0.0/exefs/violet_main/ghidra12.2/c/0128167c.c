/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0128167c; name: FUN_0128167c
 */


undefined1  [16] FUN_0128167c(undefined8 param_1)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = 0xbc01f8c1138da1a8;
  pcStack_48 = "WaitType";
  local_40 = 8;
  local_38 = (long *)0x0;
  piVar1 = (int *)FUN_00d27b5c(param_1,&local_50);
  if (((piVar1 == (int *)0x0) || (*(ushort *)((long)piVar1 - (long)*piVar1) < 7)) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)*(uint *)((long)piVar1 + uVar2);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0x3e9b23d15499ad8;
  pcStack_48 = "WalkType";
  local_40 = 8;
  local_38 = (long *)0x0;
  piVar1 = (int *)FUN_00d27b5c(param_1,&local_50);
  if (((piVar1 == (int *)0x0) || (*(ushort *)((long)piVar1 - (long)*piVar1) < 7)) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(long *)((long)piVar1 + uVar3) << 0x20;
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0x5789ecc467c41b8a;
  pcStack_48 = "RunType";
  local_40 = 7;
  local_38 = (long *)0x0;
  piVar1 = (int *)FUN_00d27b5c(param_1,&local_50);
  if (((piVar1 == (int *)0x0) || (*(ushort *)((long)piVar1 - (long)*piVar1) < 7)) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar4 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulong)*(uint *)((long)piVar1 + uVar4);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  auVar5._0_8_ = uVar3 | uVar2;
  auVar5._8_8_ = uVar4;
  return auVar5;
}


