/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1b4b8; name: FUN_00e1b4b8
 */


void FUN_00e1b4b8(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *param_2 = (long)(PTR_DAT_047e3200 + 0x10);
    lVar5 = *(long *)(param_3 + 8);
    lVar1 = *(long *)(param_3 + 0x10);
    lVar2 = *(long *)(param_3 + 0x20);
    param_2[3] = *(long *)(param_3 + 0x18);
    param_2[4] = lVar2;
    param_2[1] = lVar5;
    param_2[2] = lVar1;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *param_2 = (long)(PTR_DAT_047e3200 + 0x10);
    lVar1 = *(long *)(param_3 + 8);
    lVar2 = *(long *)(param_3 + 0x10);
    lVar3 = *(long *)(param_3 + 0x20);
    param_2[3] = *(long *)(param_3 + 0x18);
    param_2[4] = lVar3;
    param_2[1] = lVar1;
    param_2[2] = lVar2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


