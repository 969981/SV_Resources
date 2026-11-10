/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02988c0c; name: FUN_02988c0c
 */


void FUN_02988c0c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined2 local_30;
  undefined1 local_2e;
  undefined2 local_2d;
  undefined4 local_28;
  
  local_30 = 0xe;
  FUN_01582534();
  uVar1 = FUN_014813ec();
  local_2e = FUN_010e161c(uVar1,param_2);
  local_28 = 0;
  local_2d = 10;
  uVar1 = FUN_02982cac(*(undefined8 *)(param_1 + 0x78));
  FUN_02982cb4(uVar1,auStack_38,&local_30);
  return;
}


