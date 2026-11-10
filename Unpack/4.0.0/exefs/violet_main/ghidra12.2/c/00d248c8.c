/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d248c8; name: FUN_00d248c8
 */


void FUN_00d248c8(undefined8 *param_1,void *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  memset(param_2,0,0x88);
  *(undefined8 *)((long)param_2 + 0x60) = 0;
  *(undefined1 **)((long)param_2 + 8) = &DAT_cbf29ce484222645;
  *(undefined1 **)((long)param_2 + 0x10) = &DAT_03c886bc;
  *(undefined8 *)((long)param_2 + 0x18) = 0;
  *(undefined8 *)((long)param_2 + 0x20) = 0;
  *(undefined1 **)((long)param_2 + 0x28) = &DAT_cbf29ce484222645;
  *(undefined1 **)((long)param_2 + 0x30) = &DAT_03c886bc;
  *(undefined8 *)((long)param_2 + 0x38) = 0;
  *(undefined8 *)((long)param_2 + 0x40) = 0;
  *(undefined8 *)((long)param_2 + 0x50) = 0;
  *(undefined8 *)((long)param_2 + 0x58) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x30);
    if (lVar4 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar4 = DAT_04859430;
      *(long *)(lVar1 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)((long)param_2 + 0x80) = 0;
  *(long *)((long)param_2 + 0x68) = lVar4;
  *(undefined8 *)((long)param_2 + 0x70) = 0xf0f0f0f0f0f0f0;
  *(undefined8 *)((long)param_2 + 0x78) = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


