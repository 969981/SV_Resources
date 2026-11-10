/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f10a8; name: FUN_017f10a8
 */


int FUN_017f10a8(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),5);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1d0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
     (uVar3 & 1) == 0)) {
    iVar2 = -10;
  }
  else {
    iVar1 = FUN_017f09dc(param_1);
    iVar2 = FUN_017f1188(param_1);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}


