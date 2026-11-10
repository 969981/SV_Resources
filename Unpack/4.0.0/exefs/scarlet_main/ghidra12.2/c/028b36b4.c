/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b36b4; name: FUN_028b36b4
 */


void FUN_028b36b4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x10);
  lVar1 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0x20,4);
  if (lVar1 == 0) {
    (**(code **)(*(long *)*puVar2 + 0xe8))();
  }
  *param_1 = lVar1;
  param_1[1] = (long)puVar2;
  FUN_028b3780(puVar2,lVar1 + 0x1c,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


