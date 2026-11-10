/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02467180; name: FUN_02467180
 */


void FUN_02467180(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (*param_2 == 0) {
    FUN_00ca1a30(param_1);
    return;
  }
  puVar2 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  *(undefined8 *)PTR_DAT_047d38b0 = *(undefined8 *)PTR_DAT_047d38a8;
  plVar3 = (long *)FUN_024673f4();
  *plVar3 = 0;
  *plVar3 = *param_2;
  *puVar2 = plVar3;
  FUN_024674d8(param_1);
  return;
}


