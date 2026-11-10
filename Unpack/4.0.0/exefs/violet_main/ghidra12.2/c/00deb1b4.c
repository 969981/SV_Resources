/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00deb1b4; name: FUN_00deb1b4
 */


void FUN_00deb1b4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
  uVar2 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),0);
  uVar1 = FUN_00cf5fe0(uVar1,uVar2);
  FUN_00deb2ac(param_1,0,uVar1);
  uVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1);
  uVar2 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),1);
  uVar1 = FUN_00cf5fe0(uVar1,uVar2);
  FUN_00deb2ac(param_1,1,uVar1);
  uVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2);
  uVar2 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),2);
  uVar1 = FUN_00cf5fe0(uVar1,uVar2);
  FUN_00deb2ac(param_1,2,uVar1);
  uVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),3);
  uVar2 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),3);
  uVar1 = FUN_00cf5fe0(uVar1,uVar2);
  FUN_00deb2ac(param_1,3,uVar1);
  return;
}


