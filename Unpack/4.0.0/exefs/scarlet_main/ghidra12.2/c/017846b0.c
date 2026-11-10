/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017846b0; name: FUN_017846b0
 */


void FUN_017846b0(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((*param_2 != '\x01') && (*param_2 != '\0')) || (*(long *)(param_2 + 8) == 0)) {
    FUN_00ca1a30(param_1);
    return;
  }
  puVar2 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar1 != 0))
  {
    FUN_00100190(&LAB_008f33e8,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  *(undefined8 *)PTR_DAT_047d38b0 = *(undefined8 *)PTR_DAT_047d38a8;
  uVar3 = FUN_017849d4();
  FUN_017847cc(uVar3,param_2);
  *puVar2 = uVar3;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_04519b8c);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
}


