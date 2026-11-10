/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01241cec; name: FUN_01241cec
 */


void FUN_01241cec(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_2);
  local_28 = *(undefined1 *)((long)param_2 + 0x22);
  uVar1 = FUN_01241d44(*(undefined8 *)(param_1 + 0x78));
  FUN_0124daf0(uVar1,auStack_38,&local_30);
  return;
}


