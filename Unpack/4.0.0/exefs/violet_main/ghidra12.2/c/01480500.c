/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01480500; name: FUN_01480500
 */


int FUN_01480500(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined2 local_14 [2];
  
  iVar7 = FUN_0131c054(*(undefined8 *)(param_2 + 0x70));
  lVar1 = 1;
  if (0x9f < iVar7) {
    lVar1 = 2;
  }
  lVar2 = 0;
  if (99 < iVar7) {
    lVar2 = lVar1;
  }
  iVar7 = *(int *)(param_3 + lVar2 * 4);
  if (0 < iVar7) {
    cVar4 = FUN_01400ba8(*(undefined8 *)(param_2 + 0x70));
    uVar5 = FUN_00e974e0(*(undefined8 *)(param_2 + 0x70));
    if (((*PTR_DAT_047d89b0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89b0), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047dcbf0,PTR_DAT_047d89b8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89b0);
    }
    puVar3 = PTR_DAT_047d90c8;
    iVar7 = iVar7 + (uint)(cVar4 == '\v' && (byte)(cVar4 - 1U) < 0x1a);
    *(undefined8 *)PTR_DAT_047d89c0 = *(undefined8 *)PTR_DAT_047d89b8;
    pcVar9 = *(code **)(*(long *)puVar3 + 0x250);
    if (pcVar9 != (code *)0x0) {
      local_14[0] = uVar5;
      sVar6 = (*pcVar9)(*(long *)puVar3 + 0x270,local_14);
      if (sVar6 == 0x5c) {
        return (int)((float)iVar7 * 1.5);
      }
      return iVar7;
    }
  }
  return iVar7;
}


