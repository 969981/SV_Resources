/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b6ad0; name: FUN_021b6ad0
 */


void FUN_021b6ad0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 300) = 1;
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x138) = param_2[1];
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  FUN_00e819b0(param_2,param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x129) = 1;
  FUN_00c6a514(param_1 + 0x38,0);
  return;
}


