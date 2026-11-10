/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e461cc; name: FUN_01e461cc
 */


void FUN_01e461cc(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_40 = 0x81316c1bb8af0852;
  pcStack_38 = "ActionID";
  local_30 = 8;
  local_28 = (long *)0x0;
  piVar2 = (int *)FUN_00d27b5c(param_2,&local_40);
  if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined4 *)((long)piVar2 + uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x1a80c641e0fa4881;
  pcStack_38 = "ReturnStatusType";
  local_30 = 0x10;
  local_28 = (long *)0x0;
  piVar2 = (int *)FUN_00d27b5c(param_2,&local_40);
  if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined4 *)((long)piVar2 + uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xbd9059d0cdd368de;
  pcStack_38 = "IsOccupyPoint";
  local_30 = 0xd;
  local_28 = (long *)0x0;
  bVar1 = FUN_00cf7518(param_2,&local_40);
  *(byte *)(param_1 + 0x4c) = bVar1 & 1;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x911a41ea0ea4b8f6;
  pcStack_38 = "LocationType";
  local_30 = 0xc;
  local_28 = (long *)0x0;
  piVar2 = (int *)FUN_00d27b5c(param_2,&local_40);
  if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined4 *)((long)piVar2 + uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


