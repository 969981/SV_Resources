/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293e1a0; name: FUN_0293e1a0
 */


uint FUN_0293e1a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined2 local_78;
  undefined1 local_70 [16];
  undefined1 local_5f;
  
  FUN_0293e210(&local_80);
  local_78 = 0x1c;
  local_80 = param_2;
  uStack_7c = param_2;
  local_70 = FUN_0293e250(param_2,param_4);
  local_5f = 2;
  uVar1 = FUN_01a042b0(param_1,&local_80);
  return uVar1 & 1;
}


