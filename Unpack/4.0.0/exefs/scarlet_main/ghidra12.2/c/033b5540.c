/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b5540; name: FUN_033b5540
 */


void FUN_033b5540(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar5 = (long)*(int *)(param_1 + 0x30) << 4;
    do {
      lVar1 = lVar4 + lVar5;
      uVar3 = *(ulong *)(lVar1 + -8);
      if ((uVar3 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar3 - 1,0);
      }
      uVar3 = *(ulong *)(lVar1 + -0x10);
      if ((uVar3 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar3 - 1,0);
      }
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


