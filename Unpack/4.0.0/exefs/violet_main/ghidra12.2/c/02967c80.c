/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02967c80; name: FUN_02967c80
 */


void FUN_02967c80(long param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 local_a0;
  undefined2 local_98;
  undefined2 uStack_96;
  uint uStack_94;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined8 local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x30);
  if ((lVar6 != 0) && (iVar1 = *(int *)(lVar6 + 0xc), 0 < iVar1)) {
    uVar7 = 0;
    do {
      uVar9 = uVar7 & 0xff;
      if (((char)uVar7 < '\0') ||
         (lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + uVar9 * 8 + 0x38),
         lVar6 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)*(byte *)(lVar6 + 0xc);
      }
      plVar5 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),uVar8);
      if (*(char *)(param_3 + uVar9) == '\0') {
        uStack_78 = 0;
        local_88 = 0;
        local_80 = 0;
        local_7c = 0;
        uStack_90 = 0;
        uStack_89 = 0;
        local_a0 = CONCAT44((int)(local_a0 >> 0x20),param_2) & 0xffffff00ffffffff;
        local_98 = 0x1dd;
        uStack_96 = 0x82;
        uStack_94 = uVar8;
        FUN_01907920(param_1,&local_a0);
      }
      else {
        uStack_90 = 0;
        uStack_96 = 0;
        uStack_94 = 0;
        local_7c = 0;
        uStack_78 = 0;
        local_74 = 0;
        uStack_6c = 0;
        local_a0 = CONCAT44(uVar8,param_2);
        local_98 = 0;
        local_88 = CONCAT44(param_2,0x10201da);
        local_80 = uVar8;
        uVar4 = (**(code **)(*plVar5 + 0x2a8))();
        uVar8 = local_88._2_2_ >> 7 & 0x7f;
        if (uVar8 < 8) {
          uVar3 = local_88._2_2_ + 0x80;
          uVar2 = local_88._2_2_ & 0xc07f;
          local_88._0_4_ = CONCAT22(uVar3 & 0x3f80 | uVar2,(undefined2)local_88);
          *(uint *)((long)&local_88 + (ulong)uVar8 * 4 + 4) = uVar4 & 0xffff;
        }
        FUN_02940480(param_1,&local_a0);
      }
      uVar8 = (int)uVar9 + 1;
      uVar7 = (ulong)uVar8;
    } while ((int)(uVar8 & 0xff) < iVar1);
  }
  return;
}


