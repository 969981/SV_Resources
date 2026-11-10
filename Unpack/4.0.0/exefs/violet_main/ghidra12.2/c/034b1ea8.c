/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b1ea8; name: FUN_034b1ea8
 */


undefined8
FUN_034b1ea8(int *param_1,undefined8 param_2,int param_3,uint param_4,byte param_5,uint *param_6)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if (*param_1 == 0) {
    *(undefined8 *)(param_1 + 2) = param_2;
    *(short *)((long)param_1 + 0x22) = (short)param_3;
    param_1[10] = param_4;
    *(byte *)((long)param_1 + 0x2d) = param_5 & 1;
    puVar4 = PTR_DAT_047e2fd0;
    lVar12 = *(long *)(param_6 + 2);
    if (lVar12 != 0) {
      plVar10 = *(long **)(param_1 + 4);
      if (plVar10 != (long *)0x0) {
        if (*(ushort *)(plVar10 + 2) - 1 == 0) {
          if (*plVar10 != 0) {
            *(undefined4 *)(plVar10 + 1) = 0;
            (**(code **)(puVar4 + 0x30))(0);
            *plVar10 = 0;
            *(undefined4 *)((long)plVar10 + 0xc) = 0;
          }
          (**(code **)(puVar4 + 0x30))(0,plVar10);
        }
        else {
          *(short *)(plVar10 + 2) = (short)(*(ushort *)(plVar10 + 2) - 1);
        }
      }
      *(long *)(param_1 + 4) = lVar12;
      *(short *)(lVar12 + 0x10) = *(short *)(lVar12 + 0x10) + 1;
      uVar8 = *param_6;
      *(short *)(param_1 + 8) = (short)uVar8;
      *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + ((ulong)uVar8 & 0xffff) * 0x18;
      return 1;
    }
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = param_2;
    puVar4 = PTR_DAT_047e2fd0;
    plVar10 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
    if (plVar10 != (long *)0x0) {
      *(undefined2 *)(plVar10 + 2) = 0;
      *plVar10 = 0;
      plVar10[1] = 0;
      if (param_3 != 0) {
        puVar6 = (undefined1 *)(**(code **)(puVar4 + 0x20))(0,0,param_3);
        if (puVar6 == (undefined1 *)0x0) {
          if (*plVar10 != 0) {
            *(undefined4 *)(plVar10 + 1) = 0;
            (**(code **)(puVar4 + 0x30))(0);
            *plVar10 = 0;
            *(undefined4 *)((long)plVar10 + 0xc) = 0;
          }
          (**(code **)(puVar4 + 0x30))(0,plVar10);
          plVar10 = (long *)0x0;
        }
        else {
          *plVar10 = (long)puVar6;
          *(int *)(plVar10 + 1) = param_3;
          *(int *)((long)plVar10 + 0xc) = param_3;
          *puVar6 = 0;
          if (1 < *(uint *)(plVar10 + 1)) {
            uVar7 = 1;
            do {
              *(undefined1 *)(*plVar10 + uVar7) = 0;
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(plVar10 + 1));
          }
        }
      }
    }
    plVar11 = *(long **)(param_1 + 4);
    if (plVar11 != (long *)0x0) {
      if (*(ushort *)(plVar11 + 2) - 1 == 0) {
        if (*plVar11 != 0) {
          *(undefined4 *)(plVar11 + 1) = 0;
          (**(code **)(puVar4 + 0x30))(0);
          *plVar11 = 0;
          *(undefined4 *)((long)plVar11 + 0xc) = 0;
        }
        (**(code **)(puVar4 + 0x30))(0,plVar11);
      }
      else {
        *(short *)(plVar11 + 2) = (short)(*(ushort *)(plVar11 + 2) - 1);
      }
    }
    *(long **)(param_1 + 4) = plVar10;
    if (plVar10 != (long *)0x0) {
      *(short *)(plVar10 + 2) = (short)plVar10[2] + 1;
      plVar10 = *(long **)(param_1 + 4);
      if (plVar10 != (long *)0x0) {
        if ((param_4 & 1) == 0) {
          return 1;
        }
        lVar12 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
        *(long *)PTR_DAT_047e7068 = lVar12;
        uVar2 = *(ushort *)((long)param_1 + 0x22);
        uVar3 = 0;
        uVar8 = (uint)((ulong)lVar12 >> 0x21);
        if (uVar2 != 0) {
          uVar3 = uVar8 / uVar2;
        }
        uVar8 = uVar8 - uVar3 * uVar2;
        uVar7 = (ulong)uVar8;
        *(short *)(param_1 + 8) = (short)uVar8;
        if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) {
          *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + (ulong)uVar8 * 0x18;
        }
        uVar8 = *(uint *)(plVar10 + 1);
        if (uVar8 != 0) {
          uVar9 = 0;
          bVar5 = true;
          do {
            while (!bVar5) {
              uVar9 = uVar9 + 1;
              bVar5 = false;
              if (uVar9 == uVar8) goto LAB_034b2188;
            }
            cVar1 = ((undefined1 *)*plVar10)[uVar9];
            uVar9 = uVar9 + 1;
            bVar5 = cVar1 != '\0';
          } while (uVar9 != uVar8);
          if (cVar1 != '\0') {
            *(undefined1 *)*plVar10 = 0;
            if (1 < *(uint *)(plVar10 + 1)) {
              uVar7 = 1;
              do {
                *(undefined1 *)(*plVar10 + uVar7) = 0;
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(uint *)(plVar10 + 1));
            }
            plVar10 = *(long **)(param_1 + 4);
            uVar7 = (ulong)*(ushort *)(param_1 + 8);
          }
        }
LAB_034b2188:
        *(undefined1 *)(*plVar10 + (uVar7 & 0xffff)) = 1;
        return 1;
      }
    }
  }
  return 2;
}


