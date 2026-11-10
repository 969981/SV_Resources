/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02619cc0; name: FUN_02619cc0
 */


void FUN_02619cc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 char *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00c5fb54(param_2,param_1);
  if ((uVar2 & 1) != 0) {
    FUN_02619dd0(param_1,*param_3);
    FUN_02619dd0(param_1,*param_4);
    FUN_00c419e0(param_1,*param_5 != '\0');
    iVar1 = FUN_00c5d980(param_1);
    FUN_00c5dbe0(param_1,&LAB_02619f60,0);
    FUN_00c5dcd0(param_1,iVar1 + -3,1);
    iVar1 = FUN_00c5ddd0(param_1,3,0,iVar1 + -3,0,0);
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


