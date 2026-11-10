/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02928af0; name: FUN_02928af0
 */


undefined8 FUN_02928af0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_0155a574();
  if (iVar1 == 1) {
    uVar2 = FUN_02928b90(param_1);
    if ((uVar2 & 1) != 0) {
      FUN_02928bb4(param_1);
      return 2;
    }
  }
  else {
    if (iVar1 != 0) {
      return 2;
    }
    FUN_02928b4c(param_1);
    FUN_01497d74(param_1);
  }
  return 0;
}


