/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f70404; name: FUN_01f70404
 */


void FUN_01f70404(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  bVar1 = FUN_01f704f0(param_2);
  *param_1 = bVar1 & 1;
  uVar3 = FUN_01f7052c();
  FUN_01f70538(param_1 + 8,param_2,uVar3);
  uVar3 = FUN_01f70570();
  uVar2 = FUN_01f7057c(param_2,uVar3);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar3 = FUN_01f70598(param_2);
  FUN_01cfa5b0(param_1 + 0x30,uVar3);
  uVar3 = FUN_01f705a4();
  FUN_01f705b0(param_1 + 0x50,param_2,uVar3);
  uVar3 = FUN_01f705cc();
  FUN_01f70538(param_1 + 0x58,param_2,uVar3);
  uVar3 = FUN_01f705d8();
  FUN_01f70538(param_1 + 0x78,param_2,uVar3);
  uVar3 = FUN_01f705e4();
  uVar2 = FUN_01f7057c(param_2,uVar3);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  uVar3 = FUN_01f705f0();
  uVar2 = FUN_01f7057c(param_2,uVar3);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  return;
}


