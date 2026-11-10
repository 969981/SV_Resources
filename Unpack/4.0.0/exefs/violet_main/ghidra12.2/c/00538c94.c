/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00538c94; name: thunk_FUN_00258a7c
 */


long thunk_FUN_00258a7c(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    return *param_1;
  }
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
  if (lVar1 != 0) {
    FUN_00269fa4(lVar1,0);
  }
  *param_1 = lVar1;
  return lVar1;
}


