/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a53520; name: FUN_01a53520
 */


undefined8 FUN_01a53520(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (pcVar7 = (char *)*puVar5, pcVar7 == (char *)0x0)) {
    if ((DAT_0480f268 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_0480f268);
      pcVar7 = &DAT_0480f250;
      if (iVar4 != 0) {
        DAT_0480f250 = 0;
        DAT_0480f258 = 0;
        FUN_00100190(FUN_011ee918,&DAT_0480f250,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480f268);
      }
    }
    else {
      pcVar7 = &DAT_0480f250;
    }
  }
  if (((DAT_0480f300 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0480f300), iVar4 != 0)) {
    DAT_0480f460 = '\x01';
    __cxa_guard_release(&DAT_0480f300);
  }
  cVar2 = *pcVar7;
  pcVar1 = (code *)PTR_FUN_047d5738;
  if (DAT_0480f460 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (cVar2 == '\x02') {
    if ((*(long *)(pcVar7 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(pcVar7 + 8) + 0x10), lVar6 == 0)) goto LAB_01a535a0;
    lVar6 = lVar6 + -0x28;
LAB_01a53590:
    uVar3 = (*pcVar1)(lVar6);
  }
  else {
    if (cVar2 != '\x03') {
      if (((cVar2 != '\x01') && (cVar2 != '\0')) || (lVar6 = *(long *)(pcVar7 + 8), lVar6 == 0))
      goto LAB_01a535a0;
      goto LAB_01a53590;
    }
    uVar3 = FUN_01a536a4(pcVar7 + 8,pcVar1,0);
  }
  if ((uVar3 & 0xff) != 0) {
    FUN_00c419e0(param_1,0xff < uVar3);
    return 1;
  }
LAB_01a535a0:
  FUN_00ca1a30(param_1);
  return 1;
}


