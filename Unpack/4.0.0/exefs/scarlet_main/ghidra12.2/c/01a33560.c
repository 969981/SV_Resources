/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a33560; name: FUN_01a33560
 */


undefined8 FUN_01a33560(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  long *local_28;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (pcVar7 = (char *)*puVar5, (char *)*puVar5 == (char *)0x0)) {
    if ((*PTR_DAT_047d4518 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d4518);
      pcVar7 = PTR_DAT_047d4520;
      if (iVar4 != 0) {
        *PTR_DAT_047d4520 = 0;
        *(undefined8 *)(pcVar7 + 8) = 0;
        FUN_00100190(PTR_FUN_047d47c8,pcVar7,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4518);
      }
    }
    else {
      pcVar7 = PTR_DAT_047d4520;
    }
  }
  if ((DAT_04851198 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04851198);
    if (iVar4 != 0) {
      DAT_04851c10 = '\x01';
      __cxa_guard_release(&DAT_04851198);
    }
  }
  cVar2 = *pcVar7;
  pcVar1 = FUN_02ba008c;
  if (DAT_04851c10 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (cVar2 == '\x02') {
    if ((*(long *)(pcVar7 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(pcVar7 + 8) + 0x10), lVar6 != 0)) {
      puVar5 = (undefined8 *)(*pcVar1)(lVar6 + -0x28);
      local_40 = (undefined1 *)*puVar5;
      local_38 = (undefined1 *)puVar5[1];
      local_30 = puVar5[2];
      local_28 = (long *)puVar5[3];
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x18))();
      }
      goto LAB_01a33660;
    }
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01a3384c(&local_40,pcVar7 + 8,pcVar1,0);
      goto LAB_01a33660;
    }
    if (cVar2 == '\x01') {
      FUN_01a337c8(&local_40,pcVar7 + 8,pcVar1,0);
      goto LAB_01a33660;
    }
    if (cVar2 == '\0') {
      FUN_01a33748(&local_40,*(undefined8 *)(pcVar7 + 8),pcVar1,0);
      goto LAB_01a33660;
    }
  }
  local_30 = 0;
  local_28 = (long *)0x0;
  local_40 = &DAT_cbf29ce484222645;
  local_38 = &DAT_03c886bc;
LAB_01a33660:
  puVar3 = local_38;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00c85bd0(param_1,puVar3);
  return 1;
}


