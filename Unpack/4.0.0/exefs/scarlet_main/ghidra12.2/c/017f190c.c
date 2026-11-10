/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f190c; name: FUN_017f190c
 */


int FUN_017f190c(long param_1)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x1e);
  if ((uVar1 & 1) == 0) {
    if ((*(short *)(param_1 + 0x9e) == 99) || (*(short *)(param_1 + 0xb6) == 99)) {
      iVar2 = -8;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = -10;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar1 & 1) != 0) {
    if (*(short *)(param_1 + 0x9e) != 0x97) {
      iVar2 = iVar2 + -10;
    }
  }
  return iVar2;
}


