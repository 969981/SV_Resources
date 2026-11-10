/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00330de0; name: FUN_00330de0
 */


void FUN_00330de0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong local_38 [3];
  undefined8 local_18;
  
  if (DAT_047ef4c0 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_18 = 0;
  local_38[2] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
                    /* try { // try from 00330e0c to 00330e2f has its CatchHandler @ 00330e88 */
  plVar1 = (long *)FUN_00330930(DAT_047ef4c0,param_2,&local_18,local_38);
  if (plVar1 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(param_1,plVar1,local_18);
  }
                    /* try { // try from 00330e3c to 00330e3f has its CatchHandler @ 00330e6c */
  FUN_0037bfa0(local_18);
  if ((local_38[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_38[2]);
  }
  return;
}


