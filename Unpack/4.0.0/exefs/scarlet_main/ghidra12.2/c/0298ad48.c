/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298ad48; name: FUN_0298ad48
 */


void FUN_0298ad48(long param_1,undefined8 param_2,undefined2 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined2 local_28 [4];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28[0] = *param_3;
  local_20 = param_2;
  uStack_18 = param_4;
  uVar1 = FUN_0298b040(*(undefined8 *)(param_1 + 0x78));
  FUN_0298b048(uVar1,auStack_30,local_28);
  return;
}


