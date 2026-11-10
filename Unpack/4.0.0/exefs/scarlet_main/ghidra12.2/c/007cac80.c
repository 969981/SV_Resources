/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cac80; name: _INIT_89
 */


void _INIT_89(void)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::GetSystemTickFrequency();
  *(undefined8 *)PTR_DAT_047d0970 = uVar1;
  return;
}


