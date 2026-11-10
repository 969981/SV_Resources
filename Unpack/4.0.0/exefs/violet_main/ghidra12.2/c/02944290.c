/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02944290; name: FUN_02944290
 */


void FUN_02944290(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  uVar1 = FUN_02944160();
  FUN_01580a6c(*(undefined8 *)(*(long *)(param_1 + 8) + 8),param_2,param_3,uVar2,uVar1);
  return;
}


