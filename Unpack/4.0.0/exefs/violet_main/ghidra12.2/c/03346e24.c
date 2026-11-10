/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03346e24; name: FUN_03346e24
 */


undefined8 FUN_03346e24(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_58;
  
  if (*param_2 != param_2[1]) {
    local_58 = FUN_03342334(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
    plVar1 = (long *)(*(long *)(param_1 + 0x68) + 0x108);
    lVar6 = FUN_03348c94(plVar1,&local_58);
    puVar4 = PTR_PTR_047d1a50;
    if (lVar6 == 0) {
      return 0;
    }
    iVar2 = *(int *)(*plVar1 + (long)*(int *)(lVar6 + 4) * 0x10 + 8);
    if (-1 < iVar2) {
      lVar6 = *(long *)(param_1 + 0x60);
      if (0 < *(int *)(lVar6 + 0x50)) {
        lVar11 = 0;
        do {
          plVar1 = (long *)(*(long *)(lVar6 + 0x18) +
                           (long)*(int *)(*(long *)(lVar6 + 0x48) + lVar11 * 4) * 0x10);
          plVar12 = plVar1 + 1;
          iVar7 = (int)*plVar12;
          lVar8 = (long)iVar7;
          if ((int)(*(uint *)((long)plVar1 + 0xc) & 0x7fffffff) <= iVar7) {
            FUN_0133bb88(plVar1,puVar4,lVar8 + 1);
            iVar7 = (int)*plVar12;
          }
          *(int *)(*plVar1 + (long)iVar7 * 4) = iVar2;
          *(int *)plVar12 = (int)(lVar8 + 1);
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar6 + 0x50));
      }
      iVar7 = *(int *)(param_1 + 0x20);
      if (iVar7 <= *(int *)(param_1 + 0x28) * 2) {
        FUN_0334a3a0((long *)(param_1 + 0x18),iVar7 << 1);
        iVar7 = *(int *)(param_1 + 0x20);
      }
      uVar9 = (iVar2 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar2 * -0x61c8864f & 0xff00ffU) << 8;
      uVar9 = iVar7 - 1U & (uVar9 >> 0x10 | uVar9 << 0x10);
      lVar6 = *(long *)(param_1 + 0x18);
      piVar10 = (int *)(lVar6 + (long)(int)uVar9 * 4);
      if (*piVar10 == -1) {
LAB_03346f9c:
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *piVar10 = iVar2;
        lVar6 = *(long *)(param_1 + 0x68);
        lVar11 = *(long *)(*(long *)(lVar6 + 0x98) + (long)iVar2 * 8);
        if (*(char *)(param_1 + 0x78) == '\0') {
          bVar5 = *(char *)(lVar11 + 0x34) == '\0';
        }
        else {
          bVar5 = true;
        }
        *(bool *)(param_1 + 0x78) = bVar5;
        if (*(char *)(param_1 + 0x79) == '\0') {
          bVar5 = *(char *)(lVar11 + 0x34) != '\0';
        }
        else {
          bVar5 = true;
        }
        *(bool *)(param_1 + 0x79) = bVar5;
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      else {
        if (*piVar10 != iVar2) {
          do {
            uVar9 = uVar9 + 1 & iVar7 - 1U;
            iVar3 = *(int *)(lVar6 + (long)(int)uVar9 * 4);
            if (iVar3 == -1) {
              piVar10 = (int *)(lVar6 + (long)(int)uVar9 * 4);
              goto LAB_03346f9c;
            }
          } while (iVar3 != iVar2);
          piVar10 = (int *)(lVar6 + (long)(int)uVar9 * 4);
        }
        *piVar10 = iVar2;
        lVar6 = *(long *)(param_1 + 0x68);
      }
      return *(undefined8 *)(*(long *)(lVar6 + 0x98) + (long)iVar2 * 8);
    }
  }
  return 0;
}


