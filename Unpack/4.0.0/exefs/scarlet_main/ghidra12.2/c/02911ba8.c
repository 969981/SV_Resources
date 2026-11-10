/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02911ba8; name: FUN_02911ba8
 */


int FUN_02911ba8(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  if (cVar1 == '\x01') {
    FUN_02906700(param_1);
    iVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar3 = -(uVar2 & 1);
  }
  return iVar3;
}


