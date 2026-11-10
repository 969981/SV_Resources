/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e7c1c; name: FUN_026e7c1c
 */


void FUN_026e7c1c(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  undefined1 local_60;
  long *local_58;
  
  lVar2 = *param_2;
  if (param_2[1] != lVar2) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)(lVar2 + lVar5);
      local_88 = *puVar1;
      local_80 = puVar1[1];
      local_78 = puVar1[2];
      plVar3 = (long *)puVar1[3];
      local_70 = plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      local_68 = puVar1[4];
      local_60 = *(undefined1 *)(puVar1 + 5);
      plVar4 = (long *)puVar1[6];
      local_58 = plVar4;
      if (plVar4 == (long *)0x0) {
        FUN_026e8e80(param_1,&local_88);
      }
      else {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        FUN_026e8e80(param_1,&local_88);
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      lVar2 = *param_2;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x38;
    } while (uVar6 < (ulong)((param_2[1] - lVar2 >> 3) * 0x6db6db6db6db6db7));
  }
  return;
}


