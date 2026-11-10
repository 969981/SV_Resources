/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b0234; name: FUN_033b0234
 */


void FUN_033b0234(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *local_170;
  undefined4 local_168;
  int local_164;
  undefined1 local_160 [128];
  undefined4 local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  undefined1 local_c8 [128];
  undefined4 local_48;
  
  local_c8[0] = 0;
  local_d8 = local_c8;
  local_d0 = 0x8000008000000001;
  local_48 = 1;
  if (param_3 == 0) {
    puVar2 = &DAT_03be61b3;
  }
  else {
    puVar2 = (undefined *)FUN_031e12d8(param_3,&local_d8,0,0);
  }
  local_170 = local_160;
  local_168 = 1;
  local_164 = -0x7fffff80;
  local_e0 = 1;
  local_160[0] = 0;
  FUN_031c6c18(&local_170,"<%s id=\"type%u\" /> <!-- %s -->",param_2,param_4,puVar2);
  FUN_033adeb8(param_1,local_170);
  local_168 = 0;
  if ((-1 < local_164) && (local_170 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  uVar1 = local_d0;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((-1 < (long)uVar1) && (local_d8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
}


