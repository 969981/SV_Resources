/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e1a58; name: FUN_029e1a58
 */


undefined8 FUN_029e1a58(long param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_2 == (uint *)0x0) {
LAB_029e1b2c:
    uVar5 = 0;
  }
  else {
    puVar7 = param_2 + 1;
    if (*param_2 != 0) {
      puVar1 = puVar7 + *param_2;
      do {
        piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar6 == 0)) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)((long)piVar2 + uVar6);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x78);
        puVar3 = *(undefined8 **)(param_1 + 0x80);
        if (puVar8 != puVar3) {
          do {
            plVar4 = (long *)(**(code **)(*(long *)*puVar8 + 0x40))();
            if (*plVar4 == lVar9) goto LAB_029e1ae8;
            puVar8 = puVar8 + 4;
          } while (puVar3 != puVar8);
          puVar8 = puVar3;
LAB_029e1ae8:
          if ((puVar8 != *(undefined8 **)(param_1 + 0x80)) &&
             (uVar6 = (**(code **)(*(long *)*puVar8 + 0xc0))((long *)*puVar8,piVar2),
             (uVar6 & 1) == 0)) goto LAB_029e1b2c;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
    }
    uVar5 = 1;
  }
  return uVar5;
}


