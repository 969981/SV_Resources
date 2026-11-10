/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051563c; name: FUN_0051563c
 */


byte FUN_0051563c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined2 local_42;
  undefined4 uStack_40;
  char cStack_3c;
  undefined1 uStack_3b;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_2c = *(undefined4 *)PTR_DAT_047cdbc8;
  local_42 = 0;
  uStack_40 = 0;
  cStack_3c = '\0';
  uStack_3b = 0;
  local_38 = DAT_03cb5618;
  local_30 = 0x7fffffff;
  local_20 = 0;
  uStack_18 = 0;
  local_50 = param_2;
  local_28 = uStack_2c;
  FUN_0052b5ac(&local_60);
                    /* try { // try from 00515684 to 0051568f has its CatchHandler @ 005156b8 */
  bVar2 = FUN_0051556c(param_1,&local_60);
  bVar1 = cStack_3c != '\0';
  FUN_0052b444(&local_60);
  return bVar2 & bVar1;
}


