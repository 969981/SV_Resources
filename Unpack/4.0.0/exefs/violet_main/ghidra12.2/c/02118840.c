/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02118840; name: FUN_02118840
 */


undefined8 FUN_02118840(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0155a574();
  switch(uVar1) {
  case 0:
    FUN_021188d0(param_1);
    break;
  case 1:
    uVar2 = FUN_02118914(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    FUN_02118938(param_1);
    break;
  case 2:
    FUN_0211895c(param_1);
    break;
  case 3:
    uVar2 = FUN_02118914(param_1);
    if ((uVar2 & 1) != 0) {
      return 2;
    }
  default:
    goto LAB_02118898;
  }
  FUN_01497d74(param_1);
LAB_02118898:
  return 0;
}


