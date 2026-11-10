/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f4f084; name: FUN_02f4f084
 */


void FUN_02f4f084(long param_1,long param_2,long param_3)

{
  long *plVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar6;
  ulong uVar7;
  char acStack_2768 [10024];
  
  switch(*(undefined2 *)(param_2 + 4)) {
  case 0:
    FUN_02f5004c(param_2,*(undefined8 *)(param_1 + 0x20),param_3);
    return;
  default:
    goto switchD_02f4f0c8_caseD_1;
  case 2:
    FUN_02f4fdc4(param_2,*(undefined8 *)(param_1 + 0x20),param_3);
    return;
  case 3:
    FUN_02f2caac(param_2,*(undefined8 *)(param_1 + 0x20),param_3);
    return;
  case 4:
    FUN_02f2cde4(param_2,*(undefined8 *)(param_1 + 0x20),param_3);
    return;
  case 5:
    FUN_02f2d060(param_2,*(undefined8 *)(param_1 + 0x20),param_3);
    return;
  case 6:
    FUN_02f2d27c(param_2,*(undefined8 *)(param_1 + 0x20),param_3);
    return;
  case 7:
    FUN_02f50178(param_2,*(undefined8 *)(param_1 + 0x20),param_3);
    return;
  case 8:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"hknpParticleBodyImpulseAppliedEvent particlesColliderId=",
               0x38);
    FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 0x18));
    plVar1 = *(long **)(param_3 + 8);
    sVar2 = strlen(acStack_2768);
    (**(code **)(*plVar1 + 0x28))(plVar1,acStack_2768,(long)(int)sVar2);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," particleIndex=",0xf);
    uVar7 = (ulong)*(uint *)(param_2 + 0x1c);
    goto LAB_02f4f53c;
  case 0xe:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"BodyExitedSafeRegionEvent id=",0x1d);
    FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    goto LAB_02f4f5a0;
  case 0xf:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"LinearIntegrationClippedCommand Id=",0x23);
    FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar1 = *(long **)(param_3 + 8);
    sVar2 = strlen(acStack_2768);
    (**(code **)(*plVar1 + 0x28))(plVar1,acStack_2768,(long)(int)sVar2);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," StolenVel =",0xc);
    FUN_0322b340((double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14),
                 (double)*(float *)(param_2 + 0x18),(double)*(float *)(param_2 + 0x1c),param_3,
                 "[%g,%g,%g,%g]");
    return;
  case 0x11:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"UnaryBodyDebugEvent id=",0x17);
    FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_2 + 8));
    plVar1 = *(long **)(param_3 + 8);
    sVar2 = strlen(acStack_2768);
    (**(code **)(*plVar1 + 0x28))(plVar1,acStack_2768,(long)(int)sVar2);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c4d655,2);
    plVar1 = *(long **)(param_3 + 8);
    pcVar3 = (char *)(param_2 + 0x10);
    sVar2 = strlen(pcVar3);
    lVar4 = (long)(int)sVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
    break;
  case 0x12:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"hknpParticlesCollidedWithBodiesEvent particlesColliderId=",
               0x39);
    FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 0x10));
    plVar1 = *(long **)(param_3 + 8);
    sVar2 = strlen(acStack_2768);
    (**(code **)(*plVar1 + 0x28))(plVar1,acStack_2768,(long)(int)sVar2);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," numParticles=",0xe);
    uVar7 = (ulong)(*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18)) >> 2;
    goto LAB_02f4f53c;
  case 0x13:
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8),"hknpParticlesCollidedWithParticlesEvent particleColliderId="
               ,0x3b);
    FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_2 + 0x10));
    plVar1 = *(long **)(param_3 + 8);
    sVar2 = strlen(acStack_2768);
    (**(code **)(*plVar1 + 0x28))(plVar1,acStack_2768,(long)(int)sVar2);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," numParticles=",0xe);
    uVar7 = (ulong)(*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18)) >> 3;
LAB_02f4f53c:
    puVar6 = &DAT_03c596d4;
LAB_02f4f59c:
    FUN_031c68c0(acStack_2768,0x2728,0x2728,puVar6,uVar7);
LAB_02f4f5a0:
    plVar1 = *(long **)(param_3 + 8);
    sVar2 = strlen(acStack_2768);
    (**(code **)(*plVar1 + 0x28))(plVar1,acStack_2768,(long)(int)sVar2);
switchD_02f4f0c8_caseD_1:
    return;
  case 0x14:
    plVar1 = *(long **)(param_3 + 8);
    pcVar3 = "hknpParticleParticleImpulseAppliedEvent particleColliderId=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
    uVar5 = 0x3b;
    goto LAB_02f4f580;
  case 0x15:
    plVar1 = *(long **)(param_3 + 8);
    pcVar3 = "hknpParticlesExitedSafeRegionEvent particleColliderId=";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
    uVar5 = 0x36;
LAB_02f4f580:
    (*UNRECOVERED_JUMPTABLE)(plVar1,pcVar3,uVar5);
    uVar7 = (ulong)*(uint *)(param_2 + 0x10);
    puVar6 = &DAT_03be652f;
    goto LAB_02f4f59c;
  case 0x1b:
    plVar1 = *(long **)(param_3 + 8);
    pcVar3 = "ConstraintForceEvent";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
    lVar4 = 0x14;
    break;
  case 0x1c:
    plVar1 = *(long **)(param_3 + 8);
    pcVar3 = "ConstraintForceExceededEvent";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
    lVar4 = 0x1c;
    break;
  case 0x1d:
  case 0x1e:
    plVar1 = *(long **)(param_3 + 8);
    pcVar3 = "Reserved";
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
    lVar4 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x02f4f62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,pcVar3,lVar4);
  return;
}


