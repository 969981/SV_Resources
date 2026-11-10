/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00213520; name: FUN_00213520
 */


void FUN_00213520(char *param_1,char *param_2)

{
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = *(char **)PTR_PTR_047cbcf8;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = *(char **)PTR_PTR_047cbd00;
  }
                    /* try { // try from 00213560 to 0021356b has its CatchHandler @ 00213574 */
  FUN_00267650(param_2,param_1);
  return;
}


