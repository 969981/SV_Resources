/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f0cb4; name: FUN_026f0cb4
 */


void FUN_026f0cb4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x80e0);
  lVar2 = FUN_026f0d70(*(undefined8 *)(param_1 + 0x80d8),lVar1,param_2);
  if (lVar1 == lVar2) {
    FUN_026f0dcc((undefined8 *)(param_1 + 0x80d8),param_2);
    return;
  }
  return;
}


