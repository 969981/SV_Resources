/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dfe14; name: FUN_008dfe14
 */


void FUN_008dfe14(undefined8 param_1,long param_2,undefined4 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined8 uVar1;
  
  FUN_00d8d140(param_1,*(undefined8 *)(param_4 + 8),0x3f);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  FUN_00c5b260(param_1,*(long *)(param_2 + 0x238) + 0x120);
  FUN_00c5b0c4(param_1,*(long *)(param_2 + 0x238) + 0x148);
  FUN_00c6d118(param_1,*(long *)(param_2 + 0x238) + 0x164);
  FUN_008f0b48(param_1,*(long *)(param_2 + 0x238) + 0x370);
  FUN_008dfef8(uVar1,param_1,param_2,param_4,param_6);
  FUN_008e0100(uVar1,param_1,param_2,param_4,param_6);
  FUN_008e6350(*(undefined8 *)(*(long *)(param_2 + 0x78) + 0x20),param_1,param_2,param_3,param_5,
               param_6);
  return;
}


