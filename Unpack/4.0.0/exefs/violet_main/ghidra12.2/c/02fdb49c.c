/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fdb49c; name: FUN_02fdb49c
 */


void FUN_02fdb49c(long param_1,long param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  char acStack_27e8 [10024];
  undefined1 auStack_c0 [16];
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  switch(*(undefined2 *)(param_2 + 4)) {
  case 0:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"CellIndexModifiedCommand Id=",0x1c);
    FUN_031c68c0(acStack_27e8,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 8));
    plVar9 = *(long **)(param_3 + 8);
    sVar3 = strlen(acStack_27e8);
    (**(code **)(*plVar9 + 0x28))(plVar9,acStack_27e8,(long)(int)sVar3);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," MotionIndex=",0xd);
    FUN_031c68c0(acStack_27e8,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 0xc));
    plVar9 = *(long **)(param_3 + 8);
    sVar3 = strlen(acStack_27e8);
    (**(code **)(*plVar9 + 0x28))(plVar9,acStack_27e8,(long)(int)sVar3);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," OldCellIndex=",0xe);
    FUN_031c68c0(acStack_27e8,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)(param_2 + 0x10));
    plVar9 = *(long **)(param_3 + 8);
    sVar3 = strlen(acStack_27e8);
    (**(code **)(*plVar9 + 0x28))(plVar9,acStack_27e8,(long)(int)sVar3);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," NewCellIndex=",0xe);
    uVar7 = (uint)*(byte *)(param_2 + 0x11);
    puVar6 = &DAT_03c596d4;
    goto LAB_02fdba34;
  case 1:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"hknpAtomSolverForceClippedCommand factor=",0x29);
    FUN_031c68c0((double)*(float *)(param_2 + 0xc),acStack_27e8,0x2728,0x2728,&DAT_03c15fe7);
    goto LAB_02fdba84;
  case 2:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"hknpValidateTriggerEventCommand id[0]=",0x26);
    FUN_031c68c0(acStack_27e8,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar9 = *(long **)(param_3 + 8);
    sVar3 = strlen(acStack_27e8);
    (**(code **)(*plVar9 + 0x28))(plVar9,acStack_27e8,(long)(int)sVar3);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," id[1]=",7);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    break;
  case 3:
    lVar8 = *(long *)(param_1 + 0x20);
    FUN_02f2d868(lVar8 + 0x530,*(long *)(param_2 + 0x18),
                 *(long *)(lVar8 + 0x150) +
                 (ulong)*(uint *)(*(long *)(lVar8 + 0x38) +
                                  ((ulong)*(uint *)(*(long *)(param_2 + 0x18) + 8) & 0xffffff) *
                                  0xc0 + 0x80) * 0x80,1,auStack_c0);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"hknpMotionWeldTOICommand bodyIds=",0x21);
    FUN_031c68c0(acStack_27e8,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar9 = *(long **)(param_3 + 8);
    sVar3 = strlen(acStack_27e8);
    (**(code **)(*plVar9 + 0x28))(plVar9,acStack_27e8,(long)(int)sVar3);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c16438,1);
    FUN_031c68c0(acStack_27e8,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 0x10));
    plVar9 = *(long **)(param_3 + 8);
    sVar3 = strlen(acStack_27e8);
    (**(code **)(*plVar9 + 0x28))(plVar9,acStack_27e8,(long)(int)sVar3);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," normal=",8);
    FUN_0322b340((double)local_b0,(double)fStack_ac,(double)local_a8,(double)fStack_a4,param_3,
                 "[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos0=",6);
    FUN_0322b340((double)local_80,(double)fStack_7c,(double)local_78,(double)fStack_74,param_3,
                 "[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos1=",6);
    FUN_0322b340((double)local_70,(double)fStack_6c,(double)local_68,(double)fStack_64,param_3,
                 "[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos2=",6);
    FUN_0322b340((double)local_60,(double)fStack_5c,(double)local_58,(double)fStack_54,param_3,
                 "[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos3=",6);
    FUN_0322b340((double)local_50,(double)fStack_4c,(double)local_48,(double)fStack_44,param_3,
                 "[%g,%g,%g,%g]");
    return;
  case 4:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"hknpBodyBreachedExpandedAabbCommand id=",0x27);
    uVar7 = *(uint *)(param_2 + 8);
    goto LAB_02fdba20;
  case 5:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"BodyActivationCommand ",0x16);
    if (*(char *)(param_2 + 0x18) == '\0') {
      pcVar4 = " Deactivated";
      uVar5 = 0xc;
    }
    else {
      pcVar4 = " Activated";
      uVar5 = 10;
    }
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),pcVar4,uVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c58928,4);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    break;
  case 6:
    iVar1 = *(int *)(param_2 + 0x10);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"hknpMotionVelocityClippedCommand ",0x21);
    bVar2 = iVar1 == 0;
    uVar5 = 6;
    if (bVar2) {
      uVar5 = 7;
    }
    pcVar4 = "Angular";
    if (!bVar2) {
      pcVar4 = "Linear";
    }
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),pcVar4,uVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c58928,4);
    uVar7 = *(uint *)(param_2 + 0xc);
LAB_02fdba20:
    puVar6 = &DAT_03be652f;
LAB_02fdba34:
    FUN_031c68c0(acStack_27e8,0x2728,0x2728,puVar6,uVar7);
    goto LAB_02fdba84;
  default:
    goto switchD_02fdb4e0_default;
  }
  FUN_031c68c0(acStack_27e8,0x2728,0x2728,&DAT_03c62bc7,uVar5);
LAB_02fdba84:
  plVar9 = *(long **)(param_3 + 8);
  sVar3 = strlen(acStack_27e8);
  (**(code **)(*plVar9 + 0x28))(plVar9,acStack_27e8,(long)(int)sVar3);
switchD_02fdb4e0_default:
  return;
}


