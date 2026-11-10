/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015fab70; name: FUN_015fab70
 */


undefined8
FUN_015fab70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5,
            undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar3 = 2;
  if (param_3 == 0) {
    iVar3 = 3;
  }
  uVar4 = FUN_00c5fb54(param_2,param_1);
  if ((uVar4 & 1) != 0) {
    if (param_3 == 0) {
      iVar2 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
      if ((iVar2 == 6) && (uVar4 = FUN_00c5fb54(param_2,param_1), (uVar4 & 1) != 0)) {
LAB_015fac34:
        puVar1 = (undefined8 *)PTR_PTR_047d4508;
        if (*param_5 != 0) {
          puVar1 = (undefined8 *)(*param_5 + 0x38);
        }
        FUN_00c85bd0(param_1,*puVar1);
        FUN_01ea6330(param_1,param_6);
        iVar2 = FUN_00c5d980(param_1);
        FUN_00c5dbe0(param_1,&LAB_01ea6390,0);
        FUN_00c5dcd0(param_1,iVar2 - iVar3,1);
        iVar3 = FUN_00c5ddd0(param_1,iVar3,0,iVar2 - iVar3,0,0);
        if (iVar3 != 0) {
          uVar5 = FUN_00c646d0(param_1,0xffffffff,0);
          *(undefined8 *)PTR_DAT_047d4238 = uVar5;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("0","CallImpl",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                     ,0x89,"Lua panic: function(%s.%s) error: %s",param_3,param_4,uVar5);
        }
        return 1;
      }
    }
    else {
      iVar2 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
      if ((iVar2 == 5) && (iVar2 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar2 == 6))
      goto LAB_015fac34;
    }
  }
  return 0;
}


