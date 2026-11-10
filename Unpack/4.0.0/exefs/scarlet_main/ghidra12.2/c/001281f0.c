/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001281f0; name: FUN_001281f0
 */


int FUN_001281f0(long param_1,long param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long local_50;
  int local_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_50 = *(long *)(param_1 + 0x30) + param_2;
  uVar1 = *(undefined1 *)(param_1 + 0xb);
  local_48 = param_3;
  iVar3 = FUN_00126c60(param_1,&LAB_00128290,&local_50);
  iVar2 = local_48;
  local_48 = iVar3;
  while (local_48 != 0) {
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined1 *)(param_1 + 0xb) = uVar1;
    local_50 = *(long *)(param_1 + 0x30) + param_2;
    iVar3 = FUN_00126c60(param_1,&LAB_00128290,&local_50);
    iVar2 = local_48;
    local_48 = iVar3;
  }
  return iVar2;
}


