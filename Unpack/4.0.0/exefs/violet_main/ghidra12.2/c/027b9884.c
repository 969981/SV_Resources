/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b9884; name: FUN_027b9884
 */


void FUN_027b9884(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
    return;
  }
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x38);
  if (lVar1 != 0) {
                    /* try { // try from 027b98b0 to 027b98bb has its CatchHandler @ 027b98e0 */
    FUN_00699ad4(lVar1,lVar2);
  }
  *param_1 = lVar1;
  return;
}


