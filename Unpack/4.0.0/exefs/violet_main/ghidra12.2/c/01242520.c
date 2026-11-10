/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01242520; name: FUN_01242520
 */


void FUN_01242520(long param_1,void *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c0 [84];
  undefined8 local_6c;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined1 auStack_18 [8];
  
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  memcpy(auStack_c0,param_2,0x54);
  local_6c = *(undefined8 *)((long)param_2 + 0x54);
  local_64 = *(undefined1 *)((long)param_2 + 0x5c);
  FUN_01920f40(&local_60,(long)param_2 + 0x60);
  local_3c = *(undefined8 *)((long)param_2 + 0x84);
  uVar1 = FUN_012425a8(*(undefined8 *)(param_1 + 0x78));
  FUN_01254e9c(uVar1,auStack_18,auStack_c0);
  return;
}


