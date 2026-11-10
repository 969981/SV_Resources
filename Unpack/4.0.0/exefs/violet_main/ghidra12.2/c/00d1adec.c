/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1adec; name: FUN_00d1adec
 */


void FUN_00d1adec(undefined8 *param_1)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar8 = (long *)*param_1;
  lVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,0x8008,8);
  if (lVar3 == 0) {
    plVar8 = (long *)0x0;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00d1af14;
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *(undefined8 *)(lVar3 + 0x8000) = 0;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    uVar5 = 8;
    uVar6 = 0x8008;
  }
  puVar1 = param_1 + 0x1001;
  uVar7 = *puVar1;
  if (uVar7 < 0x400) {
    param_1[uVar7 * 4 + 1] = lVar3;
    param_1[uVar7 * 4 + 2] = plVar8;
    param_1[uVar7 * 4 + 3] = uVar6;
    param_1[uVar7 * 4 + 4] = uVar5;
    *puVar1 = *puVar1 + 1;
    return;
  }
LAB_00d1af14:
                    /* WARNING: Subroutine does not return */
  abort();
}


