/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024d6ec4; name: FUN_024d6ec4
 */


void FUN_024d6ec4(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
  FUN_024da584(auStack_80,param_3,*param_2,param_2[1]);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x30);
  FUN_024d212c(param_1 + 8,auStack_50);
  return;
}


