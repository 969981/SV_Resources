/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02972830; name: FUN_02972830
 */


uint FUN_02972830(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_d0;
  undefined1 local_cc;
  uint local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined7 uStack_a4;
  undefined1 local_9d;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined2 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_8e;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x30);
  if ((lVar4 == 0) || (iVar1 = *(int *)(lVar4 + 0xc), iVar1 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    iVar7 = 0;
    do {
      if (((iVar7 + 6U & 0xffff) < 0x86) &&
         (lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) +
                            (ulong)(ushort)(iVar7 + 6U) * 8 + 8), lVar4 != 0)) {
        uVar5 = (uint)*(byte *)(lVar4 + 0xc);
      }
      else {
        uVar5 = 0;
      }
      plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),uVar5);
      uVar3 = (**(code **)(*plVar2 + 0x300))(plVar2,0xb);
      if ((uVar3 & 1) != 0) {
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        uStack_9a = 0;
        local_c4 = 0;
        local_ac = 0;
        uStack_a4 = 0;
        local_9d = 0;
        local_bc = 0;
        uStack_b4 = 0;
        local_8e = 0x101000000;
        local_64 = 0;
        local_74 = 0;
        uStack_6c = 0;
        local_84 = 0;
        uStack_7c = 0;
        local_cc = 1;
        uStack_9c = 0x102;
        local_d0 = param_2;
        local_c8 = uVar5;
        uVar5 = FUN_0293e270(param_1,&local_d0);
        uVar6 = uVar6 | uVar5;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  return uVar6 & 1;
}


