/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124e848; name: FUN_0124e848
 */


void FUN_0124e848(long param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x3b8))(param_2);
  if ((uVar2 & 1) == 0) {
    pcVar3 = *(code **)(*param_2 + 0x98);
  }
  else {
    pcVar3 = *(code **)(*param_2 + 0x2d8);
  }
  uVar1 = (*pcVar3)(param_2);
  FUN_0124ee74(*(undefined8 *)(param_1 + 0x20),uVar1);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x4e,uVar1);
  return;
}


