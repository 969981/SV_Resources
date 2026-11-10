/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943a10; name: FUN_02943a10
 */


void FUN_02943a10(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 8) + 0x50));
  if (puVar2 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2 & 0xff;
    if (4 < (int)*puVar2) {
      uVar1 = 0;
    }
  }
  FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),uVar1);
  return;
}


