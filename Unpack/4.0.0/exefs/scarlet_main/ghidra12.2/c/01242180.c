/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01242180; name: FUN_01242180
 */


void FUN_01242180(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined4 local_24;
  
  local_30 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_2);
  local_28 = *(undefined2 *)(param_2 + 6);
  local_26 = *(undefined1 *)((long)param_2 + 0x1a);
  local_24 = param_2[5];
  uVar1 = FUN_012421e8(*(undefined8 *)(param_1 + 0x78));
  FUN_012548d0(uVar1,auStack_38,&local_30);
  return;
}


