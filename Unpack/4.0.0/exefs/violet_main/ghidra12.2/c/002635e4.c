/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002635e4; name: FUN_002635e4
 */


void FUN_002635e4(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar1 != 0) {
                    /* try { // try from 00263610 to 0026361b has its CatchHandler @ 00263638 */
    FUN_00267c98(lVar1,0);
  }
  *param_1 = lVar1;
                    /* try { // try from 00263620 to 0026362b has its CatchHandler @ 0026363c */
  FUN_00258ce4(lVar1,param_2);
  return;
}


