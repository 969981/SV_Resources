/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fdc5dc; name: FUN_02fdc5dc
 */


void FUN_02fdc5dc(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  char cVar11;
  code *UNRECOVERED_JUMPTABLE;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined8 uVar15;
  double dVar16;
  float fVar17;
  undefined8 uVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  char acStack_2778 [10024];
  
  switch(*(undefined2 *)(param_2 + 4)) {
  case 0:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "bodyAllocated Id=";
    goto LAB_02fde050;
  case 1:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"addBody Id=",0xb);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," additionMode=",0xe);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)(param_2 + 0x10));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," activationMode=",0x10);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)(param_2 + 0x11));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," lastInBatch=",0xd);
    cVar11 = *(char *)(param_2 + 0x12);
    goto LAB_02fde558;
  case 2:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"destroyBody Id=",0xf);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " lastInBatch=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xd;
    goto LAB_02fdc940;
  case 3:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"removeBody Id=",0xe);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," activationMode=",0x10);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)(param_2 + 0x10));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " lastInBatch";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xc;
LAB_02fdc940:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    cVar11 = *(char *)(param_2 + 0x11);
    goto LAB_02fde558;
  case 4:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"atachBody Id=",0xd);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 0x10));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c570cd,4);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," updateInertia=",0xf);
    uVar10 = (ulong)*(byte *)(param_2 + 0x18);
    break;
  case 5:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"detachBody Id=",0xe);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " updateInertia=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xf;
    goto LAB_02fde038;
  case 6:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyTransform Id=",0x14);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," rotation=",10);
    FUN_0322b340((double)*(float *)(param_2 + 0x20),(double)*(float *)(param_2 + 0x30),
                 (double)*(float *)(param_2 + 0x40),param_3,"|%f,%f,%f|\n");
    FUN_0322b340((double)*(float *)(param_2 + 0x24),(double)*(float *)(param_2 + 0x34),
                 (double)*(float *)(param_2 + 0x44),param_3,"|%f,%f,%f|\n");
    FUN_0322b340((double)*(float *)(param_2 + 0x28),(double)*(float *)(param_2 + 0x38),
                 (double)*(float *)(param_2 + 0x48),param_3,"|%f,%f,%f|\n");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," position=",10);
    uVar8 = *(undefined8 *)(param_2 + 0x50);
    uVar15 = *(undefined8 *)(param_2 + 0x58);
    uVar18 = *(undefined8 *)(param_2 + 0x60);
    goto LAB_02fdcc48;
  case 7:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyPosition Id=",0x13);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," position=",10);
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    uVar15 = *(undefined8 *)(param_2 + 0x20);
    uVar18 = *(undefined8 *)(param_2 + 0x28);
LAB_02fdcc48:
    FUN_0322b340(uVar8,uVar15,uVar18,0,param_3,"[%g,%g,%g,%g]");
    goto LAB_02fde020;
  case 8:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyOrientation Id=",0x16);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," orientation=",0xd);
    FUN_0322b340((double)*(float *)(param_2 + 0x20),(double)*(float *)(param_2 + 0x24),
                 (double)*(float *)(param_2 + 0x28),(double)*(float *)(param_2 + 0x2c),param_3,
                 "[%f,%f,%f,(%f)]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pivot=",7);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)(param_2 + 0x10));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," activationMode=",0x10);
    uVar10 = (ulong)*(byte *)(param_2 + 0x11);
    goto LAB_02fde9e4;
  case 9:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyVelocity Id=",0x13);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," linearVelocity=",0x10);
    FUN_0322b340((double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14),
                 (double)*(float *)(param_2 + 0x18),(double)*(float *)(param_2 + 0x1c),param_3,
                 "[%g,%g,%g,%g]");
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " angularVelocity=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x11;
    goto LAB_02fdd07c;
  case 10:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyLinearVelocity Id=",0x19);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " linearVelocity=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x10;
    goto LAB_02fde494;
  case 0xb:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyAngularVelocity Id=",0x1a);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " angularVelocity=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x11;
    goto LAB_02fde494;
  case 0xc:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "applyLinearImpulse Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x16;
    goto LAB_02fdcf6c;
  case 0xd:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "applyAngularImpulse Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x17;
