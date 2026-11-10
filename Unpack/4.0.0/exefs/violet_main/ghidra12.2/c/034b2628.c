/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b2628; name: FUN_034b2628
 */


undefined8 FUN_034b2628(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    plVar6 = (long *)*param_1;
    plVar9 = plVar6 + uVar3;
    if (*plVar6 != param_2) {
      lVar7 = (ulong)uVar3 * 8;
      do {
        lVar7 = lVar7 + -8;
        if (lVar7 == 0) {
          plVar6 = plVar9;
          break;
        }
        plVar2 = plVar6 + 1;
        plVar1 = plVar6 + 1;
        plVar6 = plVar2;
      } while (*plVar1 != param_2);
    }
    if (plVar9 != plVar6) {
      puVar8 = (undefined4 *)*plVar6;
      if (uVar3 < 2) {
        iVar5 = 0;
      }
      else {
        *plVar6 = plVar9[-1];
        iVar5 = *(int *)(param_1 + 1) + -1;
      }
      *(int *)(param_1 + 1) = iVar5;
      *puVar8 = 0;
      puVar4 = PTR_DAT_047e2fd0;
      if (*(long *)(puVar8 + 0xc) != 0) {
        puVar8[0xe] = 0;
        (**(code **)(puVar4 + 0x30))(0);
        *(undefined8 *)(puVar8 + 0xc) = 0;
        puVar8[0xf] = 0;
      }
      if ((*(byte *)(puVar8 + 10) >> 1 & 1) != 0) {
        plVar9 = *(long **)(puVar8 + 4);
        if (plVar9 != (long *)0x0) {
          if (*(ushort *)(plVar9 + 2) - 1 == 0) {
            if (*plVar9 != 0) {
              *(undefined4 *)(plVar9 + 1) = 0;
              (**(code **)(puVar4 + 0x30))(0);
              *plVar9 = 0;
              *(undefined4 *)((long)plVar9 + 0xc) = 0;
            }
            (**(code **)(puVar4 + 0x30))(0,plVar9);
          }
          else {
            *(short *)(plVar9 + 2) = (short)(*(ushort *)(plVar9 + 2) - 1);
          }
        }
        *(undefined8 *)(puVar8 + 4) = 0;
      }
      if (*(long *)(puVar8 + 0x22) != 0) {
        puVar8[0x24] = 0;
        (**(code **)(puVar4 + 0x30))(0);
        *(undefined8 *)(puVar8 + 0x22) = 0;
        puVar8[0x25] = 0;
      }
      plVar9 = *(long **)(puVar8 + 4);
      if (plVar9 != (long *)0x0) {
        if (*(ushort *)(plVar9 + 2) - 1 == 0) {
          if (*plVar9 != 0) {
            *(undefined4 *)(plVar9 + 1) = 0;
            (**(code **)(puVar4 + 0x30))(0);
            *plVar9 = 0;
            *(undefined4 *)((long)plVar9 + 0xc) = 0;
          }
          (**(code **)(puVar4 + 0x30))(0,plVar9);
        }
        else {
          *(short *)(plVar9 + 2) = (short)(*(ushort *)(plVar9 + 2) - 1);
        }
      }
      (**(code **)(puVar4 + 0x30))(0,puVar8);
      return 1;
    }
  }
  return 0x24;
}


