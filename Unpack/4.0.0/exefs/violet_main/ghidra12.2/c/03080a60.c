/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03080a60; name: FUN_03080a60
 */


void FUN_03080a60(long param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined2 local_66;
  
  do {
    puVar5 = (undefined4 *)(param_1 + (long)(param_2 + param_3 >> 1) * 0xc);
    local_70 = *puVar5;
    uStack_6c = puVar5[1];
    local_68 = *(undefined2 *)(puVar5 + 2);
    local_66 = *(undefined2 *)((long)puVar5 + 10);
    iVar9 = param_3;
    iVar8 = param_2;
    do {
      puVar3 = (undefined8 *)(param_1 + (long)iVar8 * 0xc);
      do {
        iVar12 = iVar8;
        puVar11 = puVar3;
        cVar4 = (*param_4)(puVar11,&local_70);
        puVar3 = (undefined8 *)((long)puVar11 + 0xc);
        iVar8 = iVar12 + 1;
      } while (cVar4 != '\0');
      puVar2 = (undefined2 *)(param_1 + 0x16 + (long)iVar9 * 0xc);
      iVar9 = iVar9 + 1;
      do {
        iVar10 = iVar9;
        puVar6 = puVar2;
        cVar4 = (*param_4)(&local_70,puVar6 + -0xb);
        iVar9 = iVar10 + -1;
        puVar2 = puVar6 + -6;
      } while (cVar4 != '\0');
      iVar8 = iVar12;
      if (iVar12 <= iVar9) {
        if (iVar12 != iVar9) {
          uVar7 = *(undefined8 *)(puVar6 + -0xb);
          *(undefined4 *)(puVar6 + -0xb) = *(undefined4 *)puVar11;
          *(undefined4 *)(puVar6 + -9) = *(undefined4 *)((long)puVar11 + 4);
          uVar1 = *(undefined4 *)(puVar6 + -7);
          puVar6[-7] = *(undefined2 *)(puVar11 + 1);
          puVar6[-6] = *(undefined2 *)((long)puVar11 + 10);
          *puVar11 = uVar7;
          *(undefined4 *)(puVar11 + 1) = uVar1;
        }
        iVar9 = iVar10 + -2;
        iVar8 = iVar12 + 1;
      }
    } while (iVar8 <= iVar9);
    if (param_2 < iVar9) {
      FUN_03080a60(param_1,param_2,iVar9,param_4);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


