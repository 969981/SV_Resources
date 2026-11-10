/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02986ce4; name: FUN_02986ce4
 */


void FUN_02986ce4(long param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  if ((byte)(param_4 - 1U) < 7) {
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,param_2,
                 *(undefined4 *)(&DAT_03d6a878 + (ulong)(byte)(param_4 - 1U) * 8),param_3,0xffff0000
                );
    return;
  }
  return;
}


