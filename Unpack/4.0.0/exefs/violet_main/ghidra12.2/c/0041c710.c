/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0041c710; name: FUN_0041c710
 */


void FUN_0041c710(long param_1,undefined8 param_2)

{
  undefined1 auStack_198 [40];
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [80];
  byte local_f8 [31];
  byte local_d9;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  char local_40 [32];
  
  FUN_004768d0(param_2,0x20,local_f8);
  local_f8[0] = local_f8[0] & 0xf8;
  local_d9 = local_d9 & 0x3f | 0x40;
  FUN_00419600(auStack_198,local_f8);
  FUN_00420f00(auStack_68,auStack_148);
  FUN_00421730(auStack_90,auStack_198,auStack_68);
  FUN_00421730(auStack_b8,auStack_170,auStack_68);
  FUN_00421ab0(param_1,auStack_b8);
  FUN_00421ab0(local_40,auStack_90);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_40[0] << 7;
  FUN_00453300(local_f8,0x40);
  return;
}


