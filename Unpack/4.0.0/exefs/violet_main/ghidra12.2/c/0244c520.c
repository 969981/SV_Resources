/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0244c520; name: FUN_0244c520
 */


undefined8 FUN_0244c520(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00c5fb54(param_2,param_1);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_00c5d980(param_1);
    FUN_00c5dbe0(param_1,&LAB_02356ca0,0);
    uVar4 = 1;
    FUN_00c5dcd0(param_1,uVar1,1);
    iVar2 = FUN_00c5ddd0(param_1,0,param_3,uVar1,0,0);
    if (iVar2 != 0) {
      uVar4 = FUN_00c646d0(param_1,0xffffffff,0);
      *(undefined8 *)PTR_DAT_047d4238 = uVar4;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("0","CallImpl",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/invoker.h"
                 ,0xa8,"Lua panic: function error: %s",uVar4);
    }
  }
  return uVar4;
}


