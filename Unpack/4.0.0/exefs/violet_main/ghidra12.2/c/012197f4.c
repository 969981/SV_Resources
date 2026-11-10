/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012197f4; name: FUN_012197f4
 */


void FUN_012197f4(undefined8 *param_1,void *param_2,void *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *__src;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    do {
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
      __src = (void *)((long)param_3 + -0x38);
      memcpy((void *)(lVar3 + -0x38),__src,0x30);
      uVar4 = *(undefined8 *)((long)param_3 + -8);
      *(undefined8 *)((long)param_3 + -8) = 0;
      *(undefined8 *)(lVar3 + -8) = uVar4;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar3 = *param_4 + -0x38;
      *param_4 = lVar3;
      param_3 = __src;
    } while (param_2 != __src);
  }
  return;
}


