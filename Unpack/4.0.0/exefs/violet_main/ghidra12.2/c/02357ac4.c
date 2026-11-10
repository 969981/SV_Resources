/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02357ac4; name: FUN_02357ac4
 */


void FUN_02357ac4(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined1 local_70;
  long *local_68;
  
  lVar3 = *param_2;
  if (param_2[1] != lVar3) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      puVar1 = (undefined8 *)(lVar3 + lVar6);
      local_98 = *puVar1;
      local_90 = puVar1[1];
      local_88 = puVar1[2];
      plVar4 = (long *)puVar1[3];
      local_80 = plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      local_78 = puVar1[4];
      local_70 = *(undefined1 *)(puVar1 + 5);
      plVar5 = (long *)puVar1[6];
      local_68 = plVar5;
      if (plVar5 == (long *)0x0) {
        uVar2 = FUN_02357c10(param_1,&local_98);
      }
      else {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        uVar2 = FUN_02357c10(param_1,&local_98);
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *param_2;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x38;
    } while (uVar7 < (ulong)((param_2[1] - lVar3 >> 3) * 0x6db6db6db6db6db7));
  }
  return;
}


