/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034762c4; name: FUN_034762c4
 */


int FUN_034762c4(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint local_70 [7];
  uint local_54;
  
  local_54 = *(uint *)(param_1 + 0x50);
  puVar9 = (uint *)((long)local_70 - ((ulong)local_54 * 4 + 0xf & 0x7fffffff0));
  local_70[1] = local_54 * 0x18 | 4;
  local_70[0] = 0x20657563;
  iVar11 = 4;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),local_70,8);
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_54,4);
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 == 0) {
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    lVar7 = 0;
    do {
      puVar13 = (uint *)(*(long *)(param_1 + 0x48) + lVar7);
      local_70[0] = *puVar13;
      local_70[1] = puVar13[1];
      local_70[2] = 0x61746164;
      local_70[3] = 0;
      local_70[4] = 0;
      local_70[5] = puVar13[1];
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),local_70,0x18);
      lVar7 = lVar7 + 0x10;
    } while ((ulong)uVar2 * 0x10 != lVar7);
    uVar3 = *(uint *)(param_1 + 0x50);
    uVar8 = (ulong)uVar3;
    iVar10 = uVar2 * 0x18;
    if (uVar3 == 0) {
      iVar5 = 0;
      iVar11 = 4;
    }
    else {
      iVar11 = 0;
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
      puVar13 = puVar9;
      do {
        sVar4 = strlen((char *)*puVar12);
        uVar2 = (int)sVar4 + 1;
        uVar8 = uVar8 - 1;
        *puVar13 = uVar2;
        iVar11 = uVar2 + iVar11 + (uVar2 & 1);
        puVar12 = puVar12 + 2;
        puVar13 = puVar13 + 1;
      } while (uVar8 != 0);
      iVar11 = iVar11 + 4;
      iVar5 = uVar3 * 0xc;
    }
  }
  local_70[1] = iVar11 + iVar5;
  local_70[0] = 0x5453494c;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),local_70,8);
  local_54 = 0x6c746461;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_54,4);
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 == 0) {
    iVar11 = 0;
  }
  else {
    lVar7 = 0;
    iVar11 = 0;
    do {
      uVar3 = *puVar9;
      local_70[1] = uVar3 + 4;
      local_70[0] = 0x6c62616c;
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x48) + lVar7);
      local_70[2] = *puVar1;
      uVar6 = *(undefined8 *)(puVar1 + 2);
      local_70[3] = (uint)uVar6;
      local_70[4] = (uint)((ulong)uVar6 >> 0x20);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),local_70,0xc);
      iVar5 = iVar11 + uVar3;
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                (*(long **)(param_1 + 0x60),CONCAT44(local_70[4],local_70[3]),uVar3);
      iVar11 = iVar5 + 0xc;
      if ((uVar3 & 1) != 0) {
        local_54 = local_54 & 0xffffff00;
        (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_54,1);
        iVar11 = iVar5 + 0xd;
      }
      lVar7 = lVar7 + 0x10;
      puVar9 = puVar9 + 1;
    } while ((ulong)uVar2 * 0x10 != lVar7);
  }
  return iVar10 + iVar11 + 0x18;
}


