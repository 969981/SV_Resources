/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012410e0; name: FUN_012410e0
 */


void FUN_012410e0(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined1 local_14;
  
  local_18 = *param_2;
  local_14 = *(undefined1 *)((long)param_2 + 0x25);
  uVar1 = FUN_0124111c(*(undefined8 *)(param_1 + 0x78));
  FUN_01253068(uVar1,auStack_20,&local_18);
  return;
}


