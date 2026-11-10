/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6c57c; name: FUN_00f6c57c
 */


void FUN_00f6c57c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_00f6c63c(param_1 + 0x10);
  if ((((**(char **)(param_2 + 0x10) == '\0') || (**(char **)(param_2 + 0x30) == '\0')) ||
      (**(char **)(param_2 + 0x50) == '\0')) || (**(char **)(param_2 + 0x70) == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00f6bf24(param_1);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                    (*(long **)(param_1 + 0x10),param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  *(ulong *)(param_1 + 0xf0) =
       CONCAT44((int)((ulong)uVar1 >> 0x20),(float)uVar1 + *(float *)(param_1 + 0xe0) * 0.5);
                    /* WARNING: Could not recover jumptable at 0x00f6c638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x70))(*(long **)(param_1 + 0x10),param_1 + 0x18,1);
  return;
}


