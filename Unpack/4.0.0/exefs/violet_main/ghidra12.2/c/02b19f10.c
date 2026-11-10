/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b19f10; name: FUN_02b19f10
 */


undefined1 FUN_02b19f10(short param_1,long *param_2,ulong param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  uVar1 = FUN_0210cdd0();
  uVar6 = uVar1;
  if (param_1 == 0x30f) {
    uVar3 = (**(code **)(*param_2 + 0x90))(param_2,0x36d,1);
    uVar6 = 0x10;
    if ((uVar3 & 1) == 0) {
      uVar6 = uVar1;
    }
  }
  plVar4 = (long *)(**(code **)param_2[5])(param_2 + 5);
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar2 != 0))
  {
    uVar5 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar5;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return uVar6;
    }
    if (plVar4 == (long *)PTR_DAT_047d3f08) break;
    plVar4 = (long *)*plVar4;
  }
  if (((*(char *)((long)param_2 + 0x714) != '\0') && (*(char *)((long)param_2 + 0x715) == 'c')) ||
     (((param_3 & 1) != 0 && (*(char *)((long)param_2 + 0x715) == 'c')))) {
    if (param_1 == 0x353) {
      return 99;
    }
    if (param_1 != 0x38a) {
      return uVar6;
    }
    uVar3 = (**(code **)(*param_2 + 0x88))(param_2,0x3fd);
    uVar1 = 99;
    if ((uVar3 & 1) == 0) {
      uVar1 = uVar6;
    }
    return uVar1;
  }
  if (param_1 != 0x353) {
    return uVar6;
  }
  if (*(char *)((long)param_2 + 0x714) == '\0' && (param_3 & 1) == 0) {
    return uVar6;
  }
  return *(undefined1 *)((long)param_2 + 0x715);
}


