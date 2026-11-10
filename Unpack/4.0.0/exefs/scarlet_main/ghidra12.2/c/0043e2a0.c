/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043e2a0; name: FUN_0043e2a0
 */


undefined4 FUN_0043e2a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_8 [8];
  
  puVar2 = (undefined4 *)FUN_003de9a0(auStack_8,*param_1);
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
  }
  return uVar1;
}


