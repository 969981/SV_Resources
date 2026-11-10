/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c0744; name: FUN_034c0744
 */


long * FUN_034c0744(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_54 [4];
  
  puVar2 = PTR_DAT_047e2fd0;
  if (*(char *)(param_1 + 0x145) < '\0') {
    if (*(long **)(param_1 + 0x128) != (long *)0x0) {
      return *(long **)(param_1 + 0x128);
    }
    plVar5 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)(PTR_DAT_047e72a8 + 0x10);
      *(undefined1 *)(plVar5 + 1) = 1;
      *(undefined2 *)((long)plVar5 + 10) = 0xffff;
    }
    *(long **)(param_1 + 0x128) = plVar5;
    return plVar5;
  }
  uVar6 = *(uint *)(param_1 + 0x120);
  if (uVar6 != 0) {
    lVar8 = *(long *)(param_1 + 0x118);
    iVar4 = 0;
    do {
      uVar1 = iVar4 + (uVar6 >> 1);
      uVar9 = *(ulong *)(lVar8 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4))
      ;
      if (uVar9 == param_2) {
        return *(long **)(lVar8 + (long)(int)uVar1 * 0x10 + 8);
      }
      if (uVar9 < param_2) {
        iVar4 = uVar1 + 1;
      }
      uVar6 = uVar6 - (uVar9 < param_2) >> 1;
    } while (uVar6 != 0);
  }
  plVar5 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
  if (plVar5 == (long *)0x0) {
    return (long *)0x0;
  }
  *plVar5 = (long)(PTR_DAT_047e72a8 + 0x10);
  *(undefined1 *)(plVar5 + 1) = 1;
  *(undefined2 *)((long)plVar5 + 10) = 0xffff;
  plVar10 = *(long **)(param_2 + 0x48);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)(**(code **)(puVar2 + 0x10))(4,0x48);
    if (plVar10 == (long *)0x0) goto LAB_034c09d0;
    *plVar10 = (long)(PTR_DAT_047e7288 + 0x10);
    plVar10[1] = 0;
    puVar3 = PTR_DAT_047e70d0;
    lVar8 = *(long *)(PTR_DAT_047e70d0 + 8);
    plVar10[2] = 0;
    plVar10[3] = lVar8;
    plVar7 = (long *)(puVar3 + 0x10);
    if (*(long *)(puVar3 + 0x10) != 0) {
      plVar7 = (long *)(lVar8 + 0x10);
    }
    *plVar7 = (long)plVar10;
    *(long **)(puVar3 + 8) = plVar10;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    puVar3 = PTR_DAT_047e7290;
    plVar10[8] = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    *plVar10 = (long)(puVar3 + 0x10);
    *(long **)(param_2 + 0x48) = plVar10;
    plVar10[1] = param_2;
    iVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(param_2 + 0x78));
    if (iVar4 != 1) {
      (**(code **)*plVar10)(plVar10);
      (**(code **)(puVar2 + 0x30))(4,plVar10);
      *(undefined8 *)(param_2 + 0x48) = 0;
      goto LAB_034c09d0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0xda) >> 0x11;
  for (plVar7 = (long *)plVar10[4]; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    if ((iVar4 == *(int *)(plVar7 + 1)) && ((uVar6 & 1) == (uint)*(byte *)((long)plVar7 + 0xc)))
    goto LAB_034c09b4;
  }
  plVar11 = plVar10 + 6;
  plVar7 = (long *)*plVar11;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)(**(code **)(puVar2 + 0x10))(0,0x10);
    if (plVar7 == (long *)0x0) goto LAB_034c09d0;
    *plVar7 = *plVar11;
    *plVar11 = (long)plVar7;
  }
  if ((undefined8 *)plVar10[5] == (undefined8 *)0x0) {
    plVar10[4] = (long)plVar7;
  }
  else {
    *(undefined8 *)plVar10[5] = plVar7;
    plVar7 = (long *)*plVar11;
  }
  plVar10[5] = (long)plVar7;
  plVar10[6] = *plVar7;
  *plVar7 = 0;
  *(int *)((long)plVar10 + 0x44) = *(int *)((long)plVar10 + 0x44) + 1;
  *(ulong *)(plVar10[5] + 8) = CONCAT44(uVar6,iVar4) & 0x1ffffffff;
LAB_034c09b4:
  lVar8 = FUN_034c2f0c((long *)(param_1 + 0x118),param_2,auStack_54);
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar5;
    return plVar5;
  }
LAB_034c09d0:
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return (long *)0x0;
}


