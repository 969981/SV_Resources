/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010af048; name: FUN_010af048
 */


void FUN_010af048(long param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  do {
    uVar1 = (&DAT_03d6abe6)[lVar3];
    puVar2 = (undefined1 *)FUN_010af09c(param_1);
    lVar3 = lVar3 + 4;
    *puVar2 = uVar1;
  } while (lVar3 != 0x340);
  return;
}


