/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022a1e60; name: FUN_022a1e60
 */


void FUN_022a1e60(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  if (plVar2 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    plVar2[2] = 1;
    *plVar2 = (long)(PTR_DAT_047dde08 + 0x10);
    plVar2[1] = 0xffffffff;
    memset(plVar2 + 3,0,0x80);
    *param_1 = plVar2;
    param_1[1] = param_2;
    param_1[2] = 0x98;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


