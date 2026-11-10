/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df7b3c; name: FUN_00df7b3c
 */


int FUN_00df7b3c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_LAB_047d3900;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x88);
  }
  if (lVar4 == param_1) {
    iVar3 = 0;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x400);
    plVar7 = *(long **)(param_1 + 0x408);
    if (plVar6 == plVar7) {
      iVar3 = -1;
    }
    else {
      iVar3 = 1;
      do {
        lVar4 = *plVar6;
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(lVar5 + 0x88);
        }
        if (lVar5 == lVar4) {
          return iVar3;
        }
        plVar6 = plVar6 + 1;
        iVar3 = iVar3 + 1;
      } while (plVar7 != plVar6);
      iVar3 = -1;
    }
  }
  return iVar3;
}


