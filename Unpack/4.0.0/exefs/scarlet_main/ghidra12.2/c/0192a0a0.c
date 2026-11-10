/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192a0a0; name: FUN_0192a0a0
 */


void FUN_0192a0a0(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined2 local_24 [2];
  
  puVar1 = &LAB_00968038;
  if (DAT_04815c20 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24[0] = param_2;
  uVar2 = FUN_0192a13c(param_3);
  FUN_0192a100(param_1,puVar1,0,local_24,uVar2);
  return;
}


