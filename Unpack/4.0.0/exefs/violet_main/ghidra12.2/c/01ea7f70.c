/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea7f70; name: FUN_01ea7f70
 */


void FUN_01ea7f70(long param_1,long param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined1 *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  
  if (((*(long *)(param_1 + 0x60) != 0) && (param_3 != 0)) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x10), lVar3 != 0)) {
    uVar4 = 0;
    lVar3 = lVar3 + -0x28;
    puVar5 = (undefined4 *)(param_2 + 4);
    do {
      if (uVar4 < 0x10) {
        uVar1 = *puVar5;
        local_90 = &DAT_b49a716fb65dbb9c;
        puStack_88 = &DAT_03c2e7b5;
        local_80 = 4;
        local_78 = (long *)0x0;
        puVar2 = (undefined8 *)FUN_01ea74f4(lVar3,&local_90,puVar5[-1]);
        local_70 = *puVar2;
        local_68 = (char *)puVar2[1];
        local_60 = puVar2[2];
        local_58 = (long *)puVar2[3];
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x18))();
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (*local_68 != '\0') {
          local_90 = &DAT_b49a716fb65dbb9c;
          puStack_88 = &DAT_03c2e7b5;
          local_80 = 4;
          local_78 = (long *)0x0;
          FUN_0118fe64(lVar3,&local_90,&local_70,uVar1);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
        }
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (param_3 != uVar4);
  }
  return;
}


