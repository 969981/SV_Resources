/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a7ca88; name: FUN_01a7ca88
 */


void FUN_01a7ca88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if (*(long *)(param_1 + 0x120) != 0) {
    plVar4 = (long *)FUN_00cb7028();
    lVar6 = *plVar4;
    if ((lVar6 != 0) && (uVar2 = *(uint *)(lVar6 + 0x158), 0 < (int)uVar2)) {
      lVar8 = 0;
      uVar7 = 0;
      lVar1 = DAT_0485a0d8 + 0x38;
      while( true ) {
        lVar6 = *(long *)(lVar6 + 0xd0) + lVar8;
        FUN_00ff58b0(*(undefined8 *)(param_1 + 0x120),lVar6,uVar7 & 0xffffffff);
        plVar5 = (long *)FUN_0277e158(*(undefined8 *)(param_1 + 0x120),lVar6);
        if (*plVar5 != 0) {
          FUN_0277e500(*plVar5,DAT_0485a0d8 + 0x38);
        }
        plVar5 = (long *)FUN_0277e158(*(undefined8 *)(param_1 + 0x120),lVar6);
        if (*plVar5 != 0) {
          local_e0 = &LAB_02bd8250;
          local_d8 = FUN_02bd82fc;
          local_d0 = &LAB_02bd8300;
          puStack_c8 = &LAB_02bd8314;
          local_c0 = lVar1;
          uStack_b8 = param_3;
          local_b0 = param_4;
          FUN_00c42e90(*plVar5,&local_e0);
          pcVar3 = local_d8;
          if (local_d8 != (code *)0x0) {
            local_d0 = (undefined1 *)0x0;
            puStack_c8 = (undefined1 *)0x0;
            local_e0 = (undefined1 *)0x0;
            local_d8 = (code *)0x0;
            (*pcVar3)(&local_c0);
          }
        }
        if ((ulong)uVar2 - 1 == uVar7) break;
        lVar6 = *plVar4;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      }
    }
  }
  return;
}


