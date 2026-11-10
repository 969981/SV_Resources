/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212e664; name: FUN_0212e664
 */


void FUN_0212e664(undefined8 param_1)

{
  ulong uVar1;
  undefined4 local_4;
  
  FUN_0212e6b0();
  FUN_0212e7b8(param_1);
  uVar1 = FUN_017350a8(param_1);
  if ((uVar1 & 1) != 0) {
    local_4 = FUN_0212e858(0,param_1);
    FUN_0212ead4(&local_4);
  }
  return;
}


