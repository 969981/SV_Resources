/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e7efc; name: FUN_020e7efc
 */


void FUN_020e7efc(long param_1,ulong param_2)

{
  if (((uint)param_2 & 0xff) < 4) {
    FUN_00eee5f0(*(undefined8 *)(param_1 + 0x70),param_2,0);
    FUN_00eee290(*(undefined8 *)(param_1 + 0x70),param_2 & 0xffffffff,0);
    FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),param_2 & 0xffffffff,0);
    return;
  }
  return;
}


