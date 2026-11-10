/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea4360; name: FUN_00ea4360
 */


void FUN_00ea4360(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  cVar1 = *param_2;
  if (cVar1 != '\x01') {
    if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
      if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
      goto LAB_00ea4438;
      goto LAB_00ea438c;
    }
    if (cVar1 != '\0') goto LAB_00ea4438;
  }
  if (*(long *)(param_2 + 8) == 0) {
LAB_00ea4438:
    FUN_00ca1a30(param_1);
    return;
  }
LAB_00ea438c:
  puVar3 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d38a8;
  *(undefined8 *)PTR_DAT_047d38b0 = uVar4;
  uVar4 = FUN_00ea45d0(uVar4,param_2);
  *puVar3 = uVar4;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)PTR_DAT_047d4710);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
}


