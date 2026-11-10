/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00103990; name: FUN_00103990
 */


void FUN_00103990(undefined8 param_1)

{
  int iVar1;
  
  FUN_001209d0(&DAT_047ec2a8);
  iVar1 = FUN_001207b0(param_1,0);
  while( true ) {
    if (iVar1 != 0) {
      return;
    }
    FUN_00120750(&DAT_047ec2a8);
    FUN_001209d0(param_1);
    iVar1 = FUN_001207b0(&DAT_047ec2a8,0);
    if (iVar1 != 0) break;
    FUN_00120750(param_1);
    FUN_001209d0(&DAT_047ec2a8);
    iVar1 = FUN_001207b0(param_1,0);
  }
  return;
}


