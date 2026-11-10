/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294172c; name: FUN_0294172c
 */


void FUN_0294172c(undefined8 param_1,undefined1 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_01249340();
  uVar2 = FUN_0291c76c(uVar1,*param_3);
  if ((uVar2 & 1) != 0) {
    *param_2 = 1;
  }
  return;
}


