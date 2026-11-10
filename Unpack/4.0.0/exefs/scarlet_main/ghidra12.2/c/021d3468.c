/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d3468; name: FUN_021d3468
 */


void FUN_021d3468(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x10);
  lVar1 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0x48,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)*puVar2 + 0xe8))();
  }
  *param_1 = lVar1;
  param_1[1] = (long)puVar2;
  FUN_021d3544(puVar2,lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


