/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd573c; name: FUN_00cd573c
 */


void FUN_00cd573c(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_80 [96];
  
  puVar1 = (undefined4 *)FUN_00ccbb30(param_1,0);
  *puVar1 = 0xff0000ff;
  FUN_00ccbb18(param_1,0);
  FUN_02bb2d4c(auStack_80);
  return;
}


