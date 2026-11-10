/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029afb64; name: FUN_029afb64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029afb64(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  lVar2 = _UNK_03cabe68;
  lVar1 = _DAT_03cabe60;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&PTR_LAB_04603528;
  param_1[1] = lVar6;
  param_1[4] = (long)&PTR_LAB_04603560;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0x17] = lVar2;
  param_1[0x16] = lVar1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3f8000003f800000;
  param_1[0x1e] = 0x3f8000003f800000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = 0x3f8000003f800000;
  param_1[0x20] = 0x3f4ccccd3f800000;
  *(undefined4 *)((long)param_1 + 0x114) = 0x41200000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}


