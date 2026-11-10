/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00461cf0; name: FUN_00461cf0
 */


undefined8 FUN_00461cf0(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long local_38;
  
  local_38 = 0;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      lVar3 = FUN_00464550(0,0,0,*(undefined8 *)(param_1 + 0x68));
      *(long *)(param_1 + 0x28) = lVar3;
      if (lVar3 != 0) goto LAB_00461d18;
    }
LAB_00461db0:
    uVar4 = 0;
  }
  else {
LAB_00461d18:
    uVar4 = FUN_00464b70(lVar3,&local_38);
    for (; param_3 != 0; param_3 = param_3 - uVar1) {
      uVar1 = *(ulong *)(param_1 + 0x38);
      if (param_3 <= *(ulong *)(param_1 + 0x38)) {
        uVar1 = param_3;
      }
      iVar2 = FUN_00461ac0(param_1,param_2,uVar1,0,local_38,uVar4);
      if (iVar2 == 0) goto LAB_00461db0;
      param_2 = param_2 + uVar1;
    }
    uVar4 = 1;
  }
  if (local_38 != 0) {
    FUN_00464bc0(*(undefined8 *)(param_1 + 0x28));
  }
  return uVar4;
}


