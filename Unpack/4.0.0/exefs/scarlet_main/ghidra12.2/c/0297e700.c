/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297e700; name: FUN_0297e700
 */


void FUN_0297e700(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  FUN_010ab500(&local_30);
  local_30 = (ulong)param_2[3] << 0x3c |
             (local_30 & 0xffff000f0000000 |
              ((ulong)*param_2 & 0xf) << 4 | ((ulong)param_2[1] & 0xf) << 8 |
              ((ulong)param_2[2] & 0xf) << 0xc | ((ulong)*(ushort *)(param_2 + 4) & 0xfff) << 0x10 |
             (ulong)*(ushort *)(param_2 + 6) << 0x20) & 0xffffffffff0 |
             ((ulong)*(ushort *)(param_2 + 8) & 0xfff) << 0x2c |
             (ulong)(*(ushort *)(param_2 + 10) & 0xf) << 0x38 | 0xd;
  uVar1 = FUN_01243584(param_1);
  FUN_0297e980(uVar1,local_30 & 0xffffffff,local_30._4_4_);
  return;
}


