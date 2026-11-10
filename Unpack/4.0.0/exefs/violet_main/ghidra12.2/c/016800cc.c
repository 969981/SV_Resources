/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016800cc; name: FUN_016800cc
 */


void FUN_016800cc(long param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0292dc68(*(undefined8 *)(param_1 + 0x38));
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0167a95c(uVar3,uVar1);
  return;
}


