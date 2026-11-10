/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01556d30; name: FUN_01556d30
 */


undefined1  [16] FUN_01556d30(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar8 = param_1 + 1;
  if ((long *)*plVar8 == (long *)0x0) {
    plVar9 = plVar8;
LAB_01556d9c:
    puVar6 = (undefined8 *)*plVar8;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x30,4);
      if (puVar6 == (undefined8 *)0x0) {
        (**(code **)(*(long *)param_1[2] + 0xe8))();
      }
      lVar10 = param_1[2];
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
        *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      }
      *(undefined4 *)((long)puVar6 + 0x1c) = *(undefined4 *)*param_4;
      puVar6[4] = 0;
      *(undefined2 *)(puVar6 + 5) = 0x101;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = plVar9;
      *plVar8 = (long)puVar6;
      puVar4 = puVar6;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar4 = (undefined8 *)*plVar8;
      }
      FUN_010108e0(param_1[1],puVar4);
      uVar3 = 1;
      param_1[6] = param_1[6] + 1;
    }
    else {
      uVar3 = 0;
    }
    auVar11._8_8_ = uVar3;
    auVar11._0_8_ = puVar6;
    return auVar11;
  }
  plVar7 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  do {
    if (*param_2 < *(int *)((long)plVar9 + 0x1c)) {
      plVar5 = (long *)*plVar9;
      if (plVar5 == (long *)0x0) {
        plVar8 = plVar9;
        goto LAB_01556d9c;
      }
      plVar7 = plVar9;
    }
    else {
      plVar8 = plVar7;
      if (*param_2 <= *(int *)((long)plVar9 + 0x1c)) goto LAB_01556d9c;
      plVar8 = plVar9 + 1;
      plVar5 = (long *)*plVar8;
      plVar7 = plVar8;
      if (plVar5 == (long *)0x0) goto LAB_01556d9c;
    }
    plVar9 = plVar5;
  } while( true );
}


