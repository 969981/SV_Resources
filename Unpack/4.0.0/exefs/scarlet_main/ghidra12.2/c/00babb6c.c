/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00babb6c; name: FUN_00babb6c
 */


void FUN_00babb6c(long *param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  byte *local_60;
  ulong uStack_58;
  
  plVar9 = param_1 + 1;
  if ((long *)*plVar9 == (long *)0x0) {
    plVar10 = plVar9;
LAB_00babc34:
    if (*plVar9 == 0) {
      lVar4 = tpidr_el0;
      plVar8 = *(long **)(lVar4 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      puVar6[4] = *param_3;
      puVar6[5] = uVar1;
      puVar6[6] = uVar2;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      puVar6[2] = plVar10;
      *puVar6 = 0;
      puVar6[1] = 0;
      *plVar9 = (long)puVar6;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar6 = (undefined8 *)*plVar9;
      }
      FUN_010108e0(param_1[1],puVar6);
      param_1[2] = param_1[2] + 1;
    }
    return;
  }
  plVar8 = param_1 + 1;
  plVar10 = (long *)*plVar9;
  do {
    bVar3 = *(byte *)(plVar10 + 4);
    uStack_58 = plVar10[5];
    local_60 = (byte *)plVar10[6];
    if ((bVar3 & 1) == 0) {
      local_60 = (byte *)((long)plVar10 + 0x21);
      uStack_58 = (ulong)(bVar3 >> 1);
    }
    iVar5 = FUN_028a8144(param_2,&local_60);
    if (iVar5 < 0) {
      plVar7 = (long *)*plVar10;
      if (plVar7 == (long *)0x0) {
        plVar9 = plVar10;
        goto LAB_00babc34;
      }
      plVar8 = plVar10;
    }
    else {
      uStack_58 = (ulong)(*param_2 >> 1);
      local_60 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        uStack_58 = *(ulong *)(param_2 + 8);
        local_60 = *(byte **)(param_2 + 0x10);
      }
      iVar5 = FUN_028a8144(plVar10 + 4,&local_60);
      plVar9 = plVar8;
      if (-1 < iVar5) goto LAB_00babc34;
      plVar9 = plVar10 + 1;
      plVar7 = (long *)*plVar9;
      plVar8 = plVar9;
      if (plVar7 == (long *)0x0) goto LAB_00babc34;
    }
    plVar10 = plVar7;
  } while( true );
}


