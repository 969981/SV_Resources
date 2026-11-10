/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01139dec; name: FUN_01139dec
 */


void FUN_01139dec(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar4) {
    lVar3 = param_2[1];
  }
  else {
    lVar3 = param_2[1];
    do {
      lVar6 = param_1[3];
      lVar5 = lVar5 + -0x1d0;
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        FUN_0113987c(lVar3 + -0x1d0,lVar5);
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar6;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        FUN_0113987c(lVar3 + -0x1d0,lVar5);
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar3 = param_2[1] + -0x1d0;
      param_2[1] = lVar3;
    } while (lVar4 != lVar5);
    lVar4 = *param_1;
  }
  *param_1 = lVar3;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}


