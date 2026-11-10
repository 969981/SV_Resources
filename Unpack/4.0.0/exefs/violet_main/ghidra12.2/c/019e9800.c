/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e9800; name: FUN_019e9800
 */


void FUN_019e9800(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x4e0);
  uVar3 = *(undefined8 *)(param_1 + 0x4e8);
  uVar1 = FUN_00c4e564(param_2);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x18))(param_2,uVar2,uVar3,0x1000);
  }
  else {
    FUN_00c48fe8(param_2,uVar2,uVar3,0x1000);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x4d0);
  uVar2 = *(undefined8 *)(param_1 + 0x4d8);
  uVar1 = FUN_00c4e564(param_2);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x019e9880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2,uVar3,uVar2,0x1000);
    return;
  }
  FUN_00c48fe8(param_2,uVar3,uVar2,0x1000);
  return;
}


