/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa4870; name: FUN_01fa4870
 */


undefined8 * FUN_01fa4870(long *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar8 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    plVar9 = plVar8;
LAB_01fa48e4:
    puVar7 = (undefined8 *)*plVar8;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x50,8);
      if (puVar7 == (undefined8 *)0x0) {
        (**(code **)(*(long *)param_1[2] + 0xe8))();
      }
      lVar10 = param_1[2];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        *(undefined1 *)(puVar7 + 4) = *(undefined1 *)*param_3;
        *(undefined1 *)(puVar7 + 5) = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *(undefined1 *)(puVar7 + 4) = *(undefined1 *)*param_3;
        *(undefined1 *)(puVar7 + 5) = 0;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = plVar9;
      *plVar8 = (long)puVar7;
      if (*(long *)*param_1 == 0) {
        puVar5 = puVar7;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar5 = (undefined8 *)*plVar8;
      }
      FUN_010108e0(param_1[1],puVar5);
      param_1[6] = param_1[6] + 1;
    }
    return puVar7;
  }
  bVar1 = *param_2;
  plVar8 = param_1 + 1;
  do {
    bVar2 = *(byte *)(plVar9 + 4);
    if (bVar1 <= bVar2 && bVar2 != bVar1) {
      plVar6 = (long *)*plVar9;
      plVar8 = plVar9;
      if (plVar6 == (long *)0x0) {
        goto LAB_01fa48e4;
      }
    }
    else {
      if (bVar1 <= bVar2) goto LAB_01fa48e4;
      plVar8 = plVar9 + 1;
      plVar6 = (long *)*plVar8;
      if (plVar6 == (long *)0x0) goto LAB_01fa48e4;
    }
    plVar9 = plVar6;
  } while( true );
}


