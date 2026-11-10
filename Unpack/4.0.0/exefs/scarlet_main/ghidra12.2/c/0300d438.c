/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300d438; name: FUN_0300d438
 */


void FUN_0300d438(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  iVar1 = *(int *)((long)puVar2 + 100);
  if ((iVar1 == 0) || (*(int *)(puVar2 + 9) != 0)) {
    if ((*(int *)(puVar2 + 0xd) != 0) && (0 < *(int *)(puVar2 + 9))) {
      iVar1 = 1;
      *(undefined8 *)((long)puVar2 + 100) = 1;
    }
  }
  else {
    iVar1 = 0;
    *(undefined8 *)((long)puVar2 + 100) = 0x100000000;
  }
  FUN_03001d8c(puVar2[8],*puVar2,*(undefined4 *)(param_1 + 0x18),iVar1 != 0);
  *(undefined4 *)((long)puVar2 + 100) = 0;
  return;
}


