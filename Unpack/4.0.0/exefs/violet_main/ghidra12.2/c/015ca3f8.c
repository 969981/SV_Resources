/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ca3f8; name: FUN_015ca3f8
 */


void FUN_015ca3f8(undefined8 *param_1,void *param_2,void *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  void *__dest;
  undefined8 uVar3;
  
  if (param_2 != param_3) {
    __dest = (void *)*param_4;
    do {
      uVar3 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        memcpy(__dest,param_2,0x90);
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        memcpy(__dest,param_2,0x90);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      param_2 = (void *)((long)param_2 + 0x90);
      __dest = (void *)(*param_4 + 0x90);
      *param_4 = (long)__dest;
    } while (param_3 != param_2);
  }
  return;
}


