/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd4c48; name: FUN_00bd4c48
 */


undefined2 * FUN_00bd4c48(long param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    iVar12 = 0;
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 0x48) + (long)iVar12 * 8 + 8);
      pbVar7 = (byte *)(param_3 + 1);
      *param_3 = 0x3eba;
      uVar8 = *(uint *)((long)plVar4 + 0x14);
      if (0x7f < uVar8) {
        pbVar6 = pbVar7;
        uVar9 = uVar8;
        do {
          uVar8 = uVar9 >> 7;
          uVar2 = uVar9 >> 0xe;
          pbVar7 = pbVar6 + 1;
          *pbVar6 = (byte)uVar9 | 0x80;
          pbVar6 = pbVar7;
          uVar9 = uVar8;
        } while (uVar2 != 0);
      }
      *pbVar7 = (byte)uVar8;
      param_3 = (undefined2 *)(**(code **)(*plVar4 + 0x80))(plVar4,0,pbVar7 + 1);
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar1);
  }
  plVar11 = (long *)(param_1 + 0x10);
  plVar4 = (long *)*plVar11;
  if (plVar4 != (long *)0x0) {
    plVar13 = plVar11;
    do {
      if (999 < (int)plVar4[4]) {
        plVar13 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < 1000];
    } while (plVar4 != (long *)0x0);
    while ((plVar13 != plVar11 && ((int)plVar13[4] < 0x20000000))) {
      param_3 = (undefined2 *)FUN_00c1cbcc(plVar13 + 5,(int)plVar13[4],0);
      plVar4 = (long *)plVar13[1];
      if ((long *)plVar13[1] == (long *)0x0) {
        plVar4 = plVar13 + 2;
        bVar3 = *(long **)*plVar4 != plVar13;
        plVar13 = (long *)*plVar4;
        if (bVar3) {
          do {
            lVar10 = *plVar4;
            plVar4 = (long *)(lVar10 + 0x10);
            plVar13 = (long *)*plVar4;
          } while (*(long *)*plVar4 != lVar10);
        }
      }
      else {
        do {
          plVar13 = plVar4;
          plVar4 = (long *)*plVar13;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 0x28) & 1) == 0) {
    return param_3;
  }
  puVar5 = (undefined2 *)FUN_00c02cac(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe,param_3);
  return puVar5;
}


