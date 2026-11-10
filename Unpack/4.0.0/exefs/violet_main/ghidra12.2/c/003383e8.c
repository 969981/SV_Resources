/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003383e8; name: FUN_003383e8
 */


long FUN_003383e8(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auStack_a0 [80];
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x1d8);
  if (lVar1 != 0) {
    uStack_48 = param_1[1];
    local_50 = *param_1;
    local_40 = param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
                    /* try { // try from 00338434 to 0033843f has its CatchHandler @ 0033849c */
    FUN_0028f3c0(auStack_a0,param_2);
                    /* try { // try from 00338444 to 00338453 has its CatchHandler @ 0033848c */
    FUN_00336340(lVar1,&local_50,auStack_a0,*param_3);
    FUN_00288048(auStack_a0);
    if ((local_50 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
    }
  }
  return lVar1;
}


