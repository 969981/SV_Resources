/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e159e0; name: FUN_02e159e0
 */


void FUN_02e159e0(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  uint local_a2;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  int local_74 [11];
  undefined4 local_48;
  undefined1 local_44;
  
  iVar3 = FUN_0154b6d4(*(undefined8 *)(param_1 + 8));
  if (iVar3 == 1) {
    local_44 = FUN_02943aa0(param_1,param_2);
    local_48 = 5;
    bVar2 = FUN_02943d30(param_1,&local_48,local_74);
    if (bVar2 != 0) {
      uVar8 = (ulong)bVar2;
      piVar9 = local_74;
      do {
        iVar3 = *piVar9;
        if (iVar3 != param_2) {
          plVar7 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),iVar3);
          local_a4 = 0;
          local_a8 = 0;
          local_a2 = 0x1000101;
          local_9c = 0;
          local_94 = 0;
          local_8c = 0;
          local_84 = 0;
          local_7c = 0;
          local_b0 = param_2;
          local_ac = iVar3;
          uVar4 = (**(code **)(*plVar7 + 0x140))();
          uVar1 = uVar4 >> 2 & 0x3fff;
          if ((uVar4 & 0xffff) < 4) {
            uVar1 = 1;
          }
          local_a8._0_2_ = (short)uVar1;
          iVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
          iVar6 = (**(code **)(*plVar7 + 0x108))(plVar7);
          if ((iVar5 - iVar6 & 0xffffU) < uVar1) {
            local_a8._0_2_ = (undefined2)(iVar5 - iVar6);
          }
          local_a2 = local_a2 & 0xffffff;
          local_a4 = CONCAT11(local_a4._1_1_,1);
          local_9c = CONCAT44(param_2,0x1020424);
          local_94 = CONCAT44(local_94._4_4_,iVar3);
          FUN_0293dcd0(param_1,&local_b0);
          return;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 1;
      } while (uVar8 != 0);
    }
  }
  return;
}


