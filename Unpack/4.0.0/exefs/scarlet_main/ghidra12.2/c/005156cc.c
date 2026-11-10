/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005156cc; name: FUN_005156cc
 */


byte FUN_005156cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined6 uStack_58;
  undefined2 local_52;
  undefined4 uStack_50;
  char cStack_4c;
  undefined1 uStack_4b;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_0052cf70(auStack_90,param_2,param_3,0xffffffff);
  local_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  local_52 = 0;
  uStack_50 = 0;
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_3c = *(undefined4 *)PTR_DAT_047cdbc8;
  local_48 = DAT_03cb5618;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0x7fffffff;
                    /* try { // try from 00515720 to 00515727 has its CatchHandler @ 00515774 */
  local_60 = auStack_90;
  local_38 = uStack_3c;
  FUN_0052b5ac(&local_70);
                    /* try { // try from 00515728 to 00515733 has its CatchHandler @ 00515760 */
  bVar2 = FUN_0051556c(param_1,&local_70);
  bVar1 = cStack_4c != '\0';
  FUN_0052b444(&local_70);
  return bVar2 & bVar1;
}


