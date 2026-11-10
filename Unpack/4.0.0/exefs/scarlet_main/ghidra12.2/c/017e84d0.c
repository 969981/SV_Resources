/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e84d0; name: FUN_017e84d0
 */


void FUN_017e84d0(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  if ((1 < *param_2) ||
     (puVar2 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4c70 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c70);
      puVar2 = PTR_DAT_047d4c78;
      if (iVar1 != 0) {
        *(undefined4 *)(PTR_DAT_047d4c78 + 0x20) = 0;
        *(undefined8 *)(puVar2 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 0x18) = 0;
        *(undefined8 *)puVar2 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d4c70);
      }
    }
    else {
      puVar2 = PTR_DAT_047d4c78;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x017e84fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar2);
  return;
}


