/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d15164; name: FUN_01d15164
 */


void FUN_01d15164(undefined1 *param_1,long param_2)

{
  undefined *local_198;
  undefined4 local_190;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined *local_40;
  undefined8 uStack_38;
  
  *param_1 = 1;
  local_198 = PTR_DAT_047cfd80 + 0x10;
  local_190 = *(undefined4 *)(param_2 + 8);
  FUN_01cfa5b0(auStack_188,param_2 + 0x10);
  local_168 = *(undefined4 *)(param_2 + 0x30);
  FUN_01cfa5b0(auStack_160,param_2 + 0x38);
  FUN_01cfa5b0(auStack_140,param_2 + 0x58);
  FUN_01cfa5b0(auStack_120,param_2 + 0x78);
  FUN_01cfa5b0(auStack_100,param_2 + 0x98);
  FUN_01cfa5b0(auStack_e0,param_2 + 0xb8);
  FUN_01cfa5b0(auStack_c0,param_2 + 0xd8);
  FUN_01cfa5b0(auStack_a0,param_2 + 0xf8);
  FUN_01cfa5b0(auStack_80,param_2 + 0x118);
  FUN_01cfa5b0(auStack_60,param_2 + 0x138);
  local_40 = PTR_DAT_047cfd88 + 0x10;
  uStack_38 = *(undefined8 *)(param_2 + 0x160);
  FUN_01d1540c(param_1 + 8,&local_198);
  FUN_01d08584(&local_198);
  return;
}


