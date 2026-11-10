/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014911dc; name: FUN_014911dc
 */


void FUN_014911dc(long param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 auStack_c0 [12];
  
  if ((*(long *)(param_1 + 0x120) != 0) && (0 < *(int *)(param_1 + 0x1b0))) {
    iVar7 = 0;
    do {
      uVar3 = FUN_00d4fa5c(param_1,iVar7);
      plVar4 = (long *)FUN_00cb7028(param_1,uVar3);
      lVar6 = *plVar4;
      uVar1 = *(uint *)(lVar6 + 0x158);
      if (0 < (int)uVar1) {
        lVar9 = 0;
        uVar8 = 0;
        while( true ) {
          lVar6 = *(long *)(lVar6 + 0xd0) + lVar9;
          FUN_00ff58b0(*(undefined8 *)(param_1 + 0x120),lVar6,uVar8 & 0xffffffff);
          plVar5 = (long *)FUN_0277e158(*(undefined8 *)(param_1 + 0x120),lVar6);
          if (*plVar5 != 0) {
            FUN_0277e500(*plVar5,DAT_0485a0d8 + 0x38);
          }
          plVar5 = (long *)FUN_0277e158(*(undefined8 *)(param_1 + 0x120),lVar6);
          if (*plVar5 != 0) {
            local_e0 = &LAB_02bd83ac;
            local_d8 = FUN_02bd83d0;
            local_d0 = &LAB_02bd83d4;
            local_c8 = &LAB_02bd83e0;
            auStack_c0[0] = param_2;
            FUN_00c42e90(*plVar5,&local_e0);
            pcVar2 = local_d8;
            if (local_d8 != (code *)0x0) {
              local_d0 = (undefined1 *)0x0;
              local_c8 = (undefined1 *)0x0;
              local_e0 = (undefined1 *)0x0;
              local_d8 = (code *)0x0;
              (*pcVar2)(auStack_c0);
            }
          }
          if ((ulong)uVar1 - 1 == uVar8) break;
          lVar6 = *plVar4;
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 8;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x1b0));
  }
  return;
}


