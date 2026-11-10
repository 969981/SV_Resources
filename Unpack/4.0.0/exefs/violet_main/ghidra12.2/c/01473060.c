/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01473060; name: FUN_01473060
 */


void FUN_01473060(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x490,0x10);
  if (plVar6 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    uVar8 = *param_3;
    uVar1 = *param_4;
    uVar2 = *param_5;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    if ((code *)param_6[2] != (code *)0x0) {
      (*(code *)param_6[2])(param_6 + 4,auStack_b0);
      local_b8 = param_6[3];
      local_c8 = (code *)param_6[1];
      local_d0 = *param_6;
      local_c0 = param_6[2];
    }
    FUN_01472c48(plVar6,uVar8,uVar1,uVar2,&local_d0);
    puVar3 = PTR_DAT_047daea8;
    *(undefined1 *)((long)plVar6 + 1099) = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    FUN_0147321c(plVar6 + 0x8a);
    pcVar4 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar4)(auStack_b0);
    }
    *param_1 = plVar6;
    param_1[1] = param_2;
    param_1[2] = 0x490;
    param_1[3] = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


