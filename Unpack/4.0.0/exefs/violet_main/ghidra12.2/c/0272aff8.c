/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0272aff8; name: FUN_0272aff8
 */


undefined8 FUN_0272aff8(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  
  puVar3 = PTR_DAT_047d3e30;
  puVar2 = PTR_DAT_047d3e28;
  if (param_2 == (byte *)0x0) {
    lVar9 = 0;
    do {
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar2);
      }
      puVar6 = *(undefined1 **)puVar3;
      plVar7 = *(long **)(puVar3 + 0x18);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      pbVar5 = (&PTR_s_Main_Opaque_045d5a58)[lVar9];
      if (pbVar5 == (byte *)0x0) {
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,puVar3,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar2);
        }
        puVar10 = *(undefined1 **)puVar3;
        plVar8 = *(long **)(puVar3 + 0x18);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
      else {
        bVar1 = *pbVar5;
        if (bVar1 == 0) {
          puVar10 = &DAT_cbf29ce484222645;
        }
        else {
          puVar10 = &DAT_cbf29ce484222645;
          do {
            pbVar5 = pbVar5 + 1;
            puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
            bVar1 = *pbVar5;
          } while (bVar1 != 0);
        }
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      if (puVar6 == puVar10) {
        return 1;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0xc);
  }
  else {
    lVar9 = 0;
    do {
      bVar1 = *param_2;
      puVar6 = &DAT_cbf29ce484222645;
      if (bVar1 != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar5 = param_2;
        do {
          pbVar5 = pbVar5 + 1;
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar1) * 0x100000001b3);
          bVar1 = *pbVar5;
        } while (bVar1 != 0);
      }
      pbVar5 = (&PTR_s_Main_Opaque_045d5a58)[lVar9];
      if (pbVar5 == (byte *)0x0) {
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,puVar3,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar2);
        }
        puVar10 = *(undefined1 **)puVar3;
        plVar7 = *(long **)(puVar3 + 0x18);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
      else {
        bVar1 = *pbVar5;
        puVar10 = &DAT_cbf29ce484222645;
        if (bVar1 != 0) {
          puVar10 = &DAT_cbf29ce484222645;
          do {
            pbVar5 = pbVar5 + 1;
            puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
            bVar1 = *pbVar5;
          } while (bVar1 != 0);
        }
      }
      if (puVar6 == puVar10) {
        return 1;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0xc);
  }
  return 0;
}


