/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01096d3c; name: FUN_01096d3c
 */


void FUN_01096d3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x138) == '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","Register",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/haxe_lua.bindings/script_execution_manager.cpp"
               ,0x568);
  }
  local_70 = 0xffffffffffffffff;
  uStack_68 = 0xffffffffffffffff;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_78 = *(undefined8 *)(param_4 + 8);
  FUN_00c43ef0(&local_48);
  lVar2 = *(long *)(param_1 + 0x110);
  local_38 = param_3;
  lVar1 = FUN_01099e30(param_1 + 0x68,&local_78);
  *(long *)(param_4 + 8) = lVar1;
  *(long *)(*(long *)(param_1 + 0x68) + lVar1 * 0x48) = lVar1;
  if ((lVar2 == 0) && (*(long *)(param_1 + 0x110) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x70))(*(long **)(param_1 + 0x58),0);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x70))(*(long **)(param_1 + 0x60),0);
  }
  FUN_01096f44(&local_78);
  return;
}


