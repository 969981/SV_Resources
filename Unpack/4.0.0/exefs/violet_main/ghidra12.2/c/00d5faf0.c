/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d5faf0; name: FUN_00d5faf0
 */


float FUN_00d5faf0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = (*(code *)**(undefined8 **)*param_2)
                    ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x114));
  return (float)((double)*(long *)(lVar1 + 8) / 1000000000.0);
}


