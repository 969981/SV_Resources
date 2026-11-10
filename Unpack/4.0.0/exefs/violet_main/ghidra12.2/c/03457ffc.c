/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03457ffc; name: FUN_03457ffc
 */


undefined8 FUN_03457ffc(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (param_1 & 0xff00) - 0x100 >> 8;
  if (uVar1 < 0x30) {
                    /* WARNING: Jumptable with 0 entries at 0x03458024 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_03458028 + (ulong)(byte)(&DAT_03d97efe)[uVar1] * 4))();
    return uVar2;
  }
  return 0;
}


