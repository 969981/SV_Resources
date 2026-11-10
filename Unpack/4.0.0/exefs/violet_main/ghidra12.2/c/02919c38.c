/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02919c38; name: FUN_02919c38
 */


void FUN_02919c38(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2c) == 1) {
    FUN_011e2fb0(param_2);
    return;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x68) + 0x98))();
  uVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
                    (*(long **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x90));
  FUN_020ff170(param_2,uVar1,uVar2,uVar1,0);
  return;
}


