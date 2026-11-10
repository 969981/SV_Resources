/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a52ac; name: FUN_004a52ac
 */


long FUN_004a52ac(undefined **param_1,byte *param_2)

{
  long lVar1;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  undefined **local_30;
  byte *pbStack_28;
  
  lVar1 = *(long *)(param_1[2] + 0x90);
  puStack_40 = PTR_LAB_047cd748;
  local_48 = lVar1;
  if (*(ulong *)(lVar1 + 0x58) != 0xffffffffffffffff) {
    local_30 = &puStack_40;
    pbStack_28 = (byte *)&local_48;
    local_38 = &local_30;
    std::__call_once((ulong *)(lVar1 + 0x58),&local_38,(_func_void_void_ptr *)&LAB_004c0770);
  }
  pbStack_28 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbStack_28 = param_2 + 1;
  }
  local_30 = param_1;
  lVar1 = FUN_004a33e0(lVar1 + 0x28,&local_30);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x43) != '\0')) {
    lVar1 = 0;
  }
  return lVar1;
}


