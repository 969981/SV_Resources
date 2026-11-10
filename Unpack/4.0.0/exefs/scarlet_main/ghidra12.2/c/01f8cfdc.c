/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8cfdc; name: FUN_01f8cfdc
 */


void FUN_01f8cfdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00da75d8();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}


