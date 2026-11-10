/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0021b394; name: FUN_0021b394
 */


void FUN_0021b394(long *param_1,undefined *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  
  puVar8 = (ulong *)(param_1 + 1);
  *puVar8 = 0;
  puVar3 = PTR_DAT_047cbe38;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar4 = FUN_0021d48c(puVar8);
    uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    lVar7 = uVar9 + 9;
    if ((*(byte *)(uVar9 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar9 + 0x10);
      lVar7 = *(long *)(uVar9 + 0x18);
    }
    FUN_0021d540(uVar4,lVar7,uVar1);
  }
  puVar3 = PTR_DAT_047cba80;
  param_1[2] = (long)PTR_DAT_047cba80;
  bVar2 = **(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0021b428:
      puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
      if ((*puVar8 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_001fcdc8(param_1 + 2,puVar6);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x10) + 8) != 0) goto LAB_0021b428;
  param_1[3] = (long)puVar3;
  bVar2 = **(byte **)(param_2 + 0x18);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0021b460:
      puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
      if ((*puVar8 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_001fcdc8(param_1 + 3,puVar6);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x18) + 8) != 0) goto LAB_0021b460;
  param_1[4] = (long)puVar3;
  bVar2 = **(byte **)(param_2 + 0x20);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto joined_r0x0021b4c4;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x20) + 8) == 0) goto joined_r0x0021b4c4;
  puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffe);
  if ((*puVar8 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  FUN_001fcdc8(param_1 + 4,puVar6);
joined_r0x0021b4c4:
  if ((param_2 == PTR_DAT_047cbb58) || (lVar7 = *(long *)(param_2 + 0x28), lVar7 == 0)) {
    param_1[5] = 0;
    return;
  }
  lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar5 != 0) {
    FUN_004eb024(lVar5,lVar7);
  }
  param_1[5] = lVar5;
  return;
}


