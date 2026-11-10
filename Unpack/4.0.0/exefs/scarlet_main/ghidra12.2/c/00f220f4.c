/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f220f4; name: FUN_00f220f4
 */


void FUN_00f220f4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((*(long *)(param_2 + 0x70) != 0) && (lVar1 = FUN_007ec4a8(), lVar1 != 0)) {
    if (((10 < *(byte *)(param_2 + 0x78)) ||
        ((1 << (ulong)(*(byte *)(param_2 + 0x78) & 0x1f) & 0x736U) == 0)) &&
       (uVar2 = FUN_007efb98(*(undefined8 *)(param_2 + 0x70)), (uVar2 & 1) != 0)) {
      local_30[0] = 0;
      goto LAB_00f22144;
    }
  }
  local_30[0] = 0x10408;
LAB_00f22144:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


