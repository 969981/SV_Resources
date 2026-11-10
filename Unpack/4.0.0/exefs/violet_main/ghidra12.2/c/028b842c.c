/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b842c; name: FUN_028b842c
 */


undefined4 FUN_028b842c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(long *)(param_2[1] + 0x18) + param_1 * 8);
  uVar1 = FUN_028b86c0(*puVar2,puVar2[1],puVar2[2],puVar2[3],*param_2);
  return uVar1;
}


