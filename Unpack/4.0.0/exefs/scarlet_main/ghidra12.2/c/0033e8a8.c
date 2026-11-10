/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033e8a8; name: FUN_0033e8a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0033e8a8(long *param_1,long param_2,long *param_3,long param_4,long *param_5,long *param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_047cccd8;
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 1;
  param_1[3] = *param_3;
  *param_3 = 0;
  param_1[4] = param_4;
  param_1[5] = 0;
  plVar1 = param_1 + 6;
  param_1[5] = *param_5;
  *param_5 = 0;
                    /* try { // try from 0033e8f8 to 0033e8ff has its CatchHandler @ 0033ea10 */
  FUN_0038db00(plVar1);
  param_1[10] = 0;
  param_1[10] = *param_6;
  *param_6 = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  local_50 = 1000;
  local_38 = 120000;
  uStack_40 = _UNK_03cab608;
  local_48 = _DAT_03cab600;
                    /* try { // try from 0033e93c to 0033e943 has its CatchHandler @ 0033e9a0 */
  FUN_0034345c(param_1 + 0xd,&local_50);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = (long)PTR_LAB_047ccce0;
  param_1[0x1b] = (long)param_1;
  param_1[0x1c] = 0;
                    /* try { // try from 0033e958 to 0033e95f has its CatchHandler @ 0033e99c */
  FUN_0038db40(plVar1);
                    /* try { // try from 0033e960 to 0033e967 has its CatchHandler @ 0033e988 */
  FUN_0033ed9c(param_1);
                    /* try { // try from 0033e968 to 0033e96f has its CatchHandler @ 0033e984 */
  FUN_0038db60(plVar1);
  return;
}


