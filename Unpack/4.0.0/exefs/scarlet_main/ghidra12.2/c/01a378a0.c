/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a378a0; name: FUN_01a378a0
 */


undefined8 FUN_01a378a0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  long *local_28;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (pcVar6 = (char *)*puVar5, pcVar6 == (char *)0x0)) {
    if ((DAT_04848260 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_04848260);
      pcVar6 = &DAT_04848248;
      if (iVar4 != 0) {
        DAT_04848248 = 0;
        DAT_04848250 = 0;
        FUN_00100190(FUN_0234d140,&DAT_04848248,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04848260);
      }
    }
    else {
      pcVar6 = &DAT_04848248;
    }
  }
  if ((DAT_04848370 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04848370);
    if (iVar4 != 0) {
      DAT_04848e20 = '\x01';
      __cxa_guard_release(&DAT_04848370);
    }
  }
  cVar2 = *pcVar6;
  pcVar1 = FUN_02b85174;
  if (DAT_04848e20 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (cVar2 == '\x01') {
LAB_01a378fc:
    if (*(long *)(pcVar6 + 8) != 0) {
      (*pcVar1)(&local_40);
      goto LAB_01a3790c;
    }
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01a37a94(&local_40,pcVar6 + 8,pcVar1,0);
      goto LAB_01a3790c;
    }
    if (cVar2 == '\x02') {
      FUN_01a37a48(&local_40,pcVar6 + 8,pcVar1,0);
      goto LAB_01a3790c;
    }
    if (cVar2 == '\0') goto LAB_01a378fc;
  }
  local_30 = 0;
  local_28 = (long *)0x0;
  local_40 = &DAT_cbf29ce484222645;
  local_38 = &DAT_03c886bc;
LAB_01a3790c:
  puVar3 = local_38;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00c85bd0(param_1,puVar3);
  return 1;
}


