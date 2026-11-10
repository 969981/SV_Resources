/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c18e44; name: FUN_00c18e44
 */


void FUN_00c18e44(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_1;
  if (*(char *)((long)param_1 + 0xc) == '\0') {
    if (lVar6 == 0) {
      lVar6 = tpidr_el0;
      plVar5 = *(long **)(lVar6 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      puVar2 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x30,8);
      *puVar2 = 0;
      puVar2[2] = puVar2;
      puVar2[5] = 0;
      plVar5 = *(long **)(lVar6 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x40,8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar2[1] = 8;
      puVar2[3] = 8;
      puVar2[4] = puVar3;
      goto LAB_00c18fe4;
    }
    puVar2 = (undefined8 *)FUN_00c0e238(lVar6,0,0x30);
    *puVar2 = 0;
    puVar2[2] = puVar2;
    puVar2[4] = 0;
    puVar2[5] = lVar6;
    puVar3 = (undefined8 *)FUN_00c0e238(lVar6,0,0x40);
    puVar4 = &LAB_00c19c80;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar2[1] = 8;
    puVar2[3] = 8;
    puVar2[4] = puVar3;
  }
  else {
    if (lVar6 == 0) {
      lVar6 = tpidr_el0;
      plVar5 = *(long **)(lVar6 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      puVar2 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x38,8);
      *(undefined4 *)(puVar2 + 6) = 0x3f800000;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      goto LAB_00c18fe4;
    }
    puVar2 = (undefined8 *)FUN_00c0e238(lVar6,0,0x38);
    *(undefined4 *)(puVar2 + 6) = 0x3f800000;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar4 = &LAB_00c198b0;
    puVar2[2] = lVar6;
    puVar2[3] = 0;
    puVar2[4] = lVar6;
    puVar2[5] = 0;
  }
  FUN_00c0e13c(lVar6,puVar2,puVar4);
LAB_00c18fe4:
  param_1[2] = (long)puVar2;
  return;
}


