/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03338724; name: FUN_03338724
 */


void FUN_03338724(long param_1)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  char *local_40;
  char *pcStack_38;
  
  puVar9 = *(ulong **)(param_1 + 200);
  uVar10 = puVar9[2];
  if ((*(byte *)(param_1 + 0x158) >> 1 & 1) == 0) {
    pcVar1 = (char *)(*puVar9 & 0xfffffffffffffffe);
    if (pcVar1 == (char *)0x0) {
      if (puVar9[3] == 0) {
        iVar4 = *(int *)(uVar10 + 0x38);
        lVar6 = (long)iVar4;
        if ((int)(*(uint *)(uVar10 + 0x3c) & 0x7fffffff) <= iVar4) {
          FUN_03340784(uVar10 + 0x30,PTR_PTR_047d1a50,lVar6 + 1);
          iVar4 = *(int *)(uVar10 + 0x38);
        }
        *(undefined8 *)(*(long *)(uVar10 + 0x30) + (long)iVar4 * 8) = 0;
        *(int *)(uVar10 + 0x38) = (int)(lVar6 + 1);
        goto LAB_03338810;
      }
      lVar6 = 0;
    }
    else {
      sVar2 = strlen(pcVar1);
      lVar6 = (long)(int)sVar2;
    }
    pcStack_38 = pcVar1 + lVar6;
    local_40 = pcVar1;
    uVar3 = FUN_033364d4(param_1,&local_40,(int)puVar9[1],puVar9[3]);
  }
  else {
    pcVar1 = (char *)(*puVar9 & 0xfffffffffffffffe);
    if (pcVar1 == (char *)0x0) {
      lVar6 = 0;
    }
    else {
      sVar2 = strlen(pcVar1);
      lVar6 = (long)(int)sVar2;
    }
    pcStack_38 = pcVar1 + lVar6;
    local_40 = pcVar1;
    uVar3 = FUN_033388c8(param_1,&local_40,(int)puVar9[1],puVar9[3]);
  }
  iVar4 = *(int *)(uVar10 + 0x38);
  lVar6 = (long)iVar4;
  if ((int)(*(uint *)(uVar10 + 0x3c) & 0x7fffffff) <= iVar4) {
    FUN_03340784(uVar10 + 0x30,PTR_PTR_047d1a50,lVar6 + 1);
    iVar4 = *(int *)(uVar10 + 0x38);
  }
  *(undefined8 *)(*(long *)(uVar10 + 0x30) + (long)iVar4 * 8) = uVar3;
  *(int *)(uVar10 + 0x38) = (int)(lVar6 + 1);
LAB_03338810:
  if ((**(ulong **)(param_1 + 200) & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,**(ulong **)(param_1 + 200) - 1,0);
  }
  iVar4 = *(int *)(param_1 + 0xd0);
  iVar5 = iVar4 + -1;
  *(int *)(param_1 + 0xd0) = iVar5;
  if (1 < iVar4) {
    puVar8 = *(undefined8 **)(param_1 + 200);
    do {
      puVar7 = puVar8 + 4;
      iVar5 = iVar5 + -1;
      *puVar8 = *puVar7;
      puVar8[1] = puVar8[5];
      puVar8[2] = puVar8[6];
      puVar8[3] = puVar8[7];
      *puVar7 = 0;
      puVar8 = puVar7;
    } while (iVar5 != 0);
  }
  return;
}


