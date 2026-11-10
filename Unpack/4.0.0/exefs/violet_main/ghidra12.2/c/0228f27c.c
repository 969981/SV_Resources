/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0228f27c; name: FUN_0228f27c
 */


void FUN_0228f27c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = FUN_02294aec;
  if (DAT_04843b80 == '\0') {
    pcVar1 = (code *)0x0;
  }
  uVar2 = FUN_02294d00(param_2);
  FUN_02294db4(param_1,pcVar1,0,uVar2);
  return;
}