LAB_02fdcf6c:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " impulse=";
LAB_02fddd90:
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 9;
    goto LAB_02fde494;
  case 0xe:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"applyPointImpulse Id=",0x15);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," impulse=",9);
    FUN_0322b340((double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14),
                 (double)*(float *)(param_2 + 0x18),(double)*(float *)(param_2 + 0x1c),param_3,
                 "[%g,%g,%g,%g]");
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " position=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 10;
LAB_02fdd07c:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    fVar12 = *(float *)(param_2 + 0x20);
    fVar14 = *(float *)(param_2 + 0x24);
    fVar17 = *(float *)(param_2 + 0x28);
    fVar20 = *(float *)(param_2 + 0x2c);
LAB_02fdd498:
    dVar16 = (double)fVar14;
    dVar13 = (double)fVar12;
    dVar19 = (double)fVar17;
    dVar21 = (double)fVar20;
    goto LAB_02fde4bc;
  case 0xf:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setPointVelocity Id=",0x14);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," velocity=",10);
    FUN_0322b340((double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14),
                 (double)*(float *)(param_2 + 0x18),(double)*(float *)(param_2 + 0x1c),param_3,
                 "[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," position=",10);
    dVar13 = (double)*(float *)(param_2 + 0x20);
    dVar16 = (double)*(float *)(param_2 + 0x24);
    dVar19 = (double)*(float *)(param_2 + 0x28);
    dVar21 = (double)*(float *)(param_2 + 0x2c);
    goto LAB_02fde4bc;
  case 0x10:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"reintegrateMotion Id=",0x15);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c21fb8,3);
    fVar12 = *(float *)(param_2 + 0xc);
    goto LAB_02fdeb3c;
  case 0x11:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyMotionType Id=",0x15);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," motionType=",0xc);
    uVar1 = *(undefined1 *)(param_2 + 0x10);
    goto LAB_02fdd8ac;
  case 0x12:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"setBodyMotion Id=",0x11)
    ;
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " motionId=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 10;
    goto LAB_02fdd980;
  case 0x13:
    plVar4 = *(long **)(param_3 + 8);
    if (*(int *)(param_2 + 0x10) == 0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,"setBodyMass Id=",0xf);
      FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
      plVar4 = *(long **)(param_3 + 8);
      sVar5 = strlen(acStack_2778);
      (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
      plVar4 = *(long **)(param_3 + 8);
      pcVar6 = " mass=";
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
      uVar8 = 6;
    }
    else {
      (**(code **)(*plVar4 + 0x28))(plVar4,"setBodyDensity Id=",0x12);
      FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
      plVar4 = *(long **)(param_3 + 8);
      sVar5 = strlen(acStack_2778);
      (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
      plVar4 = *(long **)(param_3 + 8);
      pcVar6 = " density=";
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
      uVar8 = 9;
    }
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    fVar12 = *(float *)(param_2 + 0x14);
    goto LAB_02fdeb3c;
  case 0x14:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyMassDistribution Id=",0x1b);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," com&volume=",0xc);
    FUN_0322b340((double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14),
                 (double)*(float *)(param_2 + 0x18),(double)*(float *)(param_2 + 0x1c),param_3,
                 "[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," orientation=",0xd);
    FUN_0322b340((double)*(float *)(param_2 + 0x20),(double)*(float *)(param_2 + 0x24),
                 (double)*(float *)(param_2 + 0x28),(double)*(float *)(param_2 + 0x2c),param_3,
                 "[%f,%f,%f,(%f)]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," inertia=",9);
    fVar12 = *(float *)(param_2 + 0x30);
    fVar14 = *(float *)(param_2 + 0x34);
    fVar17 = *(float *)(param_2 + 0x38);
    fVar20 = *(float *)(param_2 + 0x3c);
    goto LAB_02fdd498;
  case 0x15:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"clearBodyMassDistribution Id=",0x1d);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " updateMotionMode=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x12;
    goto LAB_02fde038;
  case 0x16:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"setBodyShape Id=",0x10);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," shape=",7);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,*(undefined4 *)(param_2 + 0x10));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," activationMode=",0x10);
    uVar10 = (ulong)*(byte *)(param_2 + 0x18);
    goto LAB_02fde9e4;
  case 0x17:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyMotionProperties Id=",0x1b);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " propertiesId=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xe;
    goto LAB_02fde15c;
  case 0x18:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyMaterial Id=",0x13);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," materialId=",0xc);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(undefined2 *)(param_2 + 0x10));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," cacheBehavior=",0xf);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)(param_2 + 0x12));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," activationMode=",0x10);
    uVar10 = (ulong)*(byte *)(param_2 + 0x13);
    goto LAB_02fde9e4;
  case 0x19:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyQuality Id=",0x12);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," qualityId=",0xb);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)(param_2 + 0x10));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," cacheBehavior=",0xf);
    uVar1 = *(undefined1 *)(param_2 + 0x11);
