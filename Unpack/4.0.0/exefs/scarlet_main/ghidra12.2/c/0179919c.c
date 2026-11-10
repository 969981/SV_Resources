/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0179919c; name: FUN_0179919c
 */


/* WARNING: Removing unreachable block (ram,0x01799204) */

void FUN_0179919c(char *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_LAB_047d40e0;
  if (DAT_04804348 == '\0') {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
  }
  uVar1 = FUN_01799220(param_2);
  if (((*param_1 == '\0') || (*param_1 == '\x01')) && (*(long *)(param_1 + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01799210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(long *)(param_1 + 8),uVar1);
    return;
  }
  return;
}


