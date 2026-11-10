/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d11548; name: FUN_01d11548
 */


void FUN_01d11548(undefined1 *param_1,long param_2)

{
  undefined *local_88;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_88 = PTR_DAT_047cfc88;
  *param_1 = 1;
  local_88 = local_88 + 0x10;
  FUN_01cfa5b0(auStack_80,param_2 + 8);
  FUN_01cfa5b0(auStack_60,param_2 + 0x28);
  local_40 = *(undefined8 *)(param_2 + 0x48);
  uStack_38 = *(undefined8 *)(param_2 + 0x50);
  FUN_01d11700(param_1 + 8,&local_88);
  FUN_01d04fb4(&local_88);
  return;
}


