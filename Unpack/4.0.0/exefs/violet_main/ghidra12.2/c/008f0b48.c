/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0b48; name: FUN_008f0b48
 */


void FUN_008f0b48(long param_1,long param_2)

{
  (**(code **)PTR_DAT_047d2830)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 8),
             *(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x008f0b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2838)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 4),
             *(undefined8 *)(param_2 + 0x10));
  return;
}


