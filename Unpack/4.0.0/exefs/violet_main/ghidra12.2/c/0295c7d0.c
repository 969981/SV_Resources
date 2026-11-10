/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295c7d0; name: FUN_0295c7d0
 */


bool FUN_0295c7d0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_02943ff0();
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_0293d8d0(param_1);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


