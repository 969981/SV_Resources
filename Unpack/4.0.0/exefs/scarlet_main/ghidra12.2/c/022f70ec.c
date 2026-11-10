/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f70ec; name: FUN_022f70ec
 */


ulong FUN_022f70ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = FUN_00e13858();
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00e13858(param_1,param_2);
    uVar2 = uVar2 >> 0x20;
  }
  return uVar2;
}


