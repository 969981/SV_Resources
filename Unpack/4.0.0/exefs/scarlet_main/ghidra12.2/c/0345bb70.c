/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0345bb70; name: _INIT_2119
 */


void _INIT_2119(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047e70d8;
  puVar1 = PTR_DAT_047e70d0;
  if ((*PTR_DAT_047e70d8 & 1) == 0) {
    *(undefined4 *)PTR_DAT_047e70d0 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


