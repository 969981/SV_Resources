/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c1bcc; name: FUN_014c1bcc
 */


void FUN_014c1bcc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 local_68;
  long local_60 [4];
  undefined1 local_28 [4];
  uint local_24;
  
  puVar2 = PTR_DAT_047d7d30;
  if (*(long *)(param_1 + 0x40) != 0) {
    if (((*PTR_DAT_047d7d30 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    puVar4 = PTR_DAT_047d7d40;
    puVar3 = PTR_DAT_047d7d38;
    uVar8 = *(undefined8 *)PTR_DAT_047d7d38;
    *(undefined8 *)PTR_DAT_047d7d40 = uVar8;
    FUN_00c7c5fc(uVar8,0);
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar6 = FUN_00c7c5fc(uVar8,1);
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,2);
    uVar1 = uVar6 & 1 | 2;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6 & 1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,4);
    uVar6 = uVar1 | 4;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,8);
    uVar1 = uVar6 | 8;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x10);
    uVar6 = uVar1 | 0x10;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x20);
    uVar1 = uVar6 | 0x20;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x40);
    uVar6 = uVar1 | 0x40;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x80);
    uVar1 = uVar6 | 0x80;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x100);
    uVar6 = uVar1 | 0x100;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x200);
    uVar1 = uVar6 | 0x200;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x400);
    uVar6 = uVar1 | 0x400;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x800);
    uVar1 = uVar6 | 0x800;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x1000);
    uVar6 = uVar1 | 0x1000;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x2000);
    uVar1 = uVar6 | 0x2000;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x4000);
    uVar6 = uVar1 | 0x4000;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x8000);
    uVar1 = uVar6 | 0x8000;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x10000);
    uVar6 = uVar1 | 0x10000;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x20000);
    uVar1 = uVar6 | 0x20000;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x40000);
    uVar6 = uVar1 | 0x40000;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x80000);
    uVar1 = uVar6 | 0x80000;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x100000);
    uVar6 = uVar1 | 0x100000;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x200000);
    uVar1 = uVar6 | 0x200000;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x400000);
    uVar6 = uVar1 | 0x400000;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x800000);
    uVar1 = uVar6 | 0x800000;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x1000000);
    uVar6 = uVar1 | 0x1000000;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x2000000);
    uVar1 = uVar6 | 0x2000000;
    if ((uVar9 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x4000000);
    uVar6 = uVar1 | 0x4000000;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar1;
    }
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar8;
    uVar9 = FUN_00c7c5fc(uVar8,0x20000000);
    local_24 = uVar6 | 0x20000000;
    if ((uVar9 & 1) == 0) {
      local_24 = uVar6;
    }
    if (*(uint *)(param_1 + 0x48) != local_24) {
      FUN_016947d8(local_60);
      local_28[0] = 1;
      if (local_60[0] != 0) {
        FUN_014c27e0(&local_68,local_28,local_60[0] + 8);
        if (local_60[0] != 0) {
          FUN_014c2934(&local_68,&local_24,local_60[0] + 8);
        }
      }
      plVar11 = *(long **)(param_1 + 0x40);
      uVar8 = FUN_014c27b0(local_60);
      uVar10 = FUN_014c27c8(local_60);
      uVar9 = (**(code **)(*plVar11 + 0x70))(plVar11,uVar8,uVar10);
      if ((uVar9 & 1) != 0) {
        *(uint *)(param_1 + 0x48) = local_24;
        bVar5 = FUN_014c28b0();
        uVar6 = local_24;
        if (bVar5 < 4) {
          local_68 = FUN_014c2a70();
          FUN_014c2af0(param_1,uVar6,&local_68);
        }
      }
      FUN_01694aa8(local_60);
    }
  }
  return;
}


