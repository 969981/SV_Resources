/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3ca0; name: FUN_001f3ca0
 */


undefined8 FUN_001f3ca0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001f3d18(param_4);
  uVar3 = FUN_001ee90c(param_1,param_2,uVar1);
  if ((int)uVar3 == 0) {
    if ((*(code **)(param_1 + 0x7f0) == (code *)0x0) ||
       (iVar2 = (**(code **)(param_1 + 0x7f0))
                          (param_1,param_3,param_4,*(undefined8 *)(param_1 + 0x8b8)), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffc7a;
    }
  }
  return uVar3;
}


