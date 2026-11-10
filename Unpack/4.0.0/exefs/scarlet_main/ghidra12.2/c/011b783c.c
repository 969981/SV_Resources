/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b783c; name: FUN_011b783c
 */


void FUN_011b783c(long param_1,undefined1 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_28;
  
  if ((param_3 & 0xff) == 5) {
    return;
  }
  if ((uint)*(byte *)(*(long *)(param_1 + 0x50) + 0x95) == (param_3 & 0xff)) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar5 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar5;
    plVar1 = *(long **)(lVar5 + 0x1c8);
    plVar2 = *(long **)(lVar5 + 0x1c0);
    do {
      if (plVar2 == plVar1) {
        lVar5 = 0;
        break;
      }
      lVar5 = *plVar2;
      uVar6 = FUN_011b8548(lVar5 + 0x28);
      plVar2 = plVar2 + 1;
    } while ((uVar6 & 1) == 0);
    cVar3 = FUN_00e677a0(lVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (cVar3 != '\0') {
LAB_011b793c:
      local_28 = 0xc85bf3ec09ee3de8;
      goto LAB_011b78b4;
    }
  }
  else {
    lVar5 = FUN_011b7194(*(undefined8 *)(param_1 + 0x58),param_3);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      local_28 = FUN_011b79b8(*(undefined8 *)(param_1 + 0x58),param_3);
      goto LAB_011b78b4;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (*(char *)(lVar5 + 2) != '\0') goto LAB_011b793c;
  }
  local_28 = 0xe8cd8d64013d532;
LAB_011b78b4:
  FUN_011b79e8(uVar7,param_2,&local_28);
  return;
}


