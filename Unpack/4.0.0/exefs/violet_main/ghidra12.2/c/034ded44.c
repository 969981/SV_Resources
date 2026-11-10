/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ded44; name: FUN_034ded44
 */


void FUN_034ded44(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  FUN_034e4a84(*(undefined8 *)PTR_DAT_047e7098,param_1 + 0x120);
  FUN_034dcf30(*(undefined8 *)PTR_DAT_047e7050,param_1 + 0x120);
  puVar2 = PTR_DAT_047e2fd0;
  plVar6 = *(long **)(param_1 + 0x150);
  puVar7 = (undefined8 *)0x0;
  if (plVar6 != (long *)0x0) {
    do {
      if ((long *)plVar6[3] != (long *)0x0) {
        *(undefined4 *)(plVar6 + 4) = 0;
        if (plVar6 + 2 != (long *)plVar6[3]) {
          (**(code **)(puVar2 + 0x30))(0);
        }
        plVar6[3] = 0;
        *(undefined4 *)((long)plVar6 + 0x24) = 0;
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    puVar7 = *(undefined8 **)(param_1 + 0x150);
  }
  while (puVar7 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x150) = *puVar7;
    if (*(undefined8 **)(param_1 + 0x158) == puVar7) {
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
    *puVar7 = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 **)(param_1 + 0x160) = puVar7;
    puVar7 = *(undefined8 **)(param_1 + 0x150);
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + -1;
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  plVar6 = *(long **)(param_1 + 0x178);
  if (*(long **)(param_1 + 0x178) == (long *)0x0) {
    plVar4 = (long *)*(long *)(param_1 + 0x188);
    puVar2 = PTR_DAT_047e2fd0;
    goto joined_r0x034dee64;
  }
  do {
    plVar4 = plVar6;
    *(long *)(param_1 + 0x178) = *plVar4;
    if (*(long **)(param_1 + 0x180) == plVar4) {
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    *plVar4 = *(long *)(param_1 + 0x188);
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
    *(long **)(param_1 + 0x188) = plVar4;
    plVar6 = *(long **)(param_1 + 0x178);
    puVar2 = PTR_DAT_047e2fd0;
  } while (*(long **)(param_1 + 0x178) != (long *)0x0);
  do {
    plVar6 = (long *)*plVar4;
    if ((plVar4 < *(long **)(param_1 + 400)) ||
       (bVar1 = *(long **)(param_1 + 400) + (ulong)*(uint *)(param_1 + 0x198) * 3 <= plVar4,
       plVar4 = plVar6, bVar1)) {
      (**(code **)(puVar2 + 0x30))(0);
      plVar4 = plVar6;
    }
joined_r0x034dee64:
  } while (plVar4 != (long *)0x0);
  if (*(long *)(param_1 + 400) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(undefined8 *)(param_1 + 400) = 0;
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  puVar3 = *(ulong **)(param_1 + 0x150);
  if (*(ulong **)(param_1 + 0x150) == (ulong *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x160);
    puVar2 = PTR_DAT_047e2fd0;
    if (puVar5 == (ulong *)0x0) goto LAB_034def68;
  }
  else {
    do {
      puVar5 = puVar3;
      *(ulong *)(param_1 + 0x150) = *puVar5;
      if (*(ulong **)(param_1 + 0x158) == puVar5) {
        *(undefined8 *)(param_1 + 0x158) = 0;
      }
      *puVar5 = *(ulong *)(param_1 + 0x160);
      *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + -1;
      *(ulong **)(param_1 + 0x160) = puVar5;
      puVar3 = *(ulong **)(param_1 + 0x150);
      puVar2 = PTR_DAT_047e2fd0;
    } while (*(ulong **)(param_1 + 0x150) != (ulong *)0x0);
  }
  do {
    uVar8 = *puVar5;
    if ((puVar5 < *(ulong *)(param_1 + 0x168)) ||
       (*(ulong *)(param_1 + 0x168) + (ulong)*(uint *)(param_1 + 0x170) * 0x28 <= puVar5)) {
      (**(code **)(puVar2 + 0x30))(0);
    }
    puVar5 = (ulong *)uVar8;
  } while (uVar8 != 0);
LAB_034def68:
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(long *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (*(long *)(param_1 + 0x110) != 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  return;
}


