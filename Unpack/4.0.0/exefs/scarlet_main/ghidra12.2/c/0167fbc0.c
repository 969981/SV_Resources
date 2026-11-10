/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167fbc0; name: FUN_0167fbc0
 */


void FUN_0167fbc0(long param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x30),uVar1);
  (**(code **)(*plVar2 + 0x4d8))(plVar2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0129aff0(uVar3,0x1e,uVar1,param_3);
  return;
}


