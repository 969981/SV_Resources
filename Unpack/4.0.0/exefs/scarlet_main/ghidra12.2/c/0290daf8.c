/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290daf8; name: FUN_0290daf8
 */


int FUN_0290daf8(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0xb8) == '\f') || (*(char *)(param_1 + 0xb9) == '\f')) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    iVar4 = 2;
    if ((uVar3 & 1) == 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar1 < 0x32) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar4 = iVar4 - (uVar2 & 1);
  }
  return iVar4;
}


