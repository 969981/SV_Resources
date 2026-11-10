/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298835c; name: FUN_0298835c
 */


void FUN_0298835c(long param_1,undefined4 param_2,undefined1 param_3,uint param_4)

{
  if ((param_4 < 0x12) && ((0x279ffU >> (ulong)(param_4 & 0x1f) & 1) != 0)) {
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,param_2,
                 *(undefined4 *)(&DAT_03d6a8c4 + (long)(int)param_4 * 4),param_3,0xffff0000);
    return;
  }
  return;
}


