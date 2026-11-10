/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033a09c; name: FUN_0033a09c
 */


void FUN_0033a09c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  long *plStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lStack_48 = param_2[7];
  param_1[8] = lStack_48;
  uStack_68 = 0;
  local_60 = param_2[9];
  plStack_58 = param_2 + 2;
  local_50 = param_2[6];
  local_40 = param_2[8];
  lStack_38 = param_2[10];
  local_70 = param_1 + 10;
                    /* try { // try from 0033a108 to 0033a133 has its CatchHandler @ 0033a16c */
  lVar1 = FUN_00344660(*(undefined8 *)(*param_1 + 0x10),1,PTR_LAB_047ccc90,param_1,&local_70);
  *param_3 = lVar1;
  if (lVar1 == 0) {
    FUN_00344740(param_1 + 10,param_2[1]);
    if (*(long *)(*param_1 + 0x20) != 0) {
                    /* try { // try from 0033a144 to 0033a147 has its CatchHandler @ 0033a168 */
      FUN_003461b0(*(long *)(*param_1 + 0x20) + 0x80);
    }
  }
  else {
                    /* try { // try from 0033a15c to 0033a15f has its CatchHandler @ 0033a164 */
    FUN_00352270();
  }
  return;
}


