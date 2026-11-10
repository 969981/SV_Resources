/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cac80; name: _INIT_89
 */


void _INIT_89(void)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::GetSystemTickFrequency();
  *(undefined8 *)PTR_DAT_047d0970 = uVar1;
  return;
}


