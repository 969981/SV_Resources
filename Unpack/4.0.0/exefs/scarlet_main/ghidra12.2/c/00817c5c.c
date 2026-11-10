/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00817c5c; name: FUN_00817c5c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00817c5c(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_220;
  undefined1 *puStack_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined *local_200;
  undefined1 local_1f8;
  undefined2 local_1f7;
  undefined1 local_1f5 [197];
  undefined1 local_130 [8];
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined *local_110;
  undefined1 local_108;
  undefined2 local_107;
  undefined1 local_105 [197];
  
  puVar5 = &local_220;
  uVar7 = param_2 & 0xffff;
  lVar8 = uVar7 * 0xb0;
  FUN_0284e360(*(long *)(param_1 + 0x860) + lVar8 + 0x18,*(undefined4 *)(param_3 + 0xc));
  lVar4 = *(long *)(param_1 + 0x860) + lVar8;
  *(undefined2 *)(lVar4 + 0x30) = *(undefined2 *)(param_3 + 0x10);
  FUN_0284e360(lVar4 + 0x38,*(undefined4 *)(param_3 + 0x14));
  lVar3 = *(long *)(param_1 + 0x860);
  *(undefined2 *)(lVar3 + lVar8 + 0x50) = *(undefined2 *)(param_3 + 0x18);
  puVar1 = PTR_DAT_047d0c98;
  local_110 = PTR_DAT_047d0c98 + 0x68;
  puStack_128 = &local_108;
  local_130 = (undefined1  [8])(PTR_DAT_047d0c98 + 0x10);
  local_120 = 0xc0;
  local_108 = 0;
  lVar4 = 0;
  puVar6 = (undefined8 *)local_130;
  do {
    *(undefined2 *)((long)puVar6 + 0x29) = 0;
    lVar8 = lVar4 + 4;
    *(undefined1 *)((long)puVar6 + 0x2b) = 0;
    puVar6 = (undefined8 *)((long)local_130 + lVar8);
    local_105[lVar4 + 1] = 0;
    lVar4 = lVar8;
  } while (lVar8 != 0xc0);
  uStack_11c = 0;
  local_118 = 0;
  FUN_0078a4fc(lVar3 + uVar7 * 0xb0 + 0x18,local_130);
  local_200 = puVar1 + 0x68;
  local_220 = puVar1 + 0x10;
  puStack_218 = &local_1f8;
  local_210 = 0xc0;
  local_1f8 = 0;
  lVar4 = 0;
  do {
    *(undefined2 *)((long)puVar5 + 0x29) = 0;
    lVar3 = lVar4 + 4;
    *(undefined1 *)((long)puVar5 + 0x2b) = 0;
    puVar5 = (undefined8 *)(local_1f5 + lVar4 + -0x27);
    local_1f5[lVar4 + 1] = 0;
    lVar4 = lVar3;
  } while (lVar3 != 0xc0);
  uStack_20c = 0;
  local_208 = 0;
  FUN_0078a4fc(*(long *)(param_1 + 0x860) + uVar7 * 0xb0 + 0x38,&local_220);
  uVar2 = FUN_00817b3c(param_1);
  if ((uVar2 & 1) == 0) {
    lVar3 = uVar7 * 0xb0;
    lVar4 = *(long *)(param_1 + 0x860) + lVar3;
    *(undefined1 *)(lVar4 + 0x90) = 1;
    FUN_0081649c(param_1,3,lVar4 + 0x18,param_2 & 0xffffffff,*(undefined2 *)(lVar4 + 0x10));
    lVar4 = *(long *)(param_1 + 0x860) + lVar3;
    *(undefined1 *)(lVar4 + 0x91) = 1;
    FUN_0081649c(param_1,4,lVar4 + 0x38,param_2 & 0xffffffff,*(undefined2 *)(lVar4 + 0x10));
    FUN_007935cc(*(long *)(param_1 + 0x860) + lVar3 + 0x98);
  }
  else {
    local_130._0_4_ = 0x6c8e;
    local_220 = (undefined *)((ulong)local_220 & 0xffffffff00000000);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_130 | 4),(Result *)&local_220);
    FUN_018ff39c(param_1 + 0x730,local_130);
    *(undefined1 *)(param_1 + 0x7c0) = 5;
  }
  return;
}


