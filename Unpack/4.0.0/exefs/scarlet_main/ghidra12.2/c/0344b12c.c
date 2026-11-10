/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344b12c; name: FUN_0344b12c
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0344b12c(undefined8 *param_1)

{
  undefined *puVar1;
  void *__dest;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  void *pvVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_60;
  undefined1 local_58;
  
  *param_1 = &PTR_FUN_047c05c0;
  pvVar2 = (void *)param_1[2];
  uVar4 = (ulong)*(uint *)(param_1 + 3);
  if (*(uint *)(param_1 + 3) != 0) {
    pvVar6 = (void *)((long)pvVar2 + uVar4 * 0x30);
    pvVar10 = pvVar2;
    do {
      iVar3 = (int)uVar4;
      if (*(long *)((long)pvVar10 + 0x20) == 0) {
        __dest = pvVar10;
        if (pvVar10 < (void *)((long)pvVar6 + -0x30)) {
          do {
            pvVar2 = (void *)((long)__dest + 0x30);
            memcpy(__dest,pvVar2,0x30);
            __dest = pvVar2;
          } while (pvVar2 < (void *)((long)pvVar6 + -0x30));
          iVar3 = *(int *)(param_1 + 3);
          pvVar2 = (void *)param_1[2];
        }
        uVar4 = (ulong)(iVar3 - 1U);
        *(uint *)(param_1 + 3) = iVar3 - 1U;
      }
      else {
        pvVar10 = (void *)((long)pvVar10 + 0x30);
      }
      pvVar6 = (void *)((long)pvVar2 + uVar4 * 0x30);
    } while (pvVar6 != pvVar10);
  }
  puVar1 = PTR_DAT_047e2fd0;
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  plVar11 = (long *)param_1[5];
  if (plVar11 != (long *)0x0) {
    while( true ) {
      lVar5 = plVar11[2];
      plVar12 = (long *)*plVar11;
      param_1[5] = plVar12;
      if ((long *)param_1[4] == plVar11) {
        param_1[4] = 0;
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      for (plVar7 = *(long **)(plVar11[2] + 0x48); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7)
      {
        lVar5 = plVar7[2];
        *(undefined4 *)(lVar5 + 0x318) = 0xffffffff;
        local_58 = 0;
        local_60 = 0x400000000;
        FUN_034a30a4(lVar5,&local_60,1);
      }
      iVar3 = (int)plVar11[1] + -1;
      *(int *)(plVar11 + 1) = iVar3;
      if (iVar3 == 0) {
        puVar8 = (undefined8 *)plVar11[3];
        if ((puVar8 != (undefined8 *)0x0) &&
           (iVar3 = *(int *)((long)puVar8 + 0x4c) + -1, *(int *)((long)puVar8 + 0x4c) = iVar3,
           iVar3 == 0)) {
          (**(code **)*puVar8)(puVar8);
          (**(code **)(puVar1 + 0x30))(0,puVar8);
        }
        if ((long *)plVar11[4] != (long *)0x0) {
          (**(code **)(*(long *)plVar11[4] + 0x30))();
        }
        piVar9 = (int *)plVar11[2];
        if ((piVar9 != (int *)0x0) && (iVar3 = *piVar9, *piVar9 = iVar3 + -1, iVar3 + -1 == 0)) {
          FUN_0344ca4c(piVar9);
          (**(code **)(puVar1 + 0x30))(0,piVar9);
        }
        (**(code **)(puVar1 + 0x30))(0,plVar11);
      }
      if (plVar12 == (long *)0x0) break;
      plVar11 = plVar12;
      if ((long *)param_1[5] != plVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


