/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01736d50; name: FUN_01736d50
 */


void FUN_01736d50(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  cVar1 = *param_2;
  if (cVar1 != '\x03') {
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      if (*(long *)(param_2 + 8) == 0) goto LAB_01736e10;
      goto LAB_01736d8c;
    }
    if (cVar1 != '\x02') goto LAB_01736e10;
  }
  if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0)) {
LAB_01736e10:
    FUN_00ca1a30(param_1);
    return;
  }
LAB_01736d8c:
  puVar3 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  *(undefined8 *)PTR_DAT_047d38b0 = *(undefined8 *)PTR_DAT_047d38a8;
  uVar4 = FUN_01736ef8();
  FUN_01736e98(uVar4,param_2);
  *puVar3 = uVar4;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045cb6e8);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
}