LAB_02fdd8ac:
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,uVar1);
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," activationMode=",0x10);
    uVar10 = (ulong)*(byte *)(param_2 + 0x12);
    goto LAB_02fde9e4;
  case 0x1a:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyCollisionFilterInfo Id=",0x1e);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " filterInfo=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xc;
LAB_02fdd980:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 0x10));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," activationMode=",0x10);
    uVar10 = (ulong)*(byte *)(param_2 + 0x15);
    break;
  case 0x1b:
    cVar11 = *(char *)(param_2 + 0x10);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"updateBodyFlagsCommand Id=",0x1a);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    bVar3 = cVar11 == '\0';
    uVar8 = 6;
    if (bVar3) {
      uVar8 = 7;
    }
    pcVar6 = "disable";
    if (!bVar3) {
      pcVar6 = "enable";
    }
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),pcVar6,uVar8);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," flags=",7);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 0x14));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," activationMode=",0x10);
    uVar10 = (ulong)*(byte *)(param_2 + 0x19);
    break;
  case 0x1c:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "rebuildBodyCollisionCaches Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1e;
    goto LAB_02fddfd8;
  case 0x1d:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "updateBodyCollisionCaches Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1d;
    goto LAB_02fde22c;
  case 0x1e:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyActivationState Id=",0x1a);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " value=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 7;
    goto LAB_02fde038;
  case 0x1f:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyActivationPriority Id=",0x1d);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," priority=",10);
    uVar10 = (ulong)*(char *)(param_2 + 0x10);
    break;
  case 0x20:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyActivationControl Id=",0x1c);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "value=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 6;
    goto LAB_02fde038;
  case 0x21:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setMotionCenterOfMass Id=",0x19);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " com=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 5;
    goto LAB_02fde494;
  case 0x22:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setMotionInertia Id=",0x14);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " inertia=";
    goto LAB_02fddd90;
  case 0x23:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setBodyCollisionLookAheadDistance Id=",0x25);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," distance=",10);
    FUN_031c68c0((double)*(float *)(param_2 + 0x10),acStack_2778,0x2728,0x2728,&DAT_03c15fe7);
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," activationMode=",0x10);
    uVar10 = (ulong)*(byte *)(param_2 + 0x14);
    break;
  case 0x24:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "setBodyDragPropertiesCommand Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x20;
    goto LAB_02fde22c;
  case 0x25:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "clearBodyDragPropertiesCommand Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x22;
    goto LAB_02fde22c;
  case 0x26:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "setBodyPropertiesCommand Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1c;
    goto LAB_02fde0fc;
  case 0x27:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"setName ",8);
    pcVar6 = (char *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    plVar4 = *(long **)(param_3 + 8);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = "(null)";
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
      lVar7 = 6;
    }
    else {
      sVar5 = strlen(pcVar6);
      lVar7 = (long)(int)sVar5;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    }
    goto LAB_02fde584;
  case 0x28:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "setGravity ";
    goto LAB_02fde488;
  case 0x29:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "setAirDensity ";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xe;
    goto LAB_02fdea10;
  case 0x2a:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "stepCollide dt=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xf;
    goto LAB_02fdea10;
  case 0x2b:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "stepSolve";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    lVar7 = 9;
    goto LAB_02fde584;
  case 0x2c:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "constraintAllocated Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x17;
    goto LAB_02fde22c;
  case 0x2d:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "destroyConstraints Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x16;
    goto LAB_02fddfd8;
  case 0x2e:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "removeConstraint Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x14;
LAB_02fddfd8:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
LAB_02fde020:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " activationMode=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x10;
LAB_02fde038:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    uVar10 = (ulong)*(byte *)(param_2 + 0x10);
    break;
  case 0x2f:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "addConstraint Id=";
