/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4e2b0; name: FUN_00a4e2b0
 */


void FUN_00a4e2b0(long param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 local_78;
  undefined4 uStack_74;
  ulong local_70;
  long local_68;
  long *plStack_60;
  
  if (*(int *)(param_1 + 0x64b8) == 0) {
    iVar6 = FUN_00a4e1b4(param_1,param_2);
  }
  else {
    iVar6 = (int)((ulong)(*(long *)(param_1 + 0x6488) - *(long *)(param_1 + 0x6480)) >> 5);
  }
  if (iVar6 != 0) {
    puVar2 = (undefined1 *)(param_1 + 0x61e8);
    iVar1 = *(ushort *)(param_1 + 0x6228) + 1;
    iVar5 = 0;
    if (iVar6 != 0) {
      iVar5 = iVar1 / iVar6;
    }
    uVar4 = iVar1 - iVar5 * iVar6;
    if (*(int *)(param_1 + 0x64b8) == 0) {
      if (param_2 == 2) {
        lVar8 = 0x6178;
      }
      else if (param_2 == 1) {
        lVar8 = 0x6108;
      }
      else {
        lVar8 = 0x6098;
      }
      FUN_00a52fe4(&local_78,param_1 + lVar8);
      lVar8 = CONCAT44(uStack_74,local_78);
      uVar9 = (ulong)*(ushort *)(lVar8 + (ulong)uVar4 * 0x18);
      if (uVar9 < 0x402) {
        FUN_00a655bc(param_1 + uVar9 * 0x18 + 0x2c,param_2,puVar2);
        *(undefined1 *)(param_1 + 0x622a) = *puVar2;
        lVar8 = CONCAT44(uStack_74,local_78);
      }
      if (lVar8 != 0) {
        uVar9 = (**(code **)(*plStack_60 + 0xf8))(plStack_60);
        if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plStack_60 + 0x18))(plStack_60,lVar8,local_68 - lVar8,4);
        }
        else {
          FUN_00c48fe8(plStack_60,lVar8,local_68 - lVar8,4);
        }
      }
    }
    else {
      puVar3 = (undefined4 *)(*(long *)(param_1 + 0x6480) + (ulong)uVar4 * 0x20);
      local_78 = *puVar3;
      uStack_74 = puVar3[2];
      local_70 = (ulong)(uint)puVar3[4];
      FUN_00a4e450(param_1 + 0x61f0,&local_78);
      *puVar2 = 0;
      *(undefined1 *)(param_1 + 0x622a) = 0;
    }
    *(short *)(param_1 + 0x6228) = (short)uVar4;
  }
  return;
}


