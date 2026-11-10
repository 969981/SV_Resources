/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02740c74; name: FUN_02740c74
 */


void FUN_02740c74(undefined8 *param_1,void *param_2)

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
  memset(param_2,0,200);
  FUN_0274101c((long)param_2 + 0x18);
  *(undefined8 *)((long)param_2 + 0x48) = 0;
  *(undefined8 *)((long)param_2 + 0x50) = 0;
  *(undefined8 *)((long)param_2 + 0x40) = 0;
  FUN_027410d8((long)param_2 + 0x58);
  *(undefined8 *)((long)param_2 + 0x78) = 0;
  *(undefined8 *)((long)param_2 + 0x80) = 0;
  FUN_02741190((long)param_2 + 0x88);
  *(undefined8 *)((long)param_2 + 0xb8) = 0;
  *(undefined8 *)((long)param_2 + 0xc0) = 0;
  *(undefined8 *)((long)param_2 + 0xb0) = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


