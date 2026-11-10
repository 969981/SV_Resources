/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081b0b4; name: FUN_0081b0b4
 */


undefined8 FUN_0081b0b4(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  byte local_90 [16];
  undefined8 local_80;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_24 [2];
  char local_18 [4];
  undefined1 auStack_14 [4];
  
  uVar2 = FUN_00819784(param_2,auStack_14);
  if ((((uVar2 & 1) == 0) || (uVar2 = FUN_00819784(param_2,local_18), (uVar2 & 1) == 0)) ||
     (uVar2 = FUN_0081981c(param_2,local_24), (uVar2 & 1) == 0)) {
LAB_0081b224:
    uVar4 = 0;
  }
  else {
    if (local_18[0] == '\x02') {
      if ((*(short *)(param_1 + 10) != 0x14) ||
         (uVar2 = FUN_008197bc(param_2,&local_a0,0x10), (uVar2 & 1) == 0)) goto LAB_0081b224;
      local_40 = 0x1c;
      local_48 = PTR_DAT_047d1908 + 0x10;
      uStack_34 = (undefined4)uStack_98;
      uStack_30 = (undefined4)((ulong)uStack_98 >> 0x20);
      local_3c = local_a0;
      uStack_38 = uStack_9c;
                    /* try { // try from 0081b1c0 to 0081b1cb has its CatchHandler @ 0081b23c */
      FUN_008188bc(local_90,&local_48,local_24[0]);
                    /* try { // try from 0081b1d0 to 0081b1e3 has its CatchHandler @ 0081b248 */
      FUN_008188fc(param_1 + 0x10,local_90);
      lVar3 = FUN_00818948(param_1 + 0x10);
    }
    else {
      if (((local_18[0] != '\x01') || (*(short *)(param_1 + 10) != 8)) ||
         (uVar2 = FUN_008197bc(param_2,&local_a0,4), (uVar2 & 1) == 0)) goto LAB_0081b224;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      local_48 = PTR_DAT_047d1908 + 0x10;
      local_40 = 2;
      local_3c = local_a0;
                    /* try { // try from 0081b154 to 0081b15f has its CatchHandler @ 0081b240 */
      FUN_008188bc(local_90,&local_48,local_24[0]);
                    /* try { // try from 0081b164 to 0081b177 has its CatchHandler @ 0081b24c */
      FUN_008188fc(param_1 + 0x10,local_90);
      lVar3 = FUN_00818948(param_1 + 0x10);
    }
    uVar5 = 0x14;
    if (*(int *)(lVar3 + 8) != 0x1c) {
      uVar5 = 0;
    }
    uVar1 = 8;
    if (*(int *)(lVar3 + 8) != 2) {
      uVar1 = uVar5;
    }
    *(undefined2 *)(param_1 + 10) = uVar1;
    if ((local_90[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
    uVar4 = 1;
  }
  return uVar4;
}


