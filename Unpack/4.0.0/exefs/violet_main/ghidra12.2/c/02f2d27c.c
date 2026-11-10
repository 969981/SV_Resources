/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f2d27c; name: FUN_02f2d27c
 */


void FUN_02f2d27c(long param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  long *plVar2;
  char acStack_2778 [10024];
  
  (**(code **)(**(long **)(param_3 + 8) + 0x28))
            (*(long **)(param_3 + 8),"hknpFullCastCollisionEvent ",0x1b);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," bodyIds=",9);
  FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 8));
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2778);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2778,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c16438,1);
  FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 0x10));
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2778);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2778,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," shapeKeys=",0xb);
  FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_1 + 0x84));
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2778);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2778,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c16438,1);
  FUN_031c68c0(acStack_2778,0x2728,0x2728,&DAT_03be652f,*(undefined4 *)(param_1 + 0x88));
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2778);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2778,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," normalAndDistance=",0x13)
  ;
  FUN_0322b340((double)*(float *)(param_1 + 0x30),(double)*(float *)(param_1 + 0x34),
               (double)*(float *)(param_1 + 0x38),(double)*(float *)(param_1 + 0x3c),param_3,
               "[%g,%g,%g,%g]");
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," position=",10);
  FUN_0322b340((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
               (double)*(float *)(param_1 + 0x28),(double)*(float *)(param_1 + 0x2c),param_3,
               "[%g,%g,%g,%g]");
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," comA=",6);
  FUN_0322b340((double)*(float *)(param_1 + 0x50),(double)*(float *)(param_1 + 0x54),
               (double)*(float *)(param_1 + 0x58),(double)*(float *)(param_1 + 0x5c),param_3,
               "[%g,%g,%g,%g]");
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," orientationA=",0xe);
  FUN_0322b340((double)*(float *)(param_1 + 0x40),(double)*(float *)(param_1 + 0x44),
               (double)*(float *)(param_1 + 0x48),(double)*(float *)(param_1 + 0x4c),param_3,
               "[%f,%f,%f,(%f)]");
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," time=",6);
  FUN_031c68c0((double)*(float *)(param_1 + 0x80),acStack_2778,0x2728,0x2728,&DAT_03c15fe7);
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2778);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2778,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))
            (*(long **)(param_3 + 8)," bodyALinearVelocity=",0x15);
  FUN_0322b340((double)*(float *)(param_1 + 0x60),(double)*(float *)(param_1 + 100),
               (double)*(float *)(param_1 + 0x68),(double)*(float *)(param_1 + 0x6c),param_3,
               "[%g,%g,%g,%g]");
  (**(code **)(**(long **)(param_3 + 8) + 0x28))
            (*(long **)(param_3 + 8)," bodyAAngularVelocity=",0x16);
  FUN_0322b340((double)*(float *)(param_1 + 0x70),(double)*(float *)(param_1 + 0x74),
               (double)*(float *)(param_1 + 0x78),(double)*(float *)(param_1 + 0x7c),param_3,
               "[%g,%g,%g,%g]");
  return;
}


