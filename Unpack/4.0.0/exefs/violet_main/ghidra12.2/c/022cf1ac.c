/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022cf1ac; name: FUN_022cf1ac
 */


void FUN_022cf1ac(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((1 < *param_3) ||
     (puVar4 = *(undefined **)(param_3 + 8), *(undefined **)(param_3 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047de080 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047de080);
      puVar4 = PTR_DAT_047de088;
      if (iVar3 != 0) {
        *(undefined8 *)PTR_DAT_047de088 = 0;
        *(undefined1 **)(puVar4 + 8) = &DAT_cbf29ce484222645;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        *(undefined4 *)(puVar4 + 0x28) = 0;
        *(undefined1 **)(puVar4 + 0x10) = &DAT_03c886bc;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        FUN_00100190(PTR_FUN_047dc9f0,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047de080);
      }
    }
    else {
      puVar4 = PTR_DAT_047de088;
    }
  }
  FUN_022d089c(param_2,uVar1,uVar2,puVar4);
  return;
}


