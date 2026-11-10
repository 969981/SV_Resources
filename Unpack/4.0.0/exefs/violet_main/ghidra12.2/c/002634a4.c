/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002634a4; name: FUN_002634a4
 */


void FUN_002634a4(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar1 != 0) {
                    /* try { // try from 002634d0 to 002634db has its CatchHandler @ 002634f8 */
    FUN_00267c98(lVar1,0);
  }
  *param_1 = lVar1;
                    /* try { // try from 002634e0 to 002634eb has its CatchHandler @ 002634fc */
  FUN_002696a0(lVar1,param_2);
  return;
}


