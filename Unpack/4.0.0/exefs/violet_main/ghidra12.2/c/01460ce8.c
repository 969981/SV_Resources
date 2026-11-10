/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01460ce8; name: FUN_01460ce8
 */


void FUN_01460ce8(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 auStack_58 [32];
  long *local_38;
  undefined8 local_18;
  
  local_38 = (long *)0x0;
  local_18 = param_1;
  uVar3 = FUN_0124e480();
  uVar4 = FUN_01582534(param_1);
  FUN_01247754(auStack_58,uVar3,uVar4);
  uVar5 = FUN_01460dbc(auStack_58,&local_38);
  while ((uVar5 & 1) != 0) {
    uVar5 = (**(code **)(*local_38 + 0x4d0))(local_38,0x1a);
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(**(code **)(*local_38 + 0x4f0))(local_38,0x1a);
      iVar1 = *piVar6;
      iVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      if (iVar2 == iVar1) {
        FUN_0297f998(&local_18,local_38);
      }
    }
    uVar5 = FUN_01460dbc(auStack_58,&local_38);
  }
  return;
}


