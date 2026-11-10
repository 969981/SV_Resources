/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a332d0; name: FUN_02a332d0
 */


void FUN_02a332d0(long param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  long lVar2;
  uint local_44;
  
  if (param_2 < 3) {
    param_1 = param_1 + 0x770;
    local_44 = param_2;
    puVar1 = (undefined4 *)FUN_00f26c28(param_1,&local_44);
    *puVar1 = param_3;
    lVar2 = FUN_00f26c28(param_1,&local_44);
    *(undefined4 *)(lVar2 + 4) = param_4;
    lVar2 = FUN_00f26c28(param_1,&local_44);
    *(undefined4 *)(lVar2 + 8) = param_5;
    lVar2 = FUN_00f26c28(param_1,&local_44);
    *(undefined4 *)(lVar2 + 0xc) = param_6;
    lVar2 = FUN_00f26c28(param_1,&local_44);
    *(undefined4 *)(lVar2 + 0x10) = param_7;
  }
  return;
}


