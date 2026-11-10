/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b79ac; name: FUN_010b79ac
 */


undefined1  [16] FUN_010b79ac(long *param_1,ulong *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  plVar8 = param_1 + 1;
  if ((long *)*plVar8 != (long *)0x0) {
    plVar7 = param_1 + 1;
    plVar8 = (long *)*plVar8;
    do {
      if (*param_2 < (ulong)plVar8[4]) {
        plVar5 = (long *)*plVar8;
        plVar7 = plVar8;
        if (plVar5 == (long *)0x0) goto LAB_010b79dc;
      }
      else {
        if (*param_2 <= (ulong)plVar8[4]) goto LAB_010b79dc;
        plVar7 = plVar8 + 1;
        plVar5 = (long *)*plVar7;
        if (plVar5 == (long *)0x0) goto LAB_010b79dc;
      }
      plVar8 = plVar5;
    } while( true );
  }
  plVar7 = plVar8;
LAB_010b79dc:
  puVar6 = (undefined8 *)*plVar7;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x28,8);
    if (puVar6 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar9 = param_1[2];
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      puVar6[4] = *param_3;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      puVar6[4] = *param_3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = plVar8;
    *plVar7 = (long)puVar6;
    if (*(long *)*param_1 == 0) {
      puVar3 = puVar6;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*plVar7;
    }
    FUN_010108e0(param_1[1],puVar3);
    uVar4 = 1;
    param_1[6] = param_1[6] + 1;
  }
  else {
    uVar4 = 0;
  }
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = puVar6;
  return auVar10;
}


