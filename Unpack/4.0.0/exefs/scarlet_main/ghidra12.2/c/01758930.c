/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01758930; name: FUN_01758930
 */


void FUN_01758930(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_48;
  long lStack_40;
  long local_38;
  
  local_38 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  lStack_40 = param_1;
  if (lVar2 == 0) {
    local_38 = 0;
    lVar1 = param_2;
  }
  else {
    local_48 = param_2;
    lVar1 = FUN_0175c950(param_1,lVar2,param_3,param_2);
    local_38 = (lVar1 - param_2 >> 4) * -0x71c71c71c71c71c7;
    lVar1 = FUN_0175c950(param_1,param_3,lVar2 + *(long *)(param_1 + 0x28) * 0x90,lVar1);
    FUN_0175c780(lVar2,*(undefined8 *)(param_1 + 0x28));
    FUN_0175c6f4(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = (lVar1 - param_2 >> 4) * -0x71c71c71c71c71c7;
  *(undefined8 *)(param_1 + 0x30) = 0x20;
  local_48 = 0;
  FUN_017591ec(&local_48);
  return;
}


