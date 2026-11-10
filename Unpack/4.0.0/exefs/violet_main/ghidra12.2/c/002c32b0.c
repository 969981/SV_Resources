/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c32b0; name: FUN_002c32b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c32b0(long *param_1,long *param_2)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_047cc830 + 0x10);
  param_1[1] = 1;
  param_1[2] = 0;
  uStack_30 = _UNK_03cab608;
  local_38 = _DAT_03cab600;
  param_1[3] = *param_2;
  *param_2 = 0;
  local_40 = 1000;
  local_28 = 120000;
                    /* try { // try from 002c3310 to 002c3317 has its CatchHandler @ 002c3348 */
  FUN_0034345c(param_1 + 4,&local_40);
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x11] = (long)PTR_LAB_047cc838;
  param_1[0x12] = (long)param_1;
  param_1[0x13] = 0;
                    /* try { // try from 002c332c to 002c3333 has its CatchHandler @ 002c3344 */
  FUN_002c34cc(param_1);
  return;
}


