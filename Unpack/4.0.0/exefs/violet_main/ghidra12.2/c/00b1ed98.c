/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b1ed98; name: FUN_00b1ed98
 */


void FUN_00b1ed98(undefined8 param_1,void *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_1;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
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
  uVar3 = *(undefined4 *)((long)param_3 + 0xa0);
  uVar1 = *(undefined8 *)((long)param_3 + 0x90);
  uVar2 = *(undefined8 *)((long)param_3 + 0x98);
  *(undefined8 *)((long)param_2 + 0xa8) = 0;
  *(undefined8 *)((long)param_2 + 0x90) = uVar1;
  *(undefined8 *)((long)param_2 + 0x98) = uVar2;
  *(undefined4 *)((long)param_2 + 0xa0) = uVar3;
  *(undefined8 *)((long)param_2 + 0xb0) = 0;
  FUN_00c93e08((undefined8 *)((long)param_2 + 0xa8),(long)param_3 + 0xa8);
  lVar6 = *(long *)((long)param_3 + 0xb8);
  *(long *)((long)param_2 + 0xb8) = lVar6;
  if (lVar6 != 0) {
    FUN_01837a80();
  }
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


