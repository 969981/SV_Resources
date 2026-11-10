/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00138700; name: FUN_00138700
 */


undefined * FUN_00138700(long param_1,int param_2)

{
  undefined *puVar1;
  
  if (0xff < param_2) {
    if (param_2 < 0x120) {
      puVar1 = (undefined *)
               FUN_0012e860(*(undefined8 *)(param_1 + 0x38),&DAT_03c16014,
                            (&PTR_DAT_04483148)[param_2 - 0x100]);
      return puVar1;
    }
    return (&PTR_DAT_04483148)[param_2 - 0x100];
  }
  if (((byte)(&DAT_03cb5f2b)[param_2] >> 2 & 1) == 0) {
    puVar1 = (undefined *)FUN_0012e860(*(undefined8 *)(param_1 + 0x38),"\'<\\%d>\'");
    return puVar1;
  }
  puVar1 = (undefined *)FUN_0012e860(*(undefined8 *)(param_1 + 0x38),&DAT_03c1600f);
  return puVar1;
}


