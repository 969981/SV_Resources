/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01282188; name: FUN_01282188
 */


int FUN_01282188(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  if (**(char **)(param_1 + 8) == '\0') {
    iVar2 = 0;
  }
  else {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar5 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar5;
    if (*(long *)(lVar5 + 0x48) == 0) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = FUN_00cf8198();
    }
    memset(&local_b0,0,0x80);
    plVar4 = *(long **)(*(long *)(lVar5 + 0x200) + 0x60);
    iVar2 = (**(code **)(*plVar4 + 0xd0))
                      (plVar4,*(undefined8 *)(param_1 + 8),uVar3,1,&LAB_01080c70,lVar5,0,0,0);
    if (iVar2 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar5 + 0x220),param_1,iVar2,uVar3,0,&local_b0,0);
      pcVar1 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar1)(auStack_90);
      }
    }
  }
  return iVar2;
}


