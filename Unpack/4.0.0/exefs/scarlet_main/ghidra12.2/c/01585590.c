/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01585590; name: FUN_01585590
 */


void FUN_01585590(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  cVar1 = *param_2;
  if (cVar1 != '\x02') {
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      if (*(long *)(param_2 + 8) == 0) goto LAB_01585654;
      goto LAB_015855cc;
    }
    if (cVar1 != '\x03') goto LAB_01585654;
  }
  if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0)) {
LAB_01585654:
    FUN_00ca1a30(param_1);
    return;
  }
LAB_015855cc:
  puVar3 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar2 != 0))
  {
    FUN_00100190(&LAB_008f33e8,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d38a8;
  *(undefined8 *)PTR_DAT_047d38b0 = uVar4;
  uVar4 = FUN_015856b8(uVar4,param_2);
  *puVar3 = uVar4;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)PTR_DAT_047d39f8);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
}


