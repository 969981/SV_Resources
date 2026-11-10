/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053ec68; name: FUN_0053ec68
 */


long FUN_0053ec68(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    return *param_1;
  }
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (lVar1 != 0) {
                    /* try { // try from 0053eca4 to 0053ecaf has its CatchHandler @ 0053ecc4 */
    FUN_0057f7dc(lVar1,0);
  }
  *param_1 = lVar1;
  return lVar1;
}


