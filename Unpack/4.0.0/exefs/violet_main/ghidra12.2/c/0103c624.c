/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0103c624; name: FUN_0103c624
 */


void FUN_0103c624(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_3[1];
  param_2[4] = *param_3;
  param_2[5] = uVar1;
  param_2[6] = param_3[2];
  param_2[7] = param_3[3];
  param_2[8] = 0;
  param_2[9] = 0;
  FUN_00dd9f00(param_2 + 8,param_3 + 4);
  param_2[0xb] = 0;
  param_2[10] = 0;
  FUN_00fd9730(param_2 + 10,param_3 + 6);
  uVar1 = param_3[9];
  param_2[0xc] = param_3[8];
  param_2[0xd] = uVar1;
  *param_2 = &LAB_02df15b8;
  param_2[1] = &LAB_02df1838;
  param_2[2] = &LAB_02df21b8;
  param_2[3] = &LAB_02df2220;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


