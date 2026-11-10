/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0183c1f4; name: FUN_0183c1f4
 */


undefined1
FUN_0183c1f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 uVar1;
  char local_24;
  
  uVar1 = FUN_0183e018(*(undefined8 *)(param_1 + 0x38));
  FUN_0183db88(*(undefined8 *)(param_1 + 0x38),param_2,uVar1,param_3,local_24);
  *(bool *)param_5 = local_24 != '\0';
  return uVar1;
}


