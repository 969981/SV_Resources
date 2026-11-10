/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02130730; name: FUN_02130730
 */


undefined8
FUN_02130730(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,char *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar2 = 1;
  if (param_3 == 0) {
    iVar2 = 2;
  }
  uVar3 = FUN_00c5fb54(param_2,param_1);
  if ((uVar3 & 1) == 0) {
LAB_02130880:
    uVar4 = 0;
  }
  else {
    if (param_3 == 0) {
      iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
      if ((iVar1 != 6) || (uVar3 = FUN_00c5fb54(param_2,param_1), (uVar3 & 1) == 0))
      goto LAB_02130880;
    }
    else {
      iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
      if ((iVar1 != 5) || (iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar1 != 6))
      goto LAB_02130880;
    }
    FUN_00c419e0(param_1,*param_5 != '\0');
    iVar1 = FUN_00c5d980(param_1);
    FUN_00c5dbe0(param_1,&LAB_021308a0,0);
    uVar4 = 1;
    FUN_00c5dcd0(param_1,iVar1 - iVar2,1);
    iVar2 = FUN_00c5ddd0(param_1,iVar2,0,iVar1 - iVar2,0,0);
    if (iVar2 != 0) {
      uVar4 = FUN_00c646d0(param_1,0xffffffff,0);
      *(undefined8 *)PTR_DAT_047d4238 = uVar4;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("0","CallImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                 ,0x89,"Lua panic: function(%s.%s) error: %s",param_3,param_4,uVar4);
    }
  }
  return uVar4;
}


