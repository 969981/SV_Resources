/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00453260; name: FUN_00453260
 */


void FUN_00453260(void *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    if (param_2 != 0) {
      FUN_00453300(param_1);
    }
    if ((DAT_047f19bc != 1) || (iVar1 = FUN_0049dcf0(param_1), iVar1 != 1)) {
      if ((PTR_FUN_044aa1b0 == (undefined *)0x0) || (PTR_FUN_044aa1b0 == PTR_FUN_047cd440)) {
        free(param_1);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x004532e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_FUN_044aa1b0)(param_1,param_3,param_4);
      return;
    }
  }
  return;
}


