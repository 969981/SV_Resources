/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f0700; name: FUN_017f0700
 */


ulong FUN_017f0700(undefined4 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar3;
  piVar4 = (int *)FUN_00cf60cc(uVar3,param_1);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar7 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)*(byte *)((long)piVar4 + uVar7);
  }
  plVar8 = param_2 + 5;
  plVar5 = (long *)(**(code **)*plVar8)(plVar8);
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar2 != 0))
  {
    uVar3 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar3;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return uVar7;
    }
    if (plVar5 == (long *)PTR_DAT_047d3f08) break;
    plVar5 = (long *)*plVar5;
  }
  uVar6 = (**(code **)(*param_2 + 0x5b0))();
  lVar1 = 0x6ee;
  if ((uVar6 & 1) == 0) {
    lVar1 = 0x6e8;
  }
  if (*(short *)((long)plVar8 + lVar1) != 0x3f3) {
    return uVar7;
  }
  if ((ulong)*(ushort *)(param_2 + 0xe3) < 8) {
    return 0x5090a0b05090a0b >> (((ulong)*(ushort *)(param_2 + 0xe3) & 7) << 3);
  }
  return uVar7;
}


