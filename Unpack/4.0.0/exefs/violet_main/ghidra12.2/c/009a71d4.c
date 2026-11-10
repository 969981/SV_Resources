/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009a71d4; name: FUN_009a71d4
 */


long * FUN_009a71d4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x60,8);
  puVar1 = PTR_DAT_047d66f8;
  if (plVar5 != (long *)0x0) {
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    *plVar5 = (long)(puVar1 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*(long *)(lVar6 + 0x80) != 0) {
        lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
      }
    }
    *plVar5 = (long)&DAT_04530e98;
    plVar5[1] = lVar7;
    plVar5[4] = (long)&PTR_LAB_04530f10;
    plVar8 = plVar5 + 5;
    *plVar8 = (long)&PTR_LAB_04530f60;
    plVar5[6] = 0;
    plVar5[7] = 0;
    FUN_00d1a3f4(plVar5 + 6,plVar8);
    plVar5[8] = 0;
    *(undefined8 *)((long)plVar5 + 0x46) = 0;
    puVar1 = PTR_DAT_047d68a8 + 0x10;
    puVar2 = PTR_DAT_047d68a8 + 0xf0;
    plVar5[4] = (long)(PTR_DAT_047d68a8 + 0xa0);
    *plVar5 = (long)puVar1;
    plVar5[1] = (long)param_1;
    *plVar8 = (long)puVar2;
    *(undefined2 *)(plVar5 + 8) = 0x1fe;
    plVar5[2] = (long)plVar5;
    *(undefined4 *)(plVar5 + 3) = 0x80060;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


