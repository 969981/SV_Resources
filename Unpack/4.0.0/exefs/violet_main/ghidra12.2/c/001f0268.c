/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f0268; name: FUN_001f0268
 */


undefined8 FUN_001f0268(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(code **)(param_1 + 0x7f0) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x7f0))
                        (param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x8b8)), iVar1 == 0)) {
    uVar2 = FUN_001f3d18(param_3);
    uVar3 = FUN_001eda90(param_1,*(undefined4 *)(param_1 + 0x93c),uVar2,param_4);
    return uVar3;
  }
  return 0xfffffc7a;
}


