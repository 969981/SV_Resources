/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081afbc; name: FUN_0081afbc
 */


void FUN_0081afbc(undefined8 *param_1,undefined2 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
  if (plVar2 != (long *)0x0) {
    *(undefined2 *)(plVar2 + 1) = param_2;
    *(undefined2 *)((long)plVar2 + 10) = 4;
    puVar1 = PTR_DAT_047d1948;
    *(undefined4 *)((long)plVar2 + 0xc) = 0;
    *plVar2 = (long)(puVar1 + 0x10);
  }
  *param_1 = plVar2;
  return;
}


