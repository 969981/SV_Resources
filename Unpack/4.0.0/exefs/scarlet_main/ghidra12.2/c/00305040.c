/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00305040; name: FUN_00305040
 */


int FUN_00305040(long param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = 2;
  if ((param_1 != 0) && (param_5 != (undefined8 *)0x0)) {
    __ptr = (undefined8 *)FUN_0038c7b0(0x160);
    iVar1 = FUN_00303860(__ptr,param_1,param_2,param_3 & 1,0,param_4 & 1);
    if (iVar1 == 0) {
      *__ptr = &PTR_FUN_04494568;
      *param_5 = __ptr;
    }
    else {
      free(__ptr);
    }
  }
  return iVar1;
}


