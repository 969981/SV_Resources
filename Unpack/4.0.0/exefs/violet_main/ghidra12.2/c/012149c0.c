/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012149c0; name: FUN_012149c0
 */


void FUN_012149c0(long *param_1,void *param_2)

{
  void *__dest;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_68 [16];
  void *local_58;
  
  uVar2 = FUN_01214b38(param_1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7 + 1);
  FUN_01214c04(auStack_68,uVar2,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7,param_1 + 3);
  __dest = local_58;
  lVar5 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
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
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  memcpy(__dest,param_2,0x30);
  plVar4 = *(long **)((long)param_2 + 0x30);
  *(long **)((long)__dest + 0x30) = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  local_58 = (void *)((long)local_58 + 0x38);
  FUN_01214b9c(param_1,auStack_68);
  FUN_01219924(auStack_68);
  return;
}


