/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ae06a0; name: FUN_02ae06a0
 */


void FUN_02ae06a0(undefined8 *param_1,long *param_2,short *param_3,long param_4)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  sVar1 = *param_3;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x28,8);
  if (sVar1 == 2) {
    if (plVar4 == (long *)0x0) {
      param_2 = (long *)0x0;
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_02ae08b0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      plVar4[2] = param_4;
      *(undefined1 *)(plVar4 + 3) = 0;
      *(undefined4 *)((long)plVar4 + 0x1c) = 0;
      puVar2 = PTR_DAT_047dcca0;
      plVar4[4] = 0;
      *plVar4 = (long)(puVar2 + 0x10);
      plVar4[1] = (long)param_3;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      uVar6 = 8;
      uVar7 = 0x28;
    }
    *param_1 = plVar4;
    param_1[1] = param_2;
    param_1[2] = uVar7;
    param_1[3] = uVar6;
  }
  else if (plVar4 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_02ae08b0;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar2 = PTR_DAT_047dcca8;
    plVar4[2] = param_4;
    *(undefined1 *)(plVar4 + 3) = 0;
    *(undefined4 *)((long)plVar4 + 0x1c) = 0;
    plVar4[4] = 0;
    *plVar4 = (long)(puVar2 + 0x10);
    plVar4[1] = (long)param_3;
    *param_1 = plVar4;
    param_1[1] = param_2;
    param_1[2] = 0x28;
    param_1[3] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


