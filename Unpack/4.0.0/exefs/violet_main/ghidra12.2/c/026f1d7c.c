/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f1d7c; name: FUN_026f1d7c
 */


void FUN_026f1d7c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    uVar5 = *param_3;
    uVar1 = param_3[1];
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_3 + 2);
    param_2[4] = 0;
    *param_2 = uVar5;
    param_2[1] = uVar1;
    param_2[3] = 0;
    FUN_00ca1ea4(param_2 + 3,param_3 + 3);
    return;
  }
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  uVar2 = *(undefined2 *)(param_3 + 2);
  uVar5 = *param_3;
  uVar1 = param_3[1];
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 2) = uVar2;
  *param_2 = uVar5;
  param_2[1] = uVar1;
  param_2[3] = 0;
  FUN_00ca1ea4(param_2 + 3,param_3 + 3);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return;
}


