/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b1654c; name: FUN_00b1654c
 */


void FUN_00b1654c(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  short sVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_48;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  plVar1 = *(long **)(lVar6 + 0x1c8);
  plVar3 = *(long **)(lVar6 + 0x1c0);
  do {
    if (plVar3 == plVar1) {
      return;
    }
    lVar6 = *plVar3;
    uVar5 = FUN_00a371b8(lVar6 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar5 & 1) == 0);
  sVar2 = *(short *)(param_3 + 0x138);
  if (sVar2 == 0xe) {
    lVar7 = *param_2;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    FUN_00b166cc(param_1,lVar6,param_2);
    sVar2 = *(short *)(param_3 + 0x138);
  }
  if (((sVar2 == 0xf) && (*(long *)(lVar6 + 0xb70) == 0)) && (*(int *)(lVar6 + 0xb7c) == -1)) {
    FUN_00b16fd0(lVar6,param_2);
    memset((void *)(lVar6 + 0xb80),0xff,0x54);
    *(undefined8 *)(lVar6 + 0xbf8) = 0;
    *(undefined8 *)(lVar6 + 0xbf0) = 0;
    *(undefined8 *)(lVar6 + 0xbe8) = 0;
    *(undefined8 *)(lVar6 + 0xbe0) = 0;
    *(undefined2 *)(lVar6 + 0xc00) = *(undefined2 *)(*(long *)(*(long *)(lVar6 + 0xb00) + 0x10) + 8)
    ;
    if (DAT_04835610 != (code *)0x0) {
      local_48 = *(undefined8 *)(lVar6 + 0xb70);
      (*DAT_04835610)(&DAT_04835630,&local_48);
    }
  }
  return;
}


