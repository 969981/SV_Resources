/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01876dcc; name: FUN_01876dcc
 */


void FUN_01876dcc(undefined8 *param_1,void *param_2,void *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    do {
      uVar4 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      param_3 = (void *)((long)param_3 + -0x40);
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        memcpy((void *)(lVar3 + -0x40),param_3,0x40);
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        memcpy((void *)(lVar3 + -0x40),param_3,0x40);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar3 = *param_4 + -0x40;
      *param_4 = lVar3;
    } while (param_2 != param_3);
  }
  return;
}


