/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a2efb0; name: FUN_02a2efb0
 */


undefined8 * FUN_02a2efb0(long *param_1,byte *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  plVar9 = param_1 + 1;
  plVar10 = (long *)*plVar9;
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar9;
LAB_02a2f024:
    puVar8 = (undefined8 *)*plVar9;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x68,8);
      if (puVar8 == (undefined8 *)0x0) {
        (**(code **)(*(long *)param_1[2] + 0xe8))();
      }
      lVar11 = param_1[2];
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        puVar1 = PTR_DAT_047dafb8 + 0x10;
        *(undefined1 *)(puVar8 + 4) = *(undefined1 *)*param_3;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[5] = puVar1;
        puVar8[6] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *(undefined1 *)(puVar8 + 4) = *(undefined1 *)*param_3;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[5] = PTR_DAT_047dafb8 + 0x10;
        puVar8[6] = 0;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = plVar10;
      *plVar9 = (long)puVar8;
      if (*(long *)*param_1 == 0) {
        puVar6 = puVar8;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar6 = (undefined8 *)*plVar9;
      }
      FUN_010108e0(param_1[1],puVar6);
      param_1[6] = param_1[6] + 1;
    }
    return puVar8;
  }
  bVar2 = *param_2;
  plVar9 = param_1 + 1;
  do {
    bVar3 = *(byte *)(plVar10 + 4);
    if (bVar2 <= bVar3 && bVar3 != bVar2) {
      plVar7 = (long *)*plVar10;
      plVar9 = plVar10;
      if (plVar7 == (long *)0x0) {
        goto LAB_02a2f024;
      }
    }
    else {
      if (bVar2 <= bVar3) goto LAB_02a2f024;
      plVar9 = plVar10 + 1;
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) goto LAB_02a2f024;
    }
    plVar10 = plVar7;
  } while( true );
}


