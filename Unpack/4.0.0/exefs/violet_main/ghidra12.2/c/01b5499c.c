/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b5499c; name: FUN_01b5499c
 */


/* WARNING: Removing unreachable block (ram,0x01b5595c) */

void FUN_01b5499c(char *param_1,byte *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  int iVar2;
  undefined *puVar3;
  
  cVar1 = DAT_04809bf0;
  if ((((1 < *param_2) ||
       (puVar3 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) &&
      (puVar3 = PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar3 = PTR_DAT_047d3c20, iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  UNRECOVERED_JUMPTABLE = (code *)&LAB_00933410;
  if (cVar1 == '\0') {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
  }
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01b55968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(long *)(param_1 + 8),puVar3);
    return;
  }
  return;
}


