/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fd9bc; name: FUN_020fd9bc
 */


undefined8 FUN_020fd9bc(long param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 == 2) {
    FUN_0132746c(param_1,0,0);
    uVar1 = 1;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = 2;
    }
    else {
      if (iVar2 != 0) {
        return 0;
      }
      (**(code **)(**(long **)(param_1 + 0x218) + 200))();
      iVar2 = *param_2 + 1;
    }
    uVar1 = 0;
    *param_2 = iVar2;
  }
  return uVar1;
}


