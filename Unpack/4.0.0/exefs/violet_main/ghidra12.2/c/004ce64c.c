/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ce64c; name: FUN_004ce64c
 */


void FUN_004ce64c(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_047cd7c0 + 0x10);
  if ((param_1 != (long *)PTR_DAT_047cd7b8) && (plVar1 = (long *)param_1[3], plVar1 != (long *)0x0))
  {
    *plVar1 = (long)(PTR_DAT_047cd840 + 0x10);
                    /* try { // try from 004ce694 to 004ce697 has its CatchHandler @ 004ce6cc */
    FUN_004ca714(plVar1 + 1);
    FUN_004d2ad4(plVar1 + 5);
    FUN_005212b0(plVar1 + 2);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
                    /* try { // try from 004ce6bc to 004ce6bf has its CatchHandler @ 004ce6e8 */
  FUN_004ca714(param_1 + 1);
  return;
}


