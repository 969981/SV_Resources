/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029813c8; name: FUN_029813c8
 */


void FUN_029813c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  
  plVar4 = (long *)FUN_0168126c(param_3[3],0);
  if (plVar4 != (long *)0x0) {
    iVar7 = 1;
    do {
      uVar5 = (**(code **)(*plVar4 + 0x200))(plVar4);
      if ((uVar5 & 1) == 0) {
        uVar8 = *param_3;
        uVar3 = (**(code **)(*plVar4 + 0x98))(plVar4);
        uVar3 = FUN_02981514(uVar8,uVar3);
        puVar1 = (undefined2 *)param_3[1];
        uVar8 = param_3[2];
        uVar5 = (**(code **)(*plVar4 + 0x588))(plVar4);
        if (((uVar5 & 1) == 0) ||
           (uVar5 = FUN_01482688(*(undefined8 *)(param_1 + 0x38),uVar8,plVar4,*puVar1),
           (uVar5 & 1) != 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        lVar6 = FUN_0149b698(param_1);
        FUN_0167a950(lVar6 + 0x10);
        lVar6 = FUN_0149b698(param_1);
        FUN_029815c0(lVar6 + 0x10);
        uVar2 = FUN_029815cc(param_1,param_3[2],plVar4,param_3[1],param_3[3],param_3[4],uVar3,uVar8)
        ;
        FUN_0298189c(param_1,param_3[2],plVar4,param_3[1],uVar3,uVar2,uVar8);
        FUN_029818e4(param_1,plVar4,param_3[2],param_3[1]);
      }
      plVar4 = (long *)FUN_0168126c(param_3[3],iVar7);
      iVar7 = iVar7 + 1;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


