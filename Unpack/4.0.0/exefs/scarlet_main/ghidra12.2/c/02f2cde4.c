/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f2cde4; name: FUN_02f2cde4
 */


void FUN_02f2cde4(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  long *plVar2;
  undefined1 auStack_27f0 [16];
  float local_27e0;
  float fStack_27dc;
  float local_27d8;
  float fStack_27d4;
  float local_27b0;
  float fStack_27ac;
  float local_27a8;
  float fStack_27a4;
  float local_27a0;
  float fStack_279c;
  float local_2798;
  float fStack_2794;
  float local_2790;
  float fStack_278c;
  float local_2788;
  float fStack_2784;
  float local_2780;
  float fStack_277c;
  float local_2778;
  float fStack_2774;
  char acStack_2768 [10024];
  
  FUN_02f2d868(param_2 + 0x530,*(long *)(param_1 + 0x18),
               *(long *)(param_2 + 0x150) +
               (ulong)*(uint *)(*(long *)(param_2 + 0x38) +
                                ((ulong)*(uint *)(*(long *)(param_1 + 0x18) + 8) & 0xffffff) * 0xc0
                               + 0x80) * 0x80,1,auStack_27f0);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))
            (*(long **)(param_3 + 8),"hknpContactImpulseClippedEvent bodyIds=",0x27);
  FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 8));
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2768);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2768,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c16438,1);
  FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 0x10));
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2768);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2768,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," normal=",8);
  FUN_0322b340((double)local_27e0,(double)fStack_27dc,(double)local_27d8,(double)fStack_27d4,param_3
               ,"[%g,%g,%g,%g]");
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos0=",6);
  FUN_0322b340((double)local_27b0,(double)fStack_27ac,(double)local_27a8,(double)fStack_27a4,param_3
               ,"[%g,%g,%g,%g]");
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos1=",6);
  FUN_0322b340((double)local_27a0,(double)fStack_279c,(double)local_2798,(double)fStack_2794,param_3
               ,"[%g,%g,%g,%g]");
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos2=",6);
  FUN_0322b340((double)local_2790,(double)fStack_278c,(double)local_2788,(double)fStack_2784,param_3
               ,"[%g,%g,%g,%g]");
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos3=",6);
  FUN_0322b340((double)local_2780,(double)fStack_277c,(double)local_2778,(double)fStack_2774,param_3
               ,"[%g,%g,%g,%g]");
  return;
}


