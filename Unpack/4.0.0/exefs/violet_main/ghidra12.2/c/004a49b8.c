/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a49b8; name: FUN_004a49b8
 */


undefined8 FUN_004a49b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 extraout_x1;
  
  iVar2 = FUN_004a2370(*(undefined8 *)(param_1 + 0x20),param_1,param_2);
  uVar1 = extraout_x1;
  if (iVar2 != 1) {
    uVar1 = 0;
  }
  return uVar1;
}


