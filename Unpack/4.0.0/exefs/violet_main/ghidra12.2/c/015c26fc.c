/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c26fc; name: FUN_015c26fc
 */


void FUN_015c26fc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_015c2764(*(undefined8 *)(param_1 + 0x10));
  FUN_015c276c(uVar1,param_2,param_5,param_3);
  uVar1 = FUN_015c2764(*(undefined8 *)(param_1 + 0x10));
  FUN_015c276c(uVar1,param_3,param_4,param_2);
  return;
}


