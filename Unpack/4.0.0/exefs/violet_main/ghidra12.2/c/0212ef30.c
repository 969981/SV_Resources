/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212ef30; name: FUN_0212ef30
 */


undefined8
FUN_0212ef30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00c5fb54(param_2,param_1);
  if ((uVar2 & 1) == 0) {
LAB_0212f06c:
    uVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
      if ((iVar1 != 6) || (uVar2 = FUN_00c5fb54(param_2,param_1), (uVar2 & 1) == 0))
      goto LAB_0212f06c;
    }
    else {
      iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
      if ((iVar1 != 5) || (iVar1 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar1 != 6))
      goto LAB_0212f06c;
    }
    iVar1 = FUN_00c5d980(param_1);
    iVar1 = iVar1 - (uint)(param_3 == 0);
    FUN_00c5dbe0(param_1,&LAB_0212f090,0);
    uVar3 = 1;
    FUN_00c5dcd0(param_1,iVar1,1);
    iVar1 = FUN_00c5ddd0(param_1,(uint)(param_3 == 0),param_5,iVar1,0,0);
    if (iVar1 != 0) {
      uVar3 = FUN_00c646d0(param_1,0xffffffff,0);
      *(undefined8 *)PTR_DAT_047d4238 = uVar3;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("0","CallImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                 ,0x89,"Lua panic: function(%s.%s) error: %s",param_3,param_4,uVar3);
    }
  }
  return uVar3;
}


