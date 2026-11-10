/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01681098; name: FUN_01681098
 */


void FUN_01681098(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x4e8))(param_2);
  if (iVar1 != 0x20) {
    uVar2 = FUN_01243584(param_1);
    FUN_01240198(uVar2,param_2,iVar1);
    iVar1 = (**(code **)(*param_2 + 0x4e8))(param_2);
    if (iVar1 != 0x20) {
      uVar2 = FUN_01243584(param_1);
      FUN_01240198(uVar2,param_2,iVar1);
      iVar1 = (**(code **)(*param_2 + 0x4e8))(param_2);
      while (iVar1 != 0x20) {
        uVar2 = FUN_01243584(param_1);
        FUN_01240198(uVar2,param_2,iVar1);
        iVar1 = (**(code **)(*param_2 + 0x4e8))(param_2);
      }
    }
  }
  return;
}


