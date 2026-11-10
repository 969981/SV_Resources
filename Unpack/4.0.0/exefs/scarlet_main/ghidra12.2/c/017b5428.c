/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b5428; name: FUN_017b5428
 */


void FUN_017b5428(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 local_8;
  undefined1 local_6;
  undefined4 local_4;
  
  local_4 = param_4;
  uVar1 = FUN_017b5480(param_3,*param_2,param_2[1],&local_4);
  local_8 = (undefined2)uVar1;
  *param_1 = 1;
  local_6 = (undefined1)((ulong)uVar1 >> 0x10);
  FUN_017b57c8(param_1 + 8,&local_8);
  return;
}


