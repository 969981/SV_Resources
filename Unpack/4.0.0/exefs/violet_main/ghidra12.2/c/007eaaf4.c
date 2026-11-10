/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007eaaf4; name: FUN_007eaaf4
 */


void FUN_007eaaf4(undefined8 param_1)

{
  undefined1 local_d0 [128];
  
  nn::util::VSNPrintf(&DAT_047fb240,0x200,param_1,local_d0 + 0x80);
  if (*(code **)PTR_DAT_047d14d0 != (code *)0x0) {
    (**(code **)PTR_DAT_047d14d0)(&DAT_047fb240);
  }
  return;
}


