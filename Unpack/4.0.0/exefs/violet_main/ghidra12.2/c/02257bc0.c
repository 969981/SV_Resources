/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02257bc0; name: FUN_02257bc0
 */


void FUN_02257bc0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x340,0x10);
  if (puVar2 == (undefined8 *)0x0) {
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
    FUN_00e76b9c(puVar2,param_3);
    puVar2[0x40] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    *puVar2 = &PTR_FUN_045ac8a0;
    puVar2[0x41] = 0;
    puVar2[0x42] = 0;
    puVar2[0x43] = 0;
    puVar2[0x53] = 0;
    puVar2[0x52] = 0;
    puVar2[0x51] = 0;
    puVar2[0x50] = 0;
    puVar2[0x67] = 0;
    puVar2[0x66] = 0;
    puVar2[0x65] = 0;
    puVar2[100] = 0;
    puVar2[99] = 0;
    puVar2[0x62] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    puVar2[0x30] = 0;
    puVar2[0x31] = 0;
    puVar2[0x32] = 0;
    puVar2[0x33] = 0;
    puVar2[0x60] = PTR_DAT_047ddae8 + 0x10;
    puVar2[0x61] = 0;
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0x340;
    param_1[3] = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


