/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6d118; name: FUN_00c6d118
 */


void FUN_00c6d118(long param_1,long param_2)

{
  byte bVar1;
  
  (**(code **)PTR_DAT_047d27b0)(*(undefined8 *)(param_1 + 0xb0));
  (**(code **)PTR_DAT_047d27b8)
            (*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x20),
             *(undefined4 *)(param_2 + 0x24),*(undefined8 *)(param_1 + 0xb0));
  (**(code **)PTR_DAT_047d27c0)(*(undefined8 *)(param_1 + 0xb0),param_2 + 4);
  bVar1 = *(byte *)(param_2 + 0x2d);
  if ((bVar1 & 1) != 0) {
    (**(code **)PTR_DAT_047d27c8)(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 0x1c));
    bVar1 = *(byte *)(param_2 + 0x2d);
  }
  (**(code **)PTR_DAT_047d27d0)(*(undefined8 *)(param_1 + 0xb0),(bVar1 >> 1 ^ 0xff) & 1);
  (**(code **)PTR_DAT_047d27d8)
            (*(undefined8 *)(param_1 + 0xb0),(*(byte *)(param_2 + 0x2d) >> 2 ^ 0xff) & 1);
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c6d210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d27e0)(*(undefined8 *)(param_1 + 0xb0),*(byte *)(param_2 + 0x2d) >> 3 & 1);
  return;
}


