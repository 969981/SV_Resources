/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003895e0; name: FUN_003895e0
 */


void FUN_003895e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not emulate address calculation at 0x00389608 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00389620 +
            (ulong)*(ushort *)(&DAT_03cdb716 + (ulong)(*(byte *)(param_4 + 10) - 1) * 2) * 4))
            (param_2);
  return;
}


