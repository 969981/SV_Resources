/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124ade8; name: FUN_0124ade8
 */


void FUN_0124ade8(long param_1,long *param_2,undefined2 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar2 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),uVar1);
  if ((uVar2 & 0xff) == 10) {
    return;
  }
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0xa7,uVar2,param_3);
  return;
}


