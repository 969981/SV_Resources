/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a70f8; name: FUN_007a70f8
 */


void FUN_007a70f8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_28;
  
  local_28 = 0;
  FUN_007935cc(&local_28);
  lVar2 = local_28;
  lVar4 = *(long *)(param_1 + 0xc0);
  plVar3 = (long *)FUN_0079365c();
  if (5 < *(uint *)(param_1 + 200)) {
    local_28 = 0;
    FUN_007935cc(&local_28);
    *(long *)(param_1 + 0xc0) = local_28;
    return;
  }
  lVar1 = 0;
  if (*plVar3 != 0) {
    lVar1 = (lVar2 - lVar4) / *plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x007a714c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_007a7150 + (ulong)(byte)(&DAT_03d0bf89)[*(uint *)(param_1 + 200)] * 4))(lVar1);
  return;
}


