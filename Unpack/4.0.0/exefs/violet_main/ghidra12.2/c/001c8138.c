/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8138; name: FUN_001c8138
 */


undefined8 FUN_001c8138(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = (param_2 & 0xf00000) - 0x100000 >> 0x14;
    if (uVar1 < 6) {
                    /* WARNING: Jumptable with 0 entries at 0x001c81c4 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&UNK_001c81c8 + (ulong)(byte)(&DAT_03cc048c)[uVar1] * 4))();
      return uVar2;
    }
  }
  return 0x30;
}


