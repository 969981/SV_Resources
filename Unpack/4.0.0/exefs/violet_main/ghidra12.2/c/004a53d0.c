/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a53d0; name: FUN_004a53d0
 */


undefined8 FUN_004a53d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 extraout_x1;
  
  iVar3 = FUN_004c0784(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),param_1,param_2);
  uVar1 = extraout_x1;
  if (iVar3 != 5) {
    uVar1 = 0;
  }
  uVar2 = 0;
  if (iVar3 == 5) {
    uVar2 = uVar1;
  }
  return uVar2;
}


