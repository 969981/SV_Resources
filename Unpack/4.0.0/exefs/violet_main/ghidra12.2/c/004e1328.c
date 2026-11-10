/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e1328; name: FUN_004e1328
 */


undefined8 FUN_004e1328(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    *param_2 = 0x288;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x4c);
    *param_2 = 0x290;
    if (uVar1 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar1;
      param_2 = (undefined2 *)((long)param_2 + 3);
      iVar2 = *(int *)(param_1 + 0x38);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar1 | 0x80;
      uVar9 = (ulong)(long)(int)uVar1 >> 7;
      if (((ulong)(long)(int)uVar1 >> 0xe & 0x3ffff) == 0) {
        *(char *)((long)param_2 + 3) = (char)uVar9;
        param_2 = param_2 + 2;
        iVar2 = *(int *)(param_1 + 0x38);
      }
      else {
        param_2 = param_2 + 2;
        do {
          puVar8 = param_2;
          uVar10 = uVar9 >> 7;
          *(byte *)((long)puVar8 + -1) = (byte)uVar9 | 0x80;
          param_2 = (undefined2 *)((long)puVar8 + 1);
          uVar11 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar11 != 0);
        *(char *)puVar8 = (char)uVar10;
        iVar2 = *(int *)(param_1 + 0x38);
      }
    }
  }
  if (iVar2 != 0) {
    iVar12 = 0;
    do {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar12 * 8 + 8);
      *param_2 = 0x3eba;
      uVar1 = *(uint *)(lVar6 + 0x14);
      if (uVar1 < 0x80) {
        *(byte *)(param_2 + 1) = (byte)uVar1;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        *(byte *)(param_2 + 1) = (byte)uVar1 | 0x80;
        if (uVar1 >> 0xe == 0) {
          *(char *)((long)param_2 + 3) = (char)(uVar1 >> 7);
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          uVar1 = uVar1 >> 7;
          do {
            puVar8 = param_2;
            uVar4 = uVar1 >> 7;
            *(byte *)((long)puVar8 + -1) = (byte)uVar1 | 0x80;
            param_2 = (undefined2 *)((long)puVar8 + 1);
            uVar5 = uVar1 >> 0xe;
            uVar1 = uVar4;
          } while (uVar5 != 0);
          *(char *)puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined2 *)FUN_004e2978(lVar6,param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar2);
  }
  uVar7 = FUN_00524f90(param_1 + 0x10,1000,0x20000000,param_2,param_3);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return uVar7;
  }
  uVar7 = FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,uVar7,param_3);
  return uVar7;
}


