/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02984550; name: FUN_02984550
 */


void FUN_02984550(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  undefined4 local_8;
  undefined1 local_4;
  
  local_8 = (**(code **)(*param_2 + 0x98))(param_2);
  local_4 = 0xf;
  FUN_01461214(param_1);
  uVar1 = FUN_018776d0();
  FUN_018776d8(uVar1,auStack_28,&local_8);
  return;
}


