/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f1bcc; name: FUN_021f1bcc
 */


void FUN_021f1bcc(long param_1,undefined4 param_2)

{
  short sVar1;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if (sVar1 == 0x39) {
    FUN_00eec030(*(undefined8 *)(param_1 + 0x70),param_2);
    return;
  }
  return;
}


