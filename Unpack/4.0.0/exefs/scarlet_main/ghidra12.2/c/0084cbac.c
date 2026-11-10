/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084cbac; name: FUN_0084cbac
 */


void FUN_0084cbac(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_047d1a78 + 0x10);
  lVar3 = param_1[4];
  if ((lVar3 != 0) && (lVar3 + (long)(param_1 + 4) != 0)) {
    FUN_012c4338();
  }
  puVar2 = PTR_DAT_047d1a08;
  lVar3 = param_1[5];
  if (*(int *)((long)param_1 + 0x34) < 0) {
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 + (long)(param_1 + 5);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0084cc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar2 + 8))(0,param_1,0);
  return;
}


