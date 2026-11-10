/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f2caac; name: FUN_02f2caac
 */


void FUN_02f2caac(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  char *__s;
  long *plVar3;
  char acStack_2780 [16];
  float local_2770;
  float fStack_276c;
  float local_2768;
  float fStack_2764;
  float local_2740;
  float fStack_273c;
  float local_2738;
  float fStack_2734;
  float local_2730;
  float fStack_272c;
  float local_2728;
  float fStack_2724;
  float local_2720;
  float fStack_271c;
  float local_2718;
  float fStack_2714;
  float local_2710;
  float fStack_270c;
  float local_2708;
  float fStack_2704;
  
  (**(code **)(**(long **)(param_3 + 8) + 0x28))
            (*(long **)(param_3 + 8),"hknpContactImpulseEvent ",0x18);
  __s = (&PTR_DAT_0460ed50)[*(byte *)(param_1 + 0x20)];
  plVar3 = *(long **)(param_3 + 8);
  sVar1 = strlen(__s);
  (**(code **)(*plVar3 + 0x28))(plVar3,__s,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," bodyIds=",9);
  FUN_031c68c0(acStack_2780,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 8));
  plVar3 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2780);
  (**(code **)(*plVar3 + 0x28))(plVar3,acStack_2780,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c16438,1);
  FUN_031c68c0(acStack_2780,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 0x10));
  plVar3 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2780);
  (**(code **)(*plVar3 + 0x28))(plVar3,acStack_2780,(long)(int)sVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    (**(code **)(**(long **)(param_3 + 8) + 0x28))
              (*(long **)(param_3 + 8)," (manifold destroyed)",0x15);
  }
  else {
    FUN_02f2d868(param_2 + 0x530,lVar2,
                 *(long *)(param_2 + 0x150) +
                 (ulong)*(uint *)(*(long *)(param_2 + 0x38) +
                                  ((ulong)*(uint *)(lVar2 + 8) & 0xffffff) * 0xc0 + 0x80) * 0x80,1,
                 acStack_2780);
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," normal=",8);
    FUN_0322b340((double)local_2770,(double)fStack_276c,(double)local_2768,(double)fStack_2764,
                 param_3,"[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos0=",6);
    FUN_0322b340((double)local_2740,(double)fStack_273c,(double)local_2738,(double)fStack_2734,
                 param_3,"[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos1=",6);
    FUN_0322b340((double)local_2730,(double)fStack_272c,(double)local_2728,(double)fStack_2724,
                 param_3,"[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos2=",6);
    FUN_0322b340((double)local_2720,(double)fStack_271c,(double)local_2718,(double)fStack_2714,
                 param_3,"[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," pos3=",6);
    FUN_0322b340((double)local_2710,(double)fStack_270c,(double)local_2708,(double)fStack_2704,
                 param_3,"[%g,%g,%g,%g]");
    (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8)," impulses=",10);
    FUN_0322b340((double)*(float *)(param_1 + 0x30),(double)*(float *)(param_1 + 0x34),
                 (double)*(float *)(param_1 + 0x38),(double)*(float *)(param_1 + 0x3c),param_3,
                 "[%g,%g,%g,%g]");
  }
  return;
}


