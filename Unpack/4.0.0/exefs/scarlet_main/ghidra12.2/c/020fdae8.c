/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020fdae8; name: FUN_020fdae8
 */


undefined8 FUN_020fdae8(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong local_40;
  undefined4 local_38;
  
  uVar3 = (uint)*(byte *)(*(long *)(param_1 + 0xf8) + (ulong)*(byte *)(param_1 + 0x11c));
  if (uVar3 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xf8) + (ulong)*(byte *)(param_1 + 0x11c) * 4 + 8);
    uVar2 = FUN_020fdb7c(param_1,uVar1);
    if (-1 < (int)uVar2) {
      local_40 = (ulong)((uVar2 & 0xf) << 0xc | uVar3 << 0x10 |
                         (uint)*(byte *)(param_1 + 0x11c) << 4 | 4);
      local_38 = uVar1;
      goto LAB_020fdb54;
    }
  }
  local_38 = 0;
  local_40 = 0;
LAB_020fdb54:
  FUN_0132746c(param_1,&local_40,0x10);
  return 1;
}


