/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00385610; name: FUN_00385610
 */


bool FUN_00385610(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  int iVar2;
  long local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  __jmp_buf_tag _Stack_168;
  
  local_180 = param_1 + param_2;
  local_170 = DAT_03cb5590;
  uStack_178 = param_5;
  iVar2 = setjmp(&_Stack_168);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      bVar1 = true;
    }
    else {
      FUN_003856a0(&local_180,param_1,param_3,param_4);
      bVar1 = local_170._4_4_ == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


