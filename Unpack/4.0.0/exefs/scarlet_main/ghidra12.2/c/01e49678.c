/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e49678; name: FUN_01e49678
 */


void FUN_01e49678(long param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_40 = 0x81316c1bb8af0852;
  pcStack_38 = "ActionID";
  local_30 = 8;
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
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xf9e4ef8a86c42123;
  pcStack_38 = "TriggerAttackType";
  local_30 = 0x11;
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
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


