/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a31cc; name: FUN_007a31cc
 */


void FUN_007a31cc(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 != (undefined1 *)0x0) {
    *(undefined1 *)(param_2 + 8) = *param_3;
    *(undefined1 *)(param_2 + 9) = param_3[1];
    *(ushort *)(param_2 + 10) = *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8;
    if (3 < param_4) {
      local_28[0] = 0;
      goto LAB_007a3218;
    }
  }
  local_28[0] = 0x10407;
LAB_007a3218:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


