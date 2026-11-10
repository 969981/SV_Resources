/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a608b0; name: FUN_01a608b0
 */


void FUN_01a608b0(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_34;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar1 = FUN_01689a40(param_1,uVar1);
  FUN_0124e480(param_1);
  uVar2 = FUN_0159fe8c();
  FUN_01582534(param_1);
  uVar4 = FUN_014813ec();
  uVar5 = FUN_01242ecc(uVar4,uVar1,uVar2);
  if ((uVar5 & 1) != 0) {
    uVar4 = FUN_01243584(param_1);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_01a609cc(uVar4,uVar1,0x238,0,0,0);
    return;
  }
  iVar3 = FUN_0123ee04(param_1);
  if (iVar3 == 0) {
    local_34 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar4 = FUN_01243584(param_1);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_01a609cc(uVar4,uVar1,0x23b,0,1,&local_34);
  }
  return;
}


