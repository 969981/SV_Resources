/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324e0d0; name: FUN_0324e0d0
 */


void FUN_0324e0d0(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *local_170;
  ulong local_168;
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
  FUN_0324ddd0(param_1,param_2,&local_d8);
  local_170 = local_160;
  local_160[0] = 0;
  local_e0 = 1;
  local_168 = 0x8000008000000001;
  FUN_0324ddd0(param_1 + 0x10,param_2 & 0xffffffff,&local_170);
  puVar1 = &DAT_03c886bc;
  if (*(char *)(param_1 + 0x20) != '\0') {
    puVar1 = &DAT_03c00d64;
  }
  FUN_031c6c18(param_3,"%s%s/%s",puVar1,local_d8,local_170);
  uVar2 = local_168;
  local_168 = local_168 & 0xffffffff00000000;
  if ((-1 < (long)uVar2) && (local_170 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  uVar2 = local_d0;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((-1 < (long)uVar2) && (local_d8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
}


