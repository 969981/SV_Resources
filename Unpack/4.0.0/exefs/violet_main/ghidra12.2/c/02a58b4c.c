/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a58b4c; name: FUN_02a58b4c
 */


void FUN_02a58b4c(long *param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_047db180 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar3 = tpidr_el0;
    lVar5 = *(long *)(lVar3 + 0x30);
    if (lVar5 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar3 + 0x30) = DAT_04859430;
    }
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  puVar1 = PTR_DAT_047db188;
  param_1[9] = -1;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[4] = lVar5;
  param_1[5] = 0xfffffffffffffff;
  uVar2 = *puVar1;
  *param_1 = (long)&PTR_FUN_0456e3d8;
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0xb) = uVar2;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  return;
}


