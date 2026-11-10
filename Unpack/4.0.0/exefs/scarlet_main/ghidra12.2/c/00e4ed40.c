/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e4ed40; name: FUN_00e4ed40
 */


void FUN_00e4ed40(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x348,8);
  if (puVar4 == (undefined8 *)0x0) {
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
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar4 = *param_3;
    puVar4[1] = param_3[1];
    puVar4[2] = param_3[2];
    plVar6 = (long *)param_3[3];
    puVar4[3] = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    puVar4[4] = param_3[4];
    puVar4[5] = param_3[5];
    puVar4[6] = param_3[6];
    plVar6 = (long *)param_3[7];
    puVar4[7] = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    puVar4[8] = param_3[8];
    puVar4[9] = param_3[9];
    puVar4[10] = param_3[10];
    plVar6 = (long *)param_3[0xb];
    puVar4[0xb] = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    puVar4[0xc] = param_3[0xc];
    puVar4[0xe] = 0;
    puVar4[0xd] = 0;
    FUN_00c43ef0(puVar4 + 0xd,param_3 + 0xd);
    uVar1 = *(undefined1 *)(param_3 + 0xf);
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    *(undefined1 *)(puVar4 + 0xf) = uVar1;
    FUN_00e499d4(puVar4 + 0x10,param_3 + 0x10);
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x12] = PTR_DAT_047e32b8 + 0x10;
    puVar4[0x13] = 0;
    *(undefined4 *)(puVar4 + 0x26) = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = &DAT_cbf29ce484222645;
    puVar4[0x1f] = &DAT_03c886bc;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x22] = &DAT_cbf29ce484222645;
    puVar4[0x23] = &DAT_03c886bc;
    puVar4[0x24] = 0;
    puVar4[0x25] = 0;
    FUN_00e4f1c0(puVar4 + 0x27);
    FUN_00e4f1c0(puVar4 + 0x34);
    FUN_00e4f1c0(puVar4 + 0x41);
    FUN_010ef748(puVar4 + 0x4e);
    puVar4[0x5c] = 0;
    puVar4[0x5b] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    lVar2 = tpidr_el0;
    if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
        (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
       (lVar7 = *(long *)(lVar2 + 0x30), lVar7 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar7 = DAT_04859430;
      *(long *)(lVar2 + 0x30) = DAT_04859430;
    }
    puVar4[0x5f] = 0;
    *(undefined4 *)(puVar4 + 0x60) = 0;
    puVar4[0x5d] = lVar7;
    puVar4[0x5e] = 0x1e1e1e1e1e1e1e1;
    puVar4[0x61] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
        (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
       (lVar7 = *(long *)(lVar2 + 0x30), lVar7 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar7 = DAT_04859430;
      *(long *)(lVar2 + 0x30) = DAT_04859430;
    }
    puVar4[0x62] = lVar7;
    *(undefined4 *)(puVar4 + 0x67) = 0x3f800000;
    puVar4[100] = 0;
    *(undefined4 *)(puVar4 + 0x65) = 0;
    puVar4[99] = 0x1e1e1e1e1e1e1e1;
    puVar4[0x66] = 0;
    *(undefined1 *)(puVar4 + 0x68) = 0;
    *param_1 = (long)puVar4;
    param_1[1] = (long)param_2;
    param_1[2] = 0x348;
    param_1[3] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


