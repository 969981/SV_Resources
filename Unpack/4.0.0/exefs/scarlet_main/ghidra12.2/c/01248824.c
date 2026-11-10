/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01248824; name: FUN_01248824
 */


void FUN_01248824(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  (**(code **)(*plVar1 + 0x5e0))();
  FUN_0157acc4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),param_2);
  lVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_0124eb70(param_1,lVar2);
  return;
}


