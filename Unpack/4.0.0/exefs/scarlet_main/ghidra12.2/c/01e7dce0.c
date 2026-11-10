/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7dce0; name: FUN_01e7dce0
 */


void FUN_01e7dce0(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_3;
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = FUN_01e7df10(param_2,param_4);
  uVar2 = FUN_01758308(param_2,uVar1);
  FUN_01e7df7c(param_2,uVar2,uVar1,lVar4,param_4,param_5);
  *param_1 = *(long *)(param_2 + 0x20) + (lVar4 - lVar3);
  return;
}


