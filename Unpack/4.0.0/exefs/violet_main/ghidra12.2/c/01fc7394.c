/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fc7394; name: FUN_01fc7394
 */


void FUN_01fc7394(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (plVar4 == (long *)0x0) {
    plVar9 = (long *)0x0;
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    memset(plVar4 + 4,0,0x48);
    puVar1 = PTR_DAT_047db998 + 0x10;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *plVar4 = (long)puVar1;
    plVar4[1] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
       (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
      lVar2 = tpidr_el0;
      lVar6 = *(long *)(lVar2 + 0x30);
      if (lVar6 == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar6 = DAT_04859430;
        *(long *)(lVar2 + 0x30) = DAT_04859430;
      }
    }
    plVar4[4] = lVar6;
    plVar4[5] = 0xfffffffffffffff;
    plVar4[6] = 0;
    *(undefined4 *)(plVar4 + 7) = 0;
    plVar4[10] = 0;
    *(undefined1 *)(plVar4 + 0xb) = 6;
    plVar4[8] = 0;
    plVar4[9] = -1;
    *plVar4 = (long)(PTR_DAT_047dba80 + 0x10);
    *(undefined8 *)((long)plVar4 + 0x5c) = 0xffffffffffffffff;
    uVar7 = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    uVar8 = 0x68;
    plVar9 = param_2;
  }
  plVar4[10] = (long)param_2;
  *param_1 = plVar4;
  param_1[1] = plVar9;
  param_1[2] = uVar8;
  param_1[3] = uVar7;
  return;
}


