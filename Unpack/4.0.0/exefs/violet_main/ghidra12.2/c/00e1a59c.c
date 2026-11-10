/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1a59c; name: FUN_00e1a59c
 */


void FUN_00e1a59c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
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
  memset(param_2 + 5,0,0xd0);
  puVar1 = PTR_DAT_047e31c0;
  param_2[4] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = (long)(puVar1 + 0x10);
  param_2[1] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x30);
    if (lVar5 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar2 + 0x30) = DAT_04859430;
    }
  }
  param_2[5] = lVar5;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  param_2[6] = 0x1fffffffffffffff;
  param_2[7] = 0;
  *param_2 = (long)(PTR_DAT_047e3210 + 0x10);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  puVar1 = PTR_DAT_047de148 + 0x10;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[10] = 0;
  param_2[0xb] = (long)puVar1;
  puVar1 = PTR_DAT_047e31b0 + 0x10;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x14] = (long)puVar1;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x1e) = 1;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


