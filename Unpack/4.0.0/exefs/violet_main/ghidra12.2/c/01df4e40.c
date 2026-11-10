/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df4e40; name: FUN_01df4e40
 */


void FUN_01df4e40(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),param_2);
  uVar1 = FUN_00cf5fe0(uVar1,uVar2);
  FUN_00deb2ac(param_1,param_2,uVar1);
  return;
}


