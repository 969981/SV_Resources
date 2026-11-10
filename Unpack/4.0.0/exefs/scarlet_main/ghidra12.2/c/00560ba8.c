/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00560ba8; name: FUN_00560ba8
 */


void FUN_00560ba8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  FUN_01f6fa34(param_1);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    lVar1 = param_2 + 9;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x18);
  }
  thunk_FUN_027c1d20(param_1,&DAT_03c825d5,lVar1);
  thunk_FUN_01f70094(param_1,"ussid",*(undefined4 *)(param_2 + 0x48));
  thunk_FUN_01f70094(param_1,"ucsid",*(undefined4 *)(param_2 + 0x4c));
  thunk_FUN_01f70094(param_1,"upcsid",*(undefined4 *)(param_2 + 0x50));
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    param_2 = param_2 + 0x59;
  }
  else {
    param_2 = *(long *)(param_2 + 0x68);
  }
  thunk_FUN_027c1d20(param_1,&DAT_03c2630a,param_2);
  return;
}


