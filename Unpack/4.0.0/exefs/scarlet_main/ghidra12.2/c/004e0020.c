/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e0020; name: FUN_004e0020
 */


undefined8 FUN_004e0020(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  int iVar9;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)param_2 = 8;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    iVar9 = 0;
    do {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar9 * 8 + 8);
      *param_2 = 0x3eba;
      uVar2 = *(uint *)(lVar6 + 0x14);
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
            puVar8 = param_2;
            uVar4 = uVar2 >> 7;
            *(byte *)((long)puVar8 + -1) = (byte)uVar2 | 0x80;
            param_2 = (undefined2 *)((long)puVar8 + 1);
            uVar5 = uVar2 >> 0xe;
            uVar2 = uVar4;
          } while (uVar5 != 0);
          *(char *)puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined2 *)FUN_004e2978(lVar6,param_2,param_3);
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar1);
  }
  uVar7 = FUN_00524f90(param_1 + 0x10,1000,0x20000000,param_2,param_3);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return uVar7;
  }
  uVar7 = FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,uVar7,param_3);
  return uVar7;
}


