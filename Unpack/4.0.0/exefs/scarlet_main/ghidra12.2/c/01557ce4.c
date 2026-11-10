/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01557ce4; name: FUN_01557ce4
 */


undefined8 * FUN_01557ce4(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar7 = param_1 + 1;
  if ((long *)*plVar7 == (long *)0x0) {
    plVar8 = plVar7;
LAB_01557d50:
    puVar5 = (undefined8 *)*plVar7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x80,8);
      if (puVar5 == (undefined8 *)0x0) {
        (**(code **)(*(long *)param_1[2] + 0xe8))();
      }
      lVar9 = param_1[2];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 != 0) {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      }
      iVar1 = *param_2;
      puVar5[0xd] = 0;
      *(undefined2 *)(puVar5 + 0xf) = 0;
      puVar5[5] = 0;
      puVar5[6] = &DAT_cbf29ce484222645;
      *(int *)(puVar5 + 4) = iVar1;
      *(undefined4 *)(puVar5 + 0xe) = 0;
      puVar5[7] = &DAT_03c886bc;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = &DAT_cbf29ce484222645;
      puVar5[0xb] = &DAT_03c886bc;
      puVar5[0xc] = 0;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = plVar8;
      *plVar7 = (long)puVar5;
      puVar3 = puVar5;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar3 = (undefined8 *)*plVar7;
      }
      FUN_010108e0(param_1[1],puVar3);
      param_1[6] = param_1[6] + 1;
    }
    return puVar5 + 5;
  }
  plVar6 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  do {
    if (*param_2 < (int)plVar8[4]) {
      plVar4 = (long *)*plVar8;
      if (plVar4 == (long *)0x0) {
        plVar7 = plVar8;
        goto LAB_01557d50;
      }
      plVar6 = plVar8;
    }
    else {
      plVar7 = plVar6;
      if (*param_2 <= (int)plVar8[4]) goto LAB_01557d50;
      plVar7 = plVar8 + 1;
      plVar4 = (long *)*plVar7;
      plVar6 = plVar7;
      if (plVar4 == (long *)0x0) goto LAB_01557d50;
    }
    plVar8 = plVar4;
  } while( true );
}


