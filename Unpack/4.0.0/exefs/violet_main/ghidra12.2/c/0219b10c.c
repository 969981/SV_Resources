/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219b10c; name: FUN_0219b10c
 */


uint FUN_0219b10c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_38;
  
  puVar1 = PTR_DAT_047d4df8;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  puVar3 = PTR_DAT_047d4e08;
  puVar2 = PTR_DAT_047d4e00;
  uVar6 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar6;
  lVar7 = FUN_021901c4(uVar6,0);
  uVar4 = 0;
  if (lVar7 == 0) {
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    lVar7 = *(long *)puVar2;
    *(long *)puVar3 = lVar7;
    FUN_018be9dc(&local_38,lVar7 + 0xb090);
    uVar4 = FUN_0219b22c(local_38);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x60))();
    }
  }
  return uVar4 & 1;
}


