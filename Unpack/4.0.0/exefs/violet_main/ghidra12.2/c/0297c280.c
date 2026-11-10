/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297c280; name: FUN_0297c280
 */


void FUN_0297c280(long param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined8 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long local_58;
  long lStack_50;
  undefined4 local_44;
  
  param_1 = param_1 + 8;
  local_44 = param_2;
  lVar1 = FUN_0297c0b8(param_1,&local_44);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)FUN_010807f8(param_1,&local_44);
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  local_58 = ((ulong)(CONCAT22(param_4,param_3) & 0xffff00ff) & 0xffffff) << 0x20;
  lStack_50 = ((ulong)(CONCAT24(param_7,CONCAT22(param_6,param_8)) & 0xffffffff00ff) & 0xff00ffffff)
              << 0x10;
  uVar3 = FUN_010807f8(param_1,&local_44);
  FUN_0297c1b8(uVar3,&local_58);
  return;
}


