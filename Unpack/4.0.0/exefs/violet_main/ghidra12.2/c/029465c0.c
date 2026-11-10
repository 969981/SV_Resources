/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029465c0; name: FUN_029465c0
 */


void FUN_029465c0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  uVar1 = FUN_02944160();
  FUN_029533b8(*(undefined8 *)(*(long *)(param_1 + 8) + 8),param_2,param_3,param_4,uVar2,uVar1);
  return;
}


