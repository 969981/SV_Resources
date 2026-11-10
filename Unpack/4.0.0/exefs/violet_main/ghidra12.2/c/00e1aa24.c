/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1aa24; name: FUN_00e1aa24
 */


void FUN_00e1aa24(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  memset(param_2 + 5,0,0x90);
  puVar2 = PTR_DAT_047e31c0;
  param_2[4] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = (long)(puVar2 + 0x10);
  param_2[1] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar1 = tpidr_el0;
    lVar5 = *(long *)(lVar1 + 0x30);
    if (lVar5 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar1 + 0x30) = DAT_04859430;
    }
  }
  param_2[5] = lVar5;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  param_2[6] = 0x1fffffffffffffff;
  param_2[7] = 0;
  *param_2 = (long)(PTR_DAT_047e3230 + 0x10);
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((long)param_2 + 0x85) = 0;
  *(undefined8 *)((long)param_2 + 0x65) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


