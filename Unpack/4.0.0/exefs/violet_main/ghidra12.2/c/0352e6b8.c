/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352e6b8; name: FUN_0352e6b8
 */


long * FUN_0352e6b8(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  void *__s;
  long lVar11;
  uint uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  size_t __n;
  ulong uVar17;
  
  puVar7 = PTR_DAT_047e2fd0;
  uVar5 = *(ushort *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x30) < 2) {
    if (uVar5 != 0) {
      plVar10 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
      if (plVar10 == (long *)0x0) {
        return (long *)0x0;
      }
      *plVar10 = (long)(PTR_DAT_047e72a8 + 0x10);
      *(undefined1 *)(plVar10 + 1) = 1;
      *(undefined2 *)((long)plVar10 + 10) = 0xffff;
      return plVar10;
    }
  }
  else if ((*(uint *)(param_1 + 0x30) - 2 < 2) && (uVar5 != 0)) {
    uVar6 = *(ushort *)(param_1 + 0x38);
    plVar10 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x38);
    puVar8 = PTR_DAT_047e72b0;
    if (plVar10 == (long *)0x0) {
      return (long *)0x0;
    }
    *(uint *)(plVar10 + 1) = (uint)uVar5 * 50000;
    *(uint *)((long)plVar10 + 0xc) = (uint)uVar5 * 50000;
    *(ushort *)((long)plVar10 + 0x12) = uVar5;
    plVar10[6] = 0;
    *plVar10 = (long)(puVar8 + 0x10);
    *(ushort *)(plVar10 + 2) = uVar5;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    uVar17 = (ulong)uVar5 + 7 >> 3;
    __n = uVar17 << 1;
    __s = (void *)(**(code **)(puVar7 + 0x10))(0,__n);
    plVar10[5] = (long)__s;
    if (__s != (void *)0x0) {
      plVar10[6] = (long)__s + uVar17;
      memset(__s,0,__n);
      uVar12 = (uint)uVar6;
      if (3 < uVar12) {
        uVar12 = 4;
      }
      if (uVar12 == 0) {
LAB_0352e7ac:
        if (*(char *)(param_1 + 0x34) == '\0') {
          return plVar10;
        }
        iVar14 = 0;
        if (*(uint *)(param_1 + 0x28) != 0) {
          plVar13 = *(long **)(param_1 + 0x20);
          uVar15 = (ulong)*(uint *)(param_1 + 0x28) * 8 - 8;
          uVar17 = (uVar15 >> 3) + 1;
          uVar16 = uVar17 & 3;
          if (uVar15 < 0x18) {
            iVar14 = 0;
          }
          else {
            iVar14 = 0;
            lVar11 = -(uVar17 & 0x3ffffffffffffffc);
            do {
              lVar2 = *plVar13;
              plVar3 = plVar13 + 1;
              lVar11 = lVar11 + 4;
              plVar1 = plVar13 + 2;
              plVar4 = plVar13 + 3;
              plVar13 = plVar13 + 4;
              iVar14 = *(int *)(*plVar4 + 0x1c) +
                       *(int *)(*plVar1 + 0x1c) +
                       *(int *)(*plVar3 + 0x1c) + *(int *)(lVar2 + 0x1c) + iVar14;
            } while (lVar11 != 0);
          }
          if (uVar16 != 0) {
            lVar11 = -uVar16;
            do {
              bVar9 = lVar11 != -1;
              lVar11 = lVar11 + 1;
              iVar14 = *(int *)(*plVar13 + 0x1c) + iVar14;
              plVar13 = plVar13 + 1;
            } while (bVar9);
          }
        }
        *(int *)(plVar10 + 1) = iVar14;
        *(int *)((long)plVar10 + 0xc) = iVar14;
        return plVar10;
      }
      lVar11 = (**(code **)(puVar7 + 0x10))(0,uVar12 << 1);
      plVar10[3] = lVar11;
      if (lVar11 != 0) {
        *(uint *)((long)plVar10 + 0x24) = uVar12;
        goto LAB_0352e7ac;
      }
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return (long *)0x0;
}


