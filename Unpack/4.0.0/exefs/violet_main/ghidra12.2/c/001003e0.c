/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001003e0; name: FUN_001003e0
 */


void FUN_001003e0(void)

{
  code *pcVar1;
  int iVar2;
  
  FUN_00102e40();
  if (DAT_047ec2a0 == 0) {
    iVar2 = FUN_001206d0(&DAT_047ec2a8,2);
    if (iVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x100414);
      (*pcVar1)();
    }
    iVar2 = FUN_001206d0(&DAT_047ec328,1);
    if (iVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x10042c);
      (*pcVar1)();
    }
    iVar2 = FUN_001206d0(&DAT_047ec3a8,1);
    if (iVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x100448);
      (*pcVar1)();
    }
    DAT_047ec2a0 = 1;
  }
  FUN_00120240(&DAT_047ec428,0xffffffff);
  return;
}


