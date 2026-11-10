/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01633028; name: FUN_01633028
 */


void FUN_01633028(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char cVar5;
  ulong uVar6;
  
  uVar1 = *(undefined2 *)param_3[1];
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940);
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar3;
  piVar4 = (int *)FUN_00cf60cc(uVar3,uVar1);
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) {
    cVar5 = '\0';
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
    cVar5 = '\0';
    if (uVar6 != 0) {
      cVar5 = *(char *)((long)piVar4 + uVar6);
    }
  }
  if (*(char *)((long)param_3 + 0x24) == '\0') {
    if ((cVar5 == '\x04') || (cVar5 == '\b')) {
      FUN_01893664(param_1,param_3[1],param_3[2],param_3[3]);
      return;
    }
    if (cVar5 == '\x06') {
      FUN_014807b0(param_1,*param_3,param_3[1],param_3[2],param_3[3]);
      return;
    }
  }
  return;
}


