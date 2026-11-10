/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a4da20; name: FUN_01a4da20
 */


undefined8
FUN_01a4da20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,char *param_5,
            int *param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar2 = 2;
  if (param_3 == 0) {
    iVar2 = 3;
  }
  uVar3 = FUN_00c5fb54(param_2,param_1);
  if ((uVar3 & 1) == 0) {
LAB_01a4db84:
    uVar4 = 0;
  }
  else {
    if (param_3 == 0) {
      iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
      if ((iVar1 != 6) || (uVar3 = FUN_00c5fb54(param_2,param_1), (uVar3 & 1) == 0))
      goto LAB_01a4db84;
    }
    else {
      iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
      if ((iVar1 != 5) || (iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar1 != 6))
      goto LAB_01a4db84;
    }
    FUN_00c419e0(param_1,*param_5 != '\0');
    FUN_00c5d960(param_1,(long)*param_6);
    iVar1 = FUN_00c5d980(param_1);
    FUN_00c5dbe0(param_1,&LAB_01df0bb0,0);
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


