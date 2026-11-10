/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347d824; name: FUN_0347d824
 */


undefined8 FUN_0347d824(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined8 uVar11;
  uint uVar12;
  
  pbVar9 = (byte *)*param_2;
  bVar3 = *pbVar9;
  *param_2 = (long)(pbVar9 + 1);
  uVar12 = (uint)bVar3;
  if (uVar12 == 0) {
    return 1;
  }
  bVar3 = pbVar9[1];
  pbVar9 = pbVar9 + 2;
  *param_2 = (long)pbVar9;
  puVar6 = PTR_DAT_047e2fd0;
  while( true ) {
    uVar12 = uVar12 - 1;
    bVar4 = *pbVar9;
    *param_2 = (long)(pbVar9 + 1);
    iVar2 = *(int *)(pbVar9 + 1);
    *param_2 = (long)(pbVar9 + 5);
    bVar5 = pbVar9[5];
    *param_2 = (long)(pbVar9 + 7);
    if (iVar2 != 0) {
      if (3 < bVar4) {
        uVar11 = 0x1f;
        goto LAB_0347d978;
      }
      piVar7 = (int *)param_1[1];
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)(**(code **)(puVar6 + 0x10))(2,0x28);
        if (piVar7 == (int *)0x0) {
          param_1[1] = 0;
          uVar11 = 0x34;
          goto joined_r0x0347d9ec;
        }
        *(undefined1 *)(piVar7 + 9) = 0;
        piVar7[0] = 0;
        piVar7[1] = 0;
        *(undefined2 *)(piVar7 + 2) = 0;
        piVar7[3] = 0;
        *(undefined2 *)(piVar7 + 4) = 0;
        piVar7[5] = 0;
        *(undefined2 *)(piVar7 + 6) = 0;
        piVar7[7] = 0;
        *(undefined2 *)(piVar7 + 8) = 0;
        param_1[1] = piVar7;
      }
      if (*piVar7 < 1) {
        *piVar7 = 0;
        lVar1 = param_1[1] + (ulong)bVar4 * 8;
        pcVar10 = (char *)(lVar1 + 9);
        piVar7 = (int *)(lVar1 + 4);
        if (((bool)*pcVar10 != (bVar5 != 0)) || (*piVar7 != iVar2)) {
          *pcVar10 = bVar5 != 0;
          *piVar7 = iVar2;
          (**(code **)(*(long *)*param_1 + 0x18))();
          (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,bVar4);
        }
      }
    }
    if (uVar12 == 0) break;
    pbVar9 = (byte *)*param_2;
  }
  uVar11 = 1;
LAB_0347d978:
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)0x0) {
joined_r0x0347d9ec:
    if (bVar3 == 0) {
      return uVar11;
    }
    puVar8 = (undefined8 *)(**(code **)(puVar6 + 0x10))(2,0x28);
    if (puVar8 == (undefined8 *)0x0) {
      param_1[1] = 0;
      return uVar11;
    }
    *(undefined1 *)((long)puVar8 + 0x24) = 0;
    *puVar8 = 0;
    *(undefined2 *)(puVar8 + 1) = 0;
    *(undefined4 *)((long)puVar8 + 0xc) = 0;
    *(undefined2 *)(puVar8 + 2) = 0;
    *(undefined4 *)((long)puVar8 + 0x14) = 0;
    *(undefined2 *)(puVar8 + 3) = 0;
    *(undefined4 *)((long)puVar8 + 0x1c) = 0;
    *(undefined2 *)(puVar8 + 4) = 0;
    param_1[1] = puVar8;
  }
  *(byte *)((long)puVar8 + 0x24) = bVar3;
  return uVar11;
}


