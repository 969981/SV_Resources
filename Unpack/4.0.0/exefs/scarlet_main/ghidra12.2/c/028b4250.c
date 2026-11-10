/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b4250; name: FUN_028b4250
 */


void FUN_028b4250(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_8;
  
  local_30 = param_4;
  local_24 = param_3;
  local_8 = param_2;
  if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  uVar2 = FUN_028b42e4(DAT_04859430,&local_8,&local_24,&local_30);
  FUN_028b44d4(param_1,uVar2);
  return;
}


