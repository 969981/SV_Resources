/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1e658; name: FUN_00d1e658
 */


undefined * FUN_00d1e658(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_8;
  
  lVar5 = *(long *)(param_1 + 200);
  if (((lVar5 != 0) && (*(undefined8 **)(lVar5 + 0x28) != *(undefined8 **)(lVar5 + 0x20))) &&
     (plVar6 = (long *)**(undefined8 **)(lVar5 + 0x20), plVar6 != (long *)0x0)) {
    plVar2 = (long *)*plVar6;
    do {
      if (plVar2 == (long *)plVar6[1]) goto LAB_00d1e6cc;
      lVar5 = *plVar2;
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (*(long *)(lVar5 + 8) != 0) {
        plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x30);
      }
      plVar2 = plVar2 + 1;
    } while (*plVar1 != 0x3d3f8b275e8b9993);
    if ((*(char *)(lVar5 + 0x10) == '\x03') && (*(long *)(lVar5 + 0x18) != 0)) {
      return (undefined *)(*(long *)(lVar5 + 0x18) + 8);
    }
  }
LAB_00d1e6cc:
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0))
  {
    local_8 = FUN_00d44228();
    puVar4 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_8);
    FUN_00100190(PTR_LAB_047d9240,puVar4,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  else {
    puVar4 = PTR_DAT_047d8c30;
  }
  return puVar4;
}


