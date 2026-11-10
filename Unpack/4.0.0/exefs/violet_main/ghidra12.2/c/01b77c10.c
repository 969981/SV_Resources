/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b77c10; name: FUN_01b77c10
 */


uint FUN_01b77c10(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00d34290(param_1,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00c92df0(param_1,1,0);
    uVar2 = (uVar2 & 0xff) << 8;
  }
  return uVar2 | iVar1 != 0;
}


