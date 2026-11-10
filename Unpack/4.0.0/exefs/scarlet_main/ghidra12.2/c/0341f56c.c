/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341f56c; name: FUN_0341f56c
 */


undefined8 FUN_0341f56c(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long local_48;
  
  uVar12 = 0xfffffffffffffffc;
  if (*(ulong *)(param_1 + 0x70) != 0xffffffffffffffff) {
    uVar12 = *(ulong *)(param_1 + 0x70);
  }
  uVar4 = *(uint *)(param_2 + 0x28);
  if (uVar4 != 0) {
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar4 >> 1);
      uVar11 = *(ulong *)(*(long *)(param_2 + 0x20) + (long)iVar1 * 0x10 + 8);
      if (uVar11 == uVar12) {
        return 0;
      }
      if (uVar11 < uVar12) {
        iVar7 = iVar1 + 1;
      }
      uVar4 = uVar4 - (uVar11 < uVar12) >> 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_0341d9c0(param_1,uVar12,*(undefined4 *)(param_1 + 0x90),
                        *(undefined8 *)(*(long *)(param_2 + 8) + 0x78));
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  uVar12 = puVar2[0xf];
  uVar4 = *(uint *)(param_2 + 0x28);
  lVar3 = *(long *)(param_2 + 0x20);
  if (uVar4 == 0) {
    if (lVar3 != 0) {
      uVar11 = 0;
      goto LAB_0341f644;
    }
    iVar7 = *(int *)(param_2 + 0x2c);
    if (iVar7 == 0) {
      iVar7 = 1;
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,0,0x10);
      if (lVar3 != 0) {
        *(long *)(param_2 + 0x20) = lVar3;
        *(undefined4 *)(param_2 + 0x2c) = 1;
        goto LAB_0341f774;
      }
      goto LAB_0341f790;
    }
    lVar3 = 0;
LAB_0341f774:
    if (iVar7 == 0) goto LAB_0341f790;
    plVar6 = (long *)(lVar3 + (ulong)*(uint *)(param_2 + 0x28) * 0x10);
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) + 1;
    if (plVar6 == (long *)0x0) goto LAB_0341f790;
LAB_0341f6f4:
    plVar6[1] = uVar12;
LAB_0341f6f8:
    *plVar6 = (long)puVar2;
    uVar4 = *(uint *)(puVar2 + 0x10);
    if (uVar4 < 2) {
      *(uint *)(puVar2 + 0x10) = uVar4 + 1;
      if ((uVar4 != 0) && (*(char *)((long)puVar2 + 0x84) != '\0')) {
        FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0,puVar2);
      }
    }
    else {
      *(uint *)(puVar2 + 0x10) = uVar4 + 1;
    }
  }
  else {
    uVar5 = 0;
    uVar8 = uVar4;
    do {
      iVar7 = uVar5 + (uVar8 >> 1);
      uVar11 = *(ulong *)(lVar3 + (long)iVar7 * 0x10 + 8);
      if (uVar11 == uVar12) {
        plVar6 = (long *)(lVar3 + (long)iVar7 * 0x10);
        goto LAB_0341f6f8;
      }
      if (uVar11 < uVar12) {
        uVar5 = iVar7 + 1;
      }
      uVar8 = uVar8 - (uVar11 < uVar12) >> 1;
    } while (uVar8 != 0);
    uVar11 = (ulong)uVar5;
LAB_0341f644:
    uVar5 = *(uint *)(param_2 + 0x2c);
    if (uVar4 < uVar5) {
LAB_0341f688:
      if (uVar4 < uVar5) {
        uVar4 = *(uint *)(param_2 + 0x28);
        *(uint *)(param_2 + 0x28) = uVar4 + 1;
        if ((uint)uVar11 < uVar4) {
          plVar10 = (long *)(lVar3 + (ulong)uVar4 * 0x10);
          do {
            plVar9 = plVar10 + -2;
            *plVar10 = *plVar9;
            plVar10[1] = plVar10[-1];
            plVar6 = (long *)(*(long *)(param_2 + 0x20) + uVar11 * 0x10);
            plVar10 = plVar9;
          } while (plVar6 < plVar9);
        }
        else {
          plVar6 = (long *)(lVar3 + uVar11 * 0x10);
        }
        if (plVar6 != (long *)0x0) goto LAB_0341f6f4;
      }
    }
    else {
      iVar7 = uVar5 + (uVar5 >> 1);
      if (uVar5 == 0) {
        iVar7 = 1;
      }
      uVar5 = iVar7 + uVar5;
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,lVar3,(ulong)uVar5 << 4);
      if (lVar3 != 0) {
        *(long *)(param_2 + 0x20) = lVar3;
        *(uint *)(param_2 + 0x2c) = uVar5;
        goto LAB_0341f688;
      }
    }
  }
LAB_0341f790:
  iVar7 = *(int *)(puVar2 + 0x10);
  uVar4 = iVar7 - 1;
  *(uint *)(puVar2 + 0x10) = uVar4;
  if (iVar7 == 0 || uVar4 == 0) {
    if (uVar4 != 0) {
      return 1;
    }
  }
  else {
    if (1 < uVar4) {
      return 1;
    }
    if (*(char *)((long)puVar2 + 0x84) == '\0') goto LAB_0341f7fc;
  }
  lVar3 = puVar2[5];
  if (lVar3 != 0) {
    uVar4 = ((uint)lVar3 ^ (uint)lVar3 >> 0x10) * -0x7a143595;
    uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
    local_48 = lVar3;
    FUN_034c6294(&DAT_048b02b8,&local_48,uVar4 ^ uVar4 >> 0x10);
    uVar4 = *(uint *)(puVar2 + 0x10);
  }
LAB_0341f7fc:
  if (uVar4 == 0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar2);
  }
  return 1;
}


