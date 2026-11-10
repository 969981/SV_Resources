/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f16b4; name: FUN_008f16b4
 */


void FUN_008f16b4(undefined8 param_1,undefined4 *param_2)

{
  (**(code **)PTR_DAT_047d2be0)();
  (**(code **)PTR_DAT_047d2bf0)(param_1,*param_2);
                    /* WARNING: Could not recover jumptable at 0x008f1710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2be8)(param_1,*(undefined8 *)(param_2 + 2),param_2[1]);
  return;
}


