/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016664cc; name: FUN_016664cc
 */


void FUN_016664cc(void)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (((*PTR_DAT_047dd000 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd000);
  }
  *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
  piVar3 = (int *)FUN_01666488();
  if (piVar3 != (int *)0x0) {
    if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) {
      puVar5 = (uint *)0x0;
    }
    else {
      uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5];
      puVar5 = (uint *)0x0;
      if (uVar4 != 0) {
        puVar5 = (uint *)((long)piVar3 + uVar4);
        puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      }
    }
    uVar7 = *puVar5;
    if (uVar7 != 0) {
      uVar4 = 0;
      puVar6 = puVar5 + 2;
      do {
        uVar8 = (ulong)puVar6[-1];
        lVar10 = uVar8 - (long)*(int *)((long)puVar6 + (uVar8 - 4));
        uVar1 = *(ushort *)((long)puVar6 + lVar10 + -4);
        if (4 < uVar1) {
          iVar2 = 0;
          if ((ulong)*(ushort *)((long)puVar6 + lVar10) != 0) {
            iVar2 = *(int *)((long)puVar6 + uVar8 + *(ushort *)((long)puVar6 + lVar10) + -4);
          }
          if ((6 < uVar1) && (uVar9 = (ulong)*(ushort *)((long)puVar6 + lVar10 + 2), uVar9 != 0)) {
            lVar10 = uVar8 + uVar9;
            *(ulong *)(&DAT_048413e8 + (long)iVar2 * 8) =
                 (long)puVar6 + lVar10 + (ulong)*(uint *)((long)puVar6 + lVar10 + -4);
            uVar7 = *puVar5;
          }
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar4 < uVar7);
    }
  }
  return;
}


