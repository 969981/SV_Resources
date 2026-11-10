/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e3794; name: FUN_015e3794
 */


void FUN_015e3794(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long *aplStack_c0 [12];
  
  if (((*param_2 != 0) && (*(long *)(param_1 + 0x120) != 0)) && (0 < *(int *)(param_1 + 0x1b0))) {
    iVar6 = 0;
    do {
      uVar4 = FUN_00d4fa5c(param_1,iVar6);
      plVar5 = (long *)FUN_00cb7028(param_1,uVar4);
      lVar2 = *(long *)(*plVar5 + 0xd8);
      for (lVar1 = *(long *)(*plVar5 + 0xd0); lVar1 != lVar2; lVar1 = lVar1 + 8) {
        plVar5 = (long *)FUN_0277e158(*(undefined8 *)(param_1 + 0x120),lVar1);
        if (*plVar5 != 0) {
          local_c8 = &LAB_02bd83a0;
          local_d0 = &LAB_02bd8394;
          local_e0 = &LAB_02bd8364;
          local_d8 = FUN_02bd8390;
          aplStack_c0[0] = param_2;
          FUN_00c42e90(*plVar5,&local_e0);
          pcVar3 = local_d8;
          if (local_d8 != (code *)0x0) {
            local_d0 = (undefined1 *)0x0;
            local_c8 = (undefined1 *)0x0;
            local_e0 = (undefined1 *)0x0;
            local_d8 = (code *)0x0;
            (*pcVar3)(aplStack_c0);
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x1b0));
  }
  return;
}


