/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01632554; name: FUN_01632554
 */


undefined1 FUN_01632554(long param_1,long param_2,long *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  bVar2 = *(byte *)(param_1 + 0xa6);
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  memset(param_4,0,0x8f);
  uVar4 = 0;
  param_4[0x12] = 0;
  param_4[0x13] = 0;
  param_4[0x14] = 0;
  *(undefined2 *)(param_4 + 0x15) = 0;
  if ((ulong)bVar2 != 0) {
    uVar9 = 0;
    do {
      plVar8 = *(long **)(param_1 + uVar9 * 8);
      uVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
      uVar5 = FUN_0128ab58(*(undefined8 *)(param_2 + 0x290),uVar3,uVar4);
      if ((plVar8 != (long *)0x0) && ((uVar5 & 1) != 0)) {
        uVar5 = (ulong)*(byte *)((long)param_4 + 0xa6);
        if (uVar5 < 0xb) {
          puVar6 = param_4;
          uVar7 = uVar5;
          if (*(byte *)((long)param_4 + 0xa6) != 0) {
            do {
              if ((long *)*puVar6 == plVar8) goto LAB_016325ec;
              uVar7 = uVar7 - 1;
              puVar6 = puVar6 + 1;
            } while (uVar7 != 0);
          }
          param_4[uVar5] = plVar8;
          *(undefined1 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0xa6) * 2 + 0x6e) = 0;
          bVar1 = *(char *)((long)param_4 + 0xa6) + 1;
          *(byte *)((long)param_4 + 0xa6) = bVar1;
          if (*(byte *)((long)param_4 + 0xa7) < bVar1) {
            *(byte *)((long)param_4 + 0xa7) = bVar1;
          }
        }
      }
LAB_016325ec:
      uVar9 = uVar9 + 1;
    } while (uVar9 != bVar2);
    uVar4 = *(undefined1 *)((long)param_4 + 0xa6);
  }
  return uVar4;
}


