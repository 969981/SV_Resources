/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00792d78; name: FUN_00792d78
 */


void FUN_00792d78(undefined1 *param_1,long param_2,char param_3)

{
  uint uVar1;
  undefined1 auStack_30 [16];
  uint local_18 [2];
  
  if (param_3 == '\x02') {
    local_18[0] = 0;
    FUN_0078a244(auStack_30,param_2,local_18);
    param_1[1] = 2;
    uVar1 = (local_18[0] & 0xff00ff00) >> 8 | (local_18[0] & 0xff00ff) << 8;
    *(uint *)(param_1 + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
    *param_1 = 0x10;
    *(ushort *)(param_1 + 2) = *(ushort *)(param_2 + 0x18) >> 8 | *(ushort *)(param_2 + 0x18) << 8;
  }
  return;
}


