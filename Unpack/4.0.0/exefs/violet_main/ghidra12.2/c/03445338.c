/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03445338; name: FUN_03445338
 */


long * FUN_03445338(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_047e2fd0;
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x90);
    if (plVar6 != (long *)0x0) {
      *plVar6 = (long)&PTR_LAB_047c0430;
      plVar6[1] = 0;
      puVar3 = PTR_DAT_047e6d58;
      lVar5 = *(long *)(PTR_DAT_047e6d58 + 8);
      plVar6[2] = 0;
      plVar6[3] = lVar5;
      plVar1 = (long *)(puVar3 + 0x10);
      if (*(long *)(puVar3 + 0x10) != 0) {
        plVar1 = (long *)(lVar5 + 0x10);
      }
      *plVar1 = (long)plVar6;
      *(long **)(puVar3 + 8) = plVar6;
      *(int *)puVar3 = *(int *)puVar3 + 1;
      plVar6[4] = 0;
      plVar6[5] = 0;
      *(undefined1 *)(plVar6 + 0x11) = 1;
      *plVar6 = (long)&PTR_FUN_047c0408;
      plVar6[6] = 0;
      *(undefined4 *)(plVar6 + 7) = 0;
      *(undefined4 *)((long)plVar6 + 0x84) = 0x3f800000;
      *(undefined8 *)((long)plVar6 + 100) = 0x3f80000000000000;
      *(undefined8 *)((long)plVar6 + 0x6c) = 0x3f80000000000000;
      *(undefined8 *)((long)plVar6 + 0x74) = 0;
      *(undefined8 *)((long)plVar6 + 0x7c) = 0;
      *(undefined8 *)((long)plVar6 + 0x3c) = 0x3f800000;
      *(undefined8 *)((long)plVar6 + 0x44) = 0;
      *(undefined8 *)((long)plVar6 + 0x4c) = 0x3f800000;
      *(undefined8 *)((long)plVar6 + 0x54) = 0;
      *(undefined8 *)((long)plVar6 + 0x5c) = 0x3f800000;
      *(long **)(param_1 + 0x40) = plVar6;
      plVar6[1] = param_1;
      iVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(param_1 + 0x78));
      if (iVar4 != 1) {
        (**(code **)*plVar6)(plVar6);
        (**(code **)(puVar2 + 0x30))(4,plVar6);
        plVar6 = (long *)0x0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
    }
  }
  return plVar6;
}


