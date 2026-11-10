/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d11b28; name: FUN_00d11b28
 */


void FUN_00d11b28(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  puVar6 = PTR_LAB_047d4118;
  puVar5 = PTR_DAT_047d3e30;
  puVar4 = PTR_DAT_047d3e28;
  plVar2 = *(long **)(param_1 + 0x50);
  for (plVar1 = *(long **)(param_1 + 0x48); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar11 = *plVar1;
    if ((*(int *)(lVar11 + 0x90) == 3) &&
       (iVar7 = *(int *)(lVar11 + 0xb8), iVar3 = iVar7 + -1, *(int *)(lVar11 + 0xb8) = iVar3,
       iVar3 == 0 || iVar7 < 1)) {
      *(undefined4 *)(lVar11 + 0x90) = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        FUN_00100190(puVar6,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar4);
      }
      *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)puVar5;
      uVar9 = *(undefined8 *)(puVar5 + 0x10);
      *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(lVar11 + 0xa8) = uVar9;
      plVar10 = *(long **)(puVar5 + 0x18);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar8 = *(long **)(lVar11 + 0xb0);
      *(long **)(lVar11 + 0xb0) = plVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
      *(undefined4 *)(lVar11 + 0xbc) = 0;
      if (*(code **)(lVar11 + 0x140) != (code *)0x0) {
        (**(code **)(lVar11 + 0x140))(lVar11 + 0x160,(undefined8 *)(lVar11 + 0x98));
      }
    }
  }
  return;
}


