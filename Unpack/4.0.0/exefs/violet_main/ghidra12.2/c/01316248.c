/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01316248; name: FUN_01316248
 */


void FUN_01316248(long param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x52df90c5b69bfbbe;
  pcStack_38 = "Ground";
  local_30 = 6;
  local_28 = (long *)0x0;
  piVar1 = (int *)FUN_00d27b5c(param_2,&local_40);
  if ((piVar1 == (int *)0x0) || (*(ushort *)((long)piVar1 - (long)*piVar1) < 7)) {
    uVar2 = 0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = *(undefined4 *)((long)piVar1 + uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x51b8652aab57eb0;
  pcStack_38 = "Water";
  local_30 = 5;
  local_28 = (long *)0x0;
  piVar1 = (int *)FUN_00d27b5c(param_2,&local_40);
  if ((piVar1 == (int *)0x0) || (*(ushort *)((long)piVar1 - (long)*piVar1) < 7)) {
    uVar2 = 0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = *(undefined4 *)((long)piVar1 + uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x52a14e26d97220f6;
  pcStack_38 = "Sky";
  local_30 = 3;
  local_28 = (long *)0x0;
  piVar1 = (int *)FUN_00d27b5c(param_2,&local_40);
  if ((piVar1 == (int *)0x0) || (*(ushort *)((long)piVar1 - (long)*piVar1) < 7)) {
    uVar2 = 0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = *(undefined4 *)((long)piVar1 + uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


