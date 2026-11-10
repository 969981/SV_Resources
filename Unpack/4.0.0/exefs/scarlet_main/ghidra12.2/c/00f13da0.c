/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f13da0; name: FUN_00f13da0
 */


int FUN_00f13da0(undefined2 param_1,undefined2 param_2,uint param_3)

{
  undefined *puVar1;
  int *piVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined *local_70;
  undefined2 local_68;
  undefined2 local_66;
  
  puVar6 = PTR_DAT_047da7d0;
  puVar5 = PTR_DAT_047da7c8;
  puVar4 = PTR_DAT_047da7c0;
  lVar12 = 1;
  puVar1 = PTR_DAT_047d8ee0 + 0x10;
  while( true ) {
    local_70 = puVar1;
    local_68 = param_1;
    local_66 = param_2;
    bVar7 = FUN_00c860e0(&local_70);
    if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047da7d8,puVar5,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar4);
    }
    lVar11 = *(long *)puVar5;
    *(long *)puVar6 = lVar11;
    puVar9 = (uint *)(**(code **)(**(long **)(lVar11 + 0x30) + 0x70))();
    if (puVar9 == (uint *)0x0) {
      uVar10 = 1;
    }
    else {
      piVar2 = (int *)((long)puVar9 + (ulong)*puVar9);
      bVar3 = 0;
      if (bVar7 < 9) {
        bVar3 = bVar7;
      }
      uVar10 = *(uint *)((long)piVar2 +
                        lVar12 * 4 +
                        (ulong)bVar3 * 0x194 +
                        (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
    }
    if (param_3 < uVar10) break;
    lVar12 = lVar12 + 1;
    if (lVar12 == 0x65) {
      return 100;
    }
  }
  if (((uint)lVar12 & 0xff) < 2) {
    return 1;
  }
  return (uint)lVar12 - 1;
}


