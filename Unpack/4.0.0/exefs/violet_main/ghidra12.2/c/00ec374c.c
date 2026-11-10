/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ec374c; name: FUN_00ec374c
 */


void FUN_00ec374c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
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
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  uVar3 = *param_3;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  *param_2 = &DAT_cbf29ce484222645;
  param_2[1] = &DAT_03c886bc;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  *(undefined8 *)((long)param_2 + 0xe4) = 0;
  *(undefined8 *)((long)param_2 + 0xf4) = 0;
  *(undefined8 *)((long)param_2 + 0xfa) = 0;
  param_2[4] = &DAT_cbf29ce484222645;
  param_2[5] = &DAT_03c886bc;
  param_2[8] = 0x200000003;
  param_2[9] = 0;
  param_2[0xc] = uVar3;
  param_2[0xd] = 0x666666666666666;
  param_2[0x12] = 0;
  param_2[0x13] = uVar3;
  param_2[0x14] = 0x38e38e38e38e38e;
  param_2[0x15] = 0;
  *(undefined2 *)(param_2 + 0x18) = 0x101;
  *(undefined4 *)((long)param_2 + 0xc4) = 5;
  *(undefined8 *)((long)param_2 + 0xcc) = 0x100000008;
  *(undefined8 *)((long)param_2 + 0xd4) = 0x100000001;
  *(undefined8 *)((long)param_2 + 0xdc) = 0xff000000ff;
  *(undefined4 *)((long)param_2 + 0xec) = 4;
  *(undefined2 *)(param_2 + 0x1e) = 0x100;
  *(undefined4 *)((long)param_2 + 0x104) = 0x3f800000;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


