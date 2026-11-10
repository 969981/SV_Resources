/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b6ba1c; name: FUN_00b6ba1c
 */


void FUN_00b6ba1c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 local_5b;
  undefined5 uStack_58;
  Uuid aUStack_50 [16];
  
  param_1[4] = 0;
  *param_1 = &PTR_FUN_04559d80;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar1 = tpidr_el0;
    lVar3 = *(long *)(lVar1 + 0x30);
    if (lVar3 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar3 = DAT_04859430;
      *(long *)(lVar1 + 0x30) = DAT_04859430;
    }
  }
  param_1[5] = lVar3;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0xc7ce0c7ce0c7ce;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x116) = 0;
  *(undefined1 *)((long)param_1 + 0x8b4) = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x119) = 0;
  memset(param_1 + 9,0,0x445);
  memset(param_1 + 0x92,0,0x204);
  param_1[0x114] = 0;
  *(undefined8 *)((long)param_1 + 0x8a6) = 0;
  FUN_00b6bc28(param_1 + 2,0x20);
  nn::oe::GetPseudoDeviceId(aUStack_50);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_5b = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_01f70ef8(aUStack_50,&local_78,0x25);
  iVar2 = snprintf((char *)(param_1 + 0x89),0x45,"%s%s",&local_78,"+titan");
  *(int *)(param_1 + 0x92) = iVar2;
  return;
}


