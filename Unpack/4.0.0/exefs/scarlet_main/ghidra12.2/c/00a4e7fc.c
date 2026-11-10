/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4e7fc; name: FUN_00a4e7fc
 */


void FUN_00a4e7fc(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  ulong local_70;
  long local_68;
  long *plStack_60;
  
  if (*(int *)(param_1 + 0x64b8) == 0) {
    iVar5 = FUN_00a4e1b4(param_1,param_2);
  }
  else {
    iVar5 = (int)((ulong)(*(long *)(param_1 + 0x6488) - *(long *)(param_1 + 0x6480)) >> 5);
  }
  if (iVar5 != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x61e8);
    iVar4 = iVar5 + (uint)*(ushort *)(param_1 + 0x6228) + -1;
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = iVar4 / iVar5;
    }
    iVar4 = iVar4 - iVar3 * iVar5;
    if (*(int *)(param_1 + 0x64b8) == 0) {
      if (param_2 == 2) {
        lVar7 = 0x6178;
      }
      else if (param_2 == 1) {
        lVar7 = 0x6108;
      }
      else {
        lVar7 = 0x6098;
      }
      FUN_00a52fe4(&local_78,param_1 + lVar7);
      lVar7 = CONCAT44(uStack_74,local_78);
      uVar8 = (ulong)*(ushort *)(lVar7 + (long)iVar4 * 0x18);
      if (uVar8 < 0x402) {
        FUN_00a655bc(param_1 + uVar8 * 0x18 + 0x2c,param_2,puVar1);
        *(undefined1 *)(param_1 + 0x622a) = *puVar1;
        lVar7 = CONCAT44(uStack_74,local_78);
      }
      if (lVar7 != 0) {
        uVar8 = (**(code **)(*plStack_60 + 0xf8))(plStack_60);
        if (((uVar8 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plStack_60 + 0x18))(plStack_60,lVar7,local_68 - lVar7,4);
        }
        else {
          FUN_00c48fe8(plStack_60,lVar7,local_68 - lVar7,4);
        }
      }
    }
    else {
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0x6480) + (long)iVar4 * 0x20);
      local_78 = *puVar2;
      uStack_74 = puVar2[2];
      local_70 = (ulong)(uint)puVar2[4];
      FUN_00a4e450(param_1 + 0x61f0,&local_78);
      *puVar1 = 0;
      *(undefined1 *)(param_1 + 0x622a) = 0;
    }
    *(short *)(param_1 + 0x6228) = (short)iVar4;
  }
  return;
}