LAB_02fde050:
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x11;
    goto LAB_02fde22c;
  case 0x30:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setConstraintGroup constraintId=",0x20);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," groupId=",9);
    uVar10 = (ulong)*(uint *)(param_2 + 0x10);
    goto LAB_02fde164;
  case 0x31:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "setConstraintPropertiesCommand constraintId=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x2c;
LAB_02fde0fc:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " propertyKey=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xd;
LAB_02fde15c:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    uVar10 = (ulong)*(ushort *)(param_2 + 0x10);
LAB_02fde164:
    puVar9 = &DAT_03be652f;
    goto LAB_02fdea68;
  case 0x32:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "updateBroadphase";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    lVar7 = 0x10;
    goto LAB_02fde584;
  case 0x33:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"activateBodiesInAabb min=",0x19);
    FUN_0322b340((double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14),
                 (double)*(float *)(param_2 + 0x18),(double)*(float *)(param_2 + 0x1c),param_3,
                 "[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," max=",5);
    FUN_0322b340((double)*(float *)(param_2 + 0x20),(double)*(float *)(param_2 + 0x24),
                 (double)*(float *)(param_2 + 0x28),(double)*(float *)(param_2 + 0x2c),param_3,
                 "[%g,%g,%g,%g]");
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 4;
LAB_02fde22c:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    uVar8 = *(undefined8 *)(param_2 + 8);
    puVar9 = &DAT_03c62bc7;
LAB_02fde248:
    FUN_031c68c0(acStack_2778,0x2728,0x2728,puVar9,uVar8);
    goto LAB_02fdea6c;
  case 0x34:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"addCollisionCaches activationMode=",0x22);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,*(undefined1 *)(param_2 + 0x10));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pair=",6);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c75324,1);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(uint *)(param_2 + 0xc) & 0xffffff);
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c82382,2);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(uint *)(param_2 + 8) & 0xffffff);
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    goto LAB_02fde460;
  case 0x35:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "deleteAllCaches";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    lVar7 = 0xf;
    goto LAB_02fde584;
  case 0x36:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setEventDispatcher &dispatcher=",0x1f);
    uVar8 = *(undefined8 *)(param_2 + 8);
    puVar9 = &DAT_03c5a85c;
    goto LAB_02fde248;
  case 0x37:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setSafeRegionAabb (",0x13);
    FUN_0322b340((double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14),
                 (double)*(float *)(param_2 + 0x18),(double)*(float *)(param_2 + 0x1c),param_3,
                 "[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c00d64,1);
    FUN_0322b340((double)*(float *)(param_2 + 0x20),(double)*(float *)(param_2 + 0x24),
                 (double)*(float *)(param_2 + 0x28),(double)*(float *)(param_2 + 0x2c),param_3,
                 "[%g,%g,%g,%g]");
LAB_02fde460:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = ")";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    lVar7 = 1;
    goto LAB_02fde584;
  case 0x38:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "shiftWorld ";
LAB_02fde488:
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xb;
LAB_02fde494:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    dVar13 = (double)*(float *)(param_2 + 0x10);
    dVar16 = (double)*(float *)(param_2 + 0x14);
    dVar19 = (double)*(float *)(param_2 + 0x18);
    dVar21 = (double)*(float *)(param_2 + 0x1c);
LAB_02fde4bc:
    FUN_0322b340(dVar13,dVar16,dVar19,dVar21,param_3,"[%g,%g,%g,%g]");
    return;
  case 0x39:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"destroyMotions Id=",0x12);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," lastInBatch=",0xd);
    cVar11 = *(char *)(param_2 + 0xc);
