/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f4fdc4; name: FUN_02f4fdc4
 */


void FUN_02f4fdc4(long param_1,undefined8 param_2,long param_3)

{
  float *pfVar1;
  size_t sVar2;
  long lVar3;
  char *__s;
  long *plVar4;
  long lVar5;
  long lVar6;
  char acStack_2790 [10032];
  
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"hknpManifoldEvent ",0x12);
  __s = (&PTR_s_CREATED_0460fe98)[*(byte *)(param_1 + 0x18)];
  plVar4 = *(long **)(param_3 + 8);
  sVar2 = strlen(__s);
  (**(code **)(*plVar4 + 0x28))(plVar4,__s,(long)(int)sVar2);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," bodyIds=",9);
  FUN_031c68c0(acStack_2790,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 8));
  plVar4 = *(long **)(param_3 + 8);
  sVar2 = strlen(acStack_2790);
  (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2790,(long)(int)sVar2);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c16438,1);
  FUN_031c68c0(acStack_2790,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 0x10));
  plVar4 = *(long **)(param_3 + 8);
  sVar2 = strlen(acStack_2790);
  (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2790,(long)(int)sVar2);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," normal=",8);
  FUN_0322b340((double)*(float *)(param_1 + 0x40),(double)*(float *)(param_1 + 0x44),
               (double)*(float *)(param_1 + 0x48),(double)*(float *)(param_1 + 0x4c),param_3,
               "[%g,%g,%g,%g]");
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0x18;
    lVar6 = 0x7c;
    do {
      (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),"\n\t\tpos=",7);
      pfVar1 = (float *)(param_1 + lVar6);
      FUN_0322b340((double)pfVar1[-3],(double)pfVar1[-2],(double)pfVar1[-1],(double)*pfVar1,param_3,
                   "[%g,%g,%g,%g]");
      (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," dist=",6);
      FUN_031c68c0((double)*(float *)(param_1 + lVar5 * 4),acStack_2790,0x2728,0x2728,&DAT_03c15fe7)
      ;
      plVar4 = *(long **)(param_3 + 8);
      sVar2 = strlen(acStack_2790);
      (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2790,(long)(int)sVar2);
      lVar3 = lVar5 + -0x17;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar3 < *(int *)(param_1 + 0x30));
  }
  return;
}


