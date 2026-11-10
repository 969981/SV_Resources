/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1b7e8; name: FUN_00e1b7e8
 */


void FUN_00e1b7e8(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
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
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  *param_2 = (long)(PTR_DAT_047e31d8 + 0x10);
  param_2[1] = *(long *)(param_3 + 8);
  param_2[2] = *(long *)(param_3 + 0x10);
  param_2[3] = *(long *)(param_3 + 0x18);
  param_2[4] = *(long *)(param_3 + 0x20);
  plVar3 = *(long **)(param_3 + 0x28);
  param_2[5] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  memcpy(param_2 + 6,(void *)(param_3 + 0x30),0x24);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


