/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7ee44; name: FUN_01e7ee44
 */


void FUN_01e7ee44(undefined8 *param_1)

{
  undefined1 auStack_8 [8];
  
  FUN_01e7ed84(auStack_8);
  (*(code *)*param_1)(param_1 + 4,auStack_8);
  FUN_01e7ee80(auStack_8);
  return;
}


