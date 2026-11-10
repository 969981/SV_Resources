/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd79f4; name: FUN_00bd79f4
 */


undefined2 * FUN_00bd79f4(long param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    uVar2 = *(undefined1 *)(param_1 + 0x50);
    *param_3 = 0x288;
    *(undefined1 *)(param_3 + 1) = uVar2;
    param_3 = (undefined2 *)((long)param_3 + 3);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    iVar13 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0x48) + (long)iVar13 * 8 + 8);
      pbVar8 = (byte *)(param_3 + 1);
      *param_3 = 0x3eba;
      uVar9 = *(uint *)((long)plVar5 + 0x14);
      if (0x7f < uVar9) {
        pbVar7 = pbVar8;
        uVar10 = uVar9;
        do {
          uVar9 = uVar10 >> 7;
          uVar3 = uVar10 >> 0xe;
          pbVar8 = pbVar7 + 1;
          *pbVar7 = (byte)uVar10 | 0x80;
          pbVar7 = pbVar8;
          uVar10 = uVar9;
        } while (uVar3 != 0);
      }
      *pbVar8 = (byte)uVar9;
      param_3 = (undefined2 *)(**(code **)(*plVar5 + 0x80))(plVar5,0,pbVar8 + 1);
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar1);
  }
  plVar12 = (long *)(param_1 + 0x10);
  plVar5 = (long *)*plVar12;
  if (plVar5 != (long *)0x0) {
    plVar14 = plVar12;
    do {
      if (999 < (int)plVar5[4]) {
        plVar14 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < 1000];
    } while (plVar5 != (long *)0x0);
    while ((plVar14 != plVar12 && ((int)plVar14[4] < 0x20000000))) {
      param_3 = (undefined2 *)FUN_00c1cbcc(plVar14 + 5,(int)plVar14[4],0);
      plVar5 = (long *)plVar14[1];
      if ((long *)plVar14[1] == (long *)0x0) {
        plVar5 = plVar14 + 2;
        bVar4 = *(long **)*plVar5 != plVar14;
        plVar14 = (long *)*plVar5;
        if (bVar4) {
          do {
            lVar11 = *plVar5;
            plVar5 = (long *)(lVar11 + 0x10);
            plVar14 = (long *)*plVar5;
          } while (*(long *)*plVar5 != lVar11);
        }
      }
      else {
        do {
          plVar14 = plVar5;
          plVar5 = (long *)*plVar14;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 0x28) & 1) == 0) {
    return param_3;
  }
  puVar6 = (undefined2 *)FUN_00c02cac(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe,param_3);
  return puVar6;
}


