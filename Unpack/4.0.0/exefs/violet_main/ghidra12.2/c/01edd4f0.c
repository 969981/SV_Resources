/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edd4f0; name: FUN_01edd4f0
 */


void FUN_01edd4f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  int local_28;
  undefined4 uStack_24;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  puVar2 = PTR_DAT_047d4ce8;
  puVar1 = PTR_DAT_047d4ce0;
  plVar8 = *(long **)(lVar6 + 0x1c0);
  do {
    lVar6 = *plVar8;
    puVar7 = (undefined8 *)(lVar6 + 0x28);
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
      uVar5 = FUN_01b3fb0c();
      *(undefined8 *)puVar2 = uVar5;
      __cxa_guard_release(puVar1);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)puVar2) {
        if (*(char *)(lVar6 + 0x45) == '\0') {
          local_28 = *(int *)(param_1 + 0x1c);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x18);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 0x24);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x20);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 0x2c);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x28);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 0x34);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x30);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 0x3c);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x38);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 0x44);
          if (local_28 == -1) {
            return;
          }
          uStack_24 = *(undefined4 *)(param_1 + 0x40);
        }
        else {
          local_28 = *(int *)(param_1 + 0x4c);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x48);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 0x54);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x50);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 0x5c);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x58);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 100);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x60);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 0x6c);
          if (local_28 != -1) {
            uStack_24 = *(undefined4 *)(param_1 + 0x68);
            (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
          }
          local_28 = *(int *)(param_1 + 0x74);
          if (local_28 == -1) {
            return;
          }
          uStack_24 = *(undefined4 *)(param_1 + 0x70);
        }
        (*DAT_04839f00)(&DAT_04839f20,&uStack_24,&local_28);
        return;
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}


