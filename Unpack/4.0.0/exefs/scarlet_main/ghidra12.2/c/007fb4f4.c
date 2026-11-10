/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fb4f4; name: FUN_007fb4f4
 */


void FUN_007fb4f4(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_3 == 0) || (param_4 == 0)) {
LAB_007fb540:
    local_38[0] = 0x10407;
    goto LAB_007fb550;
  }
  lVar1 = FUN_007ec544();
  if (lVar1 == 0) {
    if (param_4 != 0) goto LAB_007fb540;
  }
  else if ((*(int *)(lVar1 + 0x34) + (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) * -2) -
           0x2a < param_4) goto LAB_007fb540;
  if (((*(long *)(param_2 + 0x68) != 0) && (lVar1 = FUN_007ec544(param_2), lVar1 != 0)) &&
     (lVar1 = FUN_007ec554(param_2), lVar1 != 0)) {
    lVar1 = FUN_007ec4a8(param_2);
    if (lVar1 == 0) {
      local_38[0] = 0x2c27;
      goto LAB_007fb550;
    }
    if (*(char *)(*(long *)PTR_DAT_047d0860 + 0xc0) != '\0') {
      local_38[0] = 0;
      goto LAB_007fb550;
    }
  }
  local_38[0] = 0x10408;
LAB_007fb550:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


