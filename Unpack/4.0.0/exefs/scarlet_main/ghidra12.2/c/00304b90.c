/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00304b90; name: FUN_00304b90
 */


int FUN_00304b90(long param_1,undefined8 param_2,uint param_3,uint param_4,byte param_5,
                undefined8 *param_6)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  
  iVar1 = 2;
  if ((param_1 != 0) && (param_6 != (undefined8 *)0x0)) {
    __ptr = (undefined8 *)FUN_0038c7b0(0x298);
    iVar1 = FUN_00303860(__ptr,param_1,param_2,param_3 & 1,1,param_4 & 1);
    if (iVar1 == 0) {
      *(byte *)(__ptr + 0x2c) = param_5 & 1;
      FUN_00368450(__ptr + 0x2d);
      uVar2 = FUN_0038c780(__ptr[0x29]);
      __ptr[0x52] = uVar2;
      *__ptr = &PTR_LAB_04494550;
      *param_6 = __ptr;
    }
    else {
      free(__ptr);
    }
  }
  return iVar1;
}


