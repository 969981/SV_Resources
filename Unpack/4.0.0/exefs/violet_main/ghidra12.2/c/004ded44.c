/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ded44; name: FUN_004ded44
 */


undefined8 FUN_004ded44(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    iVar8 = 0;
    do {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar8 * 8 + 8);
      *param_2 = 0x3eba;
      uVar2 = *(uint *)(lVar5 + 0x14);
      if (uVar2 < 0x80) {
        *(byte *)(param_2 + 1) = (byte)uVar2;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        *(byte *)(param_2 + 1) = (byte)uVar2 | 0x80;
        if (uVar2 >> 0xe == 0) {
          *(char *)((long)param_2 + 3) = (char)(uVar2 >> 7);
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          uVar2 = uVar2 >> 7;
          do {
            puVar7 = param_2;
            uVar3 = uVar2 >> 7;
            *(byte *)((long)puVar7 + -1) = (byte)uVar2 | 0x80;
            param_2 = (undefined2 *)((long)puVar7 + 1);
            uVar4 = uVar2 >> 0xe;
            uVar2 = uVar3;
          } while (uVar4 != 0);
          *(char *)puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined2 *)FUN_004e2978(lVar5,param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar1);
  }
  uVar6 = FUN_00524f90(param_1 + 0x10,1000,0x20000000,param_2,param_3);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return uVar6;
  }
  uVar6 = FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,uVar6,param_3);
  return uVar6;
}


