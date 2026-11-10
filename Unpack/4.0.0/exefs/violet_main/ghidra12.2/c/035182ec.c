/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035182ec; name: FUN_035182ec
 */


undefined4 FUN_035182ec(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint local_44;
  
  puVar1 = PTR_DAT_047e2fd0;
  lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x88);
  if (lVar6 != 0) {
    FUN_0351dac8(lVar6,param_1,param_2,param_3,param_4 & 1);
    plVar7 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
    if (plVar7 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar7 + 0x128))(plVar7,1);
      puVar2 = PTR_DAT_047e70c0;
      if ((uVar8 & 1) != 0) {
        lVar9 = plVar7[0x12];
        if ((lVar9 != 0) && (bVar10 = *(byte *)(lVar9 + 0x98), (bVar10 >> 1 & 1) == 0)) {
          plVar11 = (long *)(PTR_DAT_047e70c0 + 0x10);
          do {
            plVar13 = (long *)*plVar11;
            plVar11 = plVar13 + 10;
          } while (plVar13 != (long *)0x0 && plVar13 != plVar7);
          if (plVar13 == (long *)0x0) {
            plVar7[10] = 0;
            if (*(long *)(puVar2 + 0x10) == 0) {
              *(long **)(puVar2 + 0x10) = plVar7;
            }
            else {
              *(long **)(*(long *)(puVar2 + 8) + 0x50) = plVar7;
              lVar9 = plVar7[0x12];
            }
            *(long **)(puVar2 + 8) = plVar7;
            *(int *)puVar2 = *(int *)puVar2 + 1;
            bVar10 = *(byte *)(lVar9 + 0x98);
          }
          *(byte *)(lVar9 + 0x98) = bVar10 | 2;
        }
        if (DAT_048d2010 == (long *)0x0) {
          DAT_048d2008 = param_1;
        }
        plVar7 = param_1;
        param_1[0xe] = (long)DAT_048d2010;
        DAT_048d2010 = plVar7;
        param_1[0xc] = lVar6;
        puVar1 = PTR_DAT_047e6f38;
        if (*(int *)(param_2 + 0x14) == 0) {
          return 2;
        }
        local_44 = 0;
        uVar4 = FUN_034b40b8(*(undefined8 *)PTR_DAT_047e6f38,*(int *)(param_2 + 0x14),param_1 + 3,
                             &local_44);
        uVar3 = local_44;
        *(uint *)(param_1 + 4) = local_44;
        if (((local_44 >> 0x15 & 1) != 0) &&
           (iVar5 = FUN_0353480c(&DAT_048d2018,*(undefined4 *)(param_2 + 0x14)), iVar5 != 1)) {
          *(uint *)(param_1 + 4) = uVar3 & 0xffdfffff;
        }
        FUN_034b3928(*(undefined8 *)puVar1,*(undefined4 *)(param_2 + 0x14));
        return uVar4;
      }
      (**(code **)(*plVar7 + 0x130))(plVar7,1);
      puVar2 = PTR_DAT_047e70c0;
      lVar9 = plVar7[0x12];
      if (((lVar9 != 0) && (bVar10 = *(byte *)(lVar9 + 0x98), (bVar10 >> 1 & 1) != 0)) &&
         (*(short *)(lVar9 + 0x94) == 0)) {
        plVar11 = (long *)(PTR_DAT_047e70c0 + 0x10);
        plVar13 = (long *)0x0;
        do {
          plVar12 = plVar13;
          plVar13 = (long *)*plVar11;
          plVar11 = plVar13 + 10;
        } while (plVar13 != (long *)0x0 && plVar13 != plVar7);
        if (plVar13 != (long *)0x0) {
          plVar11 = (long *)(PTR_DAT_047e70c0 + 0x10);
          if (*(long **)(PTR_DAT_047e70c0 + 0x10) != plVar13) {
            plVar11 = plVar12 + 10;
          }
          *plVar11 = plVar13[10];
          if (*(long **)(puVar2 + 8) == plVar13) {
            *(long **)(puVar2 + 8) = plVar12;
          }
          *(int *)puVar2 = *(int *)puVar2 + -1;
          lVar9 = plVar7[0x12];
          bVar10 = *(byte *)(lVar9 + 0x98);
        }
        *(byte *)(lVar9 + 0x98) = bVar10 & 0xfd;
      }
    }
    FUN_0351dc28(lVar6);
    (**(code **)(puVar1 + 0x30))(0,lVar6);
  }
  return 2;
}


