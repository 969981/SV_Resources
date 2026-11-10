/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0272b2ac; name: FUN_0272b2ac
 */


bool FUN_0272b2ac(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  puVar3 = PTR_DAT_047d3e28;
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar4 = PTR_DAT_047d3e30;
    puVar10 = *(undefined1 **)PTR_DAT_047d3e30;
    plVar8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    bVar1 = *PTR_DAT_047e1160;
    puVar9 = &DAT_cbf29ce484222645;
    puVar11 = &DAT_cbf29ce484222645;
    if (bVar1 != 0) {
      puVar11 = &DAT_cbf29ce484222645;
      pbVar6 = PTR_DAT_047e1160;
      do {
        pbVar6 = pbVar6 + 1;
        puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar6;
      } while (bVar1 != 0);
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (puVar10 != puVar11) {
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar10 = *(undefined1 **)puVar4;
      plVar8 = *(long **)(puVar4 + 0x18);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      bVar1 = *PTR_s_Vfx2DBeforeUI_047e1168;
      pbVar6 = PTR_s_Vfx2DBeforeUI_047e1168;
      while (bVar1 != 0) {
        pbVar6 = pbVar6 + 1;
        puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar6;
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      return puVar10 == puVar9;
    }
  }
  else {
    bVar1 = *param_2;
    puVar10 = &DAT_cbf29ce484222645;
    puVar9 = &DAT_cbf29ce484222645;
    if (bVar1 != 0) {
      uVar7 = (ulong)(uint)bVar1;
      puVar9 = &DAT_cbf29ce484222645;
      pbVar6 = param_2;
      do {
        pbVar6 = pbVar6 + 1;
        puVar9 = (undefined1 *)(((ulong)puVar9 ^ uVar7) * 0x100000001b3);
        uVar7 = (ulong)*pbVar6;
      } while (*pbVar6 != 0);
    }
    bVar2 = *PTR_DAT_047e1160;
    puVar11 = &DAT_cbf29ce484222645;
    if (bVar2 != 0) {
      puVar11 = &DAT_cbf29ce484222645;
      pbVar6 = PTR_DAT_047e1160;
      do {
        pbVar6 = pbVar6 + 1;
        puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar6;
      } while (bVar2 != 0);
    }
    if (puVar9 != puVar11) {
      puVar9 = &DAT_cbf29ce484222645;
      if (bVar1 != 0) {
        puVar9 = &DAT_cbf29ce484222645;
        do {
          param_2 = param_2 + 1;
          puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar1) * 0x100000001b3);
          bVar1 = *param_2;
        } while (bVar1 != 0);
      }
      bVar1 = *PTR_s_Vfx2DBeforeUI_047e1168;
      pbVar6 = PTR_s_Vfx2DBeforeUI_047e1168;
      while (bVar1 != 0) {
        pbVar6 = pbVar6 + 1;
        puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar6;
      }
      return puVar9 == puVar10;
    }
  }
  return true;
}


