/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a64ec; name: FUN_015a64ec
 */


void FUN_015a64ec(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  FUN_01177ab4();
  *param_1 = &PTR_FUN_04561628;
  param_1[0xe] = 0;
  param_1[4] = &PTR_LAB_045616c0;
  param_1[5] = &DAT_04561710;
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  plVar4 = (long *)param_1[1];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x1a0,0x10);
  if (lVar2 == 0) {
    plVar4 = (long *)0x0;
    uVar7 = 0;
    uVar5 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_015a6968(lVar2);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    uVar5 = 0x10;
    uVar7 = 0x1a0;
  }
  lVar3 = *plVar6;
  *plVar6 = lVar2;
  if (lVar3 != 0) {
    FUN_01f889f0(param_1 + 0xc);
  }
  param_1[0xc] = plVar4;
  param_1[0xd] = uVar7;
  param_1[0xe] = uVar5;
  return;
}


