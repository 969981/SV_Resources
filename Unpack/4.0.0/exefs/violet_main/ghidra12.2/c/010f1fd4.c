/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f1fd4; name: FUN_010f1fd4
 */


void FUN_010f1fd4(undefined8 *param_1,void *param_2)

{
  int iVar1;
  void *__dest;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x40,0x10);
  if (__dest == (void *)0x0) {
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
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    memcpy(__dest,param_2,0x40);
    *param_1 = __dest;
    param_1[1] = plVar3;
    param_1[2] = 0x40;
    param_1[3] = 0x10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


