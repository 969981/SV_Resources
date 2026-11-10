/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029873ec; name: FUN_029873ec
 */


bool FUN_029873ec(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0181a624(param_1,param_2,6);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar3 = FUN_01243584(param_1);
    FUN_0181a604(uVar3,uVar2,1,iVar1);
  }
  return iVar1 != 0;
}


