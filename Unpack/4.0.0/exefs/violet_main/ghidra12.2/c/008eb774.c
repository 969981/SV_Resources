/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008eb774; name: FUN_008eb774
 */


void FUN_008eb774(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d26b8;
  (**(code **)**(undefined8 **)PTR_DAT_047d26b8)();
  (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)puVar1);
  *(undefined8 *)puVar1 = 0;
  return;
}


