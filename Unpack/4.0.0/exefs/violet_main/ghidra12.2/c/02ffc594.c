/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ffc594; name: FUN_02ffc594
 */


void FUN_02ffc594(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  
  plVar5 = (long *)(*(ulong *)(param_1[4] + 0x6a8) & 0xfffffffffffffffc);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(param_1[4] + 0x6a8);
    puVar7 = puVar1;
    do {
      puVar4 = (ulong *)(plVar5 + 1);
      plVar6 = (long *)(*puVar4 & 0xfffffffffffffffc);
      if ((long *)plVar5[2] == param_1) {
        if ((*(byte *)puVar1 & 3) == 0) {
          *puVar7 = *puVar7 & 3 | (ulong)plVar6;
          (**(code **)(*plVar5 + 8))();
          puVar4 = puVar7;
        }
        else {
          *puVar4 = (ulong)plVar6 | 1;
        }
      }
      plVar5 = plVar6;
      puVar7 = puVar4;
    } while (plVar6 != (long *)0x0);
  }
  puVar3 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar5 = (long *)(param_1[3] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[3] & 3U) == 0) {
        param_1[3] = (ulong)plVar5 | 1;
        do {
          lVar2 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[3] = 0;
        if (*puVar3 == '\0') goto LAB_02ffc6dc;
      }
      else {
        do {
          plVar6 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar6 | 1;
          plVar5 = plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
    plVar5 = (long *)(param_1[2] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[2] & 3U) == 0) {
        param_1[2] = (ulong)plVar5 | 1;
        do {
          lVar2 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[2] = 0;
      }
      else {
        do {
          plVar6 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar6 | 1;
          plVar5 = plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
LAB_02ffc6dc:
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


