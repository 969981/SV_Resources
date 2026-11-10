/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02628b60; name: FUN_02628b60
 */


void FUN_02628b60(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5,float *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00c5fb54(param_2,param_1);
  if ((uVar2 & 1) != 0) {
    FUN_02619dd0(param_1,*param_3);
    FUN_02619dd0(param_1,*param_4);
    FUN_00c46da0((double)*param_5,param_1);
    FUN_00c46da0((double)*param_6,param_1);
    iVar1 = FUN_00c5d980(param_1);
    FUN_00c5dbe0(param_1,&LAB_02619f60,0);
    FUN_00c5dcd0(param_1,iVar1 + -4,1);
    iVar1 = FUN_00c5ddd0(param_1,4,0,iVar1 + -4,0,0);
    if (iVar1 != 0) {
      uVar3 = FUN_00c646d0(param_1,0xffffffff,0);
      *(undefined8 *)PTR_DAT_047d4238 = uVar3;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("0","CallImpl",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/invoker.h"
                 ,0xa8,"Lua panic: function error: %s",uVar3);
    }
  }
  return;
}


