/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f3500; name: FUN_002f3500
 */


long * FUN_002f3500(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x48);
  puVar2 = PTR_DAT_047cc9b8;
  if (plVar3 != (long *)0x0) {
    plVar3[1] = 1;
    plVar3[2] = (long)&DAT_03c753ad;
    lVar1 = DAT_03cb5400;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[8] = lVar1;
    FUN_002f30d8(plVar3,param_1,param_2,param_3);
  }
  return plVar3;
}


