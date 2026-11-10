/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03046234; name: FUN_03046234
 */


int FUN_03046234(long param_1,long *param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  int iVar13;
  uint local_68 [2];
  
  uVar3 = *(uint *)(param_1 + 0x2c);
  uVar6 = param_4;
  uVar10 = param_3;
  if (param_4 <= param_3) {
    uVar6 = param_3;
    uVar10 = param_4;
  }
  plVar1 = (long *)(param_1 + 0x20);
  if (0 < (int)uVar3) {
    uVar11 = (ulong)(uVar3 & (int)uVar6 * -0x61c8864f);
    lVar9 = *plVar1;
    puVar12 = (ulong *)(lVar9 + uVar11 * 0x18);
    uVar4 = *puVar12;
    uVar2 = puVar12[1];
    if (uVar4 != 0xffffffffffffffff && uVar2 != 0xffffffffffffffff) {
      if (uVar4 != uVar10 || uVar2 != uVar6) {
        do {
          uVar11 = (ulong)((int)uVar11 + 1U & uVar3);
          puVar12 = (ulong *)(lVar9 + uVar11 * 0x18);
          uVar4 = *puVar12;
          uVar2 = puVar12[1];
          if (uVar4 == 0xffffffffffffffff || uVar2 == 0xffffffffffffffff) goto LAB_030462b0;
        } while (uVar4 != uVar10 || uVar2 != uVar6);
      }
      iVar13 = *(int *)(lVar9 + uVar11 * 0x18 + 0x10) + 1;
      goto LAB_03046304;
    }
  }
LAB_030462b0:
  iVar13 = 1;
LAB_03046304:
  if ((int)uVar3 < *(int *)(param_1 + 0x28) * 2) {
    FUN_03046038(plVar1,uVar3 * 2 + 2);
    uVar3 = *(uint *)(param_1 + 0x2c);
  }
  uVar8 = (int)uVar6 * -0x61c8864f;
  do {
    uVar8 = uVar3 & uVar8;
    puVar12 = (ulong *)(*plVar1 + (ulong)uVar8 * 0x18);
    uVar4 = *puVar12;
    uVar2 = puVar12[1];
    if (uVar4 == 0xffffffffffffffff || uVar2 == 0xffffffffffffffff) {
      iVar5 = 1;
LAB_03046370:
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar5;
      puVar12 = (ulong *)(*plVar1 + (long)(int)uVar8 * 0x18);
      *puVar12 = uVar10;
      puVar12[1] = uVar6;
      *(int *)(*(long *)(param_1 + 0x20) + (long)(int)uVar8 * 0x18 + 0x10) = iVar13;
      if (param_2 != (long *)0x0) {
        if ((long)param_3 < 0) {
          uVar6 = param_3 & 0xffffffff;
        }
        else {
          uVar10 = FUN_00dbb6c8(param_2 + 300,param_3,local_68);
          uVar6 = (ulong)local_68[0];
          if ((uVar10 & 1) == 0) {
            uVar6 = 0xffffff;
          }
        }
        lVar9 = param_2[7];
        if ((long)param_4 < 0) {
          uVar10 = param_4 & 0xffffffff;
          lVar7 = lVar9;
        }
        else {
          uVar4 = FUN_00dbb6c8(param_2 + 300,param_4,local_68);
          uVar10 = (ulong)local_68[0];
          if ((uVar4 & 1) == 0) {
            uVar10 = 0xffffff;
          }
          lVar7 = param_2[7];
        }
        if (((*(byte *)(lVar9 + (uVar6 & 0xffffff) * 0xc0 + 0x54) >> 1 & 1) != 0) &&
           (((*(byte *)(lVar7 + (uVar10 & 0xffffff) * 0xc0 + 0x54) >> 1 & 1) == 0 ||
            ((float)((uint)*(ushort *)(lVar9 + (uVar6 & 0xffffff) * 0xc0 + 0x94) << 0x10) <=
             (float)((uint)*(ushort *)(lVar7 + (uVar10 & 0xffffff) * 0xc0 + 0x94) << 0x10))))) {
          param_4 = param_3;
        }
        (**(code **)(*param_2 + 0x398))(param_2,param_4,param_5);
      }
      return iVar13;
    }
    if ((uVar2 == uVar6) && (uVar4 == uVar10)) {
      iVar5 = 0;
      goto LAB_03046370;
    }
    uVar8 = uVar8 + 1;
  } while( true );
}


