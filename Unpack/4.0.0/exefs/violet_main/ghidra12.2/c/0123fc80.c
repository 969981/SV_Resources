/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123fc80; name: FUN_0123fc80
 */


undefined8 FUN_0123fc80(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  iVar1 = FUN_0123ee04();
  if (((iVar1 == 0) && (uVar3 = FUN_0124a808(param_1), (uVar3 & 1) != 0)) &&
     (uVar3 = FUN_01248a4c(param_1), (uVar3 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


