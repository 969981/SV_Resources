/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd57c0; name: FUN_00cd57c0
 */


void FUN_00cd57c0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_80 [96];
  
  puVar1 = (undefined4 *)FUN_00ccbb30(param_1,0);
  *puVar1 = 0xff00ff00;
  FUN_00ccbb18(param_1,0);
  FUN_02bb2d68(auStack_80);
  return;
}