LAB_02fde558:
    plVar4 = *(long **)(param_3 + 8);
    lVar7 = 4;
    if (cVar11 == '\0') {
      lVar7 = 5;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    pcVar6 = "false";
    if (cVar11 != '\0') {
      pcVar6 = "true";
    }
    goto LAB_02fde584;
  case 0x3a:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "rebuildMotionMassProperties ";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1c;
    goto LAB_02fdea4c;
  case 0x3b:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "motionAllocated ";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x10;
    goto LAB_02fdea4c;
  case 0x3c:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "defragmentInactiveCacheStreamsCommand";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    lVar7 = 0x25;
LAB_02fde584:
                    /* WARNING: Could not recover jumptable at 0x02fde5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,lVar7);
    return;
  case 0x3d:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"bodyAllocatedAttached Id=",0x19);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," targetId=",10);
    uVar8 = *(undefined8 *)(param_2 + 200);
    puVar9 = &DAT_03c62bc7;
    goto LAB_02fde248;
  case 0x3e:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setCollisionFilter filterType=",0x1e);
    bVar2 = *(byte *)(*(long *)(param_2 + 8) + 0x18);
    goto LAB_02fde6dc;
  case 0x3f:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"setShapeTagCodeg codecType=",0x1b);
    bVar2 = *(byte *)(*(long *)(param_2 + 8) + 0x1c);
LAB_02fde6dc:
    uVar10 = (ulong)bVar2;
    puVar9 = &DAT_03c596d4;
    goto LAB_02fdea68;
  case 0x40:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "destroyConstraintGroup id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1a;
    goto LAB_02fdea4c;
  case 0x41:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "destroyMaterial id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x13;
    goto LAB_02fde738;
  case 0x42:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "destroyMotionProperties id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1b;
LAB_02fde738:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    uVar10 = (ulong)*(ushort *)(param_2 + 8);
    goto LAB_02fdea54;
  case 0x43:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "particlesColliderAllocated Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1e;
    goto LAB_02fde7b0;
  case 0x44:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "destroyParticlesCollider Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1c;
    goto LAB_02fde7b0;
  case 0x45:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "addParticlesCollider Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x18;
    goto LAB_02fde7b0;
  case 0x46:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "removeParticlesCollider Id=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1b;
LAB_02fde7b0:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    uVar10 = (ulong)(*(uint *)(param_2 + 8) & 0xffffff);
    goto LAB_02fdea54;
  case 0x47:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"addParticles colliderId=",0x18);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(uint *)(param_2 + 8) & 0xffffff);
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " numParticles=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0xe;
    goto LAB_02fde83c;
  case 0x48:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"removeParticles colliderId=",0x1b);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(uint *)(param_2 + 8) & 0xffffff);
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," numParticles=",0xe);
    uVar10 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 2;
    puVar9 = &DAT_03c596d4;
    goto LAB_02fdea68;
  case 0x49:
  case 0x4a:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"enableParticles Id=",0x13);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(uint *)(param_2 + 8) & 0xffffff);
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = " Index=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 7;
LAB_02fde83c:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    uVar10 = (ulong)*(uint *)(param_2 + 0xc);
    break;
  case 0x4b:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"rebuildParticleCollisionCaches Id=",0x22);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(uint *)(param_2 + 8) & 0xffffff);
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," start=",7);
    FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c596d4,*(undefined4 *)(param_2 + 0xc));
    plVar4 = *(long **)(param_3 + 8);
    sVar5 = strlen(acStack_2778);
    (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," num=",5);
    uVar10 = (ulong)*(uint *)(param_2 + 0x10);
LAB_02fde9e4:
    puVar9 = &DAT_03c596d4;
    goto LAB_02fdea68;
  case 0x4c:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "stepAllParticlesColliders dt=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x1d;
LAB_02fdea10:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    fVar12 = *(float *)(param_2 + 8);
LAB_02fdeb3c:
    FUN_031c68c0((double)fVar12,acStack_2778,0x2728,0x2728,&DAT_03c15fe7);
    goto LAB_02fdea6c;
  case 0x4d:
    plVar4 = *(long **)(param_3 + 8);
    pcVar6 = "dispatchUserFunction ";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x28);
    uVar8 = 0x15;
LAB_02fdea4c:
    (*UNRECOVERED_JUMPTABLE)(plVar4,pcVar6,uVar8);
    uVar10 = (ulong)*(uint *)(param_2 + 8);
LAB_02fdea54:
    puVar9 = &DAT_03be652f;
    goto LAB_02fdea68;
  default:
    goto switchD_02fdc624_default;
  }
  puVar9 = &DAT_03c596d4;
LAB_02fdea68:
  FUN_031c68c0(acStack_2778,0x2728,0x2728,puVar9,uVar10);
LAB_02fdea6c:
  plVar4 = *(long **)(param_3 + 8);
  sVar5 = strlen(acStack_2778);
  (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2778,(long)(int)sVar5);
switchD_02fdc624_default:
  return;
}


