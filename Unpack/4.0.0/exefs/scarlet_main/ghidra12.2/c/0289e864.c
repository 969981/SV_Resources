/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289e864; name: FUN_0289e864
 */


void FUN_0289e864(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_3;
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = FUN_0289e8dc();
  uVar2 = FUN_0175ad64(param_2,uVar1);
  FUN_0289e948(param_2,uVar2,uVar1,lVar4,param_4);
  *param_1 = *(long *)(param_2 + 0x20) + (lVar4 - lVar3);
  return;
}


