/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b1ef10; name: FUN_00b1ef10
 */


void FUN_00b1ef10(undefined8 param_1,void *param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
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
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  memcpy(param_2,param_3,0x28);
  *(undefined2 *)((long)param_2 + 0x28) = *(undefined2 *)((long)param_3 + 0x28);
  *(undefined2 *)((long)param_2 + 0x2a) = *(undefined2 *)((long)param_3 + 0x2a);
  *(undefined1 *)((long)param_2 + 0x2c) = *(undefined1 *)((long)param_3 + 0x2c);
  *(undefined1 *)((long)param_2 + 0x2d) = *(undefined1 *)((long)param_3 + 0x2d);
  *(undefined1 *)((long)param_2 + 0x2e) = *(undefined1 *)((long)param_3 + 0x2e);
  *(undefined4 *)((long)param_2 + 0x30) = *(undefined4 *)((long)param_3 + 0x30);
  *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)((long)param_3 + 0x34);
  *(undefined4 *)((long)param_2 + 0x38) = *(undefined4 *)((long)param_3 + 0x38);
  memcpy((void *)((long)param_2 + 0x40),(void *)((long)param_3 + 0x40),0x32);
  *(undefined8 *)((long)param_2 + 0x80) = 0;
  *(undefined8 *)((long)param_2 + 0x78) = 0;
  FUN_00ca1a48((undefined8 *)((long)param_2 + 0x78),(long)param_3 + 0x78);
  *(undefined1 *)((long)param_2 + 0x90) = *(undefined1 *)((long)param_3 + 0x90);
  *(undefined8 *)((long)param_2 + 0xa0) = 0;
  *(undefined8 *)((long)param_2 + 0x98) = 0;
  FUN_00c93e08((undefined8 *)((long)param_2 + 0x98),(long)param_3 + 0x98);
  *(undefined8 *)((long)param_2 + 0xb0) = 0;
  *(undefined8 *)((long)param_2 + 0xa8) = 0;
  FUN_01567fb4((undefined8 *)((long)param_2 + 0xa8),(long)param_3 + 0xa8);
  *(undefined8 *)((long)param_2 + 0xb8) = 0;
  *(undefined8 *)((long)param_2 + 0xc0) = 0;
  FUN_011750c4((undefined8 *)((long)param_2 + 0xb8),(long)param_3 + 0xb8);
  lVar3 = *(long *)((long)param_3 + 200);
  *(long *)((long)param_2 + 200) = lVar3;
  if (lVar3 != 0) {
    FUN_01837a80();
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


