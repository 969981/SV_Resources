/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036f8e0; name: FUN_0036f8e0
 */


undefined8
FUN_0036f8e0(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_047cc628;
  if (param_8 == 0) {
    local_60 = FUN_00376310(*(undefined8 *)PTR_DAT_047cc628,param_5,0);
    if (param_6 == 0) {
      iVar1 = *param_1;
      uVar4 = 0;
      uVar2 = local_58;
    }
    else {
      uVar4 = FUN_00376310(*(long *)puVar3 + 0x60,param_6,0);
      iVar1 = *param_1;
      uVar2 = local_58;
    }
    local_58 = uVar4;
    if (iVar1 != 0) {
      if (local_58 < 4) {
        local_70 = 1;
        local_58 = uVar2;
      }
      else {
        local_70 = 2;
      }
      puStack_78 = &local_60;
      uStack_a8 = 0;
      local_90 = 0;
      local_80 = 0;
      local_b0 = param_1;
      local_a0 = param_2;
      local_98 = param_3;
      uStack_88 = param_4;
      uStack_68 = param_7;
      lVar5 = FUN_0036adb0(&local_b0,&uStack_48);
      if (lVar5 != 0) {
        FUN_00352b40("call_create",lVar5,
                     "external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x17c);
      }
      return uStack_48;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


