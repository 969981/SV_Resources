/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bfdf8; name: FUN_012bfdf8
 */


void FUN_012bfdf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 0x148);
  FUN_012bff38(uVar6);
  FUN_012c0000(uVar6);
  puVar2 = PTR_DAT_047d4df8;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  puVar3 = PTR_DAT_047d4e08;
  puVar1 = PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
  FUN_012e8b6c();
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar6 = *(undefined8 *)puVar1;
  *(undefined8 *)puVar3 = uVar6;
  puVar2 = PTR_DAT_047db010;
  pcVar5 = *(code **)(PTR_DAT_047db010 + 8);
  if (pcVar5 != (code *)0x0) {
    puVar1 = PTR_DAT_047db010 + 0x20;
    *(undefined8 *)(PTR_DAT_047db010 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)puVar2 = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    (*pcVar5)(puVar1);
  }
  *(undefined1 **)puVar2 = &LAB_02c7c4a8;
  *(undefined1 **)(puVar2 + 8) = &LAB_02c7c54c;
  *(undefined1 **)(puVar2 + 0x10) = &LAB_02c7c550;
  *(undefined1 **)(puVar2 + 0x18) = &LAB_02c7c55c;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  return;
}


