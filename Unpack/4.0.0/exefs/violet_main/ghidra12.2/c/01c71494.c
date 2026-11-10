/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c71494; name: FUN_01c71494
 */


void FUN_01c71494(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  pcVar1 = (code *)*param_2;
  FUN_01827b8c(param_3);
  (*pcVar1)(auStack_30);
  FUN_01c5d1d0(param_1,auStack_30);
  FUN_01c5d228(auStack_30);
  return;
}


