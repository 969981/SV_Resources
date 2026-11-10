/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b2e64; name: FUN_034b2e64
 */


undefined4 FUN_034b2e64(undefined8 param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  
  puVar2 = PTR_DAT_047e2fd0;
  if (*param_2 == 0) {
    if ((char)param_2[0xb] == '\0') {
      lVar5 = *(long *)(param_3 + 2);
      if (lVar5 != 0) {
        plVar6 = *(long **)(param_2 + 4);
        if (plVar6 != (long *)0x0) {
          if (*(ushort *)(plVar6 + 2) - 1 == 0) {
            if (*plVar6 != 0) {
              *(undefined4 *)(plVar6 + 1) = 0;
              (**(code **)(puVar2 + 0x30))(0);
              *plVar6 = 0;
              *(undefined4 *)((long)plVar6 + 0xc) = 0;
            }
            (**(code **)(puVar2 + 0x30))(0,plVar6);
          }
          else {
            *(short *)(plVar6 + 2) = (short)(*(ushort *)(plVar6 + 2) - 1);
          }
        }
        *(long *)(param_2 + 4) = lVar5;
        *(short *)(lVar5 + 0x10) = *(short *)(lVar5 + 0x10) + 1;
        uVar1 = *param_3;
        *(short *)(param_2 + 8) = (short)uVar1;
        *(ulong *)(param_2 + 6) = *(long *)(param_2 + 2) + ((ulong)uVar1 & 0xffff) * 0x18;
      }
      uVar3 = FUN_034b1790(param_2,*(undefined4 *)(*(long *)PTR_DAT_047e2fe8 + 0x78));
      if ((*(byte *)(param_2 + 10) >> 1 & 1) != 0) {
        return uVar3;
      }
      FUN_034b1c80(param_2);
      *param_3 = (uint)*(ushort *)(param_2 + 8);
      lVar5 = *(long *)(param_2 + 4);
      plVar6 = *(long **)(param_3 + 2);
      if (plVar6 != (long *)0x0) {
        if (*(ushort *)(plVar6 + 2) - 1 == 0) {
          if (*plVar6 != 0) {
            *(undefined4 *)(plVar6 + 1) = 0;
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
            *plVar6 = 0;
            *(undefined4 *)((long)plVar6 + 0xc) = 0;
          }
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar6);
        }
        else {
          *(short *)(plVar6 + 2) = (short)(*(ushort *)(plVar6 + 2) - 1);
        }
      }
      *(long *)(param_3 + 2) = lVar5;
      if (lVar5 == 0) {
        return uVar3;
      }
      *(short *)(lVar5 + 0x10) = *(short *)(lVar5 + 0x10) + 1;
      return uVar3;
    }
    if (param_2[0xe] != 0) {
      plVar6 = *(long **)(param_2 + 0xc);
      do {
        plVar4 = plVar6 + 1;
        lVar5 = *(long *)(*plVar6 + 0x168);
        fVar7 = (float)param_2[0x18];
        fVar8 = (float)param_2[0x19];
        *(float *)(lVar5 + 4) = (float)param_2[0x17] + *(float *)(lVar5 + 4);
        *(float *)(lVar5 + 8) = fVar7 + *(float *)(lVar5 + 8);
        *(float *)(lVar5 + 0xc) = fVar8 + *(float *)(lVar5 + 0xc);
        plVar6 = plVar4;
      } while (plVar4 != (long *)(*(long *)(param_2 + 0xc) + (ulong)(uint)param_2[0xe] * 8));
    }
    *(undefined8 *)(param_2 + 0x1d) = *(undefined8 *)(param_2 + 0x17);
    param_2[0x1f] = param_2[0x19];
  }
  return 2;
}


