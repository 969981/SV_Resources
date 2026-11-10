/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f4ef5c; name: FUN_02f4ef5c
 */


void FUN_02f4ef5c(long param_1,uint param_2)

{
  ushort *puVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  
  param_2 = param_2 & 0xffffff;
  if (param_2 < *(uint *)(param_1 + 0x60)) {
    uVar5 = *(ushort *)(*(long *)(param_1 + 0x58) + (ulong)param_2 * 2);
    if (uVar5 != 0xffff) {
      *(undefined2 *)(*(long *)(param_1 + 0x58) + (ulong)param_2 * 2) = 0xffff;
      if (*(char *)(param_1 + 0x6a) == '\0') {
        uVar8 = (ulong)(uint)uVar5;
        do {
          lVar7 = *(long *)(param_1 + 0x48);
          puVar9 = (ulong *)(lVar7 + uVar8 * 0x10 + 8);
          plVar10 = (long *)(*puVar9 & 0xfffffffffffffffc);
          if (plVar10 != (long *)0x0) {
            if ((*puVar9 & 3) == 0) {
              *puVar9 = (ulong)plVar10 | 1;
              do {
                lVar3 = *plVar10;
                plVar10 = (long *)(plVar10[1] & 0xfffffffffffffffc);
                (**(code **)(lVar3 + 8))();
              } while (plVar10 != (long *)0x0);
              *puVar9 = 0;
            }
            else {
              do {
                plVar2 = (long *)(plVar10[1] & 0xfffffffffffffffc);
                plVar10[1] = (ulong)plVar2 | 1;
                plVar10 = plVar2;
              } while (plVar2 != (long *)0x0);
            }
          }
          puVar1 = (ushort *)(lVar7 + uVar8 * 0x10);
          uVar4 = *puVar1;
          uVar8 = (ulong)uVar4;
        } while (uVar4 != 0xffff);
        *puVar1 = *(ushort *)(param_1 + 0x40);
        *(ushort *)(param_1 + 0x40) = uVar5;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x78);
        lVar7 = (long)iVar6;
        if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) <= iVar6) {
          FUN_02eaee40(param_1 + 0x70,PTR_PTR_047d1a50,lVar7 + 1);
          iVar6 = *(int *)(param_1 + 0x78);
        }
        *(ushort *)(*(long *)(param_1 + 0x70) + (long)iVar6 * 2) = uVar5;
        *(int *)(param_1 + 0x78) = (int)(lVar7 + 1);
      }
    }
  }
  return;
}


