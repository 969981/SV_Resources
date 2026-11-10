/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294184c; name: FUN_0294184c
 */


void FUN_0294184c(undefined8 param_1,undefined1 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  *param_2 = 0;
  if (*param_3 != param_3[1]) {
    uVar1 = FUN_01689a40();
    uVar2 = FUN_01689a40(param_1,param_3[1]);
    if (uVar2 == (uVar1 & 0xff)) {
      plVar5 = (long *)FUN_014813f4(param_1,*param_3);
      plVar6 = (long *)FUN_014813f4(param_1,param_3[1]);
      uVar7 = (**(code **)(*plVar5 + 0x200))(plVar5);
      if (((uVar7 & 1) == 0) && (uVar7 = (**(code **)(*plVar6 + 0x200))(plVar6), (uVar7 & 1) == 0))
      {
        uVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
        uVar2 = FUN_018d31e0(param_1,uVar3);
        uVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
        uVar4 = FUN_018d31e0(param_1,uVar3);
        if ((uVar2 & 0xff) != 10) {
          if ((uVar4 & 0xff) != 10) {
            uVar8 = FUN_01243584(param_1);
            FUN_02984844(uVar8,uVar1,uVar2,uVar4);
            uVar8 = FUN_01243584(param_1);
            FUN_02984890(uVar8,uVar1,uVar2,uVar4);
            uVar8 = FUN_01243584(param_1);
            FUN_0124b0ac(uVar8,*param_3,param_3 + 2);
            FUN_029848a8(param_1,plVar5);
            FUN_029848a8(param_1,plVar6);
            *param_2 = 1;
          }
        }
      }
    }
  }
  return;
}


