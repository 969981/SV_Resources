/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033a5458; name: FUN_033a5458
 */


int FUN_033a5458(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  byte bVar15;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_48;
  
  iVar4 = FUN_03376354();
  lVar13 = *(long *)(param_1 + 8);
  if (iVar4 == *(int *)(lVar13 + 0xe0)) {
    plVar1 = (long *)(lVar13 + 0xd8);
    if (((uint)*param_2 >> 3 & 1) != 0) {
      bVar15 = POPCOUNT((byte)*param_2 & 7);
      local_70 = (undefined1 *)param_2[(ulong)(CONCAT12(bVar15,(ushort)bVar15) & 0xff) + 2];
      if (local_70 != (undefined1 *)0x0) {
        lVar6 = FUN_033a53d0(lVar13 + 0x30,&local_70);
        lVar8 = *(long *)(lVar13 + 0x30);
        iVar5 = *(int *)(lVar13 + 0xe0);
        lVar9 = (long)iVar5;
        if ((int)(*(uint *)(lVar13 + 0xe4) & 0x7fffffff) <= iVar5) {
          FUN_03396e08(plVar1,PTR_PTR_047d1a50,lVar9 + 1);
          iVar5 = *(int *)(lVar13 + 0xe0);
        }
        puVar10 = (undefined4 *)(*(long *)(lVar13 + 0xd8) + (long)iVar5 * 0x18);
        *puVar10 = (int)((ulong)(lVar6 - lVar8) >> 3);
        puVar10[1] = 1;
        *(undefined8 *)(puVar10 + 2) = 0;
        *(undefined8 *)(puVar10 + 4) = 0x8000000000000000;
        *(int *)(lVar13 + 0xe0) = (int)(lVar9 + 1);
        local_70 = (undefined1 *)0x0;
        local_68 = -0x8000000000000000;
        uVar7 = (uint)*param_2;
        if ((((uVar7 >> 0xf & 1) != 0) &&
            (uVar12 = CONCAT44(uVar7,uVar7) & 0x7fff00007fff,
            lVar13 = param_2[(ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8))) +
                             2], lVar13 != 0)) &&
           (uVar12 = (ulong)*(ushort *)(lVar13 + 8), *(ushort *)(lVar13 + 8) != 0)) {
          FUN_033a5770(&local_70,uVar12);
          puVar14 = (undefined8 *)(lVar13 + 0x18);
          do {
            lVar13 = (long)(int)local_68;
            if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)local_68) {
              FUN_033a5898(&local_70,lVar13 + 1);
            }
            puVar3 = local_70;
            local_68 = CONCAT44(local_68._4_4_,(int)(lVar13 + 1));
            lVar8 = *(long *)(param_1 + 8);
            local_48 = *puVar14;
            lVar6 = FUN_033a53d0(lVar8 + 0x30,&local_48);
            *(long *)(puVar3 + lVar13 * 0x10) =
                 (lVar6 - *(long *)(lVar8 + 0x30)) * 0x20000000 >> 0x20;
            if (*(char *)*puVar14 == 't') {
              iVar5 = FUN_033a5458(param_1,puVar14[-1]);
              lVar6 = (long)iVar5;
            }
            else {
              lVar6 = puVar14[-1];
            }
            uVar12 = uVar12 - 1;
            puVar14 = puVar14 + 2;
            *(long *)(puVar3 + lVar13 * 0x10 + 8) = lVar6;
          } while (uVar12 != 0);
        }
        lVar13 = local_68;
        plVar2 = (long *)(*plVar1 + (long)iVar4 * 0x18 + 8);
        if (&local_70 != (undefined1 **)plVar2) {
          lVar13 = *plVar1 + (long)iVar4 * 0x18;
          puVar11 = (uint *)(lVar13 + 0x14);
          puVar10 = (undefined4 *)(lVar13 + 0x10);
          *puVar10 = 0;
          if ((-1 < (int)*puVar11) && (*plVar2 != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*plVar2,(ulong)*puVar11 << 4);
          }
          *plVar2 = 0;
          *puVar10 = 0;
          *puVar11 = 0x80000000;
          FUN_03396d54(&local_70,PTR_PTR_047d1a50);
          *plVar2 = (long)local_70;
          *puVar10 = (int)local_68;
          *puVar11 = local_68._4_4_;
          return iVar4;
        }
        uVar12 = (ulong)local_68._4_4_;
        local_68 = (ulong)local_68._4_4_ << 0x20;
        if (lVar13 < 0) {
          return iVar4;
        }
        if (local_70 == (undefined1 *)0x0) {
          return iVar4;
        }
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,uVar12 << 4);
        return iVar4;
      }
    }
    local_70 = &DAT_03c886bc;
    lVar6 = FUN_033a53d0(lVar13 + 0x30,&local_70);
    lVar8 = *(long *)(lVar13 + 0x30);
    iVar5 = *(int *)(lVar13 + 0xe0);
    lVar9 = (long)iVar5;
    if ((int)(*(uint *)(lVar13 + 0xe4) & 0x7fffffff) <= iVar5) {
      FUN_03396e08(plVar1,PTR_PTR_047d1a50,lVar9 + 1);
      iVar5 = *(int *)(lVar13 + 0xe0);
    }
    puVar10 = (undefined4 *)(*(long *)(lVar13 + 0xd8) + (long)iVar5 * 0x18);
    *puVar10 = (int)((ulong)(lVar6 - lVar8) >> 3);
    puVar10[1] = 1;
    *(undefined8 *)(puVar10 + 2) = 0;
    *(undefined8 *)(puVar10 + 4) = 0x8000000000000000;
    *(int *)(lVar13 + 0xe0) = (int)(lVar9 + 1);
  }
  return iVar4;
}


