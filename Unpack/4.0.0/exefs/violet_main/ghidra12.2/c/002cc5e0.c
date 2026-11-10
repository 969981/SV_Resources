/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cc5e0; name: FUN_002cc5e0
 */


void FUN_002cc5e0(undefined8 *param_1,byte *param_2)

{
  bool bVar1;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  ulong uStack_28;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e) = 1;
  param_1[4] = 0x800000;
  param_1[5] = 0x100000000;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x18] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_30 = *(byte **)(param_2 + 0x10);
  bVar1 = (*param_2 & 1) == 0;
  if (bVar1) {
    local_30 = param_2 + 1;
  }
  uStack_28 = (ulong)(*param_2 >> 1);
  if (!bVar1) {
    uStack_28 = *(ulong *)(param_2 + 8);
  }
  local_48 = 1;
  local_44 = 0;
  local_42 = 1;
  local_40 = 0x800000;
  uStack_38 = 0x100000000;
                    /* try { // try from 002cc660 to 002cc66b has its CatchHandler @ 002cc67c */
  FUN_002cbfcc(param_1,&local_30,&local_48);
  return;
}


