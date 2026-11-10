/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298b9b0; name: FUN_0298b9b0
 */


void FUN_0298b9b0(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_0124ade8(param_1,param_2,0x2f);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0167ebc0(uVar3,0xcb,uVar1,0x75,uVar2,0xffff0000);
  return;
}


